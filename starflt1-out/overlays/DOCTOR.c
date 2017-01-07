// ====== OVERLAY 'DOCTOR' ======
// store offset = 0xf060
// overlay size   = 0x0500

#include"../../emul/cpu.h"
#include"../../emul/starflt1.h"


// =================================
// =========== DICTIONARY ==========
// =================================
//      UNK_0xf076  codep:0x73ea parp:0xf076 size:0x0006 C-string:'UNK_0xf076'
//      UNK_0xf07e  codep:0x744d parp:0xf07e size:0x0003 C-string:'UNK_0xf07e'
//      UNK_0xf083  codep:0x744d parp:0xf083 size:0x0003 C-string:'UNK_0xf083'
//      UNK_0xf088  codep:0x744d parp:0xf088 size:0x0003 C-string:'UNK_0xf088'
//      UNK_0xf08d  codep:0x744d parp:0xf08d size:0x0003 C-string:'UNK_0xf08d'
//      UNK_0xf092  codep:0x224c parp:0xf092 size:0x0012 C-string:'UNK_0xf092'
//      UNK_0xf0a6  codep:0x224c parp:0xf0a6 size:0x003e C-string:'UNK_0xf0a6'
//      UNK_0xf0e6  codep:0x224c parp:0xf0e6 size:0x00a9 C-string:'UNK_0xf0e6'
//      UNK_0xf191  codep:0x224c parp:0xf191 size:0x001c C-string:'UNK_0xf191'
//      UNK_0xf1af  codep:0x224c parp:0xf1af size:0x0049 C-string:'UNK_0xf1af'
//      UNK_0xf1fa  codep:0x224c parp:0xf1fa size:0x002d C-string:'UNK_0xf1fa'
//      UNK_0xf229  codep:0x224c parp:0xf229 size:0x0019 C-string:'UNK_0xf229'
//      UNK_0xf244  codep:0x224c parp:0xf244 size:0x0029 C-string:'UNK_0xf244'
//      UNK_0xf26f  codep:0x224c parp:0xf26f size:0x003e C-string:'UNK_0xf26f'
//      UNK_0xf2af  codep:0x224c parp:0xf2af size:0x0028 C-string:'UNK_0xf2af'
//      UNK_0xf2d9  codep:0x224c parp:0xf2d9 size:0x0016 C-string:'UNK_0xf2d9'
//      UNK_0xf2f1  codep:0x224c parp:0xf2f1 size:0x002b C-string:'UNK_0xf2f1'
//      UNK_0xf31e  codep:0x224c parp:0xf31e size:0x0014 C-string:'UNK_0xf31e'
//      UNK_0xf334  codep:0x224c parp:0xf334 size:0x0012 C-string:'UNK_0xf334'
//      UNK_0xf348  codep:0x224c parp:0xf348 size:0x0012 C-string:'UNK_0xf348'
//          NPCREW  codep:0x4a4f parp:0xf365 size:0x000c C-string:'NPCREW'
//      UNK_0xf373  codep:0x224c parp:0xf373 size:0x00ac C-string:'UNK_0xf373'
//      UNK_0xf421  codep:0x224c parp:0xf421 size:0x00a5 C-string:'UNK_0xf421'
//      (/EXAMINE)  codep:0x224c parp:0xf4d5 size:0x000c C-string:'_ro__slash_EXAMINE_rc_'
//        (/TREAT)  codep:0x224c parp:0xf4ee size:0x0000 C-string:'_ro__slash_TREAT_rc_'

// =================================
// ============= EXTERN ============
// =================================
extern const unsigned short int cc__3; // 3
extern const unsigned short int cc__4; // 4
extern const unsigned short int cc__6; // 6
extern const unsigned short int cc__8; // 8
extern const unsigned short int pp_XBLT; // XBLT
void _dot_R(); // .R
void MS(); // MS
void WITHIN(); // WITHIN
void _ex__3(); // !_3
void CDROP(); // CDROP
void ICLOSE(); // ICLOSE
void _gt_C_plus_S(); // >C+S
void _at__gt_C_plus_S(); // @>C+S
void IOPEN(); // IOPEN
void INEXT(); // INEXT
void IPREV(); // IPREV
void _gt_1FONT(); // >1FONT
void CTPOS_dot_(); // CTPOS.
void CTERASE(); // CTERASE
void _ex_CRS(); // !CRS
void _do__dot_(); // $.
void POLY_dash_ERASE_dash_TEXT(); // POLY-ERASE-TEXT
void CTCR(); // CTCR
void CTINIT(); // CTINIT
void XYSCAN(); // XYSCAN
void _ask_TRIG(); // ?TRIG
void Y_slash_N(); // Y/N
void CMESS(); // CMESS
void _2DUP(); // 2DUP
void ROT(); // ROT
void CI(); // CI


// =================================
// =========== VARIABLES ===========
// =================================



// 0xf072: db 0x4d 0x00 'M '

// ================================================
// 0xf074: WORD 'UNK_0xf076' codep=0x73ea parp=0xf076
// ================================================
// 0xf076: db 0x10 0x13 0x01 0x14 0x89 0x64 '     d'

// ================================================
// 0xf07c: WORD 'UNK_0xf07e' codep=0x744d parp=0xf07e
// ================================================
// 0xf07e: db 0x10 0x0b 0x0f '   '

// ================================================
// 0xf081: WORD 'UNK_0xf083' codep=0x744d parp=0xf083
// ================================================
// 0xf083: db 0x10 0x1f 0x01 '   '

// ================================================
// 0xf086: WORD 'UNK_0xf088' codep=0x744d parp=0xf088
// ================================================
// 0xf088: db 0x10 0x20 0x02 '   '

// ================================================
// 0xf08b: WORD 'UNK_0xf08d' codep=0x744d parp=0xf08d
// ================================================
// 0xf08d: db 0x11 0x11 0x03 '   '

// ================================================
// 0xf090: WORD 'UNK_0xf092' codep=0x224c parp=0xf092
// ================================================

void UNK_0xf092() // UNK_0xf092
{
  Push(0x0040);
  Push(pp_XBLT); // XBLT
  _ex__3(); // !_3
  PRINT("[N Y]", 5); // (.")
}


// ================================================
// 0xf0a4: WORD 'UNK_0xf0a6' codep=0x224c parp=0xf0a6
// ================================================

void UNK_0xf0a6() // UNK_0xf0a6
{
  unsigned short int a;
  signed short int i, imax;
  unsigned short int b;
  a = Pop(); // >R
  Push2Words("*ASSIGN-CREW");
  _gt_C_plus_S(); // >C+S
  Push(0); // 0
  Push(Read16(cc__6)); // 6
  Push(0); // 0

  i = Pop();
  imax = Pop();
  do // (DO)
  {
  Push(0x6400); // IFIELD(UNK_0xf08d)
  Push(i); // I
  Push(Read16(cc__3)); // 3
  Push(Pop() * Pop()); // *
  Push(Pop() + Pop()); // +
  _at__gt_C_plus_S(); // @>C+S
  Push(0x640f); // IFIELD(UNK_0xf088)
  Push(Read16(Pop())); // @
  Push(a); // J
  Push(Pop() & Pop()); // AND
  if (Pop() == 0) goto label1;
  Push(Pop()+1); // 1+
  b = Pop(); // >R
  CI(); // CI
  Push(b); // R>
  imax = i; // LEAVE

  label1:
  ICLOSE(); // ICLOSE
  i++;
  } while(i<imax); // (LOOP) 0xffda

  ICLOSE(); // ICLOSE
  Push(a); // R>
  Pop(); // DROP
}


// ================================================
// 0xf0e4: WORD 'UNK_0xf0e6' codep=0x224c parp=0xf0e6
// ================================================

void UNK_0xf0e6() // UNK_0xf0e6
{
  unsigned short int a;
  a = Pop(); // >R
  Push(a); // I
  if (Pop() == 0) Push(1); else Push(0); // 0=
  if (Pop() == 0) goto label1;
  PRINT("DEAD", 4); // (.")
  goto label2;

  label1:
  Push(a); // I
  Push(1); // 1
  Push(0x0015);
  WITHIN(); // WITHIN
  if (Pop() == 0) goto label3;
  PRINT("CRITICALLY", 10); // (.")
  goto label4;

  label3:
  Push(a); // I
  Push(0x0015);
  Push(0x0033);
  WITHIN(); // WITHIN
  if (Pop() == 0) goto label5;
  PRINT("HEAVILY", 7); // (.")
  goto label4;

  label5:
  Push(a); // I
  Push(0x0033);
  Push(0x0051);
  WITHIN(); // WITHIN
  if (Pop() == 0) goto label6;
  PRINT("MODERATELY", 10); // (.")
  goto label4;

  label6:
  Push(a); // I
  Push(0x0051);
  Push(0x0064);
  WITHIN(); // WITHIN
  if (Pop() == 0) goto label7;
  PRINT("SLIGHTLY", 8); // (.")
  goto label4;

  label7:
  PRINT("NOT", 3); // (.")

  label4:
  PRINT(" WOUNDED", 8); // (.")

  label2:
  Push(a); // R>
  Pop(); // DROP
}


// ================================================
// 0xf18f: WORD 'UNK_0xf191' codep=0x224c parp=0xf191
// ================================================

void UNK_0xf191() // UNK_0xf191
{
  if (Pop() == 0) goto label1;
  PRINT("TREAT", 5); // (.")
  return;

  label1:
  PRINT("EXAMINE", 7); // (.")
}


// ================================================
// 0xf1ad: WORD 'UNK_0xf1af' codep=0x224c parp=0xf1af
// ================================================

void UNK_0xf1af() // UNK_0xf1af
{
  _gt_C_plus_S(); // >C+S
  CTINIT(); // CTINIT
  PRINT("SHOULD I STOP TREATING ", 23); // (.")
  Push(0x63fa); // IFIELD(UNK_0xf07e)
  _do__dot_(); // $.
  ICLOSE(); // ICLOSE
  CTCR(); // CTCR
  PRINT("TO ", 3); // (.")
  UNK_0xf191(); // UNK_0xf191
  PRINT(" SOMEONE ELSE\?", 14); // (.")
  CTCR(); // CTCR
  UNK_0xf092(); // UNK_0xf092
  Y_slash_N(); // Y/N
  CTERASE(); // CTERASE
}


// ================================================
// 0xf1f8: WORD 'UNK_0xf1fa' codep=0x224c parp=0xf1fa
// ================================================

void UNK_0xf1fa() // UNK_0xf1fa
{
  Push(0x63fa); // IFIELD(UNK_0xf07e)
  _do__dot_(); // $.
  PRINT(" DOESN'T NEED MEDICAL", 21); // (.")
  CTCR(); // CTCR
  PRINT("TREATMENT.", 10); // (.")
}


// ================================================
// 0xf227: WORD 'UNK_0xf229' codep=0x224c parp=0xf229
// ================================================

void UNK_0xf229() // UNK_0xf229
{
  Push(0x63fa); // IFIELD(UNK_0xf07e)
  _do__dot_(); // $.
  PRINT(" IS BEYOND HELP.", 16); // (.")
}


// ================================================
// 0xf242: WORD 'UNK_0xf244' codep=0x224c parp=0xf244
// ================================================

void UNK_0xf244() // UNK_0xf244
{
  PRINT("I AM STARTING TREATMENT ON", 26); // (.")
  CTCR(); // CTCR
  Push(0x63fa); // IFIELD(UNK_0xf07e)
  _do__dot_(); // $.
  PRINT(".", 1); // (.")
}


// ================================================
// 0xf26d: WORD 'UNK_0xf26f' codep=0x224c parp=0xf26f
// ================================================

void UNK_0xf26f() // UNK_0xf26f
{
  _gt_C_plus_S(); // >C+S
  Push(0x640e); // IFIELD(UNK_0xf083)
  Push(Read8(Pop())&0xFF); // C@
  Push(1); // 1
  Push(0x0064);
  WITHIN(); // WITHIN
  if (Pop() == 0) goto label1;
  UNK_0xf244(); // UNK_0xf244
  Push(0x640f); // IFIELD(UNK_0xf088)
  Push(Read16(Pop())); // @
  Push(Read16(cc__4)); // 4
  Push(Pop() | Pop()); // OR
  Push(0x640f); // IFIELD(UNK_0xf088)
  _ex__3(); // !_3
  goto label2;

  label1:
  Push(0x640e); // IFIELD(UNK_0xf083)
  Push(Read8(Pop())&0xFF); // C@
  Push(0x0064);
  Push((Pop()==Pop())?1:0); // =
  if (Pop() == 0) goto label3;
  UNK_0xf1fa(); // UNK_0xf1fa
  goto label2;

  label3:
  UNK_0xf229(); // UNK_0xf229

  label2:
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xf2ad: WORD 'UNK_0xf2af' codep=0x224c parp=0xf2af
// ================================================

void UNK_0xf2af() // UNK_0xf2af
{
  PRINT("I AM CEASING TREATMENT ON", 25); // (.")
  CTCR(); // CTCR
  Push(0x63fa); // IFIELD(UNK_0xf07e)
  _do__dot_(); // $.
  PRINT(".", 1); // (.")
}


// ================================================
// 0xf2d7: WORD 'UNK_0xf2d9' codep=0x224c parp=0xf2d9
// ================================================

void UNK_0xf2d9() // UNK_0xf2d9
{
  _gt_C_plus_S(); // >C+S
  UNK_0xf2af(); // UNK_0xf2af
  Push(0x640f); // IFIELD(UNK_0xf088)
  Push(Read16(Pop())); // @
  Push(0xfffb);
  Push(Pop() & Pop()); // AND
  Push(0x640f); // IFIELD(UNK_0xf088)
  _ex__3(); // !_3
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xf2ef: WORD 'UNK_0xf2f1' codep=0x224c parp=0xf2f1
// ================================================

void UNK_0xf2f1() // UNK_0xf2f1
{
  PRINT("I AM CONTINUING TREATMENT ON", 28); // (.")
  CTCR(); // CTCR
  Push(0x63fa); // IFIELD(UNK_0xf07e)
  _do__dot_(); // $.
  PRINT(".", 1); // (.")
}


// ================================================
// 0xf31c: WORD 'UNK_0xf31e' codep=0x224c parp=0xf31e
// ================================================

void UNK_0xf31e() // UNK_0xf31e
{
  _gt_C_plus_S(); // >C+S
  UNK_0xf2f1(); // UNK_0xf2f1
  Push(0x640f); // IFIELD(UNK_0xf088)
  Push(Read16(Pop())); // @
  Push(Read16(cc__4)); // 4
  Push(Pop() | Pop()); // OR
  Push(0x640f); // IFIELD(UNK_0xf088)
  _ex__3(); // !_3
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xf332: WORD 'UNK_0xf334' codep=0x224c parp=0xf334
// ================================================

void UNK_0xf334() // UNK_0xf334
{

  label1:
  INEXT(); // INEXT
  Push(0x640f); // IFIELD(UNK_0xf088)
  Push(Read8(Pop())&0xFF); // C@
  Push(Read16(cc__8)); // 8
  Push(Pop() & Pop()); // AND
  if (Pop() == 0) goto label1;
  Push(1); // 1
}


// ================================================
// 0xf346: WORD 'UNK_0xf348' codep=0x224c parp=0xf348
// ================================================

void UNK_0xf348() // UNK_0xf348
{

  label1:
  IPREV(); // IPREV
  Push(0x640f); // IFIELD(UNK_0xf088)
  Push(Read8(Pop())&0xFF); // C@
  Push(Read16(cc__8)); // 8
  Push(Pop() & Pop()); // AND
  if (Pop() == 0) goto label1;
  Push(1); // 1
}


// ================================================
// 0xf35a: WORD 'NPCREW' codep=0x4a4f parp=0xf365
// ================================================

void NPCREW() // NPCREW
{
  switch(Pop()) // NPCREW
  {
  case 1:
    UNK_0xf334(); // UNK_0xf334
    break;
  case 65535:
    UNK_0xf348(); // UNK_0xf348
    break;
  default:
    Push(0); // 0
    break;

  }
}

// ================================================
// 0xf371: WORD 'UNK_0xf373' codep=0x224c parp=0xf373
// ================================================

void UNK_0xf373() // UNK_0xf373
{
  CTINIT(); // CTINIT
  CTERASE(); // CTERASE
  PRINT("WHO SHOULD I ", 13); // (.")
  UNK_0xf191(); // UNK_0xf191
  PRINT("\?", 1); // (.")
  Push2Words("*PERSON");
  _gt_C_plus_S(); // >C+S
  IOPEN(); // IOPEN

  label2:
  Push(0x640f); // IFIELD(UNK_0xf088)
  Push(Read8(Pop())&0xFF); // C@
  Push(Read16(cc__8)); // 8
  Push(Pop() & Pop()); // AND
  if (Pop() == 0) Push(1); else Push(0); // NOT
  if (Pop() == 0) goto label1;
  INEXT(); // INEXT
  goto label2;

  label1:
  Push(1); // 1
  Push(0x0015);
  CMESS(); // CMESS
  PRINT("CHOOSE CREWMEMBER ^\\", 20); // (.")
  _ex_CRS(); // !CRS
  Push(2); // 2
  Push(0x0012);
  CMESS(); // CMESS
  PRINT("AND PRESS SPACEBAR", 18); // (.")
  _ex_CRS(); // !CRS
  Push(0x000b);
  Push(2); // 2
  CTPOS_dot_(); // CTPOS.
  Push(0x63fa); // IFIELD(UNK_0xf07e)
  _do__dot_(); // $.

  label4:
  XYSCAN(); // XYSCAN
  Pop(); // DROP
  NPCREW(); // NPCREW case
  if (Pop() == 0) goto label3;
  Push(0x000b);
  Push(2); // 2
  CTPOS_dot_(); // CTPOS.
  Push(0x000f);
  SetColor("BLACK");
  POLY_dash_ERASE_dash_TEXT(); // POLY-ERASE-TEXT
  Push(0x63fa); // IFIELD(UNK_0xf07e)
  _do__dot_(); // $.

  label3:
  _ask_TRIG(); // ?TRIG
  if (Pop() == 0) goto label4;
  CI(); // CI
  CDROP(); // CDROP
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xf41f: WORD 'UNK_0xf421' codep=0x224c parp=0xf421
// ================================================

void UNK_0xf421() // UNK_0xf421
{
  CTINIT(); // CTINIT
  CTERASE(); // CTERASE
  _gt_C_plus_S(); // >C+S
  Push(0x63fa); // IFIELD(UNK_0xf07e)
  _do__dot_(); // $.
  PRINT(" IS ", 4); // (.")
  Push(0x640e); // IFIELD(UNK_0xf083)
  Push(Read8(Pop())&0xFF); // C@
  Push(Read16(regsp)); // DUP
  UNK_0xf0e6(); // UNK_0xf0e6
  if (Pop() == 0) goto label1;
  PRINT(",", 1); // (.")
  CTCR(); // CTCR
  PRINT("AND HAS A VITALITY OF ", 22); // (.")
  Push(0x640e); // IFIELD(UNK_0xf083)
  Push(Read8(Pop())&0xFF); // C@
  Push(0); // 0
  _dot_R(); // .R
  PRINT(" AND A", 6); // (.")
  CTCR(); // CTCR
  PRINT("DURABILITY OF ", 14); // (.")
  LoadData("UNK_0xf076"); // from 'CREWMEMBER  '
  Push(Read8(Pop())&0xFF); // C@
  Push(0); // 0
  _dot_R(); // .R

  label1:
  PRINT(".", 1); // (.")
  CTCR(); // CTCR
  Push(0x640f); // IFIELD(UNK_0xf088)
  Push(Read16(Pop())); // @
  Push(Read16(cc__4)); // 4
  Push(Pop() & Pop()); // AND
  if (Pop() == 0) goto label2;
  Push(0x63fa); // IFIELD(UNK_0xf07e)
  _do__dot_(); // $.
  PRINT(" IS CURRENTLY BEING", 19); // (.")
  CTCR(); // CTCR
  PRINT("TREATED.", 8); // (.")

  label2:
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xf4c6: WORD '(/EXAMINE)' codep=0x224c parp=0xf4d5
// ================================================
// entry

void _ro__slash_EXAMINE_rc_() // (/EXAMINE)
{
  CTERASE(); // CTERASE
  _gt_1FONT(); // >1FONT
  Push(0); // 0
  UNK_0xf373(); // UNK_0xf373
  UNK_0xf421(); // UNK_0xf421
}


// ================================================
// 0xf4e1: WORD '(/TREAT)' codep=0x224c parp=0xf4ee
// ================================================
// entry

void _ro__slash_TREAT_rc_() // (/TREAT)
{
  CTERASE(); // CTERASE
  Push(Read16(cc__4)); // 4
  UNK_0xf0a6(); // UNK_0xf0a6
  if (Pop() == 0) goto label1;
  _2DUP(); // 2DUP
  Push(1); // 1
  ROT(); // ROT
  ROT(); // ROT
  UNK_0xf1af(); // UNK_0xf1af
  if (Pop() == 0) goto label2;
  UNK_0xf2d9(); // UNK_0xf2d9
  Push(0x09c4);
  MS(); // MS
  Push(1); // 1
  UNK_0xf373(); // UNK_0xf373
  CTERASE(); // CTERASE
  UNK_0xf26f(); // UNK_0xf26f
  goto label3;

  label2:
  UNK_0xf31e(); // UNK_0xf31e

  label3:
  return;

  label1:
  Push(1); // 1
  UNK_0xf373(); // UNK_0xf373
  CTERASE(); // CTERASE
  UNK_0xf26f(); // UNK_0xf26f
}

// 0xf52a: db 0x44 0x4f 0x43 0x2d 0x56 0x4f 0x43 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x20 0x66 0x6f 0x72 0x20 0x44 0x4f 0x43 0x54 0x4f 0x52 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x00 'DOC-VOC_________________________ for DOCTOR----------- '
  