// ====== OVERLAY 'MAP-OV' ======

#include"interface.h"

// store offset = 0xe340
// overlay size   = 0x1220

// =================================
// =========== DICTIONARY ==========
// =================================
// 1869:      UNK_0xa822  codep:0x0f72 parp:0xa822 size:0x000e C-string:'UNK_0xa822'
// 1870:         SET-CRS  codep:0x224c parp:0xa83c size:0x0008 C-string:'SET_minus_CRS'
// 1871:      UNK_0xa846  codep:0x0fe7 parp:0xa846 size:0x0050 C-string:'UNK_0xa846'
// 1872:              $!  codep:0x224c parp:0xa89d size:0x000a C-string:'_do__ex_'
// 1873:         SUBROOT  codep:0x224c parp:0xa8b3 size:0x0008 C-string:'SUBROOT'
// 1874:         SRDEPTH  codep:0x224c parp:0xa8c7 size:0x0020 C-string:'SRDEPTH'
// 1875:         NEXT-NO  codep:0x224c parp:0xa8f3 size:0x001c C-string:'NEXT_minus_NO'
// 1876:         INST-VA  codep:0x7420 parp:0xa91b size:0x3a4d C-string:'INST_minus_VA'
// 1877:      UNK_0xe36a  codep:0x1d29 parp:0xe36a size:0x0002 C-string:'UNK_0xe36a'
// 1878:      UNK_0xe36e  codep:0x2214 parp:0xe36e size:0x0002 C-string:'UNK_0xe36e'
// 1879:      UNK_0xe372  codep:0x1d29 parp:0xe372 size:0x0002 C-string:'UNK_0xe372'
// 1880:      UNK_0xe376  codep:0x1d29 parp:0xe376 size:0x0002 C-string:'UNK_0xe376'
// 1881:      UNK_0xe37a  codep:0x1d29 parp:0xe37a size:0x0002 C-string:'UNK_0xe37a'
// 1882:      UNK_0xe37e  codep:0x1d29 parp:0xe37e size:0x0002 C-string:'UNK_0xe37e'
// 1883:      UNK_0xe382  codep:0x1d29 parp:0xe382 size:0x0002 C-string:'UNK_0xe382'
// 1884:      UNK_0xe386  codep:0x1d29 parp:0xe386 size:0x0002 C-string:'UNK_0xe386'
// 1885:      UNK_0xe38a  codep:0x1d29 parp:0xe38a size:0x0002 C-string:'UNK_0xe38a'
// 1886:      UNK_0xe38e  codep:0x1d29 parp:0xe38e size:0x0002 C-string:'UNK_0xe38e'
// 1887:      UNK_0xe392  codep:0x7420 parp:0xe392 size:0x0003 C-string:'UNK_0xe392'
// 1888:      UNK_0xe397  codep:0x7420 parp:0xe397 size:0x0003 C-string:'UNK_0xe397'
// 1889:      UNK_0xe39c  codep:0x7420 parp:0xe39c size:0x0003 C-string:'UNK_0xe39c'
// 1890:      UNK_0xe3a1  codep:0x7420 parp:0xe3a1 size:0x0003 C-string:'UNK_0xe3a1'
// 1891:      UNK_0xe3a6  codep:0x7420 parp:0xe3a6 size:0x000b C-string:'UNK_0xe3a6'
// 1892:      UNK_0xe3b3  codep:0x1d29 parp:0xe3b3 size:0x000c C-string:'UNK_0xe3b3'
// 1893:      UNK_0xe3c1  codep:0x1d29 parp:0xe3c1 size:0x0002 C-string:'UNK_0xe3c1'
// 1894:      UNK_0xe3c5  codep:0x224c parp:0xe3c5 size:0x002c C-string:'UNK_0xe3c5'
// 1895:      UNK_0xe3f3  codep:0x224c parp:0xe3f3 size:0x007c C-string:'UNK_0xe3f3'
// 1896:      UNK_0xe471  codep:0x224c parp:0xe471 size:0x0024 C-string:'UNK_0xe471'
// 1897:      UNK_0xe497  codep:0x224c parp:0xe497 size:0x0012 C-string:'UNK_0xe497'
// 1898:      UNK_0xe4ab  codep:0x1d29 parp:0xe4ab size:0x0002 C-string:'UNK_0xe4ab'
// 1899:      UNK_0xe4af  codep:0x1d29 parp:0xe4af size:0x0002 C-string:'UNK_0xe4af'
// 1900:      UNK_0xe4b3  codep:0x1d29 parp:0xe4b3 size:0x0002 C-string:'UNK_0xe4b3'
// 1901:      UNK_0xe4b7  codep:0x1d29 parp:0xe4b7 size:0x0002 C-string:'UNK_0xe4b7'
// 1902:      UNK_0xe4bb  codep:0x224c parp:0xe4bb size:0x0020 C-string:'UNK_0xe4bb'
// 1903:      UNK_0xe4dd  codep:0x224c parp:0xe4dd size:0x0014 C-string:'UNK_0xe4dd'
// 1904:      UNK_0xe4f3  codep:0x224c parp:0xe4f3 size:0x003a C-string:'UNK_0xe4f3'
// 1905:      UNK_0xe52f  codep:0x224c parp:0xe52f size:0x0018 C-string:'UNK_0xe52f'
// 1906:      UNK_0xe549  codep:0x224c parp:0xe549 size:0x003a C-string:'UNK_0xe549'
// 1907:      UNK_0xe585  codep:0x224c parp:0xe585 size:0x00a2 C-string:'UNK_0xe585'
// 1908:      UNK_0xe629  codep:0x224c parp:0xe629 size:0x000a C-string:'UNK_0xe629'
// 1909:      UNK_0xe635  codep:0x224c parp:0xe635 size:0x00eb C-string:'UNK_0xe635'
// 1910:      UNK_0xe722  codep:0x224c parp:0xe722 size:0x0042 C-string:'UNK_0xe722'
// 1911:      UNK_0xe766  codep:0x224c parp:0xe766 size:0x004c C-string:'UNK_0xe766'
// 1912:      UNK_0xe7b4  codep:0x224c parp:0xe7b4 size:0x0048 C-string:'UNK_0xe7b4'
// 1913:      UNK_0xe7fe  codep:0x224c parp:0xe7fe size:0x004e C-string:'UNK_0xe7fe'
// 1914:      UNK_0xe84e  codep:0x224c parp:0xe84e size:0x0014 C-string:'UNK_0xe84e'
// 1915:      UNK_0xe864  codep:0x224c parp:0xe864 size:0x0036 C-string:'UNK_0xe864'
// 1916:      UNK_0xe89c  codep:0x224c parp:0xe89c size:0x0048 C-string:'UNK_0xe89c'
// 1917:      UNK_0xe8e6  codep:0x224c parp:0xe8e6 size:0x0062 C-string:'UNK_0xe8e6'
// 1918:      UNK_0xe94a  codep:0x224c parp:0xe94a size:0x0006 C-string:'UNK_0xe94a'
// 1919:      UNK_0xe952  codep:0x224c parp:0xe952 size:0x008c C-string:'UNK_0xe952'
// 1920:      UNK_0xe9e0  codep:0x224c parp:0xe9e0 size:0x0022 C-string:'UNK_0xe9e0'
// 1921:      UNK_0xea04  codep:0x224c parp:0xea04 size:0x0034 C-string:'UNK_0xea04'
// 1922:      UNK_0xea3a  codep:0x224c parp:0xea3a size:0x0016 C-string:'UNK_0xea3a'
// 1923:      UNK_0xea52  codep:0x224c parp:0xea52 size:0x0028 C-string:'UNK_0xea52'
// 1924:      UNK_0xea7c  codep:0x224c parp:0xea7c size:0x000e C-string:'UNK_0xea7c'
// 1925:      UNK_0xea8c  codep:0x224c parp:0xea8c size:0x0042 C-string:'UNK_0xea8c'
// 1926:      UNK_0xead0  codep:0x224c parp:0xead0 size:0x001e C-string:'UNK_0xead0'
// 1927:      UNK_0xeaf0  codep:0x224c parp:0xeaf0 size:0x0055 C-string:'UNK_0xeaf0'
// 1928:      UNK_0xeb47  codep:0x224c parp:0xeb47 size:0x003c C-string:'UNK_0xeb47'
// 1929:      UNK_0xeb85  codep:0x224c parp:0xeb85 size:0x0040 C-string:'UNK_0xeb85'
// 1930:      UNK_0xebc7  codep:0x224c parp:0xebc7 size:0x0046 C-string:'UNK_0xebc7'
// 1931:      UNK_0xec0f  codep:0x224c parp:0xec0f size:0x002b C-string:'UNK_0xec0f'
// 1932:      UNK_0xec3c  codep:0x224c parp:0xec3c size:0x002a C-string:'UNK_0xec3c'
// 1933:           NOMAP  codep:0x224c parp:0xec70 size:0x0012 C-string:'NOMAP'
// 1934:      UNK_0xec84  codep:0x224c parp:0xec84 size:0x006a C-string:'UNK_0xec84'
// 1935:      UNK_0xecf0  codep:0x1d29 parp:0xecf0 size:0x0002 C-string:'UNK_0xecf0'
// 1936:      FLUX-ARRAY  codep:0x1d29 parp:0xed01 size:0x007a C-string:'FLUX_minus_ARRAY'
// 1937:      UNK_0xed7d  codep:0x224c parp:0xed7d size:0x000c C-string:'UNK_0xed7d'
// 1938:      UNK_0xed8b  codep:0x224c parp:0xed8b size:0x0006 C-string:'UNK_0xed8b'
// 1939:      UNK_0xed93  codep:0x224c parp:0xed93 size:0x0006 C-string:'UNK_0xed93'
// 1940:      UNK_0xed9b  codep:0x224c parp:0xed9b size:0x0008 C-string:'UNK_0xed9b'
// 1941:      UNK_0xeda5  codep:0x224c parp:0xeda5 size:0x0008 C-string:'UNK_0xeda5'
// 1942:      UNK_0xedaf  codep:0x224c parp:0xedaf size:0x0006 C-string:'UNK_0xedaf'
// 1943:      UNK_0xedb7  codep:0x224c parp:0xedb7 size:0x001c C-string:'UNK_0xedb7'
// 1944:      UNK_0xedd5  codep:0x224c parp:0xedd5 size:0x0012 C-string:'UNK_0xedd5'
// 1945:      UNK_0xede9  codep:0x224c parp:0xede9 size:0x0018 C-string:'UNK_0xede9'
// 1946:      UNK_0xee03  codep:0x224c parp:0xee03 size:0x0016 C-string:'UNK_0xee03'
// 1947:      UNK_0xee1b  codep:0x224c parp:0xee1b size:0x000a C-string:'UNK_0xee1b'
// 1948:      UNK_0xee27  codep:0x224c parp:0xee27 size:0x0016 C-string:'UNK_0xee27'
// 1949:      UNK_0xee3f  codep:0x224c parp:0xee3f size:0x0010 C-string:'UNK_0xee3f'
// 1950:      UNK_0xee51  codep:0x224c parp:0xee51 size:0x005a C-string:'UNK_0xee51'
// 1951:      UNK_0xeead  codep:0x224c parp:0xeead size:0x0008 C-string:'UNK_0xeead'
// 1952:      UNK_0xeeb7  codep:0x224c parp:0xeeb7 size:0x00c2 C-string:'UNK_0xeeb7'
// 1953:        DO-TMAPS  codep:0x224c parp:0xef86 size:0x0092 C-string:'DO_minus_TMAPS'
// 1954:      UNK_0xf01a  codep:0x224c parp:0xf01a size:0x0022 C-string:'UNK_0xf01a'
// 1955:      KEY>ACTION  codep:0x4b3b parp:0xf04b size:0x0010 C-string:'KEY_gt_ACTION'
// 1956:      UNK_0xf05d  codep:0x224c parp:0xf05d size:0x0026 C-string:'UNK_0xf05d'
// 1957:      UNK_0xf085  codep:0x224c parp:0xf085 size:0x0094 C-string:'UNK_0xf085'
// 1958:      UNK_0xf11b  codep:0x224c parp:0xf11b size:0x0013 C-string:'UNK_0xf11b'
// 1959:      UNK_0xf130  codep:0x4c16 parp:0xf130 size:0xffffffff C-string:'UNK_0xf130'
// 1960:      UNK_0xf131  codep:0x224c parp:0xf131 size:0x0020 C-string:'UNK_0xf131'
// 1961:      (/STARMAP)  codep:0x224c parp:0xf160 size:0x0400 C-string:'_ro__slash_STARMAP_rc_'

// =================================
// =========== VARIABLES ===========
// =================================
unsigned char UNK_0xe36a[2] = {0x3a, 0x20}; // UNK_0xe36a
unsigned char UNK_0xe372[2] = {0x3a, 0x20}; // UNK_0xe372
unsigned char UNK_0xe376[2] = {0x3a, 0x20}; // UNK_0xe376
unsigned char UNK_0xe37a[2] = {0x18, 0x01}; // UNK_0xe37a
unsigned char UNK_0xe37e[2] = {0x48, 0x02}; // UNK_0xe37e
unsigned char UNK_0xe382[2] = {0x3a, 0x20}; // UNK_0xe382
unsigned char UNK_0xe386[2] = {0x3a, 0x20}; // UNK_0xe386
unsigned char UNK_0xe38a[2] = {0x3a, 0x20}; // UNK_0xe38a
unsigned char UNK_0xe38e[2] = {0x3a, 0x20}; // UNK_0xe38e
unsigned char UNK_0xe3b3[12] = {0x20, 0x10, 0x81, 0x40, 0x3b, 0x02, 0x10, 0x88, 0x40, 0x20, 0x00, 0x81}; // UNK_0xe3b3
unsigned char UNK_0xe3c1[2] = {0x80, 0xf7}; // UNK_0xe3c1
unsigned char UNK_0xe4ab[2] = {0x3a, 0x20}; // UNK_0xe4ab
unsigned char UNK_0xe4af[2] = {0x3a, 0x20}; // UNK_0xe4af
unsigned char UNK_0xe4b3[2] = {0x3a, 0x20}; // UNK_0xe4b3
unsigned char UNK_0xe4b7[2] = {0x3a, 0x20}; // UNK_0xe4b7
unsigned char UNK_0xecf0[2] = {0x3a, 0x20}; // UNK_0xecf0
unsigned char FLUX_minus_ARRAY[122] = {0x00, 0x00, 0x05, 0x41, 0x4c, 0x4c, 0x4f, 0x54, 0x20, 0x1b, 0x06, 0x44, 0x45, 0x42, 0x52, 0x49, 0x53, 0x90, 0x16, 0x00, 0x00, 0x89, 0x28, 0x2e, 0x56, 0x45, 0x53, 0x53, 0x45, 0x4c, 0xa9, 0x3b, 0x4b, 0x04, 0x00, 0xfc, 0xec, 0x1d, 0x00, 0xef, 0xec, 0x20, 0x00, 0xef, 0xec, 0x32, 0x38, 0x30, 0x34, 0x14, 0x00, 0xef, 0xec, 0x4c, 0x22, 0x34, 0x75, 0x20, 0xed, 0x90, 0x16, 0x4c, 0x22, 0xdc, 0x1b, 0x06, 0x44, 0x45, 0x42, 0x52, 0x49, 0x53, 0x90, 0x16, 0x4c, 0x22, 0xdc, 0x1b, 0x06, 0x50, 0x4c, 0x41, 0x4e, 0x45, 0x54, 0x90, 0x16, 0x4c, 0x22, 0x0c, 0x50, 0x9d, 0x86, 0xdc, 0x1b, 0x12, 0x53, 0x54, 0x45, 0x4c, 0x4c, 0x41, 0x52, 0x20, 0x50, 0x41, 0x52, 0x41, 0x4d, 0x45, 0x54, 0x45, 0x52, 0x53, 0xd2, 0x9f, 0x90, 0x16, 0x16, 0xed, 0x89, 0x28}; // FLUX-ARRAY

const unsigned short int cc_UNK_0xe36e = 0x00a8; // UNK_0xe36e


// 0xe352: db 0xf0 0x00 0x20 0x74 0x3d 0x1b 0x01 0x20 0x74 0x3d 0x1c 0x01 0x20 0x74 0x3d 0x1d 0x01 0x20 0x74 0x3d 0x1a 0x01 '   t=   t=   t=   t=  '

// ================================================
// 0xe368: WORD 'UNK_0xe36a' codep=0x1d29 parp=0xe36a
// ================================================
// 0xe36a: db 0x3a 0x20 ': '

// ================================================
// 0xe36c: WORD 'UNK_0xe36e' codep=0x2214 parp=0xe36e
// ================================================
// 0xe36e: db 0xa8 0x00 '  '

// ================================================
// 0xe370: WORD 'UNK_0xe372' codep=0x1d29 parp=0xe372
// ================================================
// 0xe372: db 0x3a 0x20 ': '

// ================================================
// 0xe374: WORD 'UNK_0xe376' codep=0x1d29 parp=0xe376
// ================================================
// 0xe376: db 0x3a 0x20 ': '

// ================================================
// 0xe378: WORD 'UNK_0xe37a' codep=0x1d29 parp=0xe37a
// ================================================
// 0xe37a: db 0x18 0x01 '  '

// ================================================
// 0xe37c: WORD 'UNK_0xe37e' codep=0x1d29 parp=0xe37e
// ================================================
// 0xe37e: db 0x48 0x02 'H '

// ================================================
// 0xe380: WORD 'UNK_0xe382' codep=0x1d29 parp=0xe382
// ================================================
// 0xe382: db 0x3a 0x20 ': '

// ================================================
// 0xe384: WORD 'UNK_0xe386' codep=0x1d29 parp=0xe386
// ================================================
// 0xe386: db 0x3a 0x20 ': '

// ================================================
// 0xe388: WORD 'UNK_0xe38a' codep=0x1d29 parp=0xe38a
// ================================================
// 0xe38a: db 0x3a 0x20 ': '

// ================================================
// 0xe38c: WORD 'UNK_0xe38e' codep=0x1d29 parp=0xe38e
// ================================================
// 0xe38e: db 0x3a 0x20 ': '

// ================================================
// 0xe390: WORD 'UNK_0xe392' codep=0x7420 parp=0xe392
// ================================================
// 0xe392: db 0x2d 0x0b 0x02 '-  '

// ================================================
// 0xe395: WORD 'UNK_0xe397' codep=0x7420 parp=0xe397
// ================================================
// 0xe397: db 0x2d 0x11 0x02 '-  '

// ================================================
// 0xe39a: WORD 'UNK_0xe39c' codep=0x7420 parp=0xe39c
// ================================================
// 0xe39c: db 0x2e 0x11 0x01 '.  '

// ================================================
// 0xe39f: WORD 'UNK_0xe3a1' codep=0x7420 parp=0xe3a1
// ================================================
// 0xe3a1: db 0x17 0x0b 0x01 '   '

// ================================================
// 0xe3a4: WORD 'UNK_0xe3a6' codep=0x7420 parp=0xe3a6
// ================================================
// 0xe3a6: db 0x14 0x13 0x02 0x94 0x73 0x28 0x14 0x04 0x74 0x54 0x6d '    s(  tTm'

// ================================================
// 0xe3b1: WORD 'UNK_0xe3b3' codep=0x1d29 parp=0xe3b3
// ================================================
// 0xe3b3: db 0x20 0x10 0x81 0x40 0x3b 0x02 0x10 0x88 0x40 0x20 0x00 0x81 '   @;   @   '

// ================================================
// 0xe3bf: WORD 'UNK_0xe3c1' codep=0x1d29 parp=0xe3c1
// ================================================
// 0xe3c1: db 0x80 0xf7 '  '

// ================================================
// 0xe3c3: WORD 'UNK_0xe3c5' codep=0x224c parp=0xe3c5
// ================================================

void UNK_0xe3c5() // UNK_0xe3c5
{
  _star_SHIP(); // *SHIP
  _gt_C_plus_S(); // >C+S
  INST_minus_X(); // INST-X
  Push(Read16(Pop())); // @
  DUP(); // DUP
  Push(pp_UNK_0xe382); // UNK_0xe382
  _ex_(); // !
  Push(pp_UNK_0xe37a); // UNK_0xe37a
  _ex_(); // !
  INST_minus_Y(); // INST-Y
  Push(Read16(Pop())); // @
  Push(cc__8); // 8
  _slash_(); // /
  Push(cc__8); // 8
  Push(Pop() * Pop()); // *
  DUP(); // DUP
  Push(pp_UNK_0xe386); // UNK_0xe386
  _ex_(); // !
  Push(pp_UNK_0xe37e); // UNK_0xe37e
  _ex_(); // !
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xe3f1: WORD 'UNK_0xe3f3' codep=0x224c parp=0xe3f3
// ================================================

void UNK_0xe3f3() // UNK_0xe3f3
{
  Push(pp_UNK_0xe37a); // UNK_0xe37a
  Push(Read16(Pop())); // @
  Push(0x0044);
  Push(cc__star_MAPSCA); // *MAPSCA
  Push(Pop() * Pop()); // *
  _minus_(); // -
  Push(0); // 0
  MAX(); // MAX
  Push(cc__star_MAPSCA); // *MAPSCA
  Push(0x006f);
  Push(Pop() * Pop()); // *
  MIN(); // MIN
  Push(pp_UNK_0xe37e); // UNK_0xe37e
  Push(Read16(Pop())); // @
  Push(0x0029);
  Push(cc__star_MAPSCA); // *MAPSCA
  Push(Pop() * Pop()); // *
  _minus_(); // -
  Push(0); // 0
  MAX(); // MAX
  Push(cc__star_MAPSCA); // *MAPSCA
  Push(0x0089);
  Push(Pop() * Pop()); // *
  MIN(); // MIN
  OVER(); // OVER
  Push(0x008b);
  Push(cc__star_MAPSCA); // *MAPSCA
  Push(Pop() * Pop()); // *
  Push(Pop() + Pop()); // +
  OVER(); // OVER
  Push(0x0053);
  Push(cc__star_MAPSCA); // *MAPSCA
  Push(Pop() * Pop()); // *
  Push(Pop() + Pop()); // +
  _ex_VISWIN(); // !VISWIN
  Push(0x00c8);
  Push(cc__star_MAPSCA); // *MAPSCA
  Push(Pop() * Pop()); // *
  Push(pp_LOCRADI); // LOCRADI
  _ex_(); // !
  Push(pp_UNK_0xe37a); // UNK_0xe37a
  Push(Read16(Pop())); // @
  Push(pp_XABS); // XABS
  _ex_(); // !
  Push(pp_UNK_0xe37e); // UNK_0xe37e
  Push(Read16(Pop())); // @
  Push(pp_YABS); // YABS
  _ex_(); // !
  Push(0xec78);
  DUP(); // DUP
  Push(pp_ANCHOR); // ANCHOR
  _2_ex_(); // 2!
  ORGLIST(); // ORGLIST
}


// ================================================
// 0xe46f: WORD 'UNK_0xe471' codep=0x224c parp=0xe471
// ================================================

void UNK_0xe471() // UNK_0xe471
{
  Push(0x00c7);
  Push(0x009f);
  Push(0x0021);
  Push(0x0014);
  SETCLIP(); // SETCLIP
  Push(0x0014);
  Push(pp_XLLDEST); // XLLDEST
  _ex_(); // !
  Push(0x0021);
  Push(pp_YLLDEST); // YLLDEST
  _ex_(); // !
}


// ================================================
// 0xe495: WORD 'UNK_0xe497' codep=0x224c parp=0xe497
// ================================================

void UNK_0xe497() // UNK_0xe497
{
  Push(cc__star_MAPSCA); // *MAPSCA
  Push(2); // 2
  Push(pp_YWLD_c_YP); // YWLD:YP
  _2_ex_(); // 2!
  Push(cc__star_MAPSCA); // *MAPSCA
  Push(1); // 1
  Push(pp_XWLD_c_XP); // XWLD:XP
  _2_ex_(); // 2!
}


// ================================================
// 0xe4a9: WORD 'UNK_0xe4ab' codep=0x1d29 parp=0xe4ab
// ================================================
// 0xe4ab: db 0x3a 0x20 ': '

// ================================================
// 0xe4ad: WORD 'UNK_0xe4af' codep=0x1d29 parp=0xe4af
// ================================================
// 0xe4af: db 0x3a 0x20 ': '

// ================================================
// 0xe4b1: WORD 'UNK_0xe4b3' codep=0x1d29 parp=0xe4b3
// ================================================
// 0xe4b3: db 0x3a 0x20 ': '

// ================================================
// 0xe4b5: WORD 'UNK_0xe4b7' codep=0x1d29 parp=0xe4b7
// ================================================
// 0xe4b7: db 0x3a 0x20 ': '

// ================================================
// 0xe4b9: WORD 'UNK_0xe4bb' codep=0x224c parp=0xe4bb
// ================================================

void UNK_0xe4bb() // UNK_0xe4bb
{
  Push(pp_UNK_0xe4b3); // UNK_0xe4b3
  Push(Read16(Pop())); // @
  if (Pop() == 0) goto label1;
  Push(cc__minus_1); // -1
  return;

  label1:
  Push(pp_UNK_0xe4b7); // UNK_0xe4b7
  Push(Read16(Pop())); // @
  if (Pop() == 0) goto label2;
  Push(1); // 1
  return;

  label2:
  Push(0); // 0
}


// ================================================
// 0xe4db: WORD 'UNK_0xe4dd' codep=0x224c parp=0xe4dd
// ================================================

void UNK_0xe4dd() // UNK_0xe4dd
{
  UNK_0xe4bb(); // UNK_0xe4bb
  _0_st_(); // 0<
  if (Pop() == 0) goto label1;
  WHITE(); // WHITE
  goto label2;

  label1:
  PINK(); // PINK

  label2:
  _ex_COLOR(); // !COLOR
}


// ================================================
// 0xe4f1: WORD 'UNK_0xe4f3' codep=0x224c parp=0xe4f3
// ================================================

void UNK_0xe4f3() // UNK_0xe4f3
{
  SWAP(); // SWAP
  Push(0x0014);
  _minus_(); // -
  SWAP(); // SWAP
  Push(0x0038);
  Push(Pop() + Pop()); // +
  POS_dot_(); // POS.
  UNK_0xe4bb(); // UNK_0xe4bb
  _0_st_(); // 0<
  if (Pop() == 0) goto label1;
  PRINT("FLUX-NODES", 10); // (.")
  return;

  label1:
  PRINT("ENCOUNTERS", 10); // (.")
}


// ================================================
// 0xe52d: WORD 'UNK_0xe52f' codep=0x224c parp=0xe52f
// ================================================

void UNK_0xe52f() // UNK_0xe52f
{
  Push(pp_UNK_0xe4b3); // UNK_0xe4b3
  Push(Read16(Pop())); // @
  Push(pp_UNK_0xe4ab); // UNK_0xe4ab
  Push(Read16(Pop())); // @
  Push(Pop() & Pop()); // AND
  Push(pp_UNK_0xe4b7); // UNK_0xe4b7
  Push(Read16(Pop())); // @
  Push(pp_UNK_0xe4af); // UNK_0xe4af
  Push(Read16(Pop())); // @
  Push(Pop() & Pop()); // AND
  Push(Pop() | Pop()); // OR
}


// ================================================
// 0xe547: WORD 'UNK_0xe549' codep=0x224c parp=0xe549
// ================================================

void UNK_0xe549() // UNK_0xe549
{
  UNK_0xe52f(); // UNK_0xe52f
  Push(pp_XORMODE); // XORMODE
  _099(); // 099
  _1PIX(); // 1PIX
  if (Pop() == 0) goto label1;
  UNK_0xe471(); // UNK_0xe471
  Push(pp_UNK_0xe382); // UNK_0xe382
  Push(Read16(Pop())); // @
  Push(pp_UNK_0xe386); // UNK_0xe386
  Push(Read16(Pop())); // @
  WLD_gt_SCR(); // WLD>SCR
  UNK_0xe4bb(); // UNK_0xe4bb
  _0_st_(); // 0<
  if (Pop() == 0) goto label2;
  GREY1(); // GREY1
  goto label3;

  label2:
  PINK(); // PINK

  label3:
  _ex_COLOR(); // !COLOR
  _2DUP(); // 2DUP
  Push(0x0032);
  _dot_CIRCLE(); // .CIRCLE
  UNK_0xe4f3(); // UNK_0xe4f3
  DCLIPSE(); // DCLIPSE

  label1:
  _2PIX(); // 2PIX
}


// ================================================
// 0xe583: WORD 'UNK_0xe585' codep=0x224c parp=0xe585
// ================================================

void UNK_0xe585() // UNK_0xe585
{
  _ask_CGA(); // ?CGA
  if (Pop() == 0) goto label1;
  WHITE(); // WHITE
  goto label2;

  label1:
  GREY2(); // GREY2

  label2:
  _ex_COLOR(); // !COLOR
  Push(0x0011);
  Push(0x00c7);
  Push(0x0011);
  Push(0x001e);
  LLINE(); // LLINE
  Push(0x00c7);
  Push(0x002b);

  signed short int i = Pop();
  signed short int imax = Pop();
  do // (DO)
  {
  Push(0x0012);
  Push(i); // I
  LPLOT(); // LPLOT
  Push(0x000a);
  int step = Pop();
  i += step;
  } while(((step>=0) && (i<imax)) || ((step<0) && (i>imax))); // (+LOOP) 0xfff2

  Push(0x00c7);
  Push(0x0053);

  signed short int j = Pop();
  signed short int jmax = Pop();
  do // (DO)
  {
  Push(0x0013);
  Push(j); // I
  LPLOT(); // LPLOT
  Push(0x0032);
  int step = Pop();
  j += step;
  } while(((step>=0) && (j<jmax)) || ((step<0) && (j>jmax))); // (+LOOP) 0xfff2

  Push(0x009c);
  Push(0x001d);
  Push(0x0011);
  Push(0x001d);
  LLINE(); // LLINE
  Push(0x009c);
  Push(0x0019);

  signed short int k = Pop();
  signed short int kmax = Pop();
  do // (DO)
  {
  Push(k); // I
  Push(0x001e);
  Push(k); // I
  Push(0x001f);
  LLINE(); // LLINE
  Push(cc__5); // 5
  int step = Pop();
  k += step;
  } while(((step>=0) && (k<kmax)) || ((step<0) && (k>kmax))); // (+LOOP) 0xffee

  Push(0x009c);
  Push(0x002d);

  signed short int l = Pop();
  signed short int lmax = Pop();
  do // (DO)
  {
  Push(l); // I
  Push(0x0020);
  LPLOT(); // LPLOT
  Push(0x0019);
  int step = Pop();
  l += step;
  } while(((step>=0) && (l<lmax)) || ((step<0) && (l>lmax))); // (+LOOP) 0xfff2

}


// ================================================
// 0xe627: WORD 'UNK_0xe629' codep=0x224c parp=0xe629
// ================================================

void UNK_0xe629() // UNK_0xe629
{
  GREY1(); // GREY1
  GREY1(); // GREY1
  LT_minus_BLUE(); // LT-BLUE
  _ask_MRC(); // ?MRC
}


// ================================================
// 0xe633: WORD 'UNK_0xe635' codep=0x224c parp=0xe635
// ================================================

void UNK_0xe635() // UNK_0xe635
{
  Push(0x0013);
  Push(cc__4); // 4
  Push(1); // 1
  Push(0x009b);
  UNK_0xe629(); // UNK_0xe629
  POLY_minus_WI(); // POLY-WI
  GREY2(); // GREY2
  _ex_COLOR(); // !COLOR
  Push(0x009b);
  Push(0); // 0
  Push(cc__5); // 5
  Push(0); // 0
  LLINE(); // LLINE
  Push(0x009b);
  Push(0x0013);
  Push(cc__5); // 5
  Push(0x0013);
  LLINE(); // LLINE
  Push(0x0017);
  Push(cc__9); // 9
  Push(0x0017);
  Push(0); // 0
  LLINE(); // LLINE
  Push(0x0044);
  Push(cc__9); // 9
  Push(0x0044);
  Push(0); // 0
  LLINE(); // LLINE
  Push(cc__4); // 4
  Push(0x0013);
  Push(cc__4); // 4
  Push(0); // 0
  LLINE(); // LLINE
  Push(0x002b);
  Push(0x0013);
  Push(0x002b);
  Push(0); // 0
  LLINE(); // LLINE
  Push(0x005d);
  Push(0x0013);
  Push(0x005d);
  Push(0); // 0
  LLINE(); // LLINE
  Push(0x0083);
  Push(0x0013);
  Push(0x0083);
  Push(0); // 0
  LLINE(); // LLINE
  Push(0x009c);
  Push(0x0013);
  Push(0x009c);
  Push(0); // 0
  LLINE(); // LLINE
  _gt_1FONT(); // >1FONT
  BLACK(); // BLACK
  _ex_COLOR(); // !COLOR
  Push(cc__9); // 9
  Push(0x0010);
  POS_dot_(); // POS.
  PRINT("POSITION", 8); // (.")
  Push(0x002f);
  Push(pp_XBLT); // XBLT
  _ex_(); // !
  PRINT("DESTINATION", 11); // (.")
  Push(0x0061);
  Push(pp_XBLT); // XBLT
  _ex_(); // !
  PRINT("DISTANCE", 8); // (.")
  Push(0x0088);
  Push(pp_XBLT); // XBLT
  _ex_(); // !
  PRINT("FUEL", 4); // (.")
}


// ================================================
// 0xe720: WORD 'UNK_0xe722' codep=0x224c parp=0xe722
// ================================================

void UNK_0xe722() // UNK_0xe722
{
  Push(pp_UNK_0xe37a); // UNK_0xe37a
  Push(Read16(Pop())); // @
  Push(pp_UNK_0xe37e); // UNK_0xe37e
  Push(Read16(Pop())); // @
  WLD_gt_SCR(); // WLD>SCR
  Push(cc__6); // 6
  Push(Pop() + Pop()); // +
  SWAP(); // SWAP
  Push(cc__3); // 3
  _minus_(); // -
  SWAP(); // SWAP
  POS_dot_(); // POS.
  Push(0x000d);
  Push(pp_LBLT); // LBLT
  _ex_(); // !
  Push(cc__7); // 7
  Push(pp_WBLT); // WBLT
  _ex_(); // !
  Push(pp_UNK_0xe3b3); // UNK_0xe3b3
  Push(pp_ABLT); // ABLT
  _ex_(); // !
  _at_DS(); // @DS
  Push(pp_BLTSEG); // BLTSEG
  _ex_(); // !
  ORANGE(); // ORANGE
  _ex_COLOR(); // !COLOR
  Push(pp_XORMODE); // XORMODE
  ON(); // ON
  BLT(); // BLT
  Push(pp_XORMODE); // XORMODE
  _099(); // 099
}


// ================================================
// 0xe764: WORD 'UNK_0xe766' codep=0x224c parp=0xe766
// ================================================

void UNK_0xe766() // UNK_0xe766
{
  Push(pp_UNK_0xe382); // UNK_0xe382
  Push(Read16(Pop())); // @
  Push(pp_UNK_0xe386); // UNK_0xe386
  Push(Read16(Pop())); // @
  _2DUP(); // 2DUP
  _ask_INVIS(); // ?INVIS
  _at_DS(); // @DS
  Push(pp_BLTSEG); // BLTSEG
  _ex_(); // !
  if (Pop() == 0) goto label1;
  WLD_gt_SCR(); // WLD>SCR
  Push(Pop()+1); // 1+
  SWAP(); // SWAP
  Push(Pop()-1); // 1-
  SWAP(); // SWAP
  POS_dot_(); // POS.
  Push(cc__3); // 3
  Push(pp_LBLT); // LBLT
  _ex_(); // !
  Push(cc__3); // 3
  Push(pp_WBLT); // WBLT
  _ex_(); // !
  Push(pp_UNK_0xe3c1); // UNK_0xe3c1
  Push(pp_ABLT); // ABLT
  _ex_(); // !
  BLUE(); // BLUE
  _ex_COLOR(); // !COLOR
  Push(pp_XORMODE); // XORMODE
  _099(); // 099
  BLT(); // BLT
  Push(pp_XORMODE); // XORMODE
  ON(); // ON
  goto label2;

  label1:
  Pop(); Pop();// 2DROP

  label2:
  UNK_0xe549(); // UNK_0xe549
}


// ================================================
// 0xe7b2: WORD 'UNK_0xe7b4' codep=0x224c parp=0xe7b4
// ================================================

void UNK_0xe7b4() // UNK_0xe7b4
{
  GREY2(); // GREY2
  _ex_COLOR(); // !COLOR
  _gt_1FONT(); // >1FONT
  Push(0x009c);
  Push(0x0028);

  signed short int i = Pop();
  signed short int imax = Pop();
  do // (DO)
  {
  Push(i); // I
  Push(0x001a);
  POS_dot_(); // POS.
  Push(cc__3); // 3
  BLACK(); // BLACK
  POLY_minus_ER(); // POLY-ER
  Push(pp_LVIS); // LVIS
  Push(Read16(Pop())); // @
  Push(cc__star_MAPSCA); // *MAPSCA
  _slash_(); // /
  Push(i); // I
  Push(Pop() + Pop()); // +
  Push(0x000f);
  _minus_(); // -
  Push(0); // 0
  _st__n_(); // <#
  _n_(); // #
  _n_(); // #
  _n_(); // #
  _n__gt_(); // #>
  TYPE(); // TYPE
  Push(0x0019);
  int step = Pop();
  i += step;
  } while(((step>=0) && (i<imax)) || ((step<0) && (i>imax))); // (+LOOP) 0xffcc

}


// ================================================
// 0xe7fc: WORD 'UNK_0xe7fe' codep=0x224c parp=0xe7fe
// ================================================

void UNK_0xe7fe() // UNK_0xe7fe
{
  GREY2(); // GREY2
  _ex_COLOR(); // !COLOR
  _gt_1FONT(); // >1FONT
  Push(0x00c7);
  Push(0x0055);

  signed short int i = Pop();
  signed short int imax = Pop();
  do // (DO)
  {
  Push(cc__4); // 4
  Push(i); // I
  POS_dot_(); // POS.
  Push(cc__3); // 3
  BLACK(); // BLACK
  POLY_minus_ER(); // POLY-ER
  Push(1); // 1
  Push(pp_XBLT); // XBLT
  _plus__ex_(); // +!
  Push(pp_BVIS); // BVIS
  Push(Read16(Pop())); // @
  Push(cc__star_MAPSCA); // *MAPSCA
  _slash_(); // /
  Push(i); // I
  Push(0x0023);
  _minus_(); // -
  Push(Pop()>>1); // 2/
  Push(Pop() + Pop()); // +
  Push(0); // 0
  _st__n_(); // <#
  _n_(); // #
  _n_(); // #
  _n_(); // #
  _n__gt_(); // #>
  TYPE(); // TYPE
  Push(0x0032);
  int step = Pop();
  i += step;
  } while(((step>=0) && (i<imax)) || ((step<0) && (i>imax))); // (+LOOP) 0xffc6

}


// ================================================
// 0xe84c: WORD 'UNK_0xe84e' codep=0x224c parp=0xe84e
// ================================================

void UNK_0xe84e() // UNK_0xe84e
{
  Push(0); // 0
  Push(2); // 2
  RRND(); // RRND
  Push(0); // 0
  Push(2); // 2
  RRND(); // RRND
  if (Pop() == 0) return;
  Push(-Pop()); // NEGATE
}


// ================================================
// 0xe862: WORD 'UNK_0xe864' codep=0x224c parp=0xe864
// ================================================

void UNK_0xe864() // UNK_0xe864
{
  _star_EYE(); // *EYE
  _ask_ICON_eq_I(); // ?ICON=I
  if (Pop() == 0) return;
  POINT_gt_I(); // POINT>I
  _at_IX(); // @IX
  _at_IY(); // @IY
  _ask_INVIS(); // ?INVIS
  if (Pop() == 0) return;
  RNDCLR(); // RNDCLR
  _at_IX(); // @IX
  _at_IY(); // @IY
  WLD_gt_SCR(); // WLD>SCR
  UNK_0xe84e(); // UNK_0xe84e
  _ask_DUP(); // ?DUP
  if (Pop() == 0) goto label1;
  Push(Pop() + Pop()); // +
  goto label2;

  label1:
  UNK_0xe84e(); // UNK_0xe84e
  ROT(); // ROT
  Push(Pop() + Pop()); // +
  SWAP(); // SWAP

  label2:
  LPLOT(); // LPLOT
}


// ================================================
// 0xe89a: WORD 'UNK_0xe89c' codep=0x224c parp=0xe89c
// ================================================

void UNK_0xe89c() // UNK_0xe89c
{
  Push(cc_NULL_minus_IC); // NULL-IC
  Push(cc_SYS_minus_ICO); // SYS-ICO
  Push(pp_ILOCAL); // ILOCAL
  Push(Read16(Pop())); // @
  _ask_ICONSI(); // ?ICONSI
  _ask_DUP(); // ?DUP
  if (Pop() == 0) return;
  Push(0); // 0

  signed short int i = Pop();
  signed short int imax = Pop();
  do // (DO)
  {
  POINT_gt_I(); // POINT>I
  _at_IL(); // @IL
  _at_IH(); // @IH
  _gt_C_plus_S(); // >C+S
  _at_INST_minus_C(); // @INST-C
  Push(0x002e);
  _eq_(); // =
  if (Pop() == 0) goto label1;
  Push(pp_PAST); // PAST
  Push(Read16(Pop())); // @
  if (Pop() == 0) Push(1); else Push(0); // NOT
  UNK_0xe39c(); // UNK_0xe39c
  C_at_(); // C@
  Push(Pop() | Pop()); // OR
  goto label3;

  label1:
  Push(1); // 1

  label3:
  if (Pop() == 0) goto label2;
  _dot_CIRCLE(); // .CIRCLE

  label2:
  ICLOSE(); // ICLOSE
  i++;
  } while(i<imax); // (LOOP) 0xffd0

}


// ================================================
// 0xe8e4: WORD 'UNK_0xe8e6' codep=0x224c parp=0xe8e6
// ================================================

void UNK_0xe8e6() // UNK_0xe8e6
{
  _1PIX(); // 1PIX
  Push(cc_SYS_minus_ICO); // SYS-ICO
  Push(Pop()-1); // 1-
  Push(cc_SYS_minus_ICO); // SYS-ICO
  Push(Pop()+1); // 1+
  Push(pp_ILOCAL); // ILOCAL
  Push(Read16(Pop())); // @
  _ask_ICONSI(); // ?ICONSI
  _ask_DUP(); // ?DUP
  if (Pop() == 0) goto label1;
  Push(0); // 0

  signed short int i = Pop();
  signed short int imax = Pop();
  do // (DO)
  {
  POINT_gt_I(); // POINT>I
  _at_IL(); // @IL
  _at_IH(); // @IH
  _gt_C_plus_S(); // >C+S
  _at_INST_minus_C(); // @INST-C
  Push(0x0017);
  _eq_(); // =
  if (Pop() == 0) goto label2;
  Push(pp_PAST); // PAST
  Push(Read16(Pop())); // @
  UNK_0xe3a1(); // UNK_0xe3a1
  C_at_(); // C@
  Push(Pop() | Pop()); // OR
  goto label4;

  label2:
  Push(1); // 1

  label4:
  if (Pop() == 0) goto label3;
  _at_IC(); // @IC
  _ex_COLOR(); // !COLOR
  _at_IX(); // @IX
  _at_IY(); // @IY
  _ask_INVIS(); // ?INVIS
  if (Pop() == 0) goto label3;
  _at_IX(); // @IX
  _at_IY(); // @IY
  WLD_gt_SCR(); // WLD>SCR
  LPLOT(); // LPLOT

  label3:
  ICLOSE(); // ICLOSE
  i++;
  } while(i<imax); // (LOOP) 0xffbe


  label1:
  _2PIX(); // 2PIX
}


// ================================================
// 0xe948: WORD 'UNK_0xe94a' codep=0x224c parp=0xe94a
// ================================================

void UNK_0xe94a() // UNK_0xe94a
{
  Push(pp_LSCAN); // LSCAN
  Push(Pop() + Pop()); // +
}


// ================================================
// 0xe950: WORD 'UNK_0xe952' codep=0x224c parp=0xe952
// ================================================

void UNK_0xe952() // UNK_0xe952
{
  _2OVER(); // 2OVER
  _2OVER(); // 2OVER
  D_st_(); // D<
  if (Pop() == 0) goto label1;
  _2SWAP(); // 2SWAP

  label1:
  Push(0); // 0
  UNK_0xe94a(); // UNK_0xe94a
  _ex_(); // !
  Push(2); // 2
  UNK_0xe94a(); // UNK_0xe94a
  _ex_(); // !
  Push(cc__4); // 4
  UNK_0xe94a(); // UNK_0xe94a
  _ex_(); // !
  Push(cc__6); // 6
  UNK_0xe94a(); // UNK_0xe94a
  _ex_(); // !
  Push(2); // 2
  Push(pp__n_IN); // #IN
  _ex_(); // !
  Push(0); // 0
  UNK_0xe94a(); // UNK_0xe94a
  Push(pp_VIN); // VIN
  _ex_(); // !
  Push(0x0014);
  UNK_0xe94a(); // UNK_0xe94a
  Push(pp_VOUT); // VOUT
  _ex_(); // !
  Push(0x0028);
  UNK_0xe94a(); // UNK_0xe94a
  Push(pp_OIN); // OIN
  _ex_(); // !
  Push(0x003c);
  UNK_0xe94a(); // UNK_0xe94a
  Push(pp_OOUT); // OOUT
  _ex_(); // !
  Push(pp__ask_OPEN); // ?OPEN
  ON(); // ON
  CLIPPER(); // CLIPPER
  Push(pp__n_IN); // #IN
  Push(Read16(Pop())); // @
  Push(pp__ask_OPEN); // ?OPEN
  _099(); // 099
  if (Pop() == 0) goto label2;
  Push(pp_VIN); // VIN
  Push(Read16(Pop())); // @
  _gt_R(); // >R
  Push(h); // I
  Push(Pop()+2); // 2+
  Push(Read16(Pop())); // @
  Push(h); // I
  Push(Read16(Pop())); // @
  Push(h); // I
  Push(cc__6); // 6
  Push(Pop() + Pop()); // +
  Push(Read16(Pop())); // @
  R_gt_(); // R>
  Push(cc__4); // 4
  Push(Pop() + Pop()); // +
  Push(Read16(Pop())); // @
  Push(1); // 1
  return;

  label2:
  Push(0); // 0
}


// ================================================
// 0xe9de: WORD 'UNK_0xe9e0' codep=0x224c parp=0xe9e0
// ================================================

void UNK_0xe9e0() // UNK_0xe9e0
{
  _gt_C_plus_S(); // >C+S
  INST_minus_X(); // INST-X
  Push(Read16(Pop())); // @
  INST_minus_Y(); // INST-Y
  Push(Read16(Pop())); // @
  WLD_gt_SCR(); // WLD>SCR
  UNK_0xe392(); // UNK_0xe392
  Push(Read16(Pop())); // @
  UNK_0xe397(); // UNK_0xe397
  Push(Read16(Pop())); // @
  WLD_gt_SCR(); // WLD>SCR
  ICLOSE(); // ICLOSE
  UNK_0xe952(); // UNK_0xe952
  if (Pop() == 0) return;
  LLINE(); // LLINE
}


// ================================================
// 0xea02: WORD 'UNK_0xea04' codep=0x224c parp=0xea04
// ================================================

void UNK_0xea04() // UNK_0xea04
{
  GREY1(); // GREY1
  _ex_COLOR(); // !COLOR
  _1PIX(); // 1PIX
  Push(pp_ILOCAL); // ILOCAL
  Push(Read16(Pop())); // @
  Push(0); // 0

  signed short int i = Pop();
  signed short int imax = Pop();
  do // (DO)
  {
  Push(i); // I
  POINT_gt_I(); // POINT>I
  _at_ID(); // @ID
  Push(0x00ff);
  _eq_(); // =
  _at_IC(); // @IC
  Push(cc__3); // 3
  _eq_(); // =
  Push(Pop() & Pop()); // AND
  if (Pop() == 0) goto label1;
  _at_IL(); // @IL
  _at_IH(); // @IH
  UNK_0xe9e0(); // UNK_0xe9e0

  label1:
  i++;
  } while(i<imax); // (LOOP) 0xffe0

  _2PIX(); // 2PIX
}


// ================================================
// 0xea38: WORD 'UNK_0xea3a' codep=0x224c parp=0xea3a
// ================================================

void UNK_0xea3a() // UNK_0xea3a
{
  Push(0x00c7);
  Push(0x0014);
  Push(0x0021);
  Push(0x009f);
  BLACK(); // BLACK
  POLY_minus_WI(); // POLY-WI
}


// ================================================
// 0xea50: WORD 'UNK_0xea52' codep=0x224c parp=0xea52
// ================================================

void UNK_0xea52() // UNK_0xea52
{
  SAVE_minus_SC(); // SAVE-SC
  _gt_HIDDEN(); // >HIDDEN
  UNK_0xe471(); // UNK_0xe471
  UNK_0xea3a(); // UNK_0xea3a
  UNK_0xe8e6(); // UNK_0xe8e6
  UNK_0xe89c(); // UNK_0xe89c
  UNK_0xea04(); // UNK_0xea04
  UNK_0xe864(); // UNK_0xe864
  UNK_0xe766(); // UNK_0xe766
  Push(pp_TMAP); // TMAP
  _1_dot_5_at_(); // 1.5@
  Push(Pop() | Pop()); // OR
  if (Pop() == 0) goto label1;
  Push(0xb834);
  MODULE(); // MODULE

  label1:
  _gt_DISPLA(); // >DISPLA
  SCR_minus_RES(); // SCR-RES
}


// ================================================
// 0xea7a: WORD 'UNK_0xea7c' codep=0x224c parp=0xea7c
// ================================================

void UNK_0xea7c() // UNK_0xea7c
{
  UNK_0xe3f3(); // UNK_0xe3f3
  UNK_0xe471(); // UNK_0xe471
  UNK_0xea52(); // UNK_0xea52
  DCLIPSE(); // DCLIPSE
  UNK_0xe7b4(); // UNK_0xe7b4
  UNK_0xe7fe(); // UNK_0xe7fe
}


// ================================================
// 0xea8a: WORD 'UNK_0xea8c' codep=0x224c parp=0xea8c
// ================================================

void UNK_0xea8c() // UNK_0xea8c
{
  _gt_1FONT(); // >1FONT
  BLACK(); // BLACK
  _ex_COLOR(); // !COLOR
  Push(0x0033);
  Push(cc__7); // 7
  POS_dot_(); // POS.
  Push(cc__3); // 3
  UNK_0xe629(); // UNK_0xe629
  POLY_minus_ER(); // POLY-ER
  Push(pp_UNK_0xe37a); // UNK_0xe37a
  Push(Read16(Pop())); // @
  Push(Pop()+3); // 3+
  Push(cc__star_MAPSCA); // *MAPSCA
  _slash_(); // /
  Push(cc__3); // 3
  _dot_R(); // .R
  Push(0x004b);
  Push(cc__7); // 7
  POS_dot_(); // POS.
  Push(cc__3); // 3
  UNK_0xe629(); // UNK_0xe629
  POLY_minus_ER(); // POLY-ER
  Push(pp_UNK_0xe37e); // UNK_0xe37e
  Push(Read16(Pop())); // @
  Push(cc__5); // 5
  Push(Pop() + Pop()); // +
  Push(cc__star_MAPSCA); // *MAPSCA
  _slash_(); // /
  Push(cc__3); // 3
  _dot_R(); // .R
}


// ================================================
// 0xeace: WORD 'UNK_0xead0' codep=0x224c parp=0xead0
// ================================================

void UNK_0xead0() // UNK_0xead0
{
  _gt_1FONT(); // >1FONT
  BLACK(); // BLACK
  _ex_COLOR(); // !COLOR
  Push(0x006b);
  Push(cc__7); // 7
  POS_dot_(); // POS.
  Push(cc__3); // 3
  UNK_0xe629(); // UNK_0xe629
  POLY_minus_ER(); // POLY-ER
  Push(pp_UNK_0xe38a); // UNK_0xe38a
  Push(Read16(Pop())); // @
  Push(cc__3); // 3
  _dot_R(); // .R
}


// ================================================
// 0xeaee: WORD 'UNK_0xeaf0' codep=0x224c parp=0xeaf0
// ================================================

void UNK_0xeaf0() // UNK_0xeaf0
{
  _gt_1FONT(); // >1FONT
  BLACK(); // BLACK
  _ex_COLOR(); // !COLOR
  Push(0x008a);
  Push(cc__7); // 7
  POS_dot_(); // POS.
  Push(cc__3); // 3
  UNK_0xe629(); // UNK_0xe629
  POLY_minus_ER(); // POLY-ER
  Push(pp_UNK_0xe38a); // UNK_0xe38a
  Push(Read16(Pop())); // @
  Push(cc__star_MAPSCA); // *MAPSCA
  Push(Pop() * Pop()); // *
  Push(pp__minus_END); // -END
  Push(Read16(Pop())); // @
  Push(0x0064);
  _star__slash_(); // */
  _ask_DUP(); // ?DUP
  if (Pop() == 0) goto label1;
  Push(cc__3); // 3
  _dot_R(); // .R
  return;

  label1:
  Push(pp_UNK_0xe38a); // UNK_0xe38a
  Push(Read16(Pop())); // @
  if (Pop() == 0) goto label2;
  Push(0x008e);
  Push(cc__7); // 7
  POS_dot_(); // POS.
  PRINT("<1", 2); // (.")
  return;

  label2:
  Push(0); // 0
  Push(cc__3); // 3
  _dot_R(); // .R
}


// ================================================
// 0xeb45: WORD 'UNK_0xeb47' codep=0x224c parp=0xeb47
// ================================================

void UNK_0xeb47() // UNK_0xeb47
{
  Push(pp_UNK_0xe382); // UNK_0xe382
  Push(Read16(Pop())); // @
  Push(pp_UNK_0xe37a); // UNK_0xe37a
  Push(Read16(Pop())); // @
  _minus_(); // -
  ABS(); // ABS
  Push(cc__star_MAPSCA); // *MAPSCA
  _slash_(); // /
  DUP(); // DUP
  Push(Pop() * Pop()); // *
  Push(0); // 0
  Push(pp_UNK_0xe386); // UNK_0xe386
  Push(Read16(Pop())); // @
  Push(pp_UNK_0xe37e); // UNK_0xe37e
  Push(Read16(Pop())); // @
  _minus_(); // -
  ABS(); // ABS
  Push(cc__star_MAPSCA); // *MAPSCA
  _slash_(); // /
  DUP(); // DUP
  Push(Pop() * Pop()); // *
  Push(0); // 0
  D_plus_(); // D+
  SQRT(); // SQRT
  Push(pp_UNK_0xe38a); // UNK_0xe38a
  _ex_(); // !
  UNK_0xea8c(); // UNK_0xea8c
  UNK_0xead0(); // UNK_0xead0
  UNK_0xeaf0(); // UNK_0xeaf0
}


// ================================================
// 0xeb83: WORD 'UNK_0xeb85' codep=0x224c parp=0xeb85
// ================================================

void UNK_0xeb85() // UNK_0xeb85
{
  _gt_1FONT(); // >1FONT
  BLACK(); // BLACK
  _ex_COLOR(); // !COLOR
  Push(cc__9); // 9
  Push(cc__7); // 7
  POS_dot_(); // POS.
  Push(cc__3); // 3
  UNK_0xe629(); // UNK_0xe629
  POLY_minus_ER(); // POLY-ER
  Push(pp_UNK_0xe382); // UNK_0xe382
  Push(Read16(Pop())); // @
  Push(Pop()+3); // 3+
  Push(cc__star_MAPSCA); // *MAPSCA
  _slash_(); // /
  Push(cc__3); // 3
  _dot_R(); // .R
  Push(0x001d);
  Push(cc__7); // 7
  POS_dot_(); // POS.
  Push(cc__3); // 3
  UNK_0xe629(); // UNK_0xe629
  POLY_minus_ER(); // POLY-ER
  Push(pp_UNK_0xe386); // UNK_0xe386
  Push(Read16(Pop())); // @
  Push(cc__5); // 5
  Push(Pop() + Pop()); // +
  Push(cc__star_MAPSCA); // *MAPSCA
  _slash_(); // /
  Push(cc__3); // 3
  _dot_R(); // .R
}


// ================================================
// 0xebc5: WORD 'UNK_0xebc7' codep=0x224c parp=0xebc7
// ================================================

void UNK_0xebc7() // UNK_0xebc7
{
  Push(pp_UNK_0xe37a); // UNK_0xe37a
  Push(Read16(Pop())); // @
  Push(pp_UNK_0xe372); // UNK_0xe372
  Push(Read16(Pop())); // @
  Push(Pop() + Pop()); // +
  Push(0); // 0
  MAX(); // MAX
  Push(0x00f9);
  Push(cc__star_MAPSCA); // *MAPSCA
  Push(Pop() * Pop()); // *
  MIN(); // MIN
  Push(pp_UNK_0xe37a); // UNK_0xe37a
  Push(Read16(Pop())); // @
  _minus_(); // -
  Push(pp_UNK_0xe372); // UNK_0xe372
  _ex_(); // !
  Push(pp_UNK_0xe37e); // UNK_0xe37e
  Push(Read16(Pop())); // @
  Push(pp_UNK_0xe376); // UNK_0xe376
  Push(Read16(Pop())); // @
  Push(Pop() + Pop()); // +
  Push(0); // 0
  MAX(); // MAX
  Push(0x00db);
  Push(cc__star_MAPSCA); // *MAPSCA
  Push(Pop() * Pop()); // *
  MIN(); // MIN
  Push(pp_UNK_0xe37e); // UNK_0xe37e
  Push(Read16(Pop())); // @
  _minus_(); // -
  Push(pp_UNK_0xe376); // UNK_0xe376
  _ex_(); // !
}


// ================================================
// 0xec0d: WORD 'UNK_0xec0f' codep=0x224c parp=0xec0f
// ================================================

void UNK_0xec0f() // UNK_0xec0f
{
  UNK_0x3f09(); // UNK_0x3f09
  UNK_0x4926(); // UNK_0x4926
  WRITENE(); // WRITENE
  UNK_0x4e43(); // UNK_0x4e43
  UNK_0x5429(); // UNK_0x5429
  UNK_0x4722(); // UNK_0x4722
  UNK_0x5447(); // UNK_0x5447
  UNK_0x4f22(); // UNK_0x4f22
  UNK_0x5257(); // UNK_0x5257
  UNK_0x4222(); // UNK_0x4222
  UNK_0x4147(); // UNK_0x4147
  UNK_0x4954(); // UNK_0x4954
  UNK_0x4750(); // UNK_0x4750
  Push(pp_FRESH); // FRESH
  WRITENE(); // WRITENE
  UNK_0x4d51(); // UNK_0x4d51
  UNK_0x414f(); // UNK_0x414f
  _4TH_gt_DOS(); // 4TH>DOS
  UNK_0x5247(); // UNK_0x5247
  UNK_0xf130(); // UNK_0xf130
  UNK_0x90a1(); // UNK_0x90a1
  UNK_0x4c18(); // UNK_0x4c18

// ================================================
// 0xec3a: WORD 'UNK_0xec3c' codep=0x224c parp=0xec3c
// ================================================
  UNK_0x0724(); // UNK_0x0724

void UNK_0xec3c() // UNK_0xec3c
{
  UNK_0x2341(); // UNK_0x2341
  UNK_0x4559(); // UNK_0x4559
  UNK_0x5229(); // UNK_0x5229
  UNK_0x2047(); // UNK_0x2047
  UNK_0x4f50(); // UNK_0x4f50
  UNK_0x2056(); // UNK_0x2056
  UNK_0x4e4b(); // UNK_0x4e4b
  UNK_0x4822(); // UNK_0x4822
  UNK_0x505b(); // UNK_0x505b
  UNK_0x5247(); // UNK_0x5247
  WHITE(); // WHITE
  UNK_0x4343(); // UNK_0x4343
  UNK_0x2c47(); // UNK_0x2c47
  WRITENE(); // WRITENE
  UNK_0x4d51(); // UNK_0x4d51
  UNK_0x414f(); // UNK_0x414f
  _4TH_gt_DOS(); // 4TH>DOS
  UNK_0x5247(); // UNK_0x5247
  UNK_0xf130(); // UNK_0xf130
  UNK_0x90a1(); // UNK_0x90a1
  UNK_0x0018(); // UNK_0x0018

// ================================================
// 0xec66: WORD 'NOMAP' codep=0x224c parp=0xec70
// ================================================
  UNK_0x8502(); // UNK_0x8502
  UNK_0x4f50(); // UNK_0x4f50
  UNK_0x414f(); // UNK_0x414f
  UNK_0x4cd2(); // UNK_0x4cd2
  UNK_0x5324(); // UNK_0x5324

void NOMAP() // NOMAP
{
  WHITE(); // WHITE
  _ex_COLOR(); // !COLOR
  if (Pop() == 0) goto label1;
  UNK_0xec3c(); // UNK_0xec3c
  return;

  label1:
  UNK_0xec0f(); // UNK_0xec0f
}


// ================================================
// 0xec82: WORD 'UNK_0xec84' codep=0x224c parp=0xec84
// ================================================

void UNK_0xec84() // UNK_0xec84
{
  Push(cc__9); // 9
  Push(0xb76b);
  MODULE(); // MODULE
  Push(pp_UNK_0xe4ab); // UNK_0xe4ab
  _ex_(); // !
  Push(0x000a);
  Push(0xb76b);
  MODULE(); // MODULE
  Push(pp_UNK_0xe4af); // UNK_0xe4af
  _ex_(); // !
  Push(pp_UNK_0xe4b3); // UNK_0xe4b3
  _099(); // 099
  Push(pp_UNK_0xe4b7); // UNK_0xe4b7
  _099(); // 099
}

// 0xeca8: db 0x4c 0x22 0xbb 0x74 0xae 0x0b 0x80 0xe3 0xae 0x0b 0x6c 0xe3 0x72 0x0f 0x7f 0x0e 0x2d 0x12 0xb4 0x0d 0x80 0xe3 0xae 0x0b 0x6c 0xe3 0x92 0x0f 0x2d 0x12 0x90 0x0e 0xf5 0x12 0xc9 0x74 0xae 0x0b 0x84 0xe3 0xae 0x0b 0x6c 0xe3 0x72 0x0f 0x7f 0x0e 0x2d 0x12 0xb4 0x0d 0x84 0xe3 0xae 0x0b 0x6c 0xe3 0x92 0x0f 0x2d 0x12 0x90 0x0e 0xf5 0x12 0xf5 0x12 0x90 0x16 'L" t      l r  -       l   -      t      l r  -       l   -         '

// ================================================
// 0xecee: WORD 'UNK_0xecf0' codep=0x1d29 parp=0xecf0
// ================================================
// 0xecf0: db 0x3a 0x20 ': '

// ================================================
// 0xecf2: WORD 'FLUX-ARRAY' codep=0x1d29 parp=0xed01
// ================================================
// 0xed01: db 0x00 0x00 0x05 0x41 0x4c 0x4c 0x4f 0x54 0x20 0x1b 0x06 0x44 0x45 0x42 0x52 0x49 0x53 0x90 0x16 0x00 0x00 0x89 0x28 0x2e 0x56 0x45 0x53 0x53 0x45 0x4c 0xa9 0x3b 0x4b 0x04 0x00 0xfc 0xec 0x1d 0x00 0xef 0xec 0x20 0x00 0xef 0xec 0x32 0x38 0x30 0x34 0x14 0x00 0xef 0xec 0x4c 0x22 0x34 0x75 0x20 0xed 0x90 0x16 0x4c 0x22 0xdc 0x1b 0x06 0x44 0x45 0x42 0x52 0x49 0x53 0x90 0x16 0x4c 0x22 0xdc 0x1b 0x06 0x50 0x4c 0x41 0x4e 0x45 0x54 0x90 0x16 0x4c 0x22 0x0c 0x50 0x9d 0x86 0xdc 0x1b 0x12 0x53 0x54 0x45 0x4c 0x4c 0x41 0x52 0x20 0x50 0x41 0x52 0x41 0x4d 0x45 0x54 0x45 0x52 0x53 0xd2 0x9f 0x90 0x16 0x16 0xed 0x89 0x28 '   ALLOT   DEBRIS     (.VESSEL ;K            2804    L"4u    L"   DEBRIS  L"   PLANET  L" P     STELLAR PARAMETERS       ('

// ================================================
// 0xed7b: WORD 'UNK_0xed7d' codep=0x224c parp=0xed7d
// ================================================

void UNK_0xed7d() // UNK_0xed7d
{
  Push(pp_FLUX_minus_ARRAY); // FLUX-ARRAY
  Push(0x007a);
  Push(0); // 0
  FILL(); // FILL
}


// ================================================
// 0xed89: WORD 'UNK_0xed8b' codep=0x224c parp=0xed8b
// ================================================

void UNK_0xed8b() // UNK_0xed8b
{
  Push(pp_FLUX_minus_ARRAY); // FLUX-ARRAY
  C_ex_(); // C!
}


// ================================================
// 0xed91: WORD 'UNK_0xed93' codep=0x224c parp=0xed93
// ================================================

void UNK_0xed93() // UNK_0xed93
{
  Push(pp_FLUX_minus_ARRAY); // FLUX-ARRAY
  C_at_(); // C@
}


// ================================================
// 0xed99: WORD 'UNK_0xed9b' codep=0x224c parp=0xed9b
// ================================================

void UNK_0xed9b() // UNK_0xed9b
{
  Push(pp_FLUX_minus_ARRAY); // FLUX-ARRAY
  Push(Pop()+1); // 1+
  C_at_(); // C@
}


// ================================================
// 0xeda3: WORD 'UNK_0xeda5' codep=0x224c parp=0xeda5
// ================================================

void UNK_0xeda5() // UNK_0xeda5
{
  Push(pp_FLUX_minus_ARRAY); // FLUX-ARRAY
  Push(Pop()+1); // 1+
  C_ex_(); // C!
}


// ================================================
// 0xedad: WORD 'UNK_0xedaf' codep=0x224c parp=0xedaf
// ================================================

void UNK_0xedaf() // UNK_0xedaf
{
  Push(pp_FLUX_minus_ARRAY); // FLUX-ARRAY
  Push(Pop()+2); // 2+
}


// ================================================
// 0xedb5: WORD 'UNK_0xedb7' codep=0x224c parp=0xedb7
// ================================================

void UNK_0xedb7() // UNK_0xedb7
{
  UNK_0xedaf(); // UNK_0xedaf
  Push(Pop() + Pop()); // +
  UNK_0xe4bb(); // UNK_0xe4bb
  _0_st_(); // 0<
  if (Pop() == 0) goto label1;
  C_at_(); // C@
  POINT_gt_I(); // POINT>I
  _at_IX(); // @IX
  _at_IY(); // @IY
  return;

  label1:
  _2_at_(); // 2@
}


// ================================================
// 0xedd3: WORD 'UNK_0xedd5' codep=0x224c parp=0xedd5
// ================================================

void UNK_0xedd5() // UNK_0xedd5
{
  UNK_0xed9b(); // UNK_0xed9b
  Push(pp_UNK_0xecf0); // UNK_0xecf0
  Push(Read16(Pop())); // @
  Push(Pop() + Pop()); // +
  Push(0x0074);
  MIN(); // MIN
  UNK_0xeda5(); // UNK_0xeda5
}


// ================================================
// 0xede7: WORD 'UNK_0xede9' codep=0x224c parp=0xede9
// ================================================

void UNK_0xede9() // UNK_0xede9
{
  _2DUP(); // 2DUP
  _ask_INVIS(); // ?INVIS
  if (Pop() == 0) goto label1;
  WLD_gt_SCR(); // WLD>SCR
  LXPLOT(); // LXPLOT
  goto label2;

  label1:
  Pop(); Pop();// 2DROP

  label2:
  Push(pp_XORMODE); // XORMODE
  _099(); // 099
}


// ================================================
// 0xee01: WORD 'UNK_0xee03' codep=0x224c parp=0xee03
// ================================================

void UNK_0xee03() // UNK_0xee03
{
  UNK_0xed93(); // UNK_0xed93
  _ask_DUP(); // ?DUP
  if (Pop() == 0) Push(1); else Push(0); // 0=
  if (Pop() == 0) goto label1;
  UNK_0xed9b(); // UNK_0xed9b

  label1:
  Push(pp_UNK_0xecf0); // UNK_0xecf0
  Push(Read16(Pop())); // @
  _minus_(); // -
  UNK_0xedb7(); // UNK_0xedb7
}


// ================================================
// 0xee19: WORD 'UNK_0xee1b' codep=0x224c parp=0xee1b
// ================================================

void UNK_0xee1b() // UNK_0xee1b
{
  UNK_0xe4dd(); // UNK_0xe4dd
  UNK_0xede9(); // UNK_0xede9
  UNK_0xee03(); // UNK_0xee03
  UNK_0xede9(); // UNK_0xede9
}


// ================================================
// 0xee25: WORD 'UNK_0xee27' codep=0x224c parp=0xee27
// ================================================

void UNK_0xee27() // UNK_0xee27
{
  _ask_FIRST(); // ?FIRST
  _ask_LAST(); // ?LAST
  Push(Pop() & Pop()); // AND
  if (Pop() == 0) Push(1); else Push(0); // NOT
  if (Pop() == 0) return;
  IEXTRAC(); // IEXTRAC
  ILAST(); // ILAST
  CI(); // CI
  _gt_INSERT(); // >INSERT
}


// ================================================
// 0xee3d: WORD 'UNK_0xee3f' codep=0x224c parp=0xee3f
// ================================================

void UNK_0xee3f() // UNK_0xee3f
{
  UNK_0xed93(); // UNK_0xed93
  Push(pp_UNK_0xecf0); // UNK_0xecf0
  Push(Read16(Pop())); // @
  Push(Pop() + Pop()); // +
  UNK_0xed9b(); // UNK_0xed9b
  MOD(); // MOD
  UNK_0xed8b(); // UNK_0xed8b
}


// ================================================
// 0xee4f: WORD 'UNK_0xee51' codep=0x224c parp=0xee51
// ================================================

void UNK_0xee51() // UNK_0xee51
{
  Push(pp_UNK_0xe4b3); // UNK_0xe4b3
  Push(Read16(Pop())); // @
  if (Pop() == 0) return;
  UNK_0xed7d(); // UNK_0xed7d
  Push(1); // 1
  Push(pp_UNK_0xecf0); // UNK_0xecf0
  _ex_(); // !
  _star_SHIP(); // *SHIP
  _gt_C_plus_S(); // >C+S
  INST_minus_X(); // INST-X
  Push(Read16(Pop())); // @
  INST_minus_Y(); // INST-Y
  Push(Read16(Pop())); // @
  ICLOSE(); // ICLOSE
  Push(cc_UNK_0xe36e); // UNK_0xe36e
  Push(pp__star_GLOBAL); // *GLOBAL
  Push(Read16(Pop())); // @
  _ask_ICONS_minus_(); // ?ICONS-
  _ask_DUP(); // ?DUP
  if (Pop() == 0) return;
  Push(0); // 0

  signed short int i = Pop();
  signed short int imax = Pop();
  do // (DO)
  {
  POINT_gt_I(); // POINT>I
  _at_IL(); // @IL
  _at_IH(); // @IH
  _gt_C_plus_S(); // >C+S
  _at_INST_minus_C(); // @INST-C
  Push(0x002d);
  _eq_(); // =
  ICLOSE(); // ICLOSE
  if (Pop() == 0) goto label1;
  Push(pp_IINDEX); // IINDEX
  Push(Read16(Pop())); // @
  UNK_0xed9b(); // UNK_0xed9b
  UNK_0xedaf(); // UNK_0xedaf
  Push(Pop() + Pop()); // +
  C_ex_(); // C!
  UNK_0xedd5(); // UNK_0xedd5

  label1:
  i++;
  } while(i<imax); // (LOOP) 0xffda

}


// ================================================
// 0xeeab: WORD 'UNK_0xeead' codep=0x224c parp=0xeead
// ================================================

void UNK_0xeead() // UNK_0xeead
{
  NULL(); // NULL
  Push(pp_TMAP); // TMAP
  _1_dot_5_ex_(); // 1.5!
}


// ================================================
// 0xeeb5: WORD 'UNK_0xeeb7' codep=0x224c parp=0xeeb7
// ================================================

void UNK_0xeeb7() // UNK_0xeeb7
{
  UNK_0xe52f(); // UNK_0xe52f
  UNK_0xed9b(); // UNK_0xed9b
  if (Pop() == 0) Push(1); else Push(0); // 0=
  if (Pop() == 0) Push(1); else Push(0); // NOT
  Push(Pop() & Pop()); // AND
  if (Pop() == 0) return;
  UNK_0xed93(); // UNK_0xed93
  UNK_0xedb7(); // UNK_0xedb7
  UNK_0xee1b(); // UNK_0xee1b
  UNK_0xee3f(); // UNK_0xee3f
}

// 0xeecf: db 0x4c 0x22 0x22 0x75 0x5d 0x17 0x1c 0x00 0x5f 0x12 0x34 0x75 0x5d 0x17 0x2e 0x00 0x5d 0x17 0x34 0x00 0x25 0x40 0xf5 0x12 0x90 0x16 0x4c 0x22 0x32 0x62 0xae 0x0b 0xdd 0x4a 0x59 0xe3 0x92 0x0c 0xdd 0x4a 0xf5 0x12 0x32 0x62 0xae 0x0b 0x07 0x13 0x5e 0xe3 0x92 0x0c 0xdd 0x4a 0xf5 0x12 0x3e 0x13 0x63 0xe3 0x92 0x0c 0xfa 0x15 0x10 0x00 0x8b 0x75 0x3e 0x13 0x00 0x60 0xae 0x0b 0xf5 0x12 0xdd 0x4a 0xf5 0x12 0x54 0xe3 0x92 0x0c 0xf5 0x12 0x90 0x16 0x4c 0x22 0xb5 0xe4 0xae 0x0b 0xfa 0x15 0x48 0x00 0x7b 0xed 0x87 0x3b 0xee 0xec 0x16 0x6d 0x10 0x53 0x1f 0x7a 0x3f 0x7a 0x5d 0x17 0x3d 0x00 0x20 0x0f 0x4c 0x7e 0x32 0x0e 0xc9 0x7a 0xb1 0x7a 0xa8 0xec 0xe9 0xee 0xf5 0x12 0xfa 0x15 0x14 0x00 0xbb 0x74 0xae 0x0b 0xc9 0x74 0xae 0x0b 0x99 0xed 0xad 0xed 0x72 0x0f 0x4c 0x6d 0xd3 0xed 0x7a 0x7a 0x19 0x06 0x3e 0x13 0xfa 0x15 0xda 0xff 0x3d 0x0f 0x0a 0x7a 0x90 0x16 'L""u]   _ 4u] . ] 4 %@    L"2b   JY    J  2b    ^    J  > c        u>  `     J  T       L"      H {  ;   m S z?z] =   L~2  z z           t   t      r Lm  zz  >     =  z  '

// ================================================
// 0xef79: WORD 'DO-TMAPS' codep=0x224c parp=0xef86
// ================================================

void DO_minus_TMAPS() // DO-TMAPS
{
  UNK_0xeead(); // UNK_0xeead
  _star_STARSH(); // *STARSH
  _gt_C_plus_S(); // >C+S
  IOPEN(); // IOPEN
  Push(0x000b);
  Push(0x000f);
  IFIND(); // IFIND
  IOPEN(); // IOPEN
  if (Pop() == 0) goto label1;
  NULL(); // NULL
  Push(0xeed1);
  SELECT_minus_(); // SELECT-
  if (Pop() == 0) goto label1;
  _at_INST_minus_S(); // @INST-S
  Push(0x002e);
  _minus_(); // -
  Push(0x0028);
  SWAP(); // SWAP
  _at_RECORD(); // @RECORD
  Push(0x0014);
  Push(Pop() + Pop()); // +
  _2_at_(); // 2@
  Push(pp_UNK_0xe37a); // UNK_0xe37a
  _ex_(); // !
  Push(pp_UNK_0xe37e); // UNK_0xe37e
  _ex_(); // !
  CI(); // CI
  Push(pp_TMAP); // TMAP
  _1_dot_5_ex_(); // 1.5!
  UNK_0xea7c(); // UNK_0xea7c
  UNK_0xee51(); // UNK_0xee51
  UNK_0xe722(); // UNK_0xe722
  UNK_0xeb47(); // UNK_0xeb47
  UNK_0xee27(); // UNK_0xee27

  label1:
  Push(cc__3); // 3
  _star_CLOSE(); // *CLOSE
}

// 0xefe0: db 0x4c 0x22 0x6f 0xe4 0x50 0xea 0x99 0x8c 0x20 0xe7 0x90 0x16 0x4c 0x22 0xab 0xee 0xe0 0xef 0x90 0x16 0x4c 0x22 0xb5 0xe4 0x65 0x6d 0xb1 0xe4 0x2e 0x0f 0x53 0x13 0xe0 0xef 0x4f 0xee 0x90 0x16 0x4c 0x22 0xb1 0xe4 0x65 0x6d 0xb5 0xe4 0x2e 0x0f 0x53 0x13 0xe0 0xef 0x27 0xef 0x90 0x16 'L"o P       L"      L"  em  . S   O   L"  em  . S   '   '

// ================================================
// 0xf018: WORD 'UNK_0xf01a' codep=0x224c parp=0xf01a
// ================================================

void UNK_0xf01a() // UNK_0xf01a
{
  Push(pp_UNK_0xe37a); // UNK_0xe37a
  Push(Read16(Pop())); // @
  Push(cc__8); // 8
  _slash_(); // /
  Push(cc__8); // 8
  Push(Pop() * Pop()); // *
  Push(pp_UNK_0xe37a); // UNK_0xe37a
  _ex_(); // !
  Push(pp_UNK_0xe37e); // UNK_0xe37e
  Push(Read16(Pop())); // @
  Push(cc__8); // 8
  _slash_(); // /
  Push(cc__8); // 8
  Push(Pop() * Pop()); // *
  Push(pp_UNK_0xe37e); // UNK_0xe37e
  _ex_(); // !
}


// ================================================
// 0xf03c: WORD 'KEY>ACTION' codep=0x4b3b parp=0xf04b
// ================================================
// 0xf04b: db 0x03 0x00 0xee 0xef 0x3b 0x01 0xf6 0xef 0x3f 0x01 0x08 0xf0 0x41 0x01 0x86 0xef '    ;   ?   A   '

// ================================================
// 0xf05b: WORD 'UNK_0xf05d' codep=0x224c parp=0xf05d
// ================================================

void UNK_0xf05d() // UNK_0xf05d
{
  Push(pp_LKEY); // LKEY
  Push(Read16(Pop())); // @
  DUP(); // DUP
  Push(0x013b);
  Push(0x0145);
  WITHIN(); // WITHIN
  if (Pop() == 0) goto label1;
  Push(pp_FTRIG); // FTRIG
  _099(); // 099
  KEY_gt_ACTION(); // KEY>ACTION
  Push(pp_LKEY); // LKEY
  _099(); // 099
  return;

  label1:
  Pop(); // DROP
}


// ================================================
// 0xf083: WORD 'UNK_0xf085' codep=0x224c parp=0xf085
// ================================================

void UNK_0xf085() // UNK_0xf085
{

  label2:
  XYSCAN(); // XYSCAN
  Push(0x00fa); Pust(0x0000);
  Push(pp_KEYTIME); // KEYTIME
  _2_at_(); // 2@
  Push(pp_LKEYTIM); // LKEYTIM
  _2_at_(); // 2@
  D_minus_(); // D-
  D_gt_(); // D>
  Push(pp_UNK_0xe36a); // UNK_0xe36a
  Push(Read16(Pop())); // @
  Push(Pop() * Pop()); // *
  Push(Pop()*2); // 2*
  Push(1); // 1
  MAX(); // MAX
  Push(0x000a);
  MIN(); // MIN
  Push(pp_UNK_0xe36a); // UNK_0xe36a
  _ex_(); // !
  Push(pp_UNK_0xe36a); // UNK_0xe36a
  Push(Read16(Pop())); // @
  Push(Pop() * Pop()); // *
  Push(cc__star_MAPSCA); // *MAPSCA
  Push(Pop() * Pop()); // *
  Push(pp_UNK_0xe372); // UNK_0xe372
  _ex_(); // !
  Push(pp_UNK_0xe36a); // UNK_0xe36a
  Push(Read16(Pop())); // @
  Push(Pop() * Pop()); // *
  Push(cc__star_MAPSCA); // *MAPSCA
  Push(Pop() * Pop()); // *
  Push(pp_UNK_0xe376); // UNK_0xe376
  _ex_(); // !
  UNK_0xebc7(); // UNK_0xebc7
  Push(pp_UNK_0xe372); // UNK_0xe372
  Push(Read16(Pop())); // @
  Push(pp_UNK_0xe376); // UNK_0xe376
  Push(Read16(Pop())); // @
  D0_eq_(); // D0=
  if (Pop() == 0) Push(1); else Push(0); // NOT
  if (Pop() == 0) goto label1;
  UNK_0xe722(); // UNK_0xe722
  Push(pp_UNK_0xe372); // UNK_0xe372
  Push(Read16(Pop())); // @
  Push(pp_UNK_0xe37a); // UNK_0xe37a
  _plus__ex_(); // +!
  Push(pp_UNK_0xe376); // UNK_0xe376
  Push(Read16(Pop())); // @
  Push(pp_UNK_0xe37e); // UNK_0xe37e
  _plus__ex_(); // +!
  UNK_0xf01a(); // UNK_0xf01a
  Push(pp_UNK_0xe37a); // UNK_0xe37a
  Push(Read16(Pop())); // @
  Push(pp_UNK_0xe37e); // UNK_0xe37e
  Push(Read16(Pop())); // @
  _ask_INVIS(); // ?INVIS
  if (Pop() == 0) Push(1); else Push(0); // NOT
  if (Pop() == 0) goto label3;
  UNK_0xea7c(); // UNK_0xea7c
  UNK_0xee51(); // UNK_0xee51

  label3:
  UNK_0xe722(); // UNK_0xe722
  UNK_0xeb47(); // UNK_0xeb47
  CLICK(); // CLICK

  label1:
  UNK_0xeeb7(); // UNK_0xeeb7
  UNK_0xe864(); // UNK_0xe864
  UNK_0xf05d(); // UNK_0xf05d
  _ask_TRIG(); // ?TRIG
  if (Pop() == 0) goto label2;
}


// ================================================
// 0xf119: WORD 'UNK_0xf11b' codep=0x224c parp=0xf11b
// ================================================

void UNK_0xf11b() // UNK_0xf11b
{
  Push(cc__3); // 3
  Push(0); // 0

  signed short int i = Pop();
  signed short int imax = Pop();
  do // (DO)
  {
  UNK_0xe722(); // UNK_0xe722
  Push(0x00c8);
  MS(); // MS
  i++;
  } while(i<imax); // (LOOP) 0xfff6

}


// ================================================
// 0xf12e: WORD 'UNK_0xf130' codep=0x4c16 parp=0xf130
// ================================================

// ================================================
// 0xf12f: WORD 'UNK_0xf131' codep=0x224c parp=0xf131
// ================================================

void UNK_0xf131() // UNK_0xf131
{
  _star_SHIP(); // *SHIP
  _gt_C_plus_S(); // >C+S
  UNK_0xe3a6(); // UNK_0xe3a6
  Push(Pop()+1); // 1+
  C_at_(); // C@
  Push(cc__7); // 7
  Push(Pop() & Pop()); // AND
  UNK_0xe3a6(); // UNK_0xe3a6
  C_at_(); // C@
  Push(0x0064);
  _star__slash_(); // */
  ICLOSE(); // ICLOSE
  Push(pp_UNK_0xe38e); // UNK_0xe38e
  _ex_(); // !
}


// ================================================
// 0xf151: WORD '(/STARMAP)' codep=0x224c parp=0xf160
// ================================================

void _ro__slash_STARMAP_rc_() // (/STARMAP)
{
  Push(pp_ESC_minus_EN); // ESC-EN
  _099(); // 099
  TIME(); // TIME
  _2_at_(); // 2@
  Push(pp_NAV_minus_TIM); // NAV-TIM
  _2_at_(); // 2@
  D_gt_(); // D>
  Push(pp_CONTEXT); // CONTEXT
  Push(Read16(Pop())); // @
  Push(cc__3); // 3
  _eq_(); // =
  Push(Pop() & Pop()); // AND
  if (Pop() == 0) goto label1;
  UNK_0xf131(); // UNK_0xf131
  UNK_0xec84(); // UNK_0xec84
  Push(pp_BVIS); // BVIS
  Push(Read16(Pop())); // @
  Push(pp_LVIS); // LVIS
  Push(Read16(Pop())); // @
  UNK_0xeead(); // UNK_0xeead
  Push(cc__7); // 7
  Push(pp_CONTEXT); // CONTEXT
  _ex_(); // !
  Push(pp_LOCRADI); // LOCRADI
  Push(Read16(Pop())); // @
  Push(pp_XABS); // XABS
  Push(Read16(Pop())); // @
  Push(pp_YABS); // YABS
  Push(Read16(Pop())); // @
  UNK_0xe3c5(); // UNK_0xe3c5
  DCLIPSE(); // DCLIPSE
  UNK_0xe497(); // UNK_0xe497
  _gt_DISPLA(); // >DISPLA
  DARK(); // DARK
  _gt_HIDDEN(); // >HIDDEN
  DARK(); // DARK
  UNK_0xe585(); // UNK_0xe585
  UNK_0xe635(); // UNK_0xe635
  _gt_DISPLA(); // >DISPLA
  SCR_minus_RES(); // SCR-RES
  UNK_0xea7c(); // UNK_0xea7c
  UNK_0xeb47(); // UNK_0xeb47
  DCLIPSE(); // DCLIPSE
  Push(pp_XORMODE); // XORMODE
  _099(); // 099
  UNK_0xeb85(); // UNK_0xeb85
  UNK_0xea8c(); // UNK_0xea8c
  UNK_0xead0(); // UNK_0xead0
  UNK_0xeaf0(); // UNK_0xeaf0
  UNK_0xf11b(); // UNK_0xf11b
  UNK_0xf085(); // UNK_0xf085
  Push(pp_UNK_0xe37a); // UNK_0xe37a
  Push(Read16(Pop())); // @
  Push(pp_UNK_0xe37e); // UNK_0xe37e
  Push(Read16(Pop())); // @
  Push(pp_EYEXY); // EYEXY
  D_ex_(); // D!
  Push(pp_YABS); // YABS
  _ex_(); // !
  Push(pp_XABS); // XABS
  _ex_(); // !
  Push(pp_LOCRADI); // LOCRADI
  _ex_(); // !
  Push(cc__3); // 3
  Push(pp_CONTEXT); // CONTEXT
  _ex_(); // !
  Push(0xec78);
  DUP(); // DUP
  Push(pp_ANCHOR); // ANCHOR
  D_ex_(); // D!
  ORGLIST(); // ORGLIST
  _gt_1ICONF(); // >1ICONF
  Push(cc__8); // 8
  Push(0x0030);
  Push(pp_YWLD_c_YP); // YWLD:YP
  D_ex_(); // D!
  Push(cc__8); // 8
  Push(0x0020);
  Push(pp_XWLD_c_XP); // XWLD:XP
  D_ex_(); // D!
  Push(pp_LVIS); // LVIS
  _ex_(); // !
  Push(pp_BVIS); // BVIS
  _ex_(); // !
  Push(pp_XLLDEST); // XLLDEST
  _099(); // 099
  Push(pp_YLLDEST); // YLLDEST
  _099(); // 099
  Push(1); // 1
  goto label2;

  label1:
  Push(pp_CONTEXT); // CONTEXT
  Push(Read16(Pop())); // @
  Push(cc__3); // 3
  _eq_(); // =
  if (Pop() == 0) Push(1); else Push(0); // NOT
  NOMAP(); // NOMAP
  Push(0); // 0

  label2:
  Push(pp_ESC_minus_EN); // ESC-EN
  ON(); // ON
}

// 0xf232: db 0x2a 0x4d 0x41 0x50 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x2d 0x2d 0x2d 0x2d 0x5c 0x20 0x53 0x54 0x41 0x52 0x4d 0x41 0x50 0x20 0x4f 0x56 0x52 0x2d 0x28 0x20 0x72 0x66 0x67 0x30 0x39 0x73 0x65 0x70 0x38 0x38 0x29 0x0a 0x31 0x32 0x35 0x30 0x0f 0xe1 0x27 0xb8 0x27 0xdc 0x1b 0x01 0x47 0x90 0x16 0x4c 0x22 0xdc 0x1b 0x04 0x54 0x48 0x49 0x4e 0x90 0x16 0x4c 0x22 0xdc 0x1b 0x05 0x56 0x45 0x52 0x59 0x20 0x81 0xf2 0x90 0x16 0x4c 0x22 0xdc 0x1b 0x08 0x4d 0x4f 0x44 0x45 0x52 0x41 0x54 0x45 0x90 0x16 0x4c 0x22 0xdc 0x1b 0x05 0x54 0x48 0x49 0x43 0x4b 0x90 0x16 0x4c 0x22 0xdc 0x1b 0x05 0x56 0x45 0x52 0x59 0x20 0xa9 0xf2 0x90 0x16 0xd3 0xf1 0x87 0x28 0x2e 0x41 0x54 0x4d 0x4f 0xa9 0x3b 0x4b 0x05 0x00 0x08 0xef 0x01 0x00 0x8e 0xf2 0x02 0x00 0x83 0xf2 0x03 0x00 0x9c 0xf2 0x04 0x00 0xab 0xf2 0x05 0x00 0xb7 0xf2 0x4c 0x22 0x99 0xee 0xdc 0x1b 0x15 0x41 0x54 0x4d 0x4f 0x53 0x50 0x48 0x45 0x52 0x49 0x43 0x20 0x44 0x45 0x4e 0x53 0x49 0x54 0x59 0x3a 0x20 0x59 0xee 0xfa 0x15 0x08 0x00 0xd5 0xec 0x92 0x0c 0xcd 0xf2 0x90 0x16 0x4c 0x22 0xdc 0x1b 0x04 0x43 0x41 0x4c 0x4d 0x90 0x16 0x4c 0x22 0xdc 0x1b 0x08 0x4d 0x4f 0x44 0x45 0x52 0x41 0x54 0x45 0x90 0x16 0x4c 0x22 0xdc 0x1b 0x07 0x56 0x49 0x4f 0x4c 0x45 0x4e 0x54 0x90 0x16 0x4c 0x22 0xdc 0x1b 0x05 0x56 0x45 0x52 0x59 0x20 0x2b 0xf3 0x90 0x16 0x79 0xed 0x88 0x28 0x2e 0x57 0x45 0x41 0x54 0x48 0xa9 0x3b 0x4b 0x04 0x00 0x08 0xef 0x01 0x00 0x13 0xf3 0x02 0x00 0x1e 0xf3 0x03 0x00 0x2d 0xf3 0x04 0x00 0x3b 0xf3 0x4c 0x22 0x99 0xee 0xdc 0x1b 0x10 0x47 0x4c 0x4f 0x42 0x41 0x4c 0x20 0x57 0x45 0x41 0x54 0x48 0x45 0x52 0x3a 0x20 0x59 0xee 0xfa 0x15 0x08 0x00 0xcd 0xec 0xae 0x0b 0x52 0xf3 0x90 0x16 0x4c 0x22 0x99 0xee 0xdc 0x1b 0x11 0x20 0x53 0x50 0x45 0x43 0x54 0x52 0x41 0x4c 0x20 0x43 0x4c 0x41 0x53 0x53 0x3a 0x20 0xd2 0x9f 0x34 0x75 0x6b 0x06 0x90 0x16 0x29 0x1d 0x4d 0x4b 0x47 0x46 0x41 0x42 0x4f 0x4c 0x22 0xb4 0x0d 0x3d 0x0f 0x9f 0x3b 0x20 0x0f 0xb8 0x15 0xe7 0x0f 0xad 0xf3 0x50 0x0e 0x72 0x0f 0x92 0x0c 0x6e 0x0e 0x5f 0x12 0xfa 0x15 0x04 0x00 0x4a 0x17 0xd0 0x15 0xea 0xff 0x90 0x0e 0x32 0x0e 0x90 0x16 0x4c 0x22 0x99 0xee 0xdc 0x1b 0x0c 0x20 0x45 0x43 0x4f 0x53 0x50 0x48 0x45 0x52 0x45 0x3a 0x20 0x34 0x75 0xb6 0xf3 0x41 0x0e 0xd2 0x9f 0x7f 0x3b 0x92 0x0f 0x2e 0x0f 0x89 0x11 0xb8 0x27 0xdc 0x1b 0x02 0x2d 0x20 0xa7 0x3b 0xad 0x11 0xb8 0x27 0x90 0x16 0x4c 0x22 0x2d 0x6c 0x1f 0x7a 0x3f 0x7a 0x5d 0x17 0x0b 0x00 0xf2 0x0e 0x4c 0x7e 0x32 0x0e 0x3f 0x7a 0xd2 0x9f 0x5d 0x17 0x45 0xbe 0xd9 0x84 0x7f 0x3b 0x0a 0x7a 0x90 0x16 0x4c 0x22 0xd2 0x9f 0x5d 0x17 0xd6 0x00 0x12 0xf4 0x90 0x16 0x4c 0x22 0x02 0xee 0x90 0x16 0x4c 0x22 0x7c 0xf0 0x90 0x16 0x4c 0x22 0xeb 0xee 0x02 0xee 0x51 0xef 0xf5 0xef 0x90 0x16 0x00 0x00 0x8a 0x28 0x2e 0x56 0x2f 0x50 0x2d 0x4f 0x42 0x4a 0xa9 0x3b 0x4b 0x02 0x00 0x4e 0xf4 0x16 0x00 0x42 0xf4 0x00 0x00 0x48 0xf4 0x4c 0x22 0x34 0x75 0x65 0xf4 0x90 0x16 0x4c 0x22 0xb3 0xf0 0xf5 0xf1 0x1f 0xf2 0xe7 0xf2 0x56 0xf1 0x68 0xf3 0x90 0x16 0x4c 0x22 0x8d 0xf3 0xe0 0xf3 0x90 0x16 0x5a 0xf4 0x8b 0x28 0x2e 0x41 0x4e 0x41 0x4c 0x59 0x53 0x49 0x53 0xa9 0x3b 0x4b 0x04 0x00 0x6e 0x3a 0x20 0x00 0x7d 0xf4 0x17 0x00 0x8d 0xf4 0x19 0x00 0x75 0xf4 0x3c 0x00 0x36 0xf4 0x95 0xf4 0x8b 0x28 0x2f 0x41 0x4e 0x41 0x4c 0x59 0x53 0x49 0x53 0xa9 0x4c 0x22 0xd2 0x9f 0x46 0x9c 0x0c 0x63 0x83 0x4a 0xf0 0x0d 0xa5 0x10 0x16 0x16 0x02 0x00 0x00 0x00 0x14 0x40 0xfa 0x15 0x16 0x00 0x1f 0x7a 0x9d 0xed 0x22 0x75 0xa1 0xf4 0xdf 0x79 0x16 0x16 0x58 0x1b 0x00 0x00 0x60 0x16 0x57 0x00 0x3e 0x13 0xfa 0x15 0x26 0x00 0xdc 0x1b 0x1d 0x49 0x20 0x53 0x41 0x49 0x44 0x20 0x54 0x48 0x45 0x52 0x45 0x27 0x53 0x20 0x4e 0x4f 0x54 0x48 0x49 0x4e 0x47 0x20 0x54 0x48 0x45 0x52 0x45 0x21 0x60 0x16 0x25 0x00 0xdc 0x1b 0x20 0x49 0x20 0x4e 0x45 0x45 0x44 0x20 0x41 0x20 0x43 0x55 0x52 0x52 0x45 0x4e 0x54 0x20 0x53 0x45 0x4e 0x53 0x4f 0x52 0x20 0x52 0x45 0x41 0x44 0x49 0x4e 0x47 0x2e 0x32 0x0e 0x16 0x16 0xdc 0x05 0x00 0x00 0x98 0x2a 0x38 0x0c 0x65 0x10 0x4f 0x64 0x4c 0x6d 0xa6 0x49 0x0c 0x63 0x32 0x6d 0x90 0x16 0x41 0x4e 0x2d 0x56 0x4f 0x43 0x00 '*MAP____________________________----\ STARMAP OVR-( rfg09sep88) 1250  ' '   G  L"   THIN  L"   VERY     L"   MODERATE  L"   THICK  L"   VERY        (.ATMO ;K                        L"     ATMOSPHERIC DENSITY: Y             L"   CALM  L"   MODERATE  L"   VIOLENT  L"   VERY +   y  (.WEATH ;K              -   ; L"     GLOBAL WEATHER: Y         R   L"      SPECTRAL CLASS:   4uk   ) MKGFABOL"  =  ;        P r   n _     J       2   L"      ECOSPHERE: 4u  A   ;  .    '   -  ;   '  L"-l z?z]     L~2 ?z  ] E   ; z  L"  ]       L"    L"|   L"    Q        (.V/P-OBJ ;K  N   B   H L"4ue   L"        V h   L"      Z  (.ANALYSIS ;K  n:  }       u < 6    (/ANALYSIS L"  F  c J           @     z  "u   y  X   ` W >   &    I SAID THERE'S NOTHING THERE!` %    I NEED A CURRENT SENSOR READING.2        *8 e OdLm I c2m  AN-VOC '
  