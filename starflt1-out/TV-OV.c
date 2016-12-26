// ====== OVERLAY 'TV-OV' ======
// store offset = 0xe7d0
// overlay size   = 0x0d90

#include"../emul/cpu.h"
#include"../emul/starflt1.h"


// =================================
// =========== DICTIONARY ==========
// =================================
//      UNK_0xe7ea  codep:0x744d parp:0xe7ea size:0x0003 C-string:'UNK_0xe7ea'
//      UNK_0xe7ef  codep:0x744d parp:0xe7ef size:0x0003 C-string:'UNK_0xe7ef'
//      UNK_0xe7f4  codep:0x744d parp:0xe7f4 size:0x0033 C-string:'UNK_0xe7f4'
//      UNK_0xe829  codep:0x224c parp:0xe829 size:0x0010 C-string:'UNK_0xe829'
//      UNK_0xe83b  codep:0x224c parp:0xe83b size:0x002c C-string:'UNK_0xe83b'
//      UNK_0xe869  codep:0x744d parp:0xe869 size:0x0003 C-string:'UNK_0xe869'
//      UNK_0xe86e  codep:0x744d parp:0xe86e size:0x0003 C-string:'UNK_0xe86e'
//      UNK_0xe873  codep:0x224c parp:0xe873 size:0x0018 C-string:'UNK_0xe873'
//      UNK_0xe88d  codep:0x224c parp:0xe88d size:0x0016 C-string:'UNK_0xe88d'
//      UNK_0xe8a5  codep:0x224c parp:0xe8a5 size:0x0018 C-string:'UNK_0xe8a5'
//      UNK_0xe8bf  codep:0x224c parp:0xe8bf size:0x0008 C-string:'UNK_0xe8bf'
//      UNK_0xe8c9  codep:0x224c parp:0xe8c9 size:0x0014 C-string:'UNK_0xe8c9'
//      UNK_0xe8df  codep:0x224c parp:0xe8df size:0x0014 C-string:'UNK_0xe8df'
//      UNK_0xe8f5  codep:0x224c parp:0xe8f5 size:0x0016 C-string:'UNK_0xe8f5'
//      UNK_0xe90d  codep:0x224c parp:0xe90d size:0x0014 C-string:'UNK_0xe90d'
//      UNK_0xe923  codep:0x224c parp:0xe923 size:0x001e C-string:'UNK_0xe923'
//      UNK_0xe943  codep:0x224c parp:0xe943 size:0x0026 C-string:'UNK_0xe943'
//      UNK_0xe96b  codep:0x224c parp:0xe96b size:0x0022 C-string:'UNK_0xe96b'
//      UNK_0xe98f  codep:0x224c parp:0xe98f size:0x0022 C-string:'UNK_0xe98f'
//      UNK_0xe9b3  codep:0x224c parp:0xe9b3 size:0x001e C-string:'UNK_0xe9b3'
//      UNK_0xe9d3  codep:0x224c parp:0xe9d3 size:0x001c C-string:'UNK_0xe9d3'
//      UNK_0xe9f1  codep:0x224c parp:0xe9f1 size:0x0048 C-string:'UNK_0xe9f1'
//      UNK_0xea3b  codep:0x1d29 parp:0xea3b size:0x0002 C-string:'UNK_0xea3b'
//      UNK_0xea3f  codep:0x224c parp:0xea3f size:0x0026 C-string:'UNK_0xea3f'
//      UNK_0xea67  codep:0x224c parp:0xea67 size:0x0028 C-string:'UNK_0xea67'
//      UNK_0xea91  codep:0x224c parp:0xea91 size:0x0082 C-string:'UNK_0xea91'
//      UNK_0xeb15  codep:0x224c parp:0xeb15 size:0x0014 C-string:'UNK_0xeb15'
//      UNK_0xeb2b  codep:0x224c parp:0xeb2b size:0x0078 C-string:'UNK_0xeb2b'
//      UNK_0xeba5  codep:0x224c parp:0xeba5 size:0x004c C-string:'UNK_0xeba5'
//      UNK_0xebf3  codep:0x224c parp:0xebf3 size:0x0028 C-string:'UNK_0xebf3'
//      UNK_0xec1d  codep:0x224c parp:0xec1d size:0x000c C-string:'UNK_0xec1d'
//      UNK_0xec2b  codep:0x224c parp:0xec2b size:0x002e C-string:'UNK_0xec2b'
//      UNK_0xec5b  codep:0x224c parp:0xec5b size:0x0024 C-string:'UNK_0xec5b'
//       FUNCTIONS  codep:0x1d29 parp:0xec8d size:0x002d C-string:'FUNCTIONS'
//      UNK_0xecbc  codep:0x1d29 parp:0xecbc size:0x0006 C-string:'UNK_0xecbc'
//      UNK_0xecc4  codep:0x224c parp:0xecc4 size:0x0026 C-string:'UNK_0xecc4'
//      UNK_0xecec  codep:0x224c parp:0xecec size:0x0006 C-string:'UNK_0xecec'
//      UNK_0xecf4  codep:0x224c parp:0xecf4 size:0x001c C-string:'UNK_0xecf4'
//      UNK_0xed12  codep:0x224c parp:0xed12 size:0x0066 C-string:'UNK_0xed12'
//         HEAVEHO  codep:0x224c parp:0xed84 size:0x000a C-string:'HEAVEHO'
//      UNK_0xed90  codep:0x2214 parp:0xed90 size:0x000a C-string:'UNK_0xed90'
//      UNK_0xed9c  codep:0x224c parp:0xed9c size:0x002c C-string:'UNK_0xed9c'
//        TV-SETUP  codep:0x224c parp:0xedd5 size:0x000e C-string:'TV_dash_SETUP'
//      UNK_0xede5  codep:0x224c parp:0xede5 size:0x0010 C-string:'UNK_0xede5'
//      UNK_0xedf7  codep:0x224c parp:0xedf7 size:0x0026 C-string:'UNK_0xedf7'
//      UNK_0xee1f  codep:0x224c parp:0xee1f size:0x000a C-string:'UNK_0xee1f'
//      UNK_0xee2b  codep:0x224c parp:0xee2b size:0x000c C-string:'UNK_0xee2b'
//      UNK_0xee39  codep:0x224c parp:0xee39 size:0x0070 C-string:'UNK_0xee39'
//      UNK_0xeeab  codep:0x224c parp:0xeeab size:0x0050 C-string:'UNK_0xeeab'
//      UNK_0xeefd  codep:0x224c parp:0xeefd size:0x0046 C-string:'UNK_0xeefd'
//      UNK_0xef45  codep:0x224c parp:0xef45 size:0x001c C-string:'UNK_0xef45'
//      UNK_0xef63  codep:0x224c parp:0xef63 size:0x002a C-string:'UNK_0xef63'
//      UNK_0xef8f  codep:0x224c parp:0xef8f size:0x005a C-string:'UNK_0xef8f'
//      UNK_0xefeb  codep:0x224c parp:0xefeb size:0x0012 C-string:'UNK_0xefeb'
//      UNK_0xefff  codep:0x224c parp:0xefff size:0x00a4 C-string:'UNK_0xefff'
//      UNK_0xf0a5  codep:0x224c parp:0xf0a5 size:0x003c C-string:'UNK_0xf0a5'
//      UNK_0xf0e3  codep:0x224c parp:0xf0e3 size:0x0014 C-string:'UNK_0xf0e3'
//      UNK_0xf0f9  codep:0x224c parp:0xf0f9 size:0x002c C-string:'UNK_0xf0f9'
//          EYECON  codep:0x1d29 parp:0xf130 size:0x0006 C-string:'EYECON'
//      UNK_0xf138  codep:0x224c parp:0xf138 size:0x004a C-string:'UNK_0xf138'
//      UNK_0xf184  codep:0x224c parp:0xf184 size:0x0034 C-string:'UNK_0xf184'
//      UNK_0xf1ba  codep:0x224c parp:0xf1ba size:0x0016 C-string:'UNK_0xf1ba'
//      UNK_0xf1d2  codep:0x224c parp:0xf1d2 size:0x0028 C-string:'UNK_0xf1d2'
//      UNK_0xf1fc  codep:0x224c parp:0xf1fc size:0x0050 C-string:'UNK_0xf1fc'
//      UNK_0xf24e  codep:0x224c parp:0xf24e size:0x0026 C-string:'UNK_0xf24e'
//       WALK&TALK  codep:0x224c parp:0xf282 size:0x0012 C-string:'WALK_and_TALK'
//      UNK_0xf296  codep:0x224c parp:0xf296 size:0x0036 C-string:'UNK_0xf296'
//      UNK_0xf2ce  codep:0x224c parp:0xf2ce size:0x0010 C-string:'UNK_0xf2ce'
//         TV-DISP  codep:0x224c parp:0xf2ea size:0x007d C-string:'TV_dash_DISP'
//       TV-CLEANU  codep:0x224c parp:0xf375 size:0x0004 C-string:'TV_dash_CLEANU'
//      UNK_0xf37b  codep:0x224c parp:0xf37b size:0x0038 C-string:'UNK_0xf37b'
//      UNK_0xf3b5  codep:0x224c parp:0xf3b5 size:0x007e C-string:'UNK_0xf3b5'
//      UNK_0xf435  codep:0x1d29 parp:0xf435 size:0x0002 C-string:'UNK_0xf435'
//      UNK_0xf439  codep:0x224c parp:0xf439 size:0x0012 C-string:'UNK_0xf439'
//      UNK_0xf44d  codep:0x224c parp:0xf44d size:0x001c C-string:'UNK_0xf44d'
//       DO.WEAPON  codep:0x224c parp:0xf477 size:0x0000 C-string:'DO_dot_WEAPON'

// =================================
// =========== VARIABLES ===========
// =================================
unsigned char UNK_0xea3b[2] = {0x00, 0x00}; // UNK_0xea3b
unsigned char FUNCTIONS[45] = {0x06, 0x0c, 0x03, 0x0c, 0x13, 0x0c, 0x17, 0x0c, 0x13, 0x0c, 0x2b, 0x0c, 0x17, 0x0c, 0x43, 0x0c, 0x13, 0x0c, 0x57, 0x0c, 0x13, 0x0c, 0x6b, 0x0c, 0x1b, 0x0c, 0x87, 0x0c, 0x16, 0x4c, 0x22, 0xf0, 0x0d, 0x5f, 0x12, 0xb4, 0x0d, 0x2d, 0x12, 0x90, 0x0e, 0x3e, 0x13, 0x90, 0x16}; // FUNCTIONS
unsigned char UNK_0xecbc[6] = {0x56, 0x3a, 0x20, 0x20, 0x05, 0x41}; // UNK_0xecbc
unsigned char EYECON[6] = {0x00, 0x42, 0x99, 0x99, 0x42, 0x00}; // EYECON
unsigned char UNK_0xf435[2] = {0x3a, 0x20}; // UNK_0xf435

const unsigned short int cc_UNK_0xed90 = 0x7fff; // UNK_0xed90


// 0xe7e2: db 0xd3 0x00 0x14 0x22 0x44 0x00 '   "D '

// ================================================
// 0xe7e8: WORD 'UNK_0xe7ea' codep=0x744d parp=0xe7ea
// ================================================
// 0xe7ea: db 0x2a 0x11 0x01 '*  '

// ================================================
// 0xe7ed: WORD 'UNK_0xe7ef' codep=0x744d parp=0xe7ef
// ================================================
// 0xe7ef: db 0x0b 0x11 0x02 '   '

// ================================================
// 0xe7f2: WORD 'UNK_0xe7f4' codep=0x744d parp=0xe7f4
// ================================================
// 0xe7f4: db 0x14 0x43 0x02 0x4c 0x22 0x41 0x0e 0xb4 0x0d 0xae 0x3f 0x90 0x0e 0xae 0x3f 0x90 0x16 0x4c 0x22 0xf0 0x0d 0x3e 0x13 0xfa 0x15 0x04 0x00 0xf0 0x0d 0x90 0x16 0x4c 0x22 0xe4 0xe7 0x41 0x0e 0x8d 0x54 0xfd 0x4b 0x9b 0x54 0xae 0x0b 0x99 0x73 0x32 0x0e 0x90 0x16 ' C L"A    ?   ?  L"  >         L"  A  T K T   s2   '

// ================================================
// 0xe827: WORD 'UNK_0xe829' codep=0x224c parp=0xe829
// ================================================

void UNK_0xe829() // UNK_0xe829
{
  Push(0x5bc4); // pointer to WTOP
  Push(Read16(Pop())); // @
  OVER(); // OVER
  Push(0x5bd2); // pointer to WBOTTOM
  Push(Read16(Pop())); // @
  Push(Pop()-1); // 1-
  LLINE(); // LLINE
}


// ================================================
// 0xe839: WORD 'UNK_0xe83b' codep=0x224c parp=0xe83b
// ================================================

void UNK_0xe83b() // UNK_0xe83b
{
  Push(0x0016);
  UNK_0xe829(); // UNK_0xe829
  Push(0x002a);
  UNK_0xe829(); // UNK_0xe829
  Push(0x0042);
  UNK_0xe829(); // UNK_0xe829
  Push(0x0056);
  UNK_0xe829(); // UNK_0xe829
  Push(0x006a);
  UNK_0xe829(); // UNK_0xe829
  Push(0x0086);
  UNK_0xe829(); // UNK_0xe829
  Push(0x009e);
  UNK_0xe829(); // UNK_0xe829
}


// ================================================
// 0xe867: WORD 'UNK_0xe869' codep=0x744d parp=0xe869
// ================================================
// 0xe869: db 0x10 0x1b 0x01 '   '

// ================================================
// 0xe86c: WORD 'UNK_0xe86e' codep=0x744d parp=0xe86e
// ================================================
// 0xe86e: db 0x11 0x17 0x03 '   '

// ================================================
// 0xe871: WORD 'UNK_0xe873' codep=0x224c parp=0xe873
// ================================================

void UNK_0xe873() // UNK_0xe873
{
  _gt_R(); // >R
  Push(0x00c5);
  Push(0x000c);
  Push(0x00c1);
  Push(0x0044);
  R_gt_(); // R>
  POLY_dash_WINDOW_dash_FILL(); // POLY-WINDOW-FILL
}


// ================================================
// 0xe88b: WORD 'UNK_0xe88d' codep=0x224c parp=0xe88d
// ================================================

void UNK_0xe88d() // UNK_0xe88d
{
  Push(0x5af4); // pointer to #STORM
  Push(Read16(Pop())); // @
  Push(Read16(regsp)); // DUP
  Push(cc__4); // 4
  _st_(); // <
  SWAP(); // SWAP
  Push(0x000b);
  _gt_(); // >
  Push(Pop() | Pop()); // OR
}


// ================================================
// 0xe8a3: WORD 'UNK_0xe8a5' codep=0x224c parp=0xe8a5
// ================================================

void UNK_0xe8a5() // UNK_0xe8a5
{
  Push2Words("*ASSIGN-CREW");
  _gt_C_plus_S(); // >C+S
  Push(0x6406); // IFIELD(UNK_0xe86e)
  _at__gt_C_plus_S(); // @>C+S
  Push(0x640a); // IFIELD(UNK_0xe869)
  Push(Read8(Pop())&0xFF); // C@
  CDROP(); // CDROP
  ICLOSE(); // ICLOSE
  Push(0x00c7);
  _gt_(); // >
}


// ================================================
// 0xe8bd: WORD 'UNK_0xe8bf' codep=0x224c parp=0xe8bf
// ================================================

void UNK_0xe8bf() // UNK_0xe8bf
{
  Push(cc__dash_1); // -1
  Push(0x5bd2); // pointer to WBOTTOM
  _st__plus__ex__gt_(); // <+!>
}


// ================================================
// 0xe8c7: WORD 'UNK_0xe8c9' codep=0x224c parp=0xe8c9
// ================================================

void UNK_0xe8c9() // UNK_0xe8c9
{
  Push(0x0083);
  Push(0x0053);
  Push(0x0009);
  Push(0x0012);
  WINDOW(); // WINDOW
}


// ================================================
// 0xe8dd: WORD 'UNK_0xe8df' codep=0x224c parp=0xe8df
// ================================================

void UNK_0xe8df() // UNK_0xe8df
{
  Push(0x0040);
  Push(cc__3); // 3
  Push(cc__7); // 7
  Push(0x0026);
  WINDOW(); // WINDOW
  UNK_0xe8bf(); // UNK_0xe8bf
  _gt_TVCT(); // >TVCT
}


// ================================================
// 0xe8f3: WORD 'UNK_0xe8f5' codep=0x224c parp=0xe8f5
// ================================================

void UNK_0xe8f5() // UNK_0xe8f5
{
  Push(0x00c1);
  Push(0x0053);
  Push(0x0008);
  Push(0x0012);
  WINDOW(); // WINDOW
  UNK_0xe8bf(); // UNK_0xe8bf
}


// ================================================
// 0xe90b: WORD 'UNK_0xe90d' codep=0x224c parp=0xe90d
// ================================================

void UNK_0xe90d() // UNK_0xe90d
{
  Push(0x00bf);
  Push(cc__3); // 3
  Push(0x0011);
  Push(0x0012);
  WINDOW(); // WINDOW
  UNK_0xe8bf(); // UNK_0xe8bf
}


// ================================================
// 0xe921: WORD 'UNK_0xe923' codep=0x224c parp=0xe923
// ================================================

void UNK_0xe923() // UNK_0xe923
{
  Push(0x000c);
  Push(0x5bc4); // pointer to WTOP
  _st__ex__gt_(); // <!>
  Push(cc__3); // 3
  Push(0x5beb); // pointer to WLEFT
  _st__ex__gt_(); // <!>
  Push(0x009b);
  Push(0x5bdf); // pointer to WRIGHT
  _st__ex__gt_(); // <!>
  Push(2); // 2
  Push(0x5bd2); // pointer to WBOTTOM
  _st__ex__gt_(); // <!>
}


// ================================================
// 0xe941: WORD 'UNK_0xe943' codep=0x224c parp=0xe943
// ================================================

void UNK_0xe943() // UNK_0xe943
{
  Push(0x01e0);
  _dash_(); // -
  Push(0x000a);
  Push(0x0035);
  _star__slash_(); // */
  SWAP(); // SWAP
  Push(0x0480);
  _dash_(); // -
  Push(0x000a);
  Push(0x0040);
  _star__slash_(); // */
  SWAP(); // SWAP
}


// ================================================
// 0xe969: WORD 'UNK_0xe96b' codep=0x224c parp=0xe96b
// ================================================

void UNK_0xe96b() // UNK_0xe96b
{
  if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
  if (Pop() == 0) goto label1;
  _0_st_(); // 0<
  if (Pop() == 0) goto label2;
  PRINT("W", 1); // (.")
  goto label3;

  label2:
  PRINT("E", 1); // (.")

  label3:
  return;

  label1:
  PRINT(" ", 1); // (.")
}


// ================================================
// 0xe98d: WORD 'UNK_0xe98f' codep=0x224c parp=0xe98f
// ================================================

void UNK_0xe98f() // UNK_0xe98f
{
  if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
  if (Pop() == 0) goto label1;
  _0_st_(); // 0<
  if (Pop() == 0) goto label2;
  PRINT("S", 1); // (.")
  goto label3;

  label2:
  PRINT("N", 1); // (.")

  label3:
  return;

  label1:
  PRINT(" ", 1); // (.")
}


// ================================================
// 0xe9b1: WORD 'UNK_0xe9b3' codep=0x224c parp=0xe9b3
// ================================================

void UNK_0xe9b3() // UNK_0xe9b3
{
  SWAP(); // SWAP
  _4_star_(); // 4*
  Push(0x5beb); // pointer to WLEFT
  Push(Read16(Pop())); // @
  Push(Pop()+2); // 2+
  Push(Pop() + Pop()); // +
  Push(0x5bc4); // pointer to WTOP
  Push(Read16(Pop())); // @
  Push(Pop()-1); // 1-
  ROT(); // ROT
  Push(cc__7); // 7
  Push(Pop() * Pop()); // *
  _dash_(); // -
  POS_dot_(); // POS.
}


// ================================================
// 0xe9d1: WORD 'UNK_0xe9d3' codep=0x224c parp=0xe9d3
// ================================================

void UNK_0xe9d3() // UNK_0xe9d3
{
  Push(0x626f); // pointer to TVEHICLE
  _at__gt_C_plus_S(); // @>C+S
  Push(0x63fc); // IFIELD(INST-X)
  Push(Read16(Pop())); // @
  Push(0x63fe); // IFIELD(INST-Y)
  Push(Read16(Pop())); // @
  ICLOSE(); // ICLOSE
}

// 0xe9e3: db 0x4c 0x22 0xc5 0x74 0x76 0x6d 0xb7 0x74 0x76 0x6d 0x90 0x16 'L" tvm tvm  '

// ================================================
// 0xe9ef: WORD 'UNK_0xe9f1' codep=0x224c parp=0xe9f1
// ================================================

void UNK_0xe9f1() // UNK_0xe9f1
{
  UNK_0xe88d(); // UNK_0xe88d
  UNK_0xe8a5(); // UNK_0xe8a5
  Push(Pop() | Pop()); // OR
  if (Pop() == 0) return;
  SetColor("WHITE");
  _ex_COLOR(); // !COLOR
  UNK_0xe9d3(); // UNK_0xe9d3
  UNK_0xe943(); // UNK_0xe943
  Push(0x0010);
  Push(0x00c5);
  POS_dot_(); // POS.
  Push(Read16(regsp)); // DUP
  Push(Read16(regsp)); // DUP
  _0_st_(); // 0<
  if (Pop() == 0) goto label1;
  Push(-Pop()); // NEGATE

  label1:
  Push(cc__4); // 4
  _dot_R(); // .R
  UNK_0xe98f(); // UNK_0xe98f
  PRINT(" * ", 3); // (.")
  Push(Read16(regsp)); // DUP
  Push(Read16(regsp)); // DUP
  _0_st_(); // 0<
  if (Pop() == 0) goto label2;
  Push(-Pop()); // NEGATE

  label2:
  Push(0); // 0
  _dot_R(); // .R
  UNK_0xe96b(); // UNK_0xe96b
}


// ================================================
// 0xea39: WORD 'UNK_0xea3b' codep=0x1d29 parp=0xea3b
// ================================================
// 0xea3b: db 0x00 0x00 '  '

// ================================================
// 0xea3d: WORD 'UNK_0xea3f' codep=0x224c parp=0xea3f
// ================================================

void UNK_0xea3f() // UNK_0xea3f
{
  Push(0x55f2); // pointer to COLOR
  Push(Read16(Pop())); // @
  Push(0x5bc4); // pointer to WTOP
  Push(Read16(Pop())); // @
  Push(0x5beb); // pointer to WLEFT
  Push(Read16(Pop())); // @
  Push(0x5bd2); // pointer to WBOTTOM
  Push(Read16(Pop())); // @
  Push(Pop()-1); // 1-
  Push(0x5bdf); // pointer to WRIGHT
  Push(Read16(Pop())); // @
  Push(Pop()+1); // 1+
  SetColor("BLACK");
  POLY_dash_WINDOW_dash_FILL(); // POLY-WINDOW-FILL
  Push(0); // 0
  Push(0); // 0
  UNK_0xe9b3(); // UNK_0xe9b3
  _ex_COLOR(); // !COLOR
}


// ================================================
// 0xea65: WORD 'UNK_0xea67' codep=0x224c parp=0xea67
// ================================================

void UNK_0xea67() // UNK_0xea67
{
  Push(0x2001);
  PAD(); // PAD
  _st__ex__gt_(); // <!>
  Push(0xea3b); // pointer to UNK_0xea3b
  Push(Read16(Pop())); // @
  Push(0x5bf8); // pointer to WLINES
  Push(Read16(Pop())); // @
  OVER(); // OVER
  _dash_(); // -
  Push(Pop() + Pop()); // +
  Push(0); // 0

  signed short int i = Pop();
  signed short int imax = Pop();
  do // (DO)
  {
  PAD(); // PAD
  WLINE_dash_UP(); // WLINE-UP
  i++;
  } while(i<imax); // (LOOP) 0xfffa

  Push(0xea3b); // pointer to UNK_0xea3b
  OFF(); // OFF
}


// ================================================
// 0xea8f: WORD 'UNK_0xea91' codep=0x224c parp=0xea91
// ================================================

void UNK_0xea91() // UNK_0xea91
{
  Push(2); // 2
  Push(0); // 0

  signed short int i = Pop();
  signed short int imax = Pop();
  do // (DO)
  {
  Push(0x5beb); // pointer to WLEFT
  Push(Read16(Pop())); // @
  Push(Pop()-2); // 2-
  Push(i); // I
  Push(Pop() + Pop()); // +
  Push(0x5bd2); // pointer to WBOTTOM
  Push(Read16(Pop())); // @
  Push(Pop()-1); // 1-
  OVER(); // OVER
  Push(0x5bc4); // pointer to WTOP
  Push(Read16(Pop())); // @
  Push(Pop()+2); // 2+
  LLINE(); // LLINE
  Push(0x5bdf); // pointer to WRIGHT
  Push(Read16(Pop())); // @
  Push(Pop()+2); // 2+
  Push(i); // I
  Push(Pop() + Pop()); // +
  Push(0x5bd2); // pointer to WBOTTOM
  Push(Read16(Pop())); // @
  Push(Pop()-1); // 1-
  OVER(); // OVER
  Push(0x5bc4); // pointer to WTOP
  Push(Read16(Pop())); // @
  Push(Pop()+2); // 2+
  LLINE(); // LLINE
  i++;
  } while(i<imax); // (LOOP) 0xffca

  Push(0x5beb); // pointer to WLEFT
  Push(Read16(Pop())); // @
  Push(Pop()-2); // 2-
  Push(0x5bc4); // pointer to WTOP
  Push(Read16(Pop())); // @
  Push(Pop()+2); // 2+
  Push(0x5bdf); // pointer to WRIGHT
  Push(Read16(Pop())); // @
  Push(Pop()+3); // 3+
  OVER(); // OVER
  LLINE(); // LLINE
  Push(0x5beb); // pointer to WLEFT
  Push(Read16(Pop())); // @
  Push(Pop()-2); // 2-
  Push(0x5bc4); // pointer to WTOP
  Push(Read16(Pop())); // @
  Push(Pop()+1); // 1+
  Push(0x5bdf); // pointer to WRIGHT
  Push(Read16(Pop())); // @
  Push(Pop()+3); // 3+
  OVER(); // OVER
  LLINE(); // LLINE
  Push(0x5beb); // pointer to WLEFT
  Push(Read16(Pop())); // @
  Push(Pop()-2); // 2-
  Push(0x5bd2); // pointer to WBOTTOM
  Push(Read16(Pop())); // @
  Push(Pop()-2); // 2-
  Push(0x5bdf); // pointer to WRIGHT
  Push(Read16(Pop())); // @
  Push(Pop()+3); // 3+
  OVER(); // OVER
  LLINE(); // LLINE
}


// ================================================
// 0xeb13: WORD 'UNK_0xeb15' codep=0x224c parp=0xeb15
// ================================================

void UNK_0xeb15() // UNK_0xeb15
{
  UNK_0xe90d(); // UNK_0xe90d
  SetColor("WHITE");
  _ex_COLOR(); // !COLOR
  Push(cc__5); // 5
  Push(cc__dash_1); // -1
  UNK_0xe9b3(); // UNK_0xe9b3
  SetColor("BLACK");
  UNK_0xe873(); // UNK_0xe873
  UNK_0xe9f1(); // UNK_0xe9f1
}


// ================================================
// 0xeb29: WORD 'UNK_0xeb2b' codep=0x224c parp=0xeb2b
// ================================================

void UNK_0xeb2b() // UNK_0xeb2b
{
  UNK_0xe8f5(); // UNK_0xe8f5
  UNK_0xea3f(); // UNK_0xea3f
  SetColor("RED");
  _ex_COLOR(); // !COLOR
  UNK_0xea91(); // UNK_0xea91
  _gt_2FONT(); // >2FONT
  SetColor("WHITE");
  _ex_COLOR(); // !COLOR
  Push(cc__5); // 5
  Push(0); // 0
  UNK_0xe9b3(); // UNK_0xe9b3
  PRINT("STATUS", 6); // (.")
  _gt_1FONT(); // >1FONT
  Push(0); // 0
  Push(2); // 2
  UNK_0xe9b3(); // UNK_0xe9b3
  PRINT("DATE  : ", 8); // (.")
  Push(0); // 0
  Push(cc__3); // 3
  UNK_0xe9b3(); // UNK_0xe9b3
  PRINT("ENERGY: ", 8); // (.")
  Push(0); // 0
  Push(cc__4); // 4
  UNK_0xe9b3(); // UNK_0xe9b3
  PRINT("EFF.  : ", 8); // (.")
  Push(0); // 0
  Push(cc__5); // 5
  UNK_0xe9b3(); // UNK_0xe9b3
  PRINT("CARGO : ", 8); // (.")
  Push(0); // 0
  Push(cc__6); // 6
  UNK_0xe9b3(); // UNK_0xe9b3
  PRINT("SHIP  : ", 8); // (.")
}


// ================================================
// 0xeba3: WORD 'UNK_0xeba5' codep=0x224c parp=0xeba5
// ================================================

void UNK_0xeba5() // UNK_0xeba5
{
  UNK_0xe923(); // UNK_0xe923
  UNK_0xea3f(); // UNK_0xea3f
  SetColor("RED");
  _ex_COLOR(); // !COLOR
  UNK_0xea91(); // UNK_0xea91
  UNK_0xe83b(); // UNK_0xe83b
  SetColor("WHITE");
  _ex_COLOR(); // !COLOR
  Push(0xfffd);
  Push(0x5bc4); // pointer to WTOP
  _st__plus__ex__gt_(); // <+!>
  Push(0); // 0
  Push(0); // 0
  UNK_0xe9b3(); // UNK_0xe9b3
  _gt_1FONT(); // >1FONT
  PRINT("MAPS MOVE CARGO LOOK SCAN WEAPON ICONS ", 39); // (.")
}


// ================================================
// 0xebf1: WORD 'UNK_0xebf3' codep=0x224c parp=0xebf3
// ================================================

void UNK_0xebf3() // UNK_0xebf3
{
  UNK_0xe8c9(); // UNK_0xe8c9
  UNK_0xea3f(); // UNK_0xea3f
  SetColor("RED");
  _ex_COLOR(); // !COLOR
  UNK_0xea91(); // UNK_0xea91
  _gt_2FONT(); // >2FONT
  SetColor("WHITE");
  _ex_COLOR(); // !COLOR
  Push(0); // 0
  Push(0); // 0
  UNK_0xe9b3(); // UNK_0xe9b3
  PRINT("CREW VITALITY", 13); // (.")
}


// ================================================
// 0xec1b: WORD 'UNK_0xec1d' codep=0x224c parp=0xec1d
// ================================================

void UNK_0xec1d() // UNK_0xec1d
{
  UNK_0xe8df(); // UNK_0xe8df
  UNK_0xea3f(); // UNK_0xea3f
  SetColor("RED");
  _ex_COLOR(); // !COLOR
  UNK_0xea91(); // UNK_0xea91
}


// ================================================
// 0xec29: WORD 'UNK_0xec2b' codep=0x224c parp=0xec2b
// ================================================

void UNK_0xec2b() // UNK_0xec2b
{
  _gt_DISPLAY(); // >DISPLAY
  _gt_1FONT(); // >1FONT
  _gt_LORES(); // >LORES
  Push(0); // 0
  Push(0x587c); // pointer to XORMODE
  _st__ex__gt_(); // <!>
  SetColor("GREY1");
  _ex_COLOR(); // !COLOR
  SFILL(); // SFILL
  SetColor("RED");
  _ex_COLOR(); // !COLOR
  SetColor("BLACK");
  VIEWSCR(); // VIEWSCR
  UNK_0xeb15(); // UNK_0xeb15
  UNK_0xeb2b(); // UNK_0xeb2b
  UNK_0xebf3(); // UNK_0xebf3
  UNK_0xeba5(); // UNK_0xeba5
  UNK_0xec1d(); // UNK_0xec1d
}

// 0xec51: db 0x4c 0x22 0xdd 0xe8 0x65 0xea 0x90 0x16 'L"  e   '

// ================================================
// 0xec59: WORD 'UNK_0xec5b' codep=0x224c parp=0xec5b
// ================================================

void UNK_0xec5b() // UNK_0xec5b
{
  TIME(); // TIME
  _2_at_(); // 2@
  Push(0x6182); // pointer to LKEYTIM
  _2_ex_(); // 2!

  label1:
  Push(Read16(regsp)); // DUP
  Push(0); // 0
  Push(0x6182); // pointer to LKEYTIM
  _2_at_(); // 2@
  D_plus_(); // D+
  TIME(); // TIME
  _2_at_(); // 2@
  D_st_(); // D<
  _i_KEY(); // 'KEY
  Push(Pop() | Pop()); // OR
  if (Pop() == 0) goto label1;
  Pop(); // DROP
}


// ================================================
// 0xec7f: WORD 'FUNCTIONS' codep=0x1d29 parp=0xec8d
// ================================================
// 0xec8d: db 0x06 0x0c 0x03 0x0c 0x13 0x0c 0x17 0x0c 0x13 0x0c 0x2b 0x0c 0x17 0x0c 0x43 0x0c 0x13 0x0c 0x57 0x0c 0x13 0x0c 0x6b 0x0c 0x1b 0x0c 0x87 0x0c 0x16 0x4c 0x22 0xf0 0x0d 0x5f 0x12 0xb4 0x0d 0x2d 0x12 0x90 0x0e 0x3e 0x13 0x90 0x16 '          +   C   W   k      L"  _   -   >   '

// ================================================
// 0xecba: WORD 'UNK_0xecbc' codep=0x1d29 parp=0xecbc
// ================================================
// 0xecbc: db 0x56 0x3a 0x20 0x20 0x05 0x41 'V:   A'

// ================================================
// 0xecc2: WORD 'UNK_0xecc4' codep=0x224c parp=0xecc4
// ================================================

void UNK_0xecc4() // UNK_0xecc4
{
  Push(0x63fc); // IFIELD(INST-X)
  Push(Read16(Pop())); // @
  Push(0x5dae); // pointer to XABS
  Push(Read16(Pop())); // @
  _dash_(); // -
  ABS(); // ABS
  Push(Read16(regsp)); // DUP
  U_star_(); // U*
  Push(0x63fe); // IFIELD(INST-Y)
  Push(Read16(Pop())); // @
  Push(0x5db9); // pointer to YABS
  Push(Read16(Pop())); // @
  _dash_(); // -
  ABS(); // ABS
  Push(Read16(regsp)); // DUP
  U_star_(); // U*
  D_plus_(); // D+
  SQRT(); // SQRT
}


// ================================================
// 0xecea: WORD 'UNK_0xecec' codep=0x224c parp=0xecec
// ================================================

void UNK_0xecec() // UNK_0xecec
{
  _dash_ICON(); // -ICON
  IDELETE(); // IDELETE
}


// ================================================
// 0xecf2: WORD 'UNK_0xecf4' codep=0x224c parp=0xecf4
// ================================================

void UNK_0xecf4() // UNK_0xecf4
{
  Push(0xecbc); // pointer to UNK_0xecbc
  _at__gt_C_plus_S(); // @>C+S
  IOPEN(); // IOPEN

  label2:
  _ask_NULL(); // ?NULL
  if (Pop() == 0) Push(1); else Push(0); // NOT
  if (Pop() == 0) goto label1;
  UNK_0xecec(); // UNK_0xecec
  goto label2;

  label1:
  ICLOSE(); // ICLOSE
  IDELETE(); // IDELETE
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xed10: WORD 'UNK_0xed12' codep=0x224c parp=0xed12
// ================================================

void UNK_0xed12() // UNK_0xed12
{
  Push(0x62bf); // pointer to (PLANET
  _at__gt_C_plus_S(); // @>C+S
  IOPEN(); // IOPEN
  CI(); // CI
  Push(0xecbc); // pointer to UNK_0xecbc
  _1_dot_5_ex_(); // 1.5!
  Push(0); // 0
  Push(0xecbc); // pointer to UNK_0xecbc
  Push(cc__4); // 4
  Push(Pop() + Pop()); // +
  _st__ex__gt_(); // <!>
  Push(0x000b);
  Push(0x000b);

  label4:
  Push(0x628f); // pointer to SUPER-BOX
  _1_dot_5_at_(); // 1.5@
  CI(); // CI
  D_eq_(); // D=
  if (Pop() == 0) Push(1); else Push(0); // NOT
  if (Pop() == 0) goto label1;
  _ask_CLASS_slash_(); // ?CLASS/
  if (Pop() == 0) goto label2;
  UNK_0xecc4(); // UNK_0xecc4
  Push(0xecbc); // pointer to UNK_0xecbc
  Push(cc__4); // 4
  Push(Pop() + Pop()); // +
  Push(Read16(Pop())); // @
  OVER(); // OVER
  _st_(); // <
  if (Pop() == 0) goto label3;
  CI(); // CI
  Push(0xecbc); // pointer to UNK_0xecbc
  _1_dot_5_ex_(); // 1.5!
  Push(0xecbc); // pointer to UNK_0xecbc
  Push(cc__4); // 4
  Push(Pop() + Pop()); // +
  _st__ex__gt_(); // <!>
  goto label2;

  label3:
  Pop(); // DROP

  label2:
  INEXT(); // INEXT
  goto label4;

  label1:
  Pop(); Pop();// 2DROP
  ICLOSE(); // ICLOSE
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xed78: WORD 'HEAVEHO' codep=0x224c parp=0xed84
// ================================================
// entry

void HEAVEHO() // HEAVEHO
{
  Push(0x53bf); // pointer to ?CRITIC
  ON_3(); // ON_3
  UNK_0xed12(); // UNK_0xed12
  UNK_0xecf4(); // UNK_0xecf4
}


// ================================================
// 0xed8e: WORD 'UNK_0xed90' codep=0x2214 parp=0xed90
// ================================================
// 0xed90: db 0xff 0x7f 0xea 0x73 0x44 0x90 0x02 0x9c 0xd8 0x69 '  sD    i'

// ================================================
// 0xed9a: WORD 'UNK_0xed9c' codep=0x224c parp=0xed9c
// ================================================

void UNK_0xed9c() // UNK_0xed9c
{
  Push(0x626f); // pointer to TVEHICLE
  _at__gt_C_plus_S(); // @>C+S
  Push(0x5dae); // pointer to XABS
  Push(Read16(Pop())); // @
  Push(0x63fc); // IFIELD(INST-X)
  _ex__3(); // !_3
  Push(0x5db9); // pointer to YABS
  Push(Read16(Pop())); // @
  Push(0x63fe); // IFIELD(INST-Y)
  _ex__3(); // !_3
  Push(cc_UNK_0xed90); // UNK_0xed90
  Push(0x63fa); // IFIELD(INST-QTY)
  _ex__3(); // !_3
  ICLOSE(); // ICLOSE
  Push(0x627f); // pointer to TV-HOLD
  _at__gt_C_plus_S(); // @>C+S
  Push(0x01f4);
  Push(0x63fa); // IFIELD(INST-QTY)
  _ex__3(); // !_3
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xedc8: WORD 'TV-SETUP' codep=0x224c parp=0xedd5
// ================================================
// entry

void TV_dash_SETUP() // TV-SETUP
{
  UNK_0xec2b(); // UNK_0xec2b
  SetColor("DK-BLUE");
  Push(0x5cbf); // pointer to CRSCOLO
  _ex__3(); // !_3
  Push(0xec8d); // pointer to FUNCTIONS
  BLD_dash_CRS(); // BLD-CRS
}


// ================================================
// 0xede3: WORD 'UNK_0xede5' codep=0x224c parp=0xede5
// ================================================

void UNK_0xede5() // UNK_0xede5
{
  _ask_NULL(); // ?NULL
  if (Pop() == 0) return;
  ICLOSE(); // ICLOSE
  IDELETE(); // IDELETE
  Push2Words("0.");
  _gt_C(); // >C
}


// ================================================
// 0xedf5: WORD 'UNK_0xedf7' codep=0x224c parp=0xedf7
// ================================================

void UNK_0xedf7() // UNK_0xedf7
{
  Push(0x000b);
  Push(0x000f);
  IFIND(); // IFIND
  if (Pop() == 0) goto label1;
  IOPEN(); // IOPEN
  Push(0x001c);
  Push(cc__5); // 5
  IFIND(); // IFIND
  ICLOSE(); // ICLOSE
  goto label2;

  label1:
  Push(0); // 0

  label2:
  Push(0x5f9e); // pointer to ?FLAT
  _st__ex__gt_(); // <!>
}


// ================================================
// 0xee1d: WORD 'UNK_0xee1f' codep=0x224c parp=0xee1f
// ================================================

void UNK_0xee1f() // UNK_0xee1f
{
  Push2Words("*STARSHIP-HOLD");
  _gt_C_plus_S(); // >C+S
  IOPEN(); // IOPEN
  UNK_0xedf7(); // UNK_0xedf7
}


// ================================================
// 0xee29: WORD 'UNK_0xee2b' codep=0x224c parp=0xee2b
// ================================================

void UNK_0xee2b() // UNK_0xee2b
{
  Push2Words("*SHIP");
  _gt_C_plus_S(); // >C+S
  Push(0x6432); // IFIELD(UNK_0xe7f4)
  _plus__ex_(); // +!
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xee37: WORD 'UNK_0xee39' codep=0x224c parp=0xee39
// ================================================

void UNK_0xee39() // UNK_0xee39
{
  UNK_0xee1f(); // UNK_0xee1f
  Push(0x5f9e); // pointer to ?FLAT
  Push(Read16(Pop())); // @
  if (Pop() == 0) goto label1;
  IOPEN(); // IOPEN
  Push(0x001c);
  Push(cc__5); // 5
  IFIND(); // IFIND
  Pop(); // DROP
  Push(cc__3); // 3
  Push(0x63fa); // IFIELD(INST-QTY)
  _ex__3(); // !_3
  IEXTRACT(); // IEXTRACT
  UNK_0xede5(); // UNK_0xede5
  ICLOSE(); // ICLOSE
  Push(0x627f); // pointer to TV-HOLD
  _at__gt_C_plus_S(); // @>C+S
  _gt_BOX(); // >BOX
  Push(cc__3); // 3
  Push(0x6400); // IFIELD(UNK_0xe7ef)
  _plus__ex_(); // +!
  ICLOSE(); // ICLOSE
  Push(0xfffd);
  UNK_0xee2b(); // UNK_0xee2b

  label1:
  _ask_NULL(); // ?NULL
  if (Pop() == 0) Push(1); else Push(0); // NOT
  if (Pop() == 0) goto label2;
  IOPEN(); // IOPEN
  Push(0x001c);
  Push(cc__3); // 3
  IFIND(); // IFIND
  if (Pop() == 0) goto label3;
  Push(1); // 1
  Push(0x63fa); // IFIELD(INST-QTY)
  _ex__3(); // !_3
  IEXTRACT(); // IEXTRACT
  UNK_0xede5(); // UNK_0xede5
  Push(0x627f); // pointer to TV-HOLD
  _at__gt_C_plus_S(); // @>C+S
  _gt_BOX(); // >BOX
  Push(1); // 1
  Push(0x6400); // IFIELD(UNK_0xe7ef)
  _plus__ex_(); // +!
  ICLOSE(); // ICLOSE
  Push(cc__dash_1); // -1
  UNK_0xee2b(); // UNK_0xee2b

  label3:
  ICLOSE(); // ICLOSE

  label2:
  ICLOSE(); // ICLOSE
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xeea9: WORD 'UNK_0xeeab' codep=0x224c parp=0xeeab
// ================================================

void UNK_0xeeab() // UNK_0xeeab
{
  Push(0x626f); // pointer to TVEHICLE
  _at__gt_C_plus_S(); // @>C+S
  UNK_0xed9c(); // UNK_0xed9c
  Push(0xc437);
  MODULE(); // MODULE
  _plus_ICON(); // +ICON
  IOPEN(); // IOPEN
  CDROP(); // CDROP
  Push(0x627f); // pointer to TV-HOLD
  _at__gt_C_plus_S(); // @>C+S
  IEXTRACT(); // IEXTRACT
  Push(0x628f); // pointer to SUPER-BOX
  _1_dot_5_at_(); // 1.5@
  _gt_C_plus_S(); // >C+S
  IOPEN(); // IOPEN
  CI(); // CI
  _gt_INSERT(); // >INSERT
  ICLOSE(); // ICLOSE
  ICLOSE(); // ICLOSE
  ICLOSE(); // ICLOSE
  ICLOSE(); // ICLOSE
  Push(0x625f); // pointer to (SHIP)
  _at__gt_C_plus_S(); // @>C+S
  Push(0x5dae); // pointer to XABS
  Push(Read16(Pop())); // @
  Push(0x63fc); // IFIELD(INST-X)
  _ex__3(); // !_3
  Push(0x5db9); // pointer to YABS
  Push(Read16(Pop())); // @
  Push(Pop()+1); // 1+
  Push(0x63fe); // IFIELD(INST-Y)
  _ex__3(); // !_3
  Push(0xc437);
  MODULE(); // MODULE
  _plus_ICON(); // +ICON
  ICLOSE(); // ICLOSE
  UNK_0xee39(); // UNK_0xee39
}


// ================================================
// 0xeefb: WORD 'UNK_0xeefd' codep=0x224c parp=0xeefd
// ================================================

void UNK_0xeefd() // UNK_0xeefd
{
  Push(0x545f); // pointer to ?TV
  Push(Read16(Pop())); // @
  if (Pop() == 0) return;
  PRINT("REFUELING TERRAIN VEHICLE ", 26); // (.")
  GCR(); // GCR
  PRINT("AND TRANSFERRING ALL CARGO", 26); // (.")
}


// ================================================
// 0xef43: WORD 'UNK_0xef45' codep=0x224c parp=0xef45
// ================================================

void UNK_0xef45() // UNK_0xef45
{
  Push(0x628f); // pointer to SUPER-BOX
  _at__gt_C_plus_S(); // @>C+S
  IOPEN(); // IOPEN
  CDROP(); // CDROP
  Push(0x627f); // pointer to TV-HOLD
  _at__gt_C_plus_S(); // @>C+S
  IEXTRACT(); // IEXTRACT
  ICLOSE(); // ICLOSE
  ICLOSE(); // ICLOSE
  Push(0x626f); // pointer to TVEHICLE
  _1_dot_5_at_(); // 1.5@
  IINSERT(); // IINSERT
  INIT_dash_ICONLIST(); // INIT-ICONLIST
}


// ================================================
// 0xef61: WORD 'UNK_0xef63' codep=0x224c parp=0xef63
// ================================================

void UNK_0xef63() // UNK_0xef63
{
  Push(0x6400); // IFIELD(UNK_0xe7ef)
  Push(Read16(Pop())); // @
  Push(Read16(regsp)); // DUP
  Push2Words("*SHIP");
  _gt_C_plus_S(); // >C+S
  Push(0x6432); // IFIELD(UNK_0xe7f4)
  Push(Read16(Pop())); // @
  _st_(); // <
  Push(Read16(regsp)); // DUP
  if (Pop() == 0) goto label1;
  SWAP(); // SWAP
  Push(-Pop()); // NEGATE
  Push(0x6432); // IFIELD(UNK_0xe7f4)
  _plus__ex_(); // +!
  goto label2;

  label1:
  SWAP(); // SWAP
  Pop(); // DROP

  label2:
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xef8d: WORD 'UNK_0xef8f' codep=0x224c parp=0xef8f
// ================================================

void UNK_0xef8f() // UNK_0xef8f
{
  IOPEN(); // IOPEN

  label2:
  _ask_NULL(); // ?NULL
  if (Pop() == 0) Push(1); else Push(0); // NOT
  if (Pop() == 0) goto label1;
  IEXTRACT(); // IEXTRACT
  Push2Words("*STARSHIP-HOLD");
  _gt_C_plus_S(); // >C+S
  IOPEN(); // IOPEN
  CDROP(); // CDROP
  _gt_BOX(); // >BOX
  ICLOSE(); // ICLOSE
  goto label2;

  label1:
  ICLOSE(); // ICLOSE
  Push2Words("*STARSHIP-HOLD");
  _gt_C_plus_S(); // >C+S
  IOPEN(); // IOPEN
  Push(0x000b);
  Push(0x000a);
  IFIND(); // IFIND
  if (Pop() == 0) goto label3;
  IOPEN(); // IOPEN
  Push(0x001a);
  Push(cc__6); // 6
  IFIND(); // IFIND
  Push(0x63fa); // IFIELD(INST-QTY)
  Push(Read16(Pop())); // @
  Push(Pop() * Pop()); // *
  Push(0x000a);
  U_star_(); // U*
  CDROP(); // CDROP
  goto label4;

  label3:
  Push2Words("NULL");

  label4:
  Push(0x6106); // pointer to 10*END
  D_ex_(); // D!
  CDROP(); // CDROP
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xefe9: WORD 'UNK_0xefeb' codep=0x224c parp=0xefeb
// ================================================

void UNK_0xefeb() // UNK_0xefeb
{

  label1:
  _ask_NULL(); // ?NULL
  if (Pop() == 0) Push(1); else Push(0); // NOT
  if (Pop() == 0) return;
  UNK_0xef8f(); // UNK_0xef8f
  IDELETE(); // IDELETE
  goto label1;
}


// ================================================
// 0xeffd: WORD 'UNK_0xefff' codep=0x224c parp=0xefff
// ================================================

void UNK_0xefff() // UNK_0xefff
{
  UNK_0xe8df(); // UNK_0xe8df
  UNK_0xea3f(); // UNK_0xea3f
  Push(cc__dash_2); // -2
  Push(0x586e); // pointer to XBLT
  _plus__ex_(); // +!
  CTINIT(); // CTINIT
  Push(0x627f); // pointer to TV-HOLD
  _at__gt_C_plus_S(); // @>C+S
  UNK_0xef63(); // UNK_0xef63
  if (Pop() == 0) goto label1;
  UNK_0xeefd(); // UNK_0xeefd
  IOPEN(); // IOPEN
  UNK_0xefeb(); // UNK_0xefeb
  ICLOSE(); // ICLOSE
  Push(0); // 0
  Push(0x6400); // IFIELD(UNK_0xe7ef)
  _ex__3(); // !_3
  goto label2;

  label1:
  Push(0x545f); // pointer to ?TV
  Push(Read16(Pop())); // @
  if (Pop() == 0) goto label2;
  PRINT("NOT ENOUGH ROOM IN SHIP HOLD. TO", 32); // (.")
  GCR(); // GCR
  PRINT("TRANSFER FROM TERRAIN VEHICLE", 29); // (.")
  GCR(); // GCR
  PRINT("EXIT AND DROP SOMETHING.", 24); // (.")
  Push(0x09c4);
  UNK_0xec5b(); // UNK_0xec5b

  label2:
  Push(0x05dc);
  MS(); // MS
  ICLOSE(); // ICLOSE
  UNK_0xef45(); // UNK_0xef45
}


// ================================================
// 0xf0a3: WORD 'UNK_0xf0a5' codep=0x224c parp=0xf0a5
// ================================================

void UNK_0xf0a5() // UNK_0xf0a5
{
  UNK_0xe90d(); // UNK_0xe90d
  Push2Words("0.");
  Push(0x595d); // pointer to XLLDEST
  _st__ex__gt_(); // <!>
  Push(0x596b); // pointer to YLLDEST
  _st__ex__gt_(); // <!>
  Push(0x5a5c); // pointer to CONTEXT-ID#
  OFF(); // OFF
  _gt_1ICONFONT(); // >1ICONFONT
  Push(0x5807); // pointer to MOVED
  OFF(); // OFF
  Push(0xce3c);
  Push(0x5994); // pointer to '.BACKG
  _st__ex__gt_(); // <!>
  Push(cc__8); // 8
  Push(Read16(regsp)); // DUP
  Push(0x6211); // pointer to XWLD:XPIX
  _st__ex__gt_(); // <!>
  Push(0x6221); // pointer to YWLD:YPIX
  _st__ex__gt_(); // <!>
  Push(1); // 1
  Push(Read16(regsp)); // DUP
  Push(0x6211); // pointer to XWLD:XPIX
  Push(Pop()+2); // 2+
  _st__ex__gt_(); // <!>
  Push(0x6221); // pointer to YWLD:YPIX
  Push(Pop()+2); // 2+
  _st__ex__gt_(); // <!>
}


// ================================================
// 0xf0e1: WORD 'UNK_0xf0e3' codep=0x224c parp=0xf0e3
// ================================================

void UNK_0xf0e3() // UNK_0xf0e3
{
  Push(0x587c); // pointer to XORMODE
  OFF(); // OFF
  _gt_MAINVIEW(); // >MAINVIEW
  VCLIPSET(); // VCLIPSET
  _dot_BACKGR(); // .BACKGR
  _dot_LOCAL_dash_ICONS(); // .LOCAL-ICONS
  V_gt_DISPLAY(); // V>DISPLAY
  _gt_DISPLAY(); // >DISPLAY
  DCLIPSET(); // DCLIPSET
}


// ================================================
// 0xf0f7: WORD 'UNK_0xf0f9' codep=0x224c parp=0xf0f9
// ================================================

void UNK_0xf0f9() // UNK_0xf0f9
{
  Push(0x5944); // pointer to XVIS
  Push(Read16(Pop())); // @
  Push(0x000e);
  Push(Pop() + Pop()); // +
  Push(0x594f); // pointer to YVIS
  Push(Read16(Pop())); // @
  Push(0x0016);
  Push(Pop() + Pop()); // +
  Push(0x5944); // pointer to XVIS
  Push(Read16(Pop())); // @
  Push(0x0016);
  Push(Pop() + Pop()); // +
  Push(0x594f); // pointer to YVIS
  Push(Read16(Pop())); // @
  Push(0x0029);
  Push(Pop() + Pop()); // +
  _ex_VISWINDOW(); // !VISWINDOW
}


// ================================================
// 0xf125: WORD 'EYECON' codep=0x1d29 parp=0xf130
// ================================================
// 0xf130: db 0x00 0x42 0x99 0x99 0x42 0x00 ' B  B '

// ================================================
// 0xf136: WORD 'UNK_0xf138' codep=0x224c parp=0xf138
// ================================================

void UNK_0xf138() // UNK_0xf138
{
  Push(0x60e8); // pointer to EYEXY
  Push(Pop()+2); // 2+
  Push(Read16(Pop())); // @
  Push(0x5944); // pointer to XVIS
  Push(Read16(Pop())); // @
  Push(Read16(regsp)); // DUP
  _gt_R(); // >R
  Push(0x0016);
  Push(Pop() + Pop()); // +
  MIN(); // MIN
  R_gt_(); // R>
  Push(0x000e);
  Push(Pop() + Pop()); // +
  MAX(); // MAX
  Push(0x60e8); // pointer to EYEXY
  Push(Pop()+2); // 2+
  _st__ex__gt_(); // <!>
  Push(0x60e8); // pointer to EYEXY
  Push(Read16(Pop())); // @
  Push(0x594f); // pointer to YVIS
  Push(Read16(Pop())); // @
  Push(Read16(regsp)); // DUP
  _gt_R(); // >R
  Push(0x0024);
  Push(Pop() + Pop()); // +
  MIN(); // MIN
  R_gt_(); // R>
  Push(0x0016);
  Push(Pop() + Pop()); // +
  MAX(); // MAX
  Push(0x60e8); // pointer to EYEXY
  _st__ex__gt_(); // <!>
}


// ================================================
// 0xf182: WORD 'UNK_0xf184' codep=0x224c parp=0xf184
// ================================================

void UNK_0xf184() // UNK_0xf184
{
  SetColor("WHITE");
  _ex_COLOR(); // !COLOR
  Push(cc__6); // 6
  Push(0x5887); // pointer to LBLT
  _st__ex__gt_(); // <!>
  Push(cc__8); // 8
  Push(0x5892); // pointer to WBLT
  _st__ex__gt_(); // <!>
  Push(0xf130); // pointer to EYECON
  Push(0x589d); // pointer to ABLT
  _st__ex__gt_(); // <!>
  UNK_0xe9d3(); // UNK_0xe9d3
  _2DUP(); // 2DUP
  Push(0x60e8); // pointer to EYEXY
  _st_D_ex__gt_(); // <D!>
  WLD_gt_SCR(); // WLD>SCR
  Push(0x004e);
  Push(Pop() + Pop()); // +
  Push(0x5863); // pointer to YBLT
  _st__ex__gt_(); // <!>
  Push(cc__4); // 4
  Push(Pop() + Pop()); // +
  Push(0x586e); // pointer to XBLT
  _st__ex__gt_(); // <!>
}


// ================================================
// 0xf1b8: WORD 'UNK_0xf1ba' codep=0x224c parp=0xf1ba
// ================================================

void UNK_0xf1ba() // UNK_0xf1ba
{
  Push(0x000b);
  Push(0); // 0

  signed short int i = Pop();
  signed short int imax = Pop();
  do // (DO)
  {
  BLT(); // BLT
  Push(0x0032);
  MS(); // MS
  i++;
  } while(i<imax); // (LOOP) 0xfff6

}


// ================================================
// 0xf1d0: WORD 'UNK_0xf1d2' codep=0x224c parp=0xf1d2
// ================================================

void UNK_0xf1d2() // UNK_0xf1d2
{
  BEEPON(); // BEEPON
  Push(0x0064);
  Push(Read16(regsp)); // DUP
  Push(0); // 0

  signed short int i = Pop();
  signed short int imax = Pop();
  do // (DO)
  {
  Push(Read16(regsp)); // DUP
  Push(Read16(regsp)); // DUP
  Push(0x00c8);
  Push(Pop() + Pop()); // +
  RRND(); // RRND
  TONE(); // TONE
  Push(2); // 2
  MS(); // MS
  i++;
  } while(i<imax); // (LOOP) 0xffec

  Pop(); // DROP
  BEEPOFF(); // BEEPOFF
}


// ================================================
// 0xf1fa: WORD 'UNK_0xf1fc' codep=0x224c parp=0xf1fc
// ================================================

void UNK_0xf1fc() // UNK_0xf1fc
{
  _at_DS(); // @DS
  Push(0x58aa); // pointer to BLTSEG
  _st__ex__gt_(); // <!>
  Push(0x587c); // pointer to XORMODE
  ON_3(); // ON_3
  UNK_0xf184(); // UNK_0xf184
  UNK_0xf1ba(); // UNK_0xf1ba

  label3:
  XYSCAN(); // XYSCAN
  _2DUP(); // 2DUP
  Push(Pop() | Pop()); // OR
  if (Pop() == 0) goto label1;
  CLICK(); // CLICK
  BLT(); // BLT
  Push(0x60e8); // pointer to EYEXY
  Push(Pop()+2); // 2+
  _st__plus__ex__gt_(); // <+!>
  Push(0x60e8); // pointer to EYEXY
  _st__plus__ex__gt_(); // <+!>
  UNK_0xf138(); // UNK_0xf138
  Push(0x60e8); // pointer to EYEXY
  _2_at_(); // 2@
  WLD_gt_SCR(); // WLD>SCR
  Push(0x004e);
  Push(Pop() + Pop()); // +
  Push(0x5863); // pointer to YBLT
  _st__ex__gt_(); // <!>
  Push(cc__4); // 4
  Push(Pop() + Pop()); // +
  Push(0x586e); // pointer to XBLT
  _st__ex__gt_(); // <!>
  BLT(); // BLT
  goto label2;

  label1:
  Pop(); Pop();// 2DROP

  label2:
  _ask_TRIG(); // ?TRIG
  if (Pop() == 0) goto label3;
}


// ================================================
// 0xf24c: WORD 'UNK_0xf24e' codep=0x224c parp=0xf24e
// ================================================

void UNK_0xf24e() // UNK_0xf24e
{
  Push(0x5bae); // pointer to NCRS
  Push(Read16(Pop())); // @
  Push(cc__4); // 4
  _eq_(); // =
  if (Pop() == 0) goto label1;
  UNK_0xf1d2(); // UNK_0xf1d2

  label1:
  _at_CRS(); // @CRS
  Push(0x60e8); // pointer to EYEXY
  _2_at_(); // 2@
  Push(0x59f5); // pointer to ILOCAL
  Push(Read16(Pop())); // @
  _ask_ICONS_dash_AT(); // ?ICONS-AT
  UNK_0xea67(); // UNK_0xea67
  Push(0xcd7c);
  MODULE(); // MODULE
  _ex_CRS(); // !CRS
}


// ================================================
// 0xf274: WORD 'WALK&TALK' codep=0x224c parp=0xf282
// ================================================
// entry

void WALK_and_TALK() // WALK&TALK
{
  UNK_0xf1fc(); // UNK_0xf1fc
  _at_CRS(); // @CRS
  UNK_0xe8df(); // UNK_0xe8df
  UNK_0xf24e(); // UNK_0xf24e
  _ex_CRS(); // !CRS
  BLT(); // BLT
  Push(0x587c); // pointer to XORMODE
  OFF(); // OFF
}


// ================================================
// 0xf294: WORD 'UNK_0xf296' codep=0x224c parp=0xf296
// ================================================

void UNK_0xf296() // UNK_0xf296
{
  Push(0x55f2); // pointer to COLOR
  Push(Read16(Pop())); // @
  _gt_R(); // >R
  _ex_COLOR(); // !COLOR
  UNK_0xe9d3(); // UNK_0xe9d3
  WLD_gt_SCR(); // WLD>SCR
  SWAP(); // SWAP
  Push(cc__8); // 8
  Push(Pop() + Pop()); // +
  SWAP(); // SWAP
  Push(0x0049);
  Push(Pop() + Pop()); // +
  Push(0x60e8); // pointer to EYEXY
  _2_at_(); // 2@
  WLD_gt_SCR(); // WLD>SCR
  SWAP(); // SWAP
  Push(cc__8); // 8
  Push(Pop() + Pop()); // +
  SWAP(); // SWAP
  Push(0x0049);
  Push(Pop() + Pop()); // +
  LLINE(); // LLINE
  R_gt_(); // R>
  _ex_COLOR(); // !COLOR
}


// ================================================
// 0xf2cc: WORD 'UNK_0xf2ce' codep=0x224c parp=0xf2ce
// ================================================

void UNK_0xf2ce() // UNK_0xf2ce
{
  if (Pop() == 0) goto label1;
  SetColor("RED");
  goto label2;

  label1:
  SetColor("BLUE");

  label2:
  UNK_0xf296(); // UNK_0xf296
}


// ================================================
// 0xf2de: WORD 'TV-DISP' codep=0x224c parp=0xf2ea
// ================================================
// entry

void TV_dash_DISP() // TV-DISP
{
  DCLIPSET(); // DCLIPSET
  _gt_DISPLAY(); // >DISPLAY
  SetColor("WHITE");
  _ex_COLOR(); // !COLOR

  UNK_0x3f3b("ACTIVATING TERRAIN VEHICLE");
  _dot_TTY(); // .TTY
  Push2Words("0.");
  Push(0x6192); // pointer to (SCROLL_1
  _1_dot_5_ex_(); // 1.5!
  Push(0x5783); // pointer to ?NEW
  ON_3(); // ON_3
  Push(0x587c); // pointer to XORMODE
  OFF(); // OFF
  Push(0xea3b); // pointer to UNK_0xea3b
  OFF(); // OFF
  Push2Words("0.");
  Push(0x5bae); // pointer to NCRS
  _st__ex__gt_(); // <!>
  Push(0x5bb9); // pointer to OCRS
  _st__ex__gt_(); // <!>
  INIT_dash_ICONLIST(); // INIT-ICONLIST
  Push(0x0014);
  Push(0x5858); // pointer to LOCRADIUS
  _st__ex__gt_(); // <!>
  UNK_0xf0f9(); // UNK_0xf0f9
  UNK_0xf0a5(); // UNK_0xf0a5
  Push2Words("0.");
  Push(0x630f); // pointer to THIS-RE
  _1_dot_5_ex_(); // 1.5!
  Push(0xcf62);
  MODULE(); // MODULE
  UNK_0xeeab(); // UNK_0xeeab
  Push(0xec78);
  Push(Read16(regsp)); // DUP
  Push(0x6230); // pointer to ANCHOR-CONTOUR
  _st_D_ex__gt_(); // <D!>
  ORGLIST(); // ORGLIST
  TV_dash_SETUP(); // TV-SETUP
  UNK_0xf0e3(); // UNK_0xf0e3
  SetColor("WHITE");
  _ex_COLOR(); // !COLOR
  Push(0x0032);
  Push(0x5d15); // pointer to %VAL
  _st__ex__gt_(); // <!>
}


// ================================================
// 0xf367: WORD 'TV-CLEANU' codep=0x224c parp=0xf375
// ================================================
// entry

void TV_dash_CLEANU() // TV-CLEANU
{
  UNK_0xefff(); // UNK_0xefff
}


// ================================================
// 0xf379: WORD 'UNK_0xf37b' codep=0x224c parp=0xf37b
// ================================================

void UNK_0xf37b() // UNK_0xf37b
{
  _gt_R(); // >R
  _at_CRS(); // @CRS
  Push(cc__3); // 3
  R_gt_(); // R>
  POS_dot_(); // POS.
  CURSORSPACE(); // CURSORSPACE
  Push(0x589d); // pointer to ABLT
  _ex__3(); // !_3
  Push(cc__7); // 7
  Push(0x5887); // pointer to LBLT
  _st__ex__gt_(); // <!>
  Push(0x009a);
  Push(0x5892); // pointer to WBLT
  _st__ex__gt_(); // <!>
  SetColor("DK-BLUE");
  _ex_COLOR(); // !COLOR
  Push(1); // 1
  Push(0x587c); // pointer to XORMODE
  _st__ex__gt_(); // <!>
  BLT(); // BLT
  _ex_CRS(); // !CRS
}

// 0xf3a9: db 0x4c 0x22 0xc2 0x5b 0xae 0x0b 0x79 0xf3 0x90 0x16 'L" [  y   '

// ================================================
// 0xf3b3: WORD 'UNK_0xf3b5' codep=0x224c parp=0xf3b5
// ================================================

void UNK_0xf3b5() // UNK_0xf3b5
{
  Push2Words("*SHIP");
  _ask_ICON_eq_I(); // ?ICON=I
  Pop(); // DROP
  Push(0x59f5); // pointer to ILOCAL
  Push(Read16(Pop())); // @
  Push(Pop()-1); // 1-
  _gt_(); // >
  if (Pop() == 0) goto label1;
  Push(0); // 0
  goto label2;

  label1:
  Push(cc__dash_1); // -1

  label2:
  Push(0x59f5); // pointer to ILOCAL
  Push(Read16(Pop())); // @
  Push(Pop()-1); // 1-
  Push(Pop() + Pop()); // +
  Push(0x5f86); // pointer to WEAPON-
  _st__plus__ex__gt_(); // <+!>
  UNK_0xe8df(); // UNK_0xe8df
  UNK_0xea3f(); // UNK_0xea3f
  SetColor("WHITE");
  _ex_COLOR(); // !COLOR
  Push(0); // 0
  Push(1); // 1
  UNK_0xe9b3(); // UNK_0xe9b3
  PRINT("STUNNER", 7); // (.")
  Push(0); // 0
  Push(2); // 2
  UNK_0xe9b3(); // UNK_0xe9b3
  PRINT("LASER", 5); // (.")
  Push(cc__5); // 5
  Push(cc__6); // 6
  UNK_0xe9b3(); // UNK_0xe9b3
  PRINT("CHOOSE WEAPON ^\  RETURN= AIM", 29); // (.")
  Push(0x5bc4); // pointer to WTOP
  Push(Read16(Pop())); // @
  Push(cc__7); // 7
  _dash_(); // -
  UNK_0xf37b(); // UNK_0xf37b
}


// ================================================
// 0xf433: WORD 'UNK_0xf435' codep=0x1d29 parp=0xf435
// ================================================
// 0xf435: db 0x3a 0x20 ': '

// ================================================
// 0xf437: WORD 'UNK_0xf439' codep=0x224c parp=0xf439
// ================================================

void UNK_0xf439() // UNK_0xf439
{
  Push(0x5bc4); // pointer to WTOP
  Push(Read16(Pop())); // @
  Push(0xf435); // pointer to UNK_0xf435
  Push(Read16(Pop())); // @
  Push(cc__7); // 7
  Push(Pop() * Pop()); // *
  _dash_(); // -
  UNK_0xf37b(); // UNK_0xf37b
}


// ================================================
// 0xf44b: WORD 'UNK_0xf44d' codep=0x224c parp=0xf44d
// ================================================

void UNK_0xf44d() // UNK_0xf44d
{
  UNK_0xf439(); // UNK_0xf439
  Push(0xf435); // pointer to UNK_0xf435
  _plus__ex_(); // +!
  Push(0xf435); // pointer to UNK_0xf435
  Push(Read16(regsp)); // DUP
  Push(Read16(Pop())); // @
  Push(1); // 1
  MAX(); // MAX
  Push(2); // 2
  MIN(); // MIN
  SWAP(); // SWAP
  _st__ex__gt_(); // <!>
  UNK_0xf439(); // UNK_0xf439
}


// ================================================
// 0xf469: WORD 'DO.WEAPON' codep=0x224c parp=0xf477
// ================================================
// entry

void DO_dot_WEAPON() // DO.WEAPON
{
  UNK_0xf3b5(); // UNK_0xf3b5
  Push(1); // 1
  Push(0xf435); // pointer to UNK_0xf435
  _st__ex__gt_(); // <!>
  Push(0x60e8); // pointer to EYEXY
  _2_at_(); // 2@
  _gt_R(); // >R
  _gt_R(); // >R

  label4:
  XYSCAN(); // XYSCAN
  Push(1); // 1
  Push(0); // 0
  _2OVER(); // 2OVER
  D_eq_(); // D=
  if (Pop() == 0) goto label1;
  Pop(); Pop();// 2DROP
  Push(cc__dash_1); // -1
  UNK_0xf44d(); // UNK_0xf44d
  goto label2;

  label1:
  Push(cc__dash_1); // -1
  Push(0); // 0
  _2OVER(); // 2OVER
  D_eq_(); // D=
  if (Pop() == 0) goto label3;
  Pop(); Pop();// 2DROP
  Push(1); // 1
  UNK_0xf44d(); // UNK_0xf44d
  goto label2;

  label3:
  Pop(); // DROP
  Pop(); // DROP

  label2:
  _ask_TRIG(); // ?TRIG
  if (Pop() == 0) goto label4;
  Push(0xf435); // pointer to UNK_0xf435
  Push(Read16(Pop())); // @
  Push(Pop()-1); // 1-
  Push(0x626f); // pointer to TVEHICLE
  _at__gt_C_plus_S(); // @>C+S
  Push(Read16(regsp)); // DUP
  Push(Read16(regsp)); // DUP
  Push(0x6400); // IFIELD(UNK_0xe7ea)
  C_ex_(); // C!
  Push(Pop()+1); // 1+
  Push(0xfed4);
  Push(Pop() * Pop()); // *
  Push(0x63fa); // IFIELD(INST-QTY)
  _plus__ex_(); // +!
  ICLOSE(); // ICLOSE
  UNK_0xf1fc(); // UNK_0xf1fc
  Push(0x60e8); // pointer to EYEXY
  _2_at_(); // 2@
  Push(0x60f7); // pointer to WEAPXY
  _st_D_ex__gt_(); // <D!>
  UNK_0xf2ce(); // UNK_0xf2ce
  UNK_0xf439(); // UNK_0xf439
  R_gt_(); // R>
  R_gt_(); // R>
  Push(0x60e8); // pointer to EYEXY
  _st_D_ex__gt_(); // <D!>
}

// 0xf4f7: db 0x54 0x2e 0x56 0x2e 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x52 0x41 0x47 0x45 0x20 0x46 0x4f 0x52 0x20 0x46 0x55 0x4e 0x43 0x54 0x49 0x4f 0x4e 0x31 0x32 0x31 0x31 0xef 0x2a 0xb3 0xe0 0x90 0x16 0x49 0x54 0x45 0x4d 0x53 0x31 0x36 0x37 0x32 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x00 'T.V.___________________________________________RAGE FOR FUNCTION1211 *    ITEMS1672______________________ '
  