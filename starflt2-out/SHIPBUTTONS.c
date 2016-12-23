// ====== OVERLAY 'SHIPBUTTONS' ======
// store offset = 0xebe0
// overlay size   = 0x0980

#include"cpu.h"
#include"starflt2.h"


// =================================
// =========== DICTIONARY ==========
// =================================
// 1869:      UNK_0x3f09  codep:0x224c parp:0x3f09 size:0xaceb C-string:'UNK_0x3f09'
// 1870:      UNK_0xebf6  codep:0x1d29 parp:0xebf6 size:0x0286 C-string:'UNK_0xebf6'
// 1871:       (GET-AUX)  codep:0x4b3b parp:0xee8a size:0x0082 C-string:'_ro_GET_dash_AUX_rc_'
// 1872:      1.1BTN.XEQ  codep:0x4b3b parp:0xef1b size:0x0100 C-string:'_1_dot_1BTN_dot_XEQ'
// 1873:      >DISEMBARK  codep:0x4b3b parp:0xf02a size:0x00ac C-string:'_gt_DISEMBARK'
// 1874:        1BTN.XEQ  codep:0x4b3b parp:0xf0e3 size:0x00ad C-string:'_1BTN_dot_XEQ'
// 1875:        2BTN.XEQ  codep:0x4b3b parp:0xf19d size:0x005e C-string:'_2BTN_dot_XEQ'
// 1876:        3BTN.XEQ  codep:0x4b3b parp:0xf208 size:0x0036 C-string:'_3BTN_dot_XEQ'
// 1877:        4BTN.XEQ  codep:0x4b3b parp:0xf24b size:0x0050 C-string:'_4BTN_dot_XEQ'
// 1878:        6BTN.XEQ  codep:0x4b3b parp:0xf2a8 size:0x0098 C-string:'_6BTN_dot_XEQ'
// 1879:      [0BTN.XEQ]  codep:0x4b3b parp:0xf34f size:0x010f C-string:'_bo_0BTN_dot_XEQ_bc_'
// 1880:      UNK_0xf460  codep:0x224c parp:0xf460 size:0x001a C-string:'UNK_0xf460'
// 1881:      UNK_0xf47c  codep:0x224c parp:0xf47c size:0x0084 C-string:'UNK_0xf47c'
// 1882:      UNK_0xf502  codep:0x224c parp:0xf502 size:0x000c C-string:'UNK_0xf502'
// 1883:            >FLT  codep:0x224c parp:0xf517 size:0x0000 C-string:'_gt_FLT'

// =================================
// =========== VARIABLES ===========
// =================================
unsigned char UNK_0xebf6[646] = {0x3a, 0x20, 0x20, 0x74, 0x14, 0x45, 0x04, 0x20, 0x74, 0x14, 0x34, 0x0f, 0x20, 0x74, 0x11, 0x11, 0x12, 0x20, 0x74, 0x10, 0x0b, 0x0f, 0x94, 0x73, 0x20, 0x16, 0x01, 0x17, 0x49, 0x6c, 0x4c, 0x22, 0x5d, 0x17, 0x90, 0xc0, 0xd9, 0x84, 0x90, 0x16, 0x4c, 0x22, 0x5d, 0x17, 0x98, 0xbc, 0xd9, 0x84, 0x90, 0x16, 0x4c, 0x22, 0x5d, 0x17, 0xef, 0xc4, 0xd9, 0x84, 0x90, 0x16, 0x4c, 0x22, 0x2e, 0x53, 0x1f, 0x7a, 0xf8, 0xeb, 0x92, 0x0c, 0x41, 0x0e, 0xa7, 0x3b, 0xf5, 0x12, 0xfa, 0x15, 0x0e, 0x00, 0x5d, 0x17, 0x36, 0xc6, 0xd9, 0x84, 0x5d, 0x17, 0xee, 0x02, 0xef, 0x2a, 0x7f, 0x3b, 0xf5, 0x12, 0xfa, 0x15, 0x0e, 0x00, 0x5d, 0x17, 0x4e, 0xc6, 0xd9, 0x84, 0x5d, 0x17, 0xee, 0x02, 0xef, 0x2a, 0xdf, 0x79, 0x90, 0x16, 0x4c, 0x22, 0x8c, 0x9c, 0x30, 0x5e, 0x37, 0x3a, 0x8c, 0x9c, 0x90, 0x16, 0x4c, 0x22, 0x7b, 0x9a, 0x5d, 0x17, 0x0d, 0x00, 0xf7, 0x4f, 0x00, 0x9e, 0x7e, 0x8a, 0xa7, 0x4f, 0x02, 0x50, 0xb4, 0x4f, 0x1c, 0xa2, 0x9d, 0x86, 0x90, 0x16, 0x4c, 0x22, 0x5d, 0x17, 0x64, 0x00, 0x5d, 0x17, 0xf4, 0x01, 0x8f, 0x3b, 0x7f, 0x3b, 0x5d, 0x17, 0x64, 0x00, 0x5d, 0x17, 0xf4, 0x01, 0x7f, 0x3b, 0xad, 0x9c, 0x5d, 0x17, 0x96, 0x00, 0xef, 0x2a, 0x90, 0x16, 0x4c, 0x22, 0xd2, 0x9f, 0x07, 0x3f, 0x23, 0x52, 0x45, 0x50, 0x4f, 0x52, 0x54, 0x20, 0x54, 0x4f, 0x20, 0x4f, 0x50, 0x45, 0x52, 0x41, 0x54, 0x49, 0x4f, 0x4e, 0x53, 0x20, 0x46, 0x4f, 0x52, 0x20, 0x45, 0x56, 0x41, 0x4c, 0x55, 0x41, 0x54, 0x49, 0x4f, 0x4e, 0xf1, 0x9f, 0x5d, 0x17, 0xd0, 0x07, 0xef, 0x2a, 0x5b, 0x5e, 0x57, 0x6d, 0x90, 0x16, 0x4c, 0x22, 0x5d, 0x17, 0x10, 0x00, 0x5d, 0x17, 0x41, 0x00, 0x76, 0xec, 0x5d, 0x17, 0x3a, 0x00, 0x11, 0x56, 0x16, 0x6d, 0x1f, 0x56, 0x65, 0x6d, 0xf6, 0x0f, 0x41, 0x0e, 0x5d, 0x17, 0x0c, 0x00, 0xb3, 0x0f, 0xb5, 0x78, 0x72, 0x0f, 0x5d, 0x17, 0x0c, 0x00, 0xe6, 0x06, 0x5d, 0x17, 0x10, 0x00, 0x5d, 0x17, 0x3b, 0x00, 0x76, 0xec, 0x20, 0x53, 0x1f, 0x7a, 0x7f, 0x3b, 0xb3, 0x0f, 0x02, 0xec, 0x72, 0x0f, 0x2f, 0x7a, 0x07, 0xec, 0xee, 0x9d, 0xa7, 0x75, 0xdf, 0x79, 0x90, 0x16, 0x4c, 0x22, 0x5d, 0x17, 0x10, 0x00, 0x5d, 0x17, 0x41, 0x00, 0x76, 0xec, 0xdc, 0x1b, 0x03, 0x49, 0x53, 0x53, 0x5d, 0x17, 0x10, 0x00, 0x5d, 0x17, 0x3b, 0x00, 0x76, 0xec, 0x2e, 0x53, 0x1f, 0x7a, 0xfd, 0xeb, 0xee, 0x9d, 0xdf, 0x79, 0x90, 0x16, 0x4c, 0x22, 0x41, 0x0e, 0x20, 0x0f, 0x9f, 0x3b, 0x25, 0x40, 0xfa, 0x15, 0x14, 0x00, 0x41, 0x0e, 0x89, 0x12, 0xfa, 0x15, 0x08, 0x00, 0x38, 0xed, 0x60, 0x16, 0x06, 0x00, 0x41, 0x0e, 0xea, 0xec, 0x1a, 0xa7, 0x90, 0x16, 0x4c, 0x22, 0x29, 0x7b, 0x30, 0x5e, 0x16, 0x6d, 0x29, 0x7b, 0x41, 0x0e, 0x3b, 0x5d, 0x16, 0x6d, 0x29, 0x7b, 0x41, 0x0e, 0x3e, 0x5e, 0x16, 0x6d, 0x5a, 0xa3, 0xf4, 0xeb, 0xae, 0x0b, 0x89, 0x12, 0xfa, 0x15, 0x0e, 0x00, 0x60, 0xed, 0x0c, 0x50, 0xf2, 0x0e, 0xe6, 0xa2, 0x60, 0x16, 0x04, 0x00, 0xde, 0x0d, 0x90, 0x16, 0x4c, 0x22, 0x5d, 0x17, 0x37, 0x00, 0x5d, 0x17, 0x6b, 0xb7, 0xd9, 0x84, 0x76, 0x59, 0xae, 0x0b, 0x89, 0x12, 0xf5, 0x12, 0x90, 0x16, 0x4c, 0x22, 0x3e, 0x5e, 0xae, 0x0b, 0x12, 0x7b, 0x3b, 0x5d, 0xae, 0x0b, 0x12, 0x7b, 0x30, 0x5e, 0xae, 0x0b, 0x12, 0x7b, 0x90, 0x16, 0x4c, 0x22, 0xce, 0xed, 0x60, 0xed, 0x7c, 0xa3, 0x30, 0x5e, 0x16, 0x6d, 0x90, 0x16, 0x4c, 0x22, 0x11, 0x6c, 0x1f, 0x7a, 0x3f, 0x7a, 0x5d, 0x17, 0x0b, 0x00, 0x5d, 0x17, 0x0a, 0x00, 0x4c, 0x7e, 0xfa, 0x15, 0x20, 0x00, 0x3f, 0x7a, 0x5d, 0x17, 0x1a, 0x00, 0x5d, 0x17, 0x17, 0x00, 0x4c, 0x7e, 0xfa, 0x15, 0x08, 0x00, 0xc3, 0x51, 0x60, 0x16, 0x04, 0x00, 0xcf, 0x51, 0xdf, 0x79, 0x60, 0x16, 0x04, 0x00, 0xcf, 0x51, 0x3d, 0x0f, 0x0a, 0x7a, 0x90, 0x16, 0x4c, 0x22, 0x3b, 0x5d, 0xae, 0x0b, 0x38, 0xa3, 0x90, 0x16, 0x4c, 0x22, 0x97, 0xa5, 0x32, 0x0e, 0xc8, 0x0d, 0xfa, 0x15, 0x04, 0x00, 0x74, 0xa7, 0x2e, 0xa6, 0xfa, 0x15, 0x10, 0x00, 0x0c, 0x50, 0x2e, 0xee, 0x3b, 0x5d, 0xae, 0x0b, 0x6a, 0xec, 0xa7, 0x4f, 0x2e, 0xee, 0x90, 0x16, 0x4c, 0x22, 0xd0, 0x55, 0xae, 0x0b, 0x07, 0x13, 0xe0, 0x5d, 0xae, 0x0b, 0x3e, 0x13, 0xb8, 0xed, 0x3e, 0x13, 0xf2, 0xed, 0x3e, 0x13, 0x90, 0x16, 0x4c, 0x22, 0xa7, 0x4f, 0x76, 0xa2, 0x90, 0x16}; // UNK_0xebf6



// 0xebf2: db 0x97 0x00 '  '

// ================================================
// 0xebf4: WORD 'UNK_0xebf6' codep=0x1d29 parp=0xebf6
// ================================================
// 0xebf6: db 0x3a 0x20 0x20 0x74 0x14 0x45 0x04 0x20 0x74 0x14 0x34 0x0f 0x20 0x74 0x11 0x11 0x12 0x20 0x74 0x10 0x0b 0x0f 0x94 0x73 0x20 0x16 0x01 0x17 0x49 0x6c 0x4c 0x22 0x5d 0x17 0x90 0xc0 0xd9 0x84 0x90 0x16 0x4c 0x22 0x5d 0x17 0x98 0xbc 0xd9 0x84 0x90 0x16 0x4c 0x22 0x5d 0x17 0xef 0xc4 0xd9 0x84 0x90 0x16 0x4c 0x22 0x2e 0x53 0x1f 0x7a 0xf8 0xeb 0x92 0x0c 0x41 0x0e 0xa7 0x3b 0xf5 0x12 0xfa 0x15 0x0e 0x00 0x5d 0x17 0x36 0xc6 0xd9 0x84 0x5d 0x17 0xee 0x02 0xef 0x2a 0x7f 0x3b 0xf5 0x12 0xfa 0x15 0x0e 0x00 0x5d 0x17 0x4e 0xc6 0xd9 0x84 0x5d 0x17 0xee 0x02 0xef 0x2a 0xdf 0x79 0x90 0x16 0x4c 0x22 0x8c 0x9c 0x30 0x5e 0x37 0x3a 0x8c 0x9c 0x90 0x16 0x4c 0x22 0x7b 0x9a 0x5d 0x17 0x0d 0x00 0xf7 0x4f 0x00 0x9e 0x7e 0x8a 0xa7 0x4f 0x02 0x50 0xb4 0x4f 0x1c 0xa2 0x9d 0x86 0x90 0x16 0x4c 0x22 0x5d 0x17 0x64 0x00 0x5d 0x17 0xf4 0x01 0x8f 0x3b 0x7f 0x3b 0x5d 0x17 0x64 0x00 0x5d 0x17 0xf4 0x01 0x7f 0x3b 0xad 0x9c 0x5d 0x17 0x96 0x00 0xef 0x2a 0x90 0x16 0x4c 0x22 0xd2 0x9f 0x07 0x3f 0x23 0x52 0x45 0x50 0x4f 0x52 0x54 0x20 0x54 0x4f 0x20 0x4f 0x50 0x45 0x52 0x41 0x54 0x49 0x4f 0x4e 0x53 0x20 0x46 0x4f 0x52 0x20 0x45 0x56 0x41 0x4c 0x55 0x41 0x54 0x49 0x4f 0x4e 0xf1 0x9f 0x5d 0x17 0xd0 0x07 0xef 0x2a 0x5b 0x5e 0x57 0x6d 0x90 0x16 0x4c 0x22 0x5d 0x17 0x10 0x00 0x5d 0x17 0x41 0x00 0x76 0xec 0x5d 0x17 0x3a 0x00 0x11 0x56 0x16 0x6d 0x1f 0x56 0x65 0x6d 0xf6 0x0f 0x41 0x0e 0x5d 0x17 0x0c 0x00 0xb3 0x0f 0xb5 0x78 0x72 0x0f 0x5d 0x17 0x0c 0x00 0xe6 0x06 0x5d 0x17 0x10 0x00 0x5d 0x17 0x3b 0x00 0x76 0xec 0x20 0x53 0x1f 0x7a 0x7f 0x3b 0xb3 0x0f 0x02 0xec 0x72 0x0f 0x2f 0x7a 0x07 0xec 0xee 0x9d 0xa7 0x75 0xdf 0x79 0x90 0x16 0x4c 0x22 0x5d 0x17 0x10 0x00 0x5d 0x17 0x41 0x00 0x76 0xec 0xdc 0x1b 0x03 0x49 0x53 0x53 0x5d 0x17 0x10 0x00 0x5d 0x17 0x3b 0x00 0x76 0xec 0x2e 0x53 0x1f 0x7a 0xfd 0xeb 0xee 0x9d 0xdf 0x79 0x90 0x16 0x4c 0x22 0x41 0x0e 0x20 0x0f 0x9f 0x3b 0x25 0x40 0xfa 0x15 0x14 0x00 0x41 0x0e 0x89 0x12 0xfa 0x15 0x08 0x00 0x38 0xed 0x60 0x16 0x06 0x00 0x41 0x0e 0xea 0xec 0x1a 0xa7 0x90 0x16 0x4c 0x22 0x29 0x7b 0x30 0x5e 0x16 0x6d 0x29 0x7b 0x41 0x0e 0x3b 0x5d 0x16 0x6d 0x29 0x7b 0x41 0x0e 0x3e 0x5e 0x16 0x6d 0x5a 0xa3 0xf4 0xeb 0xae 0x0b 0x89 0x12 0xfa 0x15 0x0e 0x00 0x60 0xed 0x0c 0x50 0xf2 0x0e 0xe6 0xa2 0x60 0x16 0x04 0x00 0xde 0x0d 0x90 0x16 0x4c 0x22 0x5d 0x17 0x37 0x00 0x5d 0x17 0x6b 0xb7 0xd9 0x84 0x76 0x59 0xae 0x0b 0x89 0x12 0xf5 0x12 0x90 0x16 0x4c 0x22 0x3e 0x5e 0xae 0x0b 0x12 0x7b 0x3b 0x5d 0xae 0x0b 0x12 0x7b 0x30 0x5e 0xae 0x0b 0x12 0x7b 0x90 0x16 0x4c 0x22 0xce 0xed 0x60 0xed 0x7c 0xa3 0x30 0x5e 0x16 0x6d 0x90 0x16 0x4c 0x22 0x11 0x6c 0x1f 0x7a 0x3f 0x7a 0x5d 0x17 0x0b 0x00 0x5d 0x17 0x0a 0x00 0x4c 0x7e 0xfa 0x15 0x20 0x00 0x3f 0x7a 0x5d 0x17 0x1a 0x00 0x5d 0x17 0x17 0x00 0x4c 0x7e 0xfa 0x15 0x08 0x00 0xc3 0x51 0x60 0x16 0x04 0x00 0xcf 0x51 0xdf 0x79 0x60 0x16 0x04 0x00 0xcf 0x51 0x3d 0x0f 0x0a 0x7a 0x90 0x16 0x4c 0x22 0x3b 0x5d 0xae 0x0b 0x38 0xa3 0x90 0x16 0x4c 0x22 0x97 0xa5 0x32 0x0e 0xc8 0x0d 0xfa 0x15 0x04 0x00 0x74 0xa7 0x2e 0xa6 0xfa 0x15 0x10 0x00 0x0c 0x50 0x2e 0xee 0x3b 0x5d 0xae 0x0b 0x6a 0xec 0xa7 0x4f 0x2e 0xee 0x90 0x16 0x4c 0x22 0xd0 0x55 0xae 0x0b 0x07 0x13 0xe0 0x5d 0xae 0x0b 0x3e 0x13 0xb8 0xed 0x3e 0x13 0xf2 0xed 0x3e 0x13 0x90 0x16 0x4c 0x22 0xa7 0x4f 0x76 0xa2 0x90 0x16 ':  t E  t 4  t    t    s    IlL"]       L"]       L"]       L".S z    A  ;      ] 6   ]    *;      ] N   ]    * y  L"  0^7:    L"{ ]    O  ~  O P O      L"] d ]    ;;] d ]   ;  ]    *  L"   ?#REPORT TO OPERATIONS FOR EVALUATION  ]    *[^Wm  L"]   ] A v ] :  V m Vem  A ]      xr ]     ]   ] ; v  S z;    r /z     u y  L"]   ] A v    ISS]   ] ; v .S z     y  L"A    ;%@    A       8 `   A       L"){0^ m){A ;] m){A >^ mZ           `  P    `       L"] 7 ] k   vY        L">^   {;]   {0^   {  L"  ` | 0^ m  L" l z?z]   ]   L~    ?z]   ]   L~     Q`    Q y`    Q=  z  L";]  8   L"  2       t .      P. ;]  j  O.   L" U     ]  >   >   >   L" Ov   '

// ================================================
// 0xee7c: WORD '(GET-AUX)' codep=0x4b3b parp=0xee8a
// ================================================
// 0xee8a: db 0x07 0x00 0x76 0xee 0x01 0x00 0x16 0xec 0x02 0x00 0x16 0xec 0x03 0x00 0x20 0xec 0x04 0x00 0x2a 0xec 0x05 0x00 0x1d 0xcb 0x06 0x00 0x1d 0xcb 0x08 0x00 0x2a 0xec 0x4c 0x22 0xa7 0x4f 0x96 0xa3 0x5d 0x17 0x2e 0xcb 0xd9 0x84 0x0e 0x5f 0xae 0x0b 0x88 0xee 0x3e 0x5e 0xae 0x0b 0x60 0xed 0x0c 0x50 0x3b 0x5d 0xae 0x0b 0xe6 0xa2 0x90 0x16 0x4c 0x22 0x0e 0x5f 0xae 0x0b 0xa7 0x3b 0x5f 0x12 0xfa 0x15 0x04 0x00 0x28 0xec 0x5d 0x17 0x05 0xc5 0xd9 0x84 0x90 0x16 0x4c 0x22 0x8f 0x3b 0x5d 0x17 0x7c 0xb7 0xd9 0x84 0xfa 0x15 0x1a 0x00 0x5d 0x17 0x44 0xd4 0xd9 0x84 0xc1 0x5a 0xae 0x0b 0x78 0x12 0xfa 0x15 0x0a 0x00 0x5d 0x17 0xf2 0xd2 0xd9 0x84 0x07 0x13 0x90 0x16 '  v               *           * L" O  ] .    _    >^  `  P;]      L" _   ;_     ( ]       L" ;] |       ] D    Z  x     ]         '

// ================================================
// 0xef0c: WORD '1.1BTN.XEQ' codep=0x4b3b parp=0xef1b
// ================================================
// 0xef1b: db 0x02 0x00 0x09 0x13 0x00 0x00 0xce 0xee 0x01 0x00 0xe6 0xee 0x4c 0x22 0x32 0xec 0x5c 0xee 0xfa 0x15 0x04 0x00 0xb2 0xec 0x07 0x13 0xf2 0x0e 0x07 0x13 0x90 0x16 0x4c 0x22 0xd0 0x55 0xae 0x0b 0xfa 0x15 0x67 0x00 0xd2 0x9f 0x46 0x9c 0xd2 0x5d 0x57 0x6d 0x32 0xec 0x07 0x3f 0x1a 0x53 0x54 0x41 0x4e 0x44 0x42 0x59 0x2e 0x2e 0x2e 0x53 0x43 0x41 0x4e 0x4e 0x49 0x4e 0x47 0x20 0x50 0x4c 0x41 0x4e 0x45 0x54 0x2e 0xf1 0x9f 0x27 0x60 0xae 0x0b 0xb8 0x3b 0x5f 0x12 0xfa 0x15 0x12 0x00 0xd6 0x56 0x57 0x6d 0x5d 0x17 0x74 0xcd 0xd9 0x84 0x5d 0x17 0xf9 0xbc 0xd9 0x84 0x5d 0x17 0x96 0xd1 0xd9 0x84 0x5d 0x17 0xec 0xb6 0xd9 0x84 0xdd 0xa3 0x32 0x0e 0xd2 0x5d 0x65 0x6d 0xaa 0xee 0x5d 0x17 0x8b 0xbd 0xd9 0x84 0x60 0x16 0x42 0x00 0xd2 0x9f 0x07 0x3f 0x1e 0x54 0x48 0x45 0x20 0x53 0x48 0x49 0x50 0x20 0x49 0x53 0x20 0x4e 0x4f 0x20 0x4c 0x4f 0x4e 0x47 0x45 0x52 0x20 0x45 0x51 0x55 0x49 0x50 0x50 0x45 0x44 0xf1 0x9f 0x07 0x3f 0x16 0x57 0x49 0x54 0x48 0x20 0x41 0x20 0x54 0x45 0x52 0x52 0x41 0x49 0x4e 0x20 0x56 0x45 0x48 0x49 0x43 0x4c 0x45 0xf1 0x9f 0xf4 0xeb 0x65 0x6d 0x90 0x16 0x4c 0x22 0xd2 0x9f 0x46 0x9c 0xdc 0x1b 0x1c 0x57 0x45 0x20 0x43 0x41 0x4e 0x27 0x54 0x20 0x44 0x49 0x53 0x45 0x4d 0x42 0x41 0x52 0x4b 0x20 0x49 0x4e 0x20 0x53 0x50 0x41 0x43 0x45 0x21 0xf4 0xeb 0x65 0x6d 0x90 0x16 '            L"2 \               L" U    g   F  ]Wm2  ? STANDBY...SCANNING PLANET.  '`   ;_      VWm] t   ]     ]     ]       2  ]em  ]     ` B    ? THE SHIP IS NO LONGER EQUIPPED   ? WITH A TERRAIN VEHICLE    em  L"  F    WE CAN'T DISEMBARK IN SPACE!  em  '

// ================================================
// 0xf01b: WORD '>DISEMBARK' codep=0x4b3b parp=0xf02a
// ================================================
// 0xf02a: db 0x02 0x00 0xf2 0xef 0x05 0x00 0x29 0xef 0x00 0x00 0x3d 0xef 0x4c 0x22 0x5c 0xee 0x2a 0x5c 0xae 0x0b 0x8f 0x3b 0x5f 0x12 0xf5 0x12 0xfa 0x15 0x08 0x00 0xb2 0xec 0x60 0x16 0x32 0x00 0x5d 0x17 0xe2 0xd2 0xd9 0x84 0x5d 0x17 0xe7 0xc0 0xb9 0x60 0x16 0x6d 0xfa 0x15 0x1a 0x00 0x90 0xec 0x28 0xec 0x5d 0x17 0x86 0xed 0x5d 0x17 0x3a 0xee 0x5d 0x17 0x1b 0xef 0x9f 0x3b 0x5d 0x17 0xe6 0xed 0xc5 0xaf 0x2e 0x0f 0x20 0x0f 0x98 0xa6 0x90 0x16 0x4c 0x22 0x5d 0x17 0xec 0xb6 0xd9 0x84 0xf4 0xeb 0x57 0x6d 0x2a 0x5c 0xae 0x0b 0x28 0xf0 0x90 0x16 0x4c 0x22 0x5d 0x17 0xd2 0xd2 0xd9 0x84 0x90 0x16 0x4c 0x22 0x5d 0x17 0x02 0xd3 0xd9 0x84 0x90 0x16 0x4c 0x22 0x2a 0x5c 0xae 0x0b 0x87 0x3b 0x5f 0x12 0xcf 0x64 0x2f 0x7a 0x5d 0x17 0x16 0x00 0x46 0x75 0xdf 0x79 0xf5 0x12 0xfa 0x15 0x10 0x00 0x71 0x5c 0x57 0x6d 0x5d 0x17 0xf1 0xc8 0xd9 0x84 0x60 0x16 0x04 0x00 0x69 0x26 0x90 0x16 '      )   = L"\ *\   ;_         ` 2 ]     ]    ` m      ( ]   ] : ]    ;]     .       L"]       Wm*\  (   L"]       L"]       L"*\   ;_  d/z]   Fu y      q\Wm]     `   i&  '

// ================================================
// 0xf0d6: WORD '1BTN.XEQ' codep=0x4b3b parp=0xf0e3
// ================================================
// 0xf0e3: db 0x05 0x00 0x09 0x13 0x00 0x00 0x38 0xf0 0x01 0x00 0x82 0xf0 0x02 0x00 0x96 0xf0 0x03 0x00 0xa0 0xf0 0x05 0x00 0xaa 0xf0 0x4c 0x22 0x07 0x3f 0x18 0x4e 0x4f 0x20 0x43 0x49 0x56 0x49 0x4c 0x49 0x5a 0x41 0x54 0x49 0x4f 0x4e 0x20 0x44 0x45 0x54 0x45 0x43 0x54 0x45 0x44 0xf1 0x9f 0x90 0x16 0x4c 0x22 0x53 0x50 0x9d 0x86 0x7e 0x8a 0xaf 0x64 0x2f 0x7a 0x8b 0x75 0x3e 0x13 0xfa 0x15 0x3c 0x00 0x2a 0x5c 0xae 0x0b 0x3d 0x0f 0x46 0x12 0x0c 0xec 0x92 0x0c 0x89 0x12 0x07 0x13 0xf5 0x12 0x32 0x62 0xae 0x0b 0x07 0x13 0xf5 0x12 0x8f 0x64 0x83 0x4a 0x4a 0x53 0x07 0x40 0x07 0x13 0xf5 0x12 0xfa 0x15 0x0c 0x00 0x5d 0x17 0xda 0xbd 0xd9 0x84 0x60 0x16 0x04 0x00 0xfb 0xf0 0x60 0x16 0x04 0x00 0xfb 0xf0 0xdf 0x79 0x90 0x16 0x4c 0x22 0x90 0xec 0x5d 0x17 0xc5 0xc0 0xd9 0x84 0x90 0x16 0x4c 0x22 0x2e 0x0f 0x5d 0x17 0x8a 0xd3 0xd9 0x84 0x90 0x16 0x4c 0x22 0x90 0xec 0x14 0xec 0x90 0x16 '      8                 L" ? NO CIVILIZATION DETECTED    L"SP  ~  d/z u>   < *\  = F           2b       d JJS @        ]     `     `      y  L"  ]       L". ]       L"      '

// ================================================
// 0xf190: WORD '2BTN.XEQ' codep=0x4b3b parp=0xf19d
// ================================================
// 0xf19d: db 0x04 0x00 0x09 0x13 0x00 0x00 0x72 0xf1 0x01 0x00 0x7e 0xf1 0x02 0x00 0x1e 0xf1 0x03 0x00 0x8a 0xf1 0x4c 0x22 0x5d 0x17 0xa2 0xca 0xd9 0x84 0xdd 0xa3 0x32 0x0e 0x90 0x16 0x4c 0x22 0x5d 0x17 0xc5 0xd3 0xd9 0x84 0xfa 0x15 0x04 0x00 0xaa 0xee 0x90 0x16 0x4c 0x22 0x5d 0x17 0x26 0xc6 0xd9 0x84 0x90 0x16 0x4c 0x22 0x5d 0x17 0x16 0xc6 0xd9 0x84 0x7f 0x3b 0x7f 0x3b 0x98 0xa6 0x90 0x16 0x4c 0x22 0x71 0x5c 0x57 0x6d 0x89 0x5f 0xae 0x0b 0xd9 0x84 0x71 0x5c 0x65 0x6d 0x90 0x16 '      r   ~         L"]       2   L"]             L"] &     L"]     ;;    L"q\Wm _    q\em  '

// ================================================
// 0xf1fb: WORD '3BTN.XEQ' codep=0x4b3b parp=0xf208
// ================================================
// 0xf208: db 0x05 0x00 0x09 0x13 0x00 0x00 0xb3 0xf1 0x01 0x00 0xc1 0xf1 0x02 0x00 0xd1 0xf1 0x03 0x00 0xdb 0xf1 0x04 0x00 0xeb 0xf1 0x4c 0x22 0x90 0xec 0x1e 0xec 0x90 0x16 0x4c 0x22 0x90 0xec 0x5d 0x17 0xa8 0xbc 0xd9 0x84 0x90 0x16 0x4c 0x22 0x5d 0x17 0x08 0xd4 0xd9 0x84 0x90 0x16 '                        L"      L"  ]       L"]       '

// ================================================
// 0xf23e: WORD '4BTN.XEQ' codep=0x4b3b parp=0xf24b
// ================================================
// 0xf24b: db 0x03 0x00 0x09 0x13 0x00 0x00 0x22 0xf2 0x01 0x00 0x2a 0xf2 0x02 0x00 0x36 0xf2 0x4c 0x22 0x2d 0x6c 0x1f 0x7a 0x3f 0x7a 0x5d 0x17 0x0b 0x00 0xf2 0x0e 0x4c 0x7e 0x32 0x0e 0x8b 0x75 0x3d 0x0f 0x0a 0x7a 0x90 0x16 0x4c 0x22 0x5d 0x17 0x60 0x00 0x5b 0xf2 0xd2 0x9f 0x5d 0x17 0x55 0xbe 0xd9 0x84 0x90 0x16 0x4c 0x22 0x5d 0x17 0x3f 0xd3 0xd9 0x84 0x90 0x16 0x4c 0x22 0x5d 0x17 0x4f 0xd3 0xd9 0x84 0x90 0x16 '      "   *   6 L"-l z?z]     L~2  u=  z  L"] ` [   ] U     L"] ?     L"] O     '

// ================================================
// 0xf29b: WORD '6BTN.XEQ' codep=0x4b3b parp=0xf2a8
// ================================================
// 0xf2a8: db 0x02 0x00 0x09 0x13 0x00 0x00 0x89 0xf2 0x01 0x00 0x93 0xf2 0x4c 0x22 0x5d 0x17 0x86 0xed 0x5d 0x17 0x3a 0xee 0x5d 0x17 0xe3 0xf0 0x2e 0x0f 0x5d 0x17 0xe6 0xed 0xc5 0xaf 0xf4 0xeb 0x65 0x6d 0x90 0x16 0x4c 0x22 0x5d 0x17 0x86 0xed 0x5d 0x17 0x3a 0xee 0x5d 0x17 0x9d 0xf1 0x3d 0x0f 0x5d 0x17 0xe6 0xed 0xc5 0xaf 0x90 0x16 0x4c 0x22 0x5d 0x17 0x86 0xed 0x5d 0x17 0x3a 0xee 0x5d 0x17 0x08 0xf2 0x7f 0x3b 0x5d 0x17 0xe6 0xed 0xc5 0xaf 0x90 0x16 0x4c 0x22 0x5d 0x17 0x86 0xed 0x5d 0x17 0x3a 0xee 0x5d 0x17 0x4b 0xf2 0x87 0x3b 0x5d 0x17 0xe6 0xed 0xc5 0xaf 0x90 0x16 0x4c 0x22 0x8f 0x3b 0xea 0xec 0x5d 0x17 0xf2 0xbe 0xd9 0x84 0x38 0xed 0x90 0x16 0x4c 0x22 0x5d 0x17 0x86 0xed 0x5d 0x17 0x3a 0xee 0x5d 0x17 0xa8 0xf2 0x97 0x3b 0x5d 0x17 0xe6 0xed 0xc5 0xaf 0x90 0x16 '            L"]   ] : ]   . ]       em  L"]   ] : ]   = ]       L"]   ] : ]   ;]       L"]   ] : ] K  ;]       L" ;  ]     8   L"]   ] : ]    ;]       '

// ================================================
// 0xf340: WORD '[0BTN.XEQ]' codep=0x4b3b parp=0xf34f
// ================================================
// 0xf34f: db 0x05 0x00 0x2a 0xf3 0x00 0x00 0xb6 0xf2 0x01 0x00 0xd2 0xf2 0x02 0x00 0xea 0xf2 0x03 0x00 0x02 0xf3 0x04 0x00 0x1a 0xf3 0x4c 0x22 0x5d 0x17 0x2b 0x00 0x5d 0x17 0x6b 0xb7 0xd9 0x84 0xfa 0x15 0x30 0x00 0x72 0x62 0xae 0x0b 0x5d 0x17 0x63 0x00 0xad 0x11 0x72 0x62 0x16 0x6d 0x20 0x0f 0x5d 0x17 0x64 0x00 0xc4 0x4b 0x72 0x62 0xae 0x0b 0x46 0x12 0xfa 0x15 0x08 0x00 0x4d 0xf3 0x60 0x16 0x06 0x00 0x32 0x0e 0x75 0xf2 0x60 0x16 0x0c 0x00 0x5d 0x17 0x64 0x00 0x72 0x62 0x16 0x6d 0x4d 0xf3 0x90 0x16 0x4c 0x22 0x3d 0x62 0x38 0x0c 0x3e 0x13 0xfa 0x15 0x91 0x00 0x20 0x53 0x1f 0x7a 0x62 0x74 0x5d 0x17 0x11 0x00 0x72 0x0f 0x7f 0x0e 0x63 0x4a 0x72 0x0f 0x2f 0x7a 0x34 0x75 0x89 0x12 0x3d 0x0f 0x0a 0x7a 0xf2 0x5f 0xae 0x0b 0x5d 0x17 0xaa 0x0a 0xb3 0x0f 0x00 0x60 0xae 0x0b 0x3d 0x62 0x38 0x0c 0xec 0x3f 0x16 0x16 0x80 0x51 0x01 0x00 0x14 0x40 0xf5 0x12 0xfa 0x15 0x4d 0x00 0x20 0x0f 0x3d 0x0f 0xc4 0x4b 0xfa 0x15 0x08 0x00 0x67 0xf3 0x60 0x16 0x39 0x00 0x32 0x0e 0xd2 0x9f 0x07 0x3f 0x18 0x43 0x52 0x45 0x57 0x4d 0x45 0x4d 0x42 0x45 0x52 0x20 0x43 0x4f 0x4e 0x53 0x43 0x49 0x4f 0x55 0x53 0x20 0x42 0x55 0x54 0xf1 0x9f 0x07 0x3f 0x11 0x49 0x53 0x20 0x4e 0x4f 0x54 0x20 0x52 0x45 0x53 0x50 0x4f 0x4e 0x44 0x49 0x4e 0x47 0xf1 0x9f 0x60 0x16 0x04 0x00 0x67 0xf3 0x60 0x16 0x04 0x00 0x67 0xf3 0x90 0x16 0x4c 0x22 0x29 0x7b 0x29 0x7b 0x29 0x7b 0x32 0x0e 0xde 0x0d 0x90 0x16 '  *                     L"] + ] k     0 rb  ] c   rb m  ] d  Krb  F     M `   2 u `   ] d rb mM   L"=b8 >      S zbt]   r  cJr /z4u  =  z _  ]      `  =b8  ?   Q   @    M   =  K    g ` 9 2    ? CREWMEMBER CONSCIOUS BUT   ? IS NOT RESPONDING  `   g `   g   L"){){){2     '

// ================================================
// 0xf45e: WORD 'UNK_0xf460' codep=0x224c parp=0xf460
// ================================================

void UNK_0xf460() // UNK_0xf460
{
  Push(0xf452);
  Push(0xee3a);
  Push(0xf3b3);
  Push(0); // 0
  Push(0xede6);
  DOTASKS(); // DOTASKS
  Push(pp_UNK_0xebf6); // UNK_0xebf6
  _099(); // 099
}


// ================================================
// 0xf47a: WORD 'UNK_0xf47c' codep=0x224c parp=0xf47c
// ================================================

void UNK_0xf47c() // UNK_0xf47c
{
  CTINIT(); // CTINIT
  CTERASE(); // CTERASE

  UNK_0x3f09("SHIP COMPUTER ACTIVATED");
  _dot_TTY(); // .TTY
  Push(0xc090);
  MODULE(); // MODULE
  CTINIT(); // CTINIT

  UNK_0x3f09("PRE-LAUNCH PROCEDURES COMPLETE");
  _dot_TTY(); // .TTY
  Push(0x00fa);
  MS(); // MS

  UNK_0x3f09("STANDING BY TO INITIATE LAUNCH");
  _dot_TTY(); // .TTY
  Push(0x00fa);
  MS(); // MS
  TTY_dash_SCR(); // TTY-SCR
  TTY_dash_SCR(); // TTY-SCR
  TTY_dash_SCR(); // TTY-SCR
  TTY_dash_SCR(); // TTY-SCR
}


// ================================================
// 0xf500: WORD 'UNK_0xf502' codep=0x224c parp=0xf502
// ================================================

void UNK_0xf502() // UNK_0xf502
{
  Push(0xd296);
  MODULE(); // MODULE
  V_gt_DISPL(); // V>DISPL
  UNK_0xf47c(); // UNK_0xf47c
}


// ================================================
// 0xf50e: WORD '>FLT' codep=0x224c parp=0xf517
// ================================================
// entry

void _gt_FLT() // >FLT
{
  TIME(); // TIME
  _2_at_(); // 2@
  _2DUP(); // 2DUP
  Push(pp_NAV_dash_TIM); // NAV-TIM
  D_ex_(); // D!
  Push(pp_ENC_dash_TIM); // ENC-TIM
  D_ex_(); // D!
  Push(pp_STAR_dash_HR); // STAR-HR
  Push(Read16(Pop())); // @
  Push(pp_TRAK_dash_HR); // TRAK-HR
  _ex__2(); // !_2
  SetColor("GREY2");
  _ro_SHIP_dash_C(); // (SHIP-C
  Push(pp_CONTEXT_3); // CONTEXT_3
  Push(Read16(Pop())); // @
  Push(cc__5); // 5
  _eq_(); // =
  if (Pop() == 0) goto label1;
  UNK_0xf502(); // UNK_0xf502

  label1:
  Push(pp_UNK_0xebf6); // UNK_0xebf6
  _099(); // 099
  UNK_0xf460(); // UNK_0xf460
}

// 0xf547: db 0x42 0x54 0x4e 0x2d 0x56 0x4f 0x43 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x00 'BTN-VOC__________________ '
  