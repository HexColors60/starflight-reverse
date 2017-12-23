#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#include"global.h"
#include"stack.h"

#include"dictionary.h"
#include"parser.h"
#include"stack.h"

void FunctionStackAnalysis(int parp, int ovidx)
{
    DICTENTRY *dd = GetDictEntry(parp, ovidx);

    int addr = dd->parp;
    char *s = GetWordName(dd);

    if (dd->codep != CODECALL) return;
    if (dd->stackin != STACKINVALID) return;
    if (dd->stackout != STACKINVALID) return;

    //printf("Analyze %s of ov=%i parp=0x%04x\n", GetWordName(dd), ovidx, dd->parp);

    int stack = 0;
    int stackmin = 0;
    while(1)
    {
        if (pline[addr].done == FALSE || pline[addr].isasm)
        {
            // Analysis failed. Just return
            return;
        }
        if (pline[addr].iswordheader)
        {
            printf("reached new word header. exit\n");
            exit(1);
            return;
        }

        if (pline[addr].word == 0)
        {
            addr++;
            continue;
        }

        DICTENTRY *d = GetDictEntry(pline[addr].word, ovidx);
        if (d == NULL)
        {
            return;
        }
        //printf("word %20s codep=%04x parp=%04x stack=%i in=%i out=%i \n", GetWordName(d), d->codep, d->parp, stack, d->stackin, d->stackout);
        if (d->stackin  == STACKINVALID) return;
        if (d->stackout == STACKINVALID) return;

        stack -= d->stackin;
        if (stack < stackmin) stackmin = stack;
        stack += d->stackout;
        if ((strcmp(d->r, "EXIT")==0) || (pline[addr].flow == IFEXIT))
        {
            dd->stackin = -stackmin;
            dd->stackout = stack-stackmin;
            //printf("Success %s %i %i\n", GetWordName(dd), dd->stackin, dd->stackout);

            return;
        }
        if (strcmp(d->r, "0BRANCH")==0)
        {
            if (pline[addr].gotoaddr > addr)
            {
                addr = pline[addr].gotoaddr;
                continue;
            }
        }
        if (strcmp(d->r, "BRANCH")==0)
        {
            if (pline[addr].gotoaddr <= addr)
            {
                //printf("reached dead end. Cannot analyze %s\n", GetWordName(dd));
                return;
            }
            addr = pline[addr].gotoaddr;
            continue;
        }


        addr++;
    }
}

void Set(const char *name, int stackin, int stackout)
{
    for(int i=0; i<ndict; i++)
    {
        if (strcmp(GetWordName(&dict[i]), name) == 0)
        {
            dict[i].stackin = stackin;
            dict[i].stackout = stackout;
            return;
        }
    }
    fprintf(stderr, "Error: No word found with name %s\n", name);
    exit(1);

}

void IterateFunctions(int ovidx)
{
    int n = 0;
    for(int i=0; i<ndict; i++)
    {
        if (dict[i].ovidx != ovidx) continue;
        if ((dict[i].codep == CODECALL) && (dict[i].stackin != STACKINVALID)) n++;
        FunctionStackAnalysis(dict[i].parp, ovidx);
    }

    //printf("%i\n", n);
}

void StackAnalysis(int ovidx)
{
    int ndictbefore = ndict;
    for(int i=0; i<ndict; i++)
    {
        if (dict[i].codep == CODEPOINTER)
        {
            dict[i].stackin = 0;
            dict[i].stackout = 1;
        }
        if (dict[i].codep == CODELIT || dict[i].codep == CODEDI || dict[i].codep == CODECONSTANT)
        {
            dict[i].stackin = 0;
            dict[i].stackout = 1;
        }
        if (dict[i].codep == CODELOADOVERLAY) // not sure, call 1649
        {
            dict[i].stackin = 0;
            dict[i].stackout = 0;
        }
        if (dict[i].codep == CODESETCOLOR)
        {
            dict[i].stackin = 0;
            dict[i].stackout = 1;
        }
        if (dict[i].codep == CODEEXEC) // not sure, call 1649
        {
            dict[i].stackin = 2; // at least correct for TYPE
            dict[i].stackout = 0;
        }
        if (dict[i].codep == CODESIGFLD) // not sure, call 1649
        {
            dict[i].stackin = 0;
            dict[i].stackout = 0;
        }
        if (dict[i].codep == CODEIFIELD)
        {
            dict[i].stackin = 1;
            dict[i].stackout = 0;
        }
        if (dict[i].codep == CODEPUSH2WORDS)
        {
            dict[i].stackin = 0;
            dict[i].stackout = 2;
        }
    }
    Set("@", 1, 1);
    Set("C@", 1, 1);
    Set("2!_2", 3, 0);
    Set("C!_2", 2, 0);
    Set("D+", 4, 2);
    Set("DNEGATE", 2, 2);
    Set("SWAP", 2, 2);
    Set("2SWAP", 4, 4);
    Set("1+", 1, 1);
    Set("2+", 1, 1);
    Set("1-", 1, 1);
    Set("2-", 1, 1);
    Set("2*", 1, 1);
    Set("4*", 1, 1);
    Set("2/", 1, 1);
    Set("+", 2, 1);
    Set("-", 2, 1);
    Set("*", 2, 1);
    Set("/", 2, 2);
    Set("/MOD", 2, 2);
    Set(">", 2, 1);
    Set("<", 2, 1);
    Set("=", 2, 1);
    Set("0>", 1, 1);
    Set("0<", 1, 1);
    Set("0=", 1, 1);
    Set("NEGATE", 1, 1);
    Set("2^N", 1, 1);
    Set("OR", 2, 1);
    Set("AND", 2, 1);
    Set("XOR", 2, 1);
    Set("NOT", 1, 1);
    Set("TOGGLE", 2, 0);
    Set("2@", 1, 2);
    Set("0=", 1, 1);
    Set("0BRANCH", 1, 0);
    Set("0", 0, 1);
    Set("1", 0, 1);
    Set("2", 0, 1);
    Set("DUP", 1, 2); // or 1 / 1
    Set("2DUP", 2, 4); // or 2 / 2
    Set("(!SET)", 3, 0);
    Set("CMOVE_2", 3, 0);
    Set("FILL_2", 3, 0);
    Set("EXIT", 0, 0);
    Set("GO", 1, 0);
    Set("EXECUTE", 1, 0);
    Set("@EXECUTE", 1, 0);
    Set("ADDR>SEG", 1, 1);
    Set("SEG>ADDR", 1, 1);
    Set("P!", 2, 0);
    Set("P@", 1, 1);
    Set("U/MOD", 3, 2);
    Set("U*", 2, 2);
    Set("U<", 2, 1);
    Set("DROP", 1, 0);
    Set("2DROP", 2, 0);
    Set("ROT", 3, 3);
    Set("ME", 0, 1);
    Set("S->D", 1, 2);
    Set("OVER", 2, 3);
    Set(">R", 1, 0);
    Set("R>", 0, 1);
    Set("R@", 0, 1);
    Set("I", 0, 1);
    Set("I'", 0, 1);
    Set("J", 0, 1);
    Set("(DO)", 2, 0);
    Set("(LOOP)", 0, 0);
    Set("(/LOOP)", 1, 0);
    Set("(+LOOP)", 1, 0);
    Set("BRANCH", 0, 0);
    Set("INTERRUPT", 1, 0);
    Set("L@", 2, 1);
    Set("L!", 3, 0);
    Set("LC@", 2, 1);
    Set("LC!", 3, 0);
    Set("LCMOVE", 5, 0);
    Set("+!_2", 2, 0);
    Set("?UPDATE", 1, 1); // not sure
    Set("OFF_2", 1, 0);
    Set("ON_2", 1, 0);
    Set("BFILL", 0, 0);
    Set(">V", 1, 0);
    Set("V>", 0, 1);
    Set("VI", 0, 1);
    Set("D16*", 2, 2);
    Set("16*", 1, 1);
    Set("<D!>", 3, 0);
    Set("<!>", 2, 0);
    Set("<+!>", 2, 0);
    Set("(.\")", 0, 0); // maybe not necessary. But to stay on the safe side
    Set("<C!>", 2, 0);
    Set("VA>BLK", 2, 2);
    Set("PICK", 1, 1); // recursion because of unravel
    Set("(BUFFER)", 1, 2); // not sure
    Set("LWSCAN", 4, 2); // absolutely not sure
    Set("@DS", 0, 1);
    Set("SP@", 0, 1);
    Set("SP!", 0, 0);
    Set("RP@", 0, 1);
    Set("RP!", 0, 0);
    Set("BEEPOFF", 0, 0);
    Set("TONE", 1, 0);
    Set("BEEPON_2", 0, 0);
    Set("MS", 0, 1);
    Set("QUIT", 0, 0); // No sure, but probably right
    Set("UNRAVEL", 0, 0); // No sure, but probably right
    Set("<1.5!>", 3, 0);
    Set("1.5@", 1, 2);

    Set(">C", 2, 0);
    Set("C>", 0, 2);
    Set("CI", 0, 2);


    Set("CDEPTH", 0, 1);

    Set("LLINE", 4, 0);
    Set("UNK_0x3672", 1, 1); // in both starflight the same

#ifdef STARFLT1
    Set("!", 2, 0);
    //Set("UNK_0x8332", 1, 1); // Seems recursive
    Set("UNK_0x8df0", 0, 0); // Something with graphics
    Set("UNK_0x93b1", 0, 4);
    Set("UNK_0x9390", 4, 0);
    Set("ADVANCE>DEF", 1, 0);
    Set("LCOPYBLK", 6, 0); // left, top, right, bottom, left top
    Set("V>DISPLAY", 0, 0); // not sure
    Set("{BLT}", 0, 0); // not sure
#endif
#ifdef STARFLT2
    Set("!_1", 2, 0);
    Set("UNK_0x7650", 0, 1);
    Set("CMOVE_1", 3, 0);
#endif

    /*
    Set("LPLOT", 0, 0);
    Set("LXPLOT", 0, 0);
    Set("LFILLPOLY", 0, 0);
    Set("TILEFILL", 0, 0);
    Set("SQLPLOT", 0, 0);
    Set("EEXTENT", 0, 0);
    Set("ARC", 0, 0);
    Set("L@PIXEL", 0, 0);
    */

    Set("?DUP", 1, 1); // depends

    IterateFunctions(ovidx);
    IterateFunctions(ovidx);
    IterateFunctions(ovidx);
    IterateFunctions(ovidx);
    IterateFunctions(ovidx);
    IterateFunctions(ovidx);
    IterateFunctions(ovidx);
    IterateFunctions(ovidx);

    if (ndictbefore != ndict)
    {
        printf("ndict change from %i to %i\n", ndictbefore, ndict);
    }
}


