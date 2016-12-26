// ====== OVERLAY 'SHIPBUTTONS' ======
// store offset = 0xeda0
// overlay size   = 0x07c0

#include"../emul/cpu.h"
#include"../emul/starflt1.h"


// =================================
// =========== DICTIONARY ==========
// =================================
//      UNK_0xedb6  codep:0x1d29 parp:0xedb6 size:0x0007 C-string:'UNK_0xedb6'
//      UNK_0xedbf  codep:0x744d parp:0xedbf size:0x0003 C-string:'UNK_0xedbf'
//      UNK_0xedc4  codep:0x744d parp:0xedc4 size:0x0003 C-string:'UNK_0xedc4'
//      UNK_0xedc9  codep:0x744d parp:0xedc9 size:0x0065 C-string:'UNK_0xedc9'
//      UNK_0xee30  codep:0x224c parp:0xee30 size:0x003a C-string:'UNK_0xee30'
//      UNK_0xee6c  codep:0x224c parp:0xee6c size:0x004c C-string:'UNK_0xee6c'
//      UNK_0xeeba  codep:0x224c parp:0xeeba size:0x0026 C-string:'UNK_0xeeba'
//      UNK_0xeee2  codep:0x224c parp:0xeee2 size:0x0056 C-string:'UNK_0xeee2'
//      UNK_0xef3a  codep:0x224c parp:0xef3a size:0x0014 C-string:'UNK_0xef3a'
//      UNK_0xef50  codep:0x224c parp:0xef50 size:0x0042 C-string:'UNK_0xef50'
//       (GET-AUX)  codep:0x4a4f parp:0xefa0 size:0x0082 C-string:'_ro_GET_dash_AUX_rc_'
//      1.1BTN.XEQ  codep:0x4a4f parp:0xf031 size:0x0140 C-string:'_1_dot_1BTN_dot_XEQ'
//      >DISEMBARK  codep:0x4a4f parp:0xf180 size:0x0092 C-string:'_gt_DISEMBARK'
//        1BTN.XEQ  codep:0x4a4f parp:0xf21f size:0x0038 C-string:'_1BTN_dot_XEQ'
//        2BTN.XEQ  codep:0x4a4f parp:0xf264 size:0x005a C-string:'_2BTN_dot_XEQ'
//        3BTN.XEQ  codep:0x4a4f parp:0xf2cb size:0x002c C-string:'_3BTN_dot_XEQ'
//        4BTN.XEQ  codep:0x4a4f parp:0xf304 size:0x0020 C-string:'_4BTN_dot_XEQ'
//        6BTN.XEQ  codep:0x4a4f parp:0xf331 size:0x0098 C-string:'_6BTN_dot_XEQ'
//        0BTN.XEQ  codep:0x4a4f parp:0xf3d6 size:0x0026 C-string:'_0BTN_dot_XEQ'
//      UNK_0xf3fe  codep:0x224c parp:0xf3fe size:0x001a C-string:'UNK_0xf3fe'
//      UNK_0xf41a  codep:0x224c parp:0xf41a size:0x0084 C-string:'UNK_0xf41a'
//      UNK_0xf4a0  codep:0x224c parp:0xf4a0 size:0x000c C-string:'UNK_0xf4a0'
//            >FLT  codep:0x224c parp:0xf4b5 size:0x0000 C-string:'_gt_FLT'

// =================================
// =========== VARIABLES ===========
// =================================
unsigned char UNK_0xedb6[7] = {0x00, 0x00, 0x4d, 0x74, 0x14, 0x45, 0x04}; // UNK_0xedb6



// 0xedb2: db 0x78 0x00 'x '

// ================================================
// 0xedb4: WORD 'UNK_0xedb6' codep=0x1d29 parp=0xedb6
// ================================================
// 0xedb6: db 0x00 0x00 0x4d 0x74 0x14 0x45 0x04 '  Mt E '

// ================================================
// 0xedbd: WORD 'UNK_0xedbf' codep=0x744d parp=0xedbf
// ================================================
// 0xedbf: db 0x14 0x34 0x0f ' 4 '

// ================================================
// 0xedc2: WORD 'UNK_0xedc4' codep=0x744d parp=0xedc4
// ================================================
// 0xedc4: db 0x11 0x11 0x12 '   '

// ================================================
// 0xedc7: WORD 'UNK_0xedc9' codep=0x744d parp=0xedc9
// ================================================
// 0xedc9: db 0x10 0x0b 0x0f 0x4c 0x22 0x5d 0x17 0xf3 0xbe 0xce 0x84 0x90 0x16 0x4c 0x22 0x5d 0x17 0x2b 0xbe 0xce 0x84 0x90 0x16 0x4c 0x22 0x5d 0x17 0x8c 0xc4 0xce 0x84 0x90 0x16 0x4c 0x22 0xc2 0x51 0xf2 0x79 0xb8 0xed 0x92 0x0c 0x41 0x0e 0x9b 0x3b 0xf5 0x12 0xfa 0x15 0x0e 0x00 0x5d 0x17 0x4e 0xcb 0xce 0x84 0x5d 0x17 0xee 0x02 0xef 0x2a 0x73 0x3b 0xf5 0x12 0xfa 0x15 0x0e 0x00 0x5d 0x17 0x66 0xcb 0xce 0x84 0x5d 0x17 0xee 0x02 0xef 0x2a 0xc9 0x79 0x90 0x16 0x4c 0x22 0xcf 0xa1 0xa1 0x5c 0x37 0x3a 0xcf 0xa1 0x90 0x16 '   L"]       L"] +     L"]       L" Q y    A  ;      ] N   ]    *s;      ] f   ]    * y  L"   \7:    '

// ================================================
// 0xee2e: WORD 'UNK_0xee30' codep=0x224c parp=0xee30
// ================================================

void UNK_0xee30() // UNK_0xee30
{
  POS_dot_(); // POS.
  Push(0x000e);
  SetColor("GREY1");
  POLY_dash_ERASE_dash_TEXT(); // POLY-ERASE-TEXT
  _gt_1FONT(); // >1FONT
  SetColor("BLACK");
  SetColor("GREY2");
  SetColor("DK-BLUE");
  _ask_MRC(); // ?MRC
  _ex_COLOR(); // !COLOR
}

// 0xee48: db 0x4c 0x22 0x5d 0x17 0x64 0x00 0x5d 0x17 0xf4 0x01 0x83 0x3b 0x73 0x3b 0x5d 0x17 0x64 0x00 0x5d 0x17 0xf4 0x01 0x73 0x3b 0xf0 0xa1 0x5d 0x17 0x96 0x00 0xef 0x2a 0x90 0x16 'L"] d ]    ;s;] d ]   s;  ]    *  '

// ================================================
// 0xee6a: WORD 'UNK_0xee6c' codep=0x224c parp=0xee6c
// ================================================

void UNK_0xee6c() // UNK_0xee6c
{
  Push(0x0010);
  Push(0x0041);
  UNK_0xee30(); // UNK_0xee30
  Push(0x003a);
  Push(0x548f); // pointer to FILE#
  _ex__3(); // !_3
  Push(0x549d); // pointer to RECORD#
  OFF(); // OFF
  Push(Pop()-1); // 1-
  Push(Read16(regsp)); // DUP
  Push(0x000c);
  Push(Pop() * Pop()); // *
  LoadData("1BTN"); // from 'BUTTONS     '
  Push(Pop() + Pop()); // +
  Push(0x000c);
  Exec(TYPE); // call of word 0x2690 '(TYPE)'
  Push(0x0010);
  Push(0x003b);
  UNK_0xee30(); // UNK_0xee30
  Push2Words("*ASSIGN-CREW");
  _gt_C_plus_S(); // >C+S
  Push(cc__3); // 3
  Push(Pop() * Pop()); // *
  Push(0x6400); // IFIELD(UNK_0xedc4)
  Push(Pop() + Pop()); // +
  _at__gt_C_plus_S(); // @>C+S
  Push(0x63fa); // IFIELD(UNK_0xedc9)
  _do__dot_(); // $.
  CDROP(); // CDROP
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xeeb8: WORD 'UNK_0xeeba' codep=0x224c parp=0xeeba
// ================================================

void UNK_0xeeba() // UNK_0xeeba
{
  Push(0x0010);
  Push(0x0041);
  UNK_0xee30(); // UNK_0xee30
  PRINT("ISS", 3); // (.")
  Push(0x0010);
  Push(0x003b);
  UNK_0xee30(); // UNK_0xee30
  Push2Words("*SHIP");
  _gt_C_plus_S(); // >C+S
  Push(0x6423); // IFIELD(UNK_0xedbf)
  _do__dot_(); // $.
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xeee0: WORD 'UNK_0xeee2' codep=0x224c parp=0xeee2
// ================================================

void UNK_0xeee2() // UNK_0xeee2
{
  Push(Read16(regsp)); // DUP
  Push(0); // 0
  Push(cc__7); // 7
  WITHIN(); // WITHIN
  if (Pop() == 0) goto label1;
  Push(Read16(regsp)); // DUP
  if (Pop() == 0) Push(1); else Push(0); // 0=
  if (Pop() == 0) goto label2;
  UNK_0xeeba(); // UNK_0xeeba
  goto label1;

  label2:
  Push(Read16(regsp)); // DUP
  UNK_0xee6c(); // UNK_0xee6c

  label1:
  _dot_BTN_dash_TE(); // .BTN-TE
}

// 0xef04: db 0x4c 0x22 0xfc 0x7a 0xa1 0x5c 0x76 0x6d 0xfc 0x7a 0x41 0x0e 0xa1 0x5b 0x76 0x6d 0xfc 0x7a 0x41 0x0e 0xaf 0x5c 0x76 0x6d 0x9c 0xa8 0xb4 0xed 0xae 0x0b 0x89 0x12 0xfa 0x15 0x0e 0x00 0xe0 0xee 0x6f 0x4f 0xf2 0x0e 0x28 0xa8 0x60 0x16 0x04 0x00 0xde 0x0d 0x90 0x16 'L" z \vm zA  [vm zA  \vm              oO  ( `       '

// ================================================
// 0xef38: WORD 'UNK_0xef3a' codep=0x224c parp=0xef3a
// ================================================

void UNK_0xef3a() // UNK_0xef3a
{
  Push(0x5cb1); // pointer to BTN-REC
  Push(Read16(Pop())); // @
  _gt_V(); // >V
  Push(0x5ba3); // pointer to THIS-BU
  Push(Read16(Pop())); // @
  _gt_V(); // >V
  Push(0x5ca3); // pointer to 'BUTTON
  Push(Read16(Pop())); // @
  _gt_V(); // >V
}


// ================================================
// 0xef4e: WORD 'UNK_0xef50' codep=0x224c parp=0xef50
// ================================================

void UNK_0xef50() // UNK_0xef50
{
  UNK_0xef3a(); // UNK_0xef3a
  UNK_0xeee2(); // UNK_0xeee2
  INIT_dash_BU(); // INIT-BU
  Push(0x5ca3); // pointer to 'BUTTON
  _ex__3(); // !_3
}

// 0xef5c: db 0x4c 0x22 0xa1 0x5b 0xae 0x0b 0x7a 0xa8 0x90 0x16 0x4c 0x22 0xed 0xa9 0x32 0x0e 0xc8 0x0d 0xfa 0x15 0x04 0x00 0x74 0xab 0x50 0xaa 0xfa 0x15 0x10 0x00 0x6f 0x4f 0x5c 0xef 0xa1 0x5b 0xae 0x0b 0x22 0xee 0x0a 0x4f 0x5c 0xef 0x90 0x16 0x4c 0x22 0x0a 0x4f 0xa4 0xa7 0x90 0x16 'L" [  z   L"  2       t P     oO\  [  "  O\   L" O    '

// ================================================
// 0xef92: WORD '(GET-AUX)' codep=0x4a4f parp=0xefa0
// ================================================
// 0xefa0: db 0x07 0x00 0x8c 0xef 0x01 0x00 0xce 0xed 0x02 0x00 0xce 0xed 0x03 0x00 0xd8 0xed 0x04 0x00 0xe2 0xed 0x05 0x00 0x2d 0xcc 0x06 0x00 0x2d 0xcc 0x08 0x00 0xe2 0xed 0x4c 0x22 0x0a 0x4f 0xd8 0xa8 0x5d 0x17 0x3e 0xcc 0xce 0x84 0x7f 0x5d 0xae 0x0b 0x9e 0xef 0xaf 0x5c 0xae 0x0b 0xe0 0xee 0x6f 0x4f 0xa1 0x5b 0xae 0x0b 0x28 0xa8 0x90 0x16 0x4c 0x22 0x7f 0x5d 0xae 0x0b 0x9b 0x3b 0x5f 0x12 0xfa 0x15 0x04 0x00 0xe0 0xed 0x5d 0x17 0xa2 0xc4 0xce 0x84 0x90 0x16 0x4c 0x22 0x83 0x3b 0x5d 0x17 0xef 0xbd 0xce 0x84 0xfa 0x15 0x1a 0x00 0x5d 0x17 0x42 0xd3 0xce 0x84 0xf1 0x58 0xae 0x0b 0x78 0x12 0xfa 0x15 0x0a 0x00 0x5d 0x17 0x14 0xd2 0xce 0x84 0x07 0x13 0x90 0x16 '                      -   -     L" O  ] >   ]     \    oO [  (   L"]   ;_       ]       L" ;]         ] B    X  x     ]         '

// ================================================
// 0xf022: WORD '1.1BTN.XEQ' codep=0x4a4f parp=0xf031
// ================================================
// 0xf031: db 0x02 0x00 0x09 0x13 0x00 0x00 0xe4 0xef 0x01 0x00 0xfc 0xef 0x4c 0x22 0x28 0xa5 0x39 0x3f 0x23 0x52 0x45 0x50 0x4f 0x52 0x54 0x20 0x54 0x4f 0x20 0x4f 0x50 0x45 0x52 0x41 0x54 0x49 0x4f 0x4e 0x53 0x20 0x46 0x4f 0x52 0x20 0x45 0x56 0x41 0x4c 0x55 0x41 0x54 0x49 0x4f 0x4e 0x47 0xa5 0x5d 0x17 0xd0 0x07 0xef 0x2a 0xcc 0x5c 0xb7 0x6d 0x90 0x16 0x4c 0x22 0xea 0xed 0x5d 0x54 0xae 0x0b 0x07 0x13 0x46 0x5c 0xae 0x0b 0x3e 0x13 0xfa 0x15 0x04 0x00 0x3d 0xf0 0x07 0x13 0xf2 0x0e 0x07 0x13 0x90 0x16 0x4c 0x22 0x5d 0x54 0xae 0x0b 0xfa 0x15 0x65 0x00 0x28 0xa5 0x81 0xa1 0x4a 0x55 0xc5 0x6d 0x38 0x5c 0xb7 0x6d 0xea 0xed 0x39 0x3f 0x1a 0x53 0x54 0x41 0x4e 0x44 0x42 0x59 0x2e 0x2e 0x2e 0x53 0x43 0x41 0x4e 0x4e 0x49 0x4e 0x47 0x20 0x50 0x4c 0x41 0x4e 0x45 0x54 0x2e 0x47 0xa5 0x99 0x5e 0xae 0x0b 0xac 0x3b 0x5f 0x12 0xfa 0x15 0x0c 0x00 0x6e 0x55 0xb7 0x6d 0x5d 0x17 0xfa 0xcc 0xce 0x84 0x5d 0x17 0xbf 0xd0 0xce 0x84 0x5d 0x17 0x4a 0xbd 0xce 0x84 0x1f 0xa9 0x32 0x0e 0x38 0x5c 0xc5 0x6d 0xc0 0xef 0x5d 0x17 0xe1 0xc3 0xce 0x84 0x60 0x16 0x42 0x00 0x28 0xa5 0x39 0x3f 0x1e 0x54 0x48 0x45 0x20 0x53 0x48 0x49 0x50 0x20 0x49 0x53 0x20 0x4e 0x4f 0x20 0x4c 0x4f 0x4e 0x47 0x45 0x52 0x20 0x45 0x51 0x55 0x49 0x50 0x50 0x45 0x44 0x47 0xa5 0x39 0x3f 0x16 0x57 0x49 0x54 0x48 0x20 0x41 0x20 0x54 0x45 0x52 0x52 0x41 0x49 0x4e 0x20 0x56 0x45 0x48 0x49 0x43 0x4c 0x45 0x47 0xa5 0xb4 0xed 0xc5 0x6d 0x90 0x16 0x4c 0x22 0x28 0xa5 0x81 0xa1 0xdc 0x1b 0x1c 0x57 0x45 0x20 0x43 0x41 0x4e 0x27 0x54 0x20 0x44 0x49 0x53 0x45 0x4d 0x42 0x41 0x52 0x4b 0x20 0x49 0x4e 0x20 0x53 0x50 0x41 0x43 0x45 0x21 0xb4 0xed 0xc5 0x6d 0x90 0x16 '            L"( 9?#REPORT TO OPERATIONS FOR EVALUATIONG ]    * \ m  L"  ]T    F\  >     =         L"]T    e (   JU m8\ m  9? STANDBY...SCANNING PLANET.G  ^   ;_     nU m]     ]     ] J     2 8\ m  ]     ` B ( 9? THE SHIP IS NO LONGER EQUIPPEDG 9? WITH A TERRAIN VEHICLEG    m  L"(      WE CAN'T DISEMBARK IN SPACE!   m  '

// ================================================
// 0xf171: WORD '>DISEMBARK' codep=0x4a4f parp=0xf180
// ================================================
// 0xf180: db 0x02 0x00 0x48 0xf1 0x05 0x00 0x77 0xf0 0x00 0x00 0x95 0xf0 0x4c 0x22 0x5d 0x54 0xae 0x0b 0x07 0x13 0x46 0x5c 0xae 0x0b 0x3e 0x13 0x5a 0x5a 0xae 0x0b 0x83 0x3b 0x5f 0x12 0xf5 0x12 0xfa 0x15 0x08 0x00 0x3d 0xf0 0x60 0x16 0x32 0x00 0x5d 0x17 0x04 0xd2 0xce 0x84 0x5d 0x17 0x56 0xbf 0x22 0x5f 0x76 0x6d 0xfa 0x15 0x1a 0x00 0x48 0xee 0xe0 0xed 0x5d 0x17 0x06 0xef 0x5d 0x17 0x68 0xef 0x5d 0x17 0x31 0xf0 0x93 0x3b 0x5d 0x17 0x50 0xef 0x01 0xb1 0x2e 0x0f 0x20 0x0f 0xba 0xaa 0x90 0x16 0x4c 0x22 0x5d 0x17 0x4a 0xbd 0xce 0x84 0xb4 0xed 0xb7 0x6d 0x5a 0x5a 0xae 0x0b 0x7e 0xf1 0x90 0x16 0x4c 0x22 0x5d 0x17 0xe4 0xd1 0xce 0x84 0x90 0x16 0x4c 0x22 0x5d 0x17 0x24 0xd2 0xce 0x84 0x90 0x16 0x4c 0x22 0x5d 0x17 0xf4 0xd1 0xce 0x84 0x90 0x16 '  H   w     L"]T    F\  > ZZ   ;_       = ` 2 ]     ] V "_vm    H   ]   ] h ] 1  ;] P   .       L"] J      mZZ  ~   L"]       L"] $     L"]       '

// ================================================
// 0xf212: WORD '1BTN.XEQ' codep=0x4a4f parp=0xf21f
// ================================================
// 0xf21f: db 0x05 0x00 0x09 0x13 0x00 0x00 0x8e 0xf1 0x01 0x00 0xe2 0xf1 0x02 0x00 0xf6 0xf1 0x03 0x00 0x00 0xf2 0x04 0x00 0x0a 0xf2 0x4c 0x22 0x48 0xee 0x5d 0x17 0x31 0xbf 0xce 0x84 0x90 0x16 0x4c 0x22 0x2e 0x0f 0x5d 0x17 0xba 0xd2 0xce 0x84 0x90 0x16 0x4c 0x22 0x48 0xee 0xcc 0xed 0x90 0x16 '                        L"H ] 1     L". ]       L"H     '

// ================================================
// 0xf257: WORD '2BTN.XEQ' codep=0x4a4f parp=0xf264
// ================================================
// 0xf264: db 0x03 0x00 0x09 0x13 0x00 0x00 0x39 0xf2 0x01 0x00 0x45 0xf2 0x02 0x00 0x51 0xf2 0x4c 0x22 0x5d 0x17 0xbf 0xcb 0xce 0x84 0x1f 0xa9 0x32 0x0e 0x90 0x16 0x4c 0x22 0x5d 0x17 0xfa 0xd2 0xce 0x84 0xfa 0x15 0x04 0x00 0xc0 0xef 0x90 0x16 0x4c 0x22 0x5d 0x17 0x3e 0xcb 0xce 0x84 0x90 0x16 0x4c 0x22 0x5d 0x17 0x2e 0xcb 0xce 0x84 0x73 0x3b 0x73 0x3b 0xba 0xaa 0x90 0x16 0x4c 0x22 0xe5 0x5a 0xb7 0x6d 0x06 0x5e 0xae 0x0b 0xce 0x84 0xe5 0x5a 0xc5 0x6d 0x90 0x16 '      9   E   Q L"]       2   L"]             L"] >     L"] .   s;s;    L" Z m ^     Z m  '

// ================================================
// 0xf2be: WORD '3BTN.XEQ' codep=0x4a4f parp=0xf2cb
// ================================================
// 0xf2cb: db 0x05 0x00 0x09 0x13 0x00 0x00 0x76 0xf2 0x01 0x00 0x84 0xf2 0x02 0x00 0x94 0xf2 0x03 0x00 0x9e 0xf2 0x04 0x00 0xae 0xf2 0x4c 0x22 0x48 0xee 0xd6 0xed 0x90 0x16 0x4c 0x22 0x48 0xee 0x5d 0x17 0x3b 0xbe 0xce 0x84 0x90 0x16 '      v                 L"H     L"H ] ;     '

// ================================================
// 0xf2f7: WORD '4BTN.XEQ' codep=0x4a4f parp=0xf304
// ================================================
// 0xf304: db 0x02 0x00 0x09 0x13 0x00 0x00 0xe5 0xf2 0x01 0x00 0xed 0xf2 0x4c 0x22 0x5d 0x17 0x66 0xd2 0xce 0x84 0x90 0x16 0x4c 0x22 0x5d 0x17 0x79 0xd2 0xce 0x84 0x90 0x16 '            L"] f     L"] y     '

// ================================================
// 0xf324: WORD '6BTN.XEQ' codep=0x4a4f parp=0xf331
// ================================================
// 0xf331: db 0x02 0x00 0x09 0x13 0x00 0x00 0x12 0xf3 0x01 0x00 0x1c 0xf3 0x4c 0x22 0x5d 0x17 0x06 0xef 0x5d 0x17 0x68 0xef 0x5d 0x17 0x1f 0xf2 0x2e 0x0f 0x5d 0x17 0x50 0xef 0x01 0xb1 0xb4 0xed 0xc5 0x6d 0x90 0x16 0x4c 0x22 0x5d 0x17 0x06 0xef 0x5d 0x17 0x68 0xef 0x5d 0x17 0x64 0xf2 0x3d 0x0f 0x5d 0x17 0x50 0xef 0x01 0xb1 0x90 0x16 0x4c 0x22 0x5d 0x17 0x06 0xef 0x5d 0x17 0x68 0xef 0x5d 0x17 0xcb 0xf2 0x73 0x3b 0x5d 0x17 0x50 0xef 0x01 0xb1 0x90 0x16 0x4c 0x22 0x5d 0x17 0x06 0xef 0x5d 0x17 0x68 0xef 0x5d 0x17 0x04 0xf3 0x7b 0x3b 0x5d 0x17 0x50 0xef 0x01 0xb1 0x90 0x16 0x4c 0x22 0x83 0x3b 0x6a 0xee 0x5d 0x17 0xa8 0xc1 0xce 0x84 0xb8 0xee 0x90 0x16 0x4c 0x22 0x5d 0x17 0x06 0xef 0x5d 0x17 0x68 0xef 0x5d 0x17 0x31 0xf3 0x8b 0x3b 0x5d 0x17 0x50 0xef 0x01 0xb1 0x90 0x16 '            L"]   ] h ]   . ] P      m  L"]   ] h ] d = ] P     L"]   ] h ]   s;] P     L"]   ] h ]   {;] P     L" ;j ]         L"]   ] h ] 1  ;] P     '

// ================================================
// 0xf3c9: WORD '0BTN.XEQ' codep=0x4a4f parp=0xf3d6
// ================================================
// 0xf3d6: db 0x05 0x00 0xb3 0xf3 0x00 0x00 0x3f 0xf3 0x01 0x00 0x5b 0xf3 0x02 0x00 0x73 0xf3 0x03 0x00 0x8b 0xf3 0x04 0x00 0xa3 0xf3 0x4c 0x22 0xfc 0x7a 0xfc 0x7a 0xfc 0x7a 0x32 0x0e 0xde 0x0d 0x90 0x16 '      ?   [   s         L" z z z2     '

// ================================================
// 0xf3fc: WORD 'UNK_0xf3fe' codep=0x224c parp=0xf3fe
// ================================================

void UNK_0xf3fe() // UNK_0xf3fe
{
  Push(0xf3f0);
  Push(0xef68);
  Push(0xf3d6);
  Push(0); // 0
  Push(0xef50);
  DOTASKS(UNK_0xef50, UNK_0x0f20, UNK_0x175d);
  Push(0xedb6); // pointer to UNK_0xedb6
  OFF(); // OFF
}


// ================================================
// 0xf418: WORD 'UNK_0xf41a' codep=0x224c parp=0xf41a
// ================================================

void UNK_0xf41a() // UNK_0xf41a
{
  CTINIT(); // CTINIT
  CTERASE(); // CTERASE

  UNK_0x3f3b("SHIP COMPUTER ACTIVATED");
  _dot_TTY(); // .TTY
  Push(0xbef3);
  MODULE(); // MODULE
  CTINIT(); // CTINIT

  UNK_0x3f3b("PRE-LAUNCH PROCEDURES COMPLETE");
  _dot_TTY(); // .TTY
  Push(0x00fa);
  MS(); // MS

  UNK_0x3f3b("STANDING BY TO INITIATE LAUNCH");
  _dot_TTY(); // .TTY
  Push(0x00fa);
  MS(); // MS
  TTY_dash_SCR(); // TTY-SCR
  TTY_dash_SCR(); // TTY-SCR
  TTY_dash_SCR(); // TTY-SCR
  TTY_dash_SCR(); // TTY-SCR
}


// ================================================
// 0xf49e: WORD 'UNK_0xf4a0' codep=0x224c parp=0xf4a0
// ================================================

void UNK_0xf4a0() // UNK_0xf4a0
{
  Push(0xd1a8);
  MODULE(); // MODULE
  V_gt_DISPLAY(); // V>DISPLAY
  UNK_0xf41a(); // UNK_0xf41a
}


// ================================================
// 0xf4ac: WORD '>FLT' codep=0x224c parp=0xf4b5
// ================================================
// entry

void _gt_FLT() // >FLT
{
  Push(0x001a);
  Push(0x548f); // pointer to FILE#
  _ex__3(); // !_3
  Push(cc__6); // 6
  Push(0x549d); // pointer to RECORD#
  _ex__3(); // !_3
  LoadData("ELEM-VAL"); // from 'ELEMENT     '
  Push(Read16(Pop())); // @
  Push(Pop()*2); // 2*
  LoadData("ELEM-VAL"); // from 'ELEMENT     '
  _ex__3(); // !_3
  SET_dash_CURRENT(); // SET-CURRENT
  TIME(); // TIME
  _2_at_(); // 2@
  _2DUP(); // 2DUP
  Push(0x6136); // pointer to NAV-TIME
  D_ex_(); // D!
  Push(0x6126); // pointer to ENC-TIME
  D_ex_(); // D!
  Push(0x5e66); // pointer to STAR-HR
  Push(Read16(Pop())); // @
  Push(0x5343); // pointer to TRAK-HR
  _ex__3(); // !_3
  CFIGARRAYS(); // CFIGARRAYS
  SetColor("GREY2");
  _ro_SHIP_dash_C(); // (SHIP-C
  Push(0x5a5c); // pointer to CONTEXT-ID#
  Push(Read16(Pop())); // @
  Push(cc__5); // 5
  _eq_(); // =
  if (Pop() == 0) goto label1;
  UNK_0xf4a0(); // UNK_0xf4a0

  label1:
  Push(0xedb6); // pointer to UNK_0xedb6
  OFF(); // OFF
  UNK_0xf3fe(); // UNK_0xf3fe
  Push(0x001a);
  Push(0x548f); // pointer to FILE#
  _ex__3(); // !_3
  Push(cc__6); // 6
  Push(0x549d); // pointer to RECORD#
  _ex__3(); // !_3
  LoadData("ELEM-VAL"); // from 'ELEMENT     '
  Push(Read16(Pop())); // @
  Push(Pop()>>1); // 2/
  LoadData("ELEM-VAL"); // from 'ELEMENT     '
  _ex__3(); // !_3
  SET_dash_CURRENT(); // SET-CURRENT
}

// 0xf51b: db 0x42 0x54 0x4e 0x2d 0x56 0x4f 0x43 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x20 0x66 0x6f 0x72 0x20 0x42 0x55 0x54 0x54 0x4f 0x4e 0x53 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x29 0x32 0x31 0x32 0x30 0x2d 0x00 'BTN-VOC_________________________ for BUTTONS-------------------)2120- '
  