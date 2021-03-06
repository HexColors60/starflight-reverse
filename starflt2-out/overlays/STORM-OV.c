// ====== OVERLAY 'STORM-OV' ======
// store offset = 0xf110
// overlay size   = 0x0450

#include"../../emul/cpu.h"

#include"../data.h"
#include"../../emul/starflt1.h"


// =================================
// =========== Dictionary ==========
// =================================
//           WF126  codep:0x224c wordp:0xf126 size:0x000c C-string:'WF126'
//           WF134  codep:0x224c wordp:0xf134 size:0x0096 C-string:'WF134'
//           WF1CC  codep:0x224c wordp:0xf1cc size:0x0026 C-string:'WF1CC'
//           WF1F4  codep:0x224c wordp:0xf1f4 size:0x000c C-string:'WF1F4'
//          STORMS  codep:0xf14c wordp:0xf20b size:0x00b6 C-string:'STORMS'
//           WF2C3  codep:0x7420 wordp:0xf2c3 size:0x0003 C-string:'WF2C3'
//           WF2C8  codep:0x7420 wordp:0xf2c8 size:0x0003 C-string:'WF2C8'
//           WF2CD  codep:0x7394 wordp:0xf2cd size:0x0006 C-string:'WF2CD'
//           WF2D5  codep:0x7394 wordp:0xf2d5 size:0x0006 C-string:'WF2D5'
//           WF2DD  codep:0x1d29 wordp:0xf2dd size:0x0002 C-string:'WF2DD'
//           WF2E1  codep:0x224c wordp:0xf2e1 size:0x0012 C-string:'WF2E1'
//           WF2F5  codep:0x224c wordp:0xf2f5 size:0x000a C-string:'WF2F5'
//           WF301  codep:0x7420 wordp:0xf301 size:0x0003 C-string:'WF301'
//           WF306  codep:0x7420 wordp:0xf306 size:0x0003 C-string:'WF306'
//           WF30B  codep:0x7420 wordp:0xf30b size:0x0003 C-string:'WF30B'
//           WF310  codep:0x7394 wordp:0xf310 size:0x0006 C-string:'WF310'
//           WF318  codep:0x224c wordp:0xf318 size:0x0018 C-string:'WF318'
//           WF332  codep:0x224c wordp:0xf332 size:0x0026 C-string:'WF332'
//           WF35A  codep:0x224c wordp:0xf35a size:0x0018 C-string:'WF35A'
//           WF374  codep:0x224c wordp:0xf374 size:0x0036 C-string:'WF374'
//       INJURE-PL  codep:0x224c wordp:0xf3b8 size:0x0062 C-string:'INJURE_dash_PL'
//           WF41C  codep:0x224c wordp:0xf41c size:0x004a C-string:'WF41C'
//           WF468  codep:0x224c wordp:0xf468 size:0x003c C-string:'WF468'
//           WF4A6  codep:0x224c wordp:0xf4a6 size:0x003a C-string:'WF4A6'
//           WF4E2  codep:0x224c wordp:0xf4e2 size:0x0012 C-string:'WF4E2'
//       (DO.STORM  codep:0x224c wordp:0xf502 size:0x0000 C-string:'_ro_DO_dot_STORM'

// =================================
// ============= EXTERN ============
// =================================
extern const unsigned short int pp_LCOLOR; // LCOLOR
extern const unsigned short int pp_FORCED; // FORCED
extern const unsigned short int pp__pe_EFF; // %EFF
extern const unsigned short int pp_STORM; // STORM
extern const unsigned short int pp_E_slash_M; // E/M
extern const unsigned short int pp__n_STORM; // #STORM
extern const unsigned short int pp_IsHEAL; // ?HEAL
extern const unsigned short int pp__ro_PLANET; // (PLANET
extern Color BLACK; // BLACK
void ABS(); // ABS
void MAX(); // MAX
void MIN(); // MIN
void _co_(); // ,
void ALLOT(); // ALLOT
void HERE(); // HERE
void QUIT(); // QUIT
void MS(); // MS
void UNRAVEL(); // UNRAVEL
void RANGE(); // RANGE
void PICK(); // PICK
void ROLL(); // ROLL
void WITHIN(); // WITHIN
void _3_star_(); // 3*
void RRND(); // RRND
void C_ex__2(); // C!_2
void ON_2(); // ON_2
void FILL_2(); // FILL_2
void CDROP(); // CDROP
void ICLOSE(); // ICLOSE
void _gt_C_plus_S(); // >C+S
void Get_gt_C_plus_S(); // @>C+S
void POS_dot_(); // POS.
void POLY_dash_WI(); // POLY-WI
void _gt_TVCT(); // >TVCT
void CTERASE(); // CTERASE
void _do__dot_(); // $.
void POLY_dash_ER(); // POLY-ER
void CTINIT(); // CTINIT
void _2_at_(); // 2@
void OVER(); // OVER
void ROT(); // ROT
void SWAP(); // SWAP
void _slash_(); // /
void _dash_(); // -
void _gt_(); // >
void _st_(); // <
void ON_1(); // ON_1
void _1_dot_5_at_(); // 1.5@
void _st__ex__gt_(); // <!>
void STORMS(); // STORMS


// =================================
// =========== VARIABLES ===========
// =================================
const unsigned short int pp_WF2DD = 0xf2dd; // WF2DD size: 2
// {0x3a, 0x20}




// 0xf122: db 0x44 0x00 'D '

// ================================================
// 0xf124: WORD 'WF126' codep=0x224c wordp=0xf126 params=1 returns=2
// ================================================
// orphan

void WF126() // WF126
{
  Push(Read16(regsp)); // DUP
  Push(Read16(Pop()) + 2); //  @ 2+
  RANGE(); // RANGE
  Push(Pop() + 2); //  2+
}


// ================================================
// 0xf132: WORD 'WF134' codep=0x224c wordp=0xf134
// ================================================
// orphan

void WF134() // WF134
{
  unsigned short int i, imax, a;
  Exec("CREATE"); // call of word 0x1cbb '(CREATE)'
  Push(Pop() * 6); //  6 *
  Push(Read16(regsp)); // DUP
  _co_(); // ,
  HERE(); // HERE
  OVER(); // OVER
  ALLOT(); // ALLOT
  SWAP(); // SWAP
  Push(0);
  FILL_2(); // FILL_2
  CODE(); // (;CODE) inlined assembler code
// 0xf14c: call   1649
  Push(0);
  Push(4);
  ROLL(); // ROLL
  Push(4);
  ROLL(); // ROLL
  Push(4);
  ROLL(); // ROLL
  WF126(); // WF126

  i = Pop();
  imax = Pop();
  do // (DO)
  {
    Push(i); // I
    _2_at_(); // 2@
    Push(3);
    PICK(); // PICK
    Push((Pop()==Pop())?1:0); // =
    a = Pop(); // >R
    Push(3);
    PICK(); // PICK
    Push((Pop()==Pop())?1:0); // =
    Push(Pop() & a); //  R> AND
    if (Pop() != 0)
    {
      Push(i); // I
      Push(4);
      ROLL(); // ROLL
      Pop(); // DROP
      ROT(); // ROT
      ROT(); // ROT
      imax = i; // LEAVE
    }
    Push(6);
    int step = Pop();
    i += step;
    if (((step>=0) && (i>=imax)) || ((step<0) && (i<=imax))) break;
  } while(1); // (+LOOP)

  Pop(); Pop(); // 2DROP
  if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
  if (Pop() != 0)
  {
    Push(Read16(Pop() + 4)); //  4 + @
    return;
  }
  PRINT("INDEX NOT IN PROBABILITY ARRAY! ", 32); // (.")
  UNRAVEL(); // UNRAVEL
  QUIT(); // QUIT
}


// ================================================
// 0xf1ca: WORD 'WF1CC' codep=0x224c wordp=0xf1cc params=2 returns=2
// ================================================

void WF1CC() // WF1CC
{
  unsigned short int a;
  while(1)
  {
    OVER(); // OVER
    OVER(); // OVER
    Push(Read16(Pop())&0xFF); //  C@
    Push(Read16(regsp)); // DUP
    Push(!(Pop()==0x0064?1:0)); //  0x0064 = NOT
    a = Pop(); // >R
    _gt_(); // >
    Push(Pop() & a); //  R> AND
    if (Pop() == 0) return;
    Push((Pop() + 1) + 3); //  1+ 3+
  }
}


// ================================================
// 0xf1f2: WORD 'WF1F4' codep=0x224c wordp=0xf1f4 params=2 returns=2
// ================================================

void WF1F4() // WF1F4
{
  WF1CC(); // WF1CC
  Push(Pop() + 1); //  1+
  _1_dot_5_at_(); // 1.5@
  ROT(); // ROT
  Pop(); // DROP
}


// ================================================
// 0xf200: WORD 'STORMS' codep=0xf14c wordp=0xf20b
// ================================================
// 0xf20b: db 0x3c 0x00 0x00 0x00 0x08 0x00 0x49 0xf2 0x00 0x00 0x09 0x00 0x4d 0xf2 0x00 0x00 0x06 0x00 0x59 0xf2 0x00 0x00 0x07 0x00 0x6d 0xf2 0x00 0x00 0x04 0x00 0x81 0xf2 0x00 0x00 0x05 0x00 0x91 0xf2 0x00 0x00 0x0a 0x00 0xa5 0xf2 0x00 0x00 0x0b 0x00 0xad 0xf2 0x00 0x00 0x02 0x00 0xb9 0xf2 0x00 0x00 0x03 0x00 0xbd 0xf2 0x64 0x01 0x00 0x00 0x1a 0x06 0x00 0x00 0x33 0x07 0x00 0x00 0x64 0x08 0x00 0x00 0x10 0x01 0x00 0x00 0x1f 0x02 0x00 0x00 0x2e 0x03 0x00 0x00 0x3d 0x04 0x00 0x00 0x64 0x05 0x00 0x00 0x10 0x06 0x00 0x00 0x1f 0x07 0x00 0x00 0x2e 0x0b 0x00 0x00 0x3d 0x09 0x00 0x00 0x64 0x0a 0x00 0x00 0x14 0x01 0x00 0x00 0x27 0x02 0x00 0x00 0x39 0x03 0x00 0x00 0x64 0x05 0x00 0x00 0x10 0x06 0x00 0x00 0x1f 0x07 0x00 0x00 0x2e 0x0a 0x00 0x00 0x3d 0x0c 0x00 0x00 0x64 0x0d 0x00 0x00 0x27 0x01 0x00 0x00 0x64 0x02 0x00 0x00 0x21 0x06 0x00 0x00 0x42 0x07 0x00 0x00 0x64 0x0a 0x00 0x00 0x64 0x00 0x00 0x00 0x64 0x00 0x00 0x00 '<     I     M     Y     m                                     d       3   d           .   =   d           .   =   d       '   9   d           .   =   d   '   d   !   B   d   d   d   '

// ================================================
// 0xf2c1: WORD 'WF2C3' codep=0x7420 wordp=0xf2c3
// ================================================
IFieldType WF2C3 = {CREWMEMBERIDX, 0x1b, 0x01};

// ================================================
// 0xf2c6: WORD 'WF2C8' codep=0x7420 wordp=0xf2c8
// ================================================
IFieldType WF2C8 = {ASSIGN_CREWIDX, 0x17, 0x03};

// ================================================
// 0xf2cb: WORD 'WF2CD' codep=0x7394 wordp=0xf2cd
// ================================================
LoadDataType WF2CD = {PLANETIDX, 0x11, 0x02, 0x17, 0x6c49};

// ================================================
// 0xf2d3: WORD 'WF2D5' codep=0x7394 wordp=0xf2d5
// ================================================
LoadDataType WF2D5 = {PLANETIDX, 0x01, 0x01, 0x17, 0x6c49};

// ================================================
// 0xf2db: WORD 'WF2DD' codep=0x1d29 wordp=0xf2dd
// ================================================
// orphan
// 0xf2dd: db 0x3a 0x20 ': '

// ================================================
// 0xf2df: WORD 'WF2E1' codep=0x224c wordp=0xf2e1 params=0 returns=1
// ================================================

void WF2E1() // WF2E1
{
  Push2Words("*ASSIGN");
  _gt_C_plus_S(); // >C+S
  Push(0x65e1+WF2C8.offset); // WF2C8<IFIELD>
  Get_gt_C_plus_S(); // @>C+S
  Push(Read16(0x65e1+WF2C3.offset)&0xFF); // WF2C3<IFIELD> C@
  CDROP(); // CDROP
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xf2f3: WORD 'WF2F5' codep=0x224c wordp=0xf2f5 params=0 returns=1
// ================================================

void WF2F5() // WF2F5
{
  WF2E1(); // WF2E1
  Push(0x00c7);
  _gt_(); // >
}


// ================================================
// 0xf2ff: WORD 'WF301' codep=0x7420 wordp=0xf301
// ================================================
IFieldType WF301 = {ASSIGN_CREWIDX, 0x11, 0x03};

// ================================================
// 0xf304: WORD 'WF306' codep=0x7420 wordp=0xf306
// ================================================
IFieldType WF306 = {CREWMEMBERIDX, 0x1f, 0x01};

// ================================================
// 0xf309: WORD 'WF30B' codep=0x7420 wordp=0xf30b
// ================================================
IFieldType WF30B = {CREWMEMBERIDX, 0x0b, 0x0f};

// ================================================
// 0xf30e: WORD 'WF310' codep=0x7394 wordp=0xf310
// ================================================
LoadDataType WF310 = {CREWMEMBERIDX, 0x13, 0x01, 0x14, 0x6ac8};

// ================================================
// 0xf316: WORD 'WF318' codep=0x224c wordp=0xf318 params=0 returns=2
// ================================================

void WF318() // WF318
{
  Push2Words("*ASSIGN");
  _gt_C_plus_S(); // >C+S
  Push(0x65e1+WF301.offset); // WF301<IFIELD>
  Push(0);
  Push(6);
  RRND(); // RRND
  Push(Pop() * 3); //  3 *
  Push(Pop() + Pop()); // +
  _1_dot_5_at_(); // 1.5@
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xf330: WORD 'WF332' codep=0x224c wordp=0xf332 params=0 returns=1
// ================================================

void WF332() // WF332
{
  Push(Read16(pp__n_STORM)); // #STORM @
  Push(6);
  Push(0x000b);
  WITHIN(); // WITHIN
  if (Pop() != 0)
  {
    Push(1);
    Push(0x0064);
    RRND(); // RRND
    Push(0x001e);
    _st_(); // <
    return;
  }
  Push(0);
}


// ================================================
// 0xf358: WORD 'WF35A' codep=0x224c wordp=0xf35a params=0 returns=1
// ================================================

void WF35A() // WF35A
{
  Push(1);
  Push(-Read16(pp_E_slash_M)); // E/M @ NEGATE
  _3_star_(); // 3*
  Push(2);
  MAX(); // MAX
  Push(0x001e);
  MIN(); // MIN
  RRND(); // RRND
}


// ================================================
// 0xf372: WORD 'WF374' codep=0x224c wordp=0xf374
// ================================================

void WF374() // WF374
{
  _gt_TVCT(); // >TVCT
  CTERASE(); // CTERASE
  CTINIT(); // CTINIT
  Push(0x65e1+WF30B.offset); // WF30B<IFIELD>
  _do__dot_(); // $.
  PRINT(" IS ", 4); // (.")
  Push(Read16(0x65e1+WF306.offset)&0xFF); // WF306<IFIELD> C@
  if (Pop() != 0)
  {
    PRINT("INJURED", 7); // (.")
  } else
  {
    PRINT("KILLED", 6); // (.")
  }
  PRINT(".", 1); // (.")
}


// ================================================
// 0xf3aa: WORD 'INJURE-PL' codep=0x224c wordp=0xf3b8
// ================================================
// entry

void INJURE_dash_PL() // INJURE-PL
{
  Push(0x03e8);
  MS(); // MS
  WF35A(); // WF35A
  WF318(); // WF318
  _gt_C_plus_S(); // >C+S
  LoadData(WF310); // from 'CREWMEMBER'
  Push(Read16(Pop())&0xFF); //  C@
  _slash_(); // /
  Push(1);
  MAX(); // MAX
  Push(Read16(pp_E_slash_M)); // E/M @
  _3_star_(); // 3*
  ABS(); // ABS
  Push(Read16(pp__pe_EFF)); // %EFF @
  _slash_(); // /
  Push(1);
  MAX(); // MAX
  Push(Pop() * Pop()); // *
  Push(Read16(0x65e1+WF306.offset)&0xFF); // WF306<IFIELD> C@
  SWAP(); // SWAP
  _dash_(); // -
  Push(0);
  MAX(); // MAX
  Push(0x0064);
  MIN(); // MIN
  Push(0x65e1+WF306.offset); // WF306<IFIELD>
  C_ex__2(); // C!_2
  WF374(); // WF374
  ICLOSE(); // ICLOSE
  Push(pp_IsHEAL); // ?HEAL
  ON_2(); // ON_2
  Push(0x01f4);
  MS(); // MS
  Push(0xc18b); // '(OBI'
  MODULE(); // MODULE
  Push(0xc1b8); // '(ROL'
  MODULE(); // MODULE
  Push(0xc19a); // '(.VI'
  MODULE(); // MODULE
}


// ================================================
// 0xf41a: WORD 'WF41C' codep=0x224c wordp=0xf41c params=0 returns=0
// ================================================

void WF41C() // WF41C
{
  Push(Read16(pp_STORM)==0?1:0); // STORM @ 0=
  WF2F5(); // WF2F5
  Push(Pop() | Pop()); // OR
  Push(Pop()==0?1:0); //  0=
  if (Pop() == 0) return;
  Push(0x00c5);
  Push(0x000c);
  Push(0x00c1);
  Push(0x0044);
  Push(Read16(pp_LCOLOR)); // LCOLOR @
  POLY_dash_WI(); // POLY-WI
  Push(0x0074);
  Push(0x0096);
  POS_dot_(); // POS.
  Push(7);
  GetColor(BLACK);
  POLY_dash_ER(); // POLY-ER
  Push(0x0074);
  Push(0x008f);
  POS_dot_(); // POS.
  Push(9);
  GetColor(BLACK);
  POLY_dash_ER(); // POLY-ER
}


// ================================================
// 0xf466: WORD 'WF468' codep=0x224c wordp=0xf468
// ================================================

void WF468() // WF468
{
  Push(Read16(pp__n_STORM)); // #STORM @
  Push(Read16(regsp)); // DUP
  Push(3);
  _gt_(); // >
  if (Pop() != 0)
  {
    Push(6);
    Push(0x000b);
    WITHIN(); // WITHIN
    if (Pop() != 0)
    {
      Push(0x0032);
    } else
    {
      Push(0x004b);
    }
  } else
  {
    Pop(); // DROP
    Push(0x0064);
  }
  Push(pp__pe_EFF); // %EFF
  _st__ex__gt_(); // <!>
  Push(pp_FORCED); // FORCED
  ON_1(); // ON_1
  WF41C(); // WF41C
}


// ================================================
// 0xf4a4: WORD 'WF4A6' codep=0x224c wordp=0xf4a6
// ================================================

void WF4A6() // WF4A6
{
  Push(5);
  SWAP(); // SWAP
  _dash_(); // -
  _3_star_(); // 3*
  Push(1);
  SWAP(); // SWAP
  RRND(); // RRND
  Push(0x000c);
  MIN(); // MIN
  Push(0);
  MAX(); // MAX
  Push(pp_STORM); // STORM
  _st__ex__gt_(); // <!>
  Push(1);
  Push(0x0064);
  RRND(); // RRND
  LoadData(WF2D5); // from 'PLANET'
  Push((Read16(Pop())&0xFF) * 2 + 1); //  C@ 2* 1+
  Push(0);
  STORMS(); // STORMS
  WF1F4(); // WF1F4
  Pop(); // DROP
  Push(pp__n_STORM); // #STORM
  _st__ex__gt_(); // <!>
}


// ================================================
// 0xf4e0: WORD 'WF4E2' codep=0x224c wordp=0xf4e2 params=0 returns=0
// ================================================

void WF4E2() // WF4E2
{
  Push(1);
  Push(pp_STORM); // STORM
  _st__ex__gt_(); // <!>
  Push(0);
  Push(0);
  RRND(); // RRND
  Push(pp__n_STORM); // #STORM
  _st__ex__gt_(); // <!>
}


// ================================================
// 0xf4f4: WORD '(DO.STORM' codep=0x224c wordp=0xf502
// ================================================
// entry

void _ro_DO_dot_STORM() // (DO.STORM
{
  unsigned short int a;
  Push(Read16(pp__n_STORM)); // #STORM @
  a = Pop(); // >R
  Push(pp__ro_PLANET); // (PLANET
  Get_gt_C_plus_S(); // @>C+S
  LoadData(WF2CD); // from 'PLANET'
  Push(Read16(Pop())&0xFF); //  C@
  if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
  if (Pop() != 0)
  {
    WF4A6(); // WF4A6
  } else
  {
    WF4E2(); // WF4E2
  }
  ICLOSE(); // ICLOSE
  WF468(); // WF468
  Push(!(a==Read16(pp__n_STORM)?1:0)); // R> #STORM @ = NOT
  if (Pop() != 0)
  {
    Push(0xcdc0); // '.STOR'
    MODULE(); // MODULE
  }
  WF332(); // WF332
  if (Pop() == 0) return;
  INJURE_dash_PL(); // INJURE-PL
}

// 0xf540: db 0x53 0x54 0x4f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x00 'STO_____________________________ '

