// ====== OVERLAY 'DRONE' ======

#include"cpu.h"

// store offset = 0xebe0
// overlay size   = 0x0980

// =================================
// =========== DICTIONARY ==========
// =================================
// 1869:      UNK_0x202b  codep:0x841d parp:0x202b size:0x001d C-string:'UNK_0x202b'
// 1870:      UNK_0x204a  codep:0x746f parp:0x204a size:0x0002 C-string:'UNK_0x204a'
// 1871:      UNK_0x204e  codep:0x6e69 parp:0x204e size:0x07d0 C-string:'UNK_0x204e'
// 1872:      UNK_0x2820  codep:0xbf81 parp:0x2820 size:0x0202 C-string:'UNK_0x2820'
// 1873:      UNK_0x2a24  codep:0xf3fc parp:0x2a24 size:0x0417 C-string:'UNK_0x2a24'
// 1874:      UNK_0x2e3d  codep:0xf82d parp:0x2e3d size:0x0409 C-string:'UNK_0x2e3d'
// 1875:      UNK_0x3248  codep:0xe30e parp:0x3248 size:0x0cbf C-string:'UNK_0x3248'
// 1876:      UNK_0x3f09  codep:0x224c parp:0x3f09 size:0x0445 C-string:'UNK_0x3f09'
// 1877:      UNK_0x4350  codep:0xd70b parp:0x4350 size:0x08c6 C-string:'UNK_0x4350'
// 1878:      UNK_0x4c18  codep:0x48e0 parp:0x4c18 size:0x0008 C-string:'UNK_0x4c18'
// 1879:      UNK_0x4c22  codep:0x5253 parp:0x4c22 size:0x001f C-string:'UNK_0x4c22'
// 1880:      UNK_0x4c43  codep:0x1e16 parp:0x4c43 size:0x020c C-string:'UNK_0x4c43'
// 1881:      UNK_0x4e51  codep:0x0db4 parp:0x4e51 size:0x0103 C-string:'UNK_0x4e51'
// 1882:      UNK_0x4f56  codep:0x0000 parp:0x4f56 size:0x00b9 C-string:'UNK_0x4f56'
// 1883:      UNK_0x5011  codep:0x4ffc parp:0x5011 size:0x0004 C-string:'UNK_0x5011'
// 1884:      UNK_0x5017  codep:0x5247 parp:0x5017 size:0x0209 C-string:'UNK_0x5017'
// 1885:      UNK_0x5222  codep:0x29e8 parp:0x5222 size:0x0022 C-string:'UNK_0x5222'
// 1886:      UNK_0x5246  codep:0x5349 parp:0x5246 size:0x0009 C-string:'UNK_0x5246'
// 1887:      UNK_0x5251  codep:0x4c46 parp:0x5251 size:0x02f0 C-string:'UNK_0x5251'
// 1888:      UNK_0x5543  codep:0x5535 parp:0x5543 size:0x085c C-string:'UNK_0x5543'
// 1889:      UNK_0x5da1  codep:0x0026 parp:0x5da1 size:0x006e C-string:'UNK_0x5da1'
// 1890:      UNK_0x5e11  codep:0x5e05 parp:0x5e11 size:0x20fd C-string:'UNK_0x5e11'
// 1891:      UNK_0x7f10  codep:0x7c2d parp:0x7f10 size:0x0f1a C-string:'UNK_0x7f10'
// 1892:      UNK_0x8e2c  codep:0x6d16 parp:0x8e2c size:0x00c0 C-string:'UNK_0x8e2c'
// 1893:      UNK_0x8eee  codep:0x0a0f parp:0x8eee size:0x011f C-string:'UNK_0x8eee'
// 1894:      UNK_0x900f  codep:0x0e41 parp:0x900f size:0x0fdd C-string:'UNK_0x900f'
// 1895:      UNK_0x9fee  codep:0x2e84 parp:0x9fee size:0x1320 C-string:'UNK_0x9fee'
// 1896:      UNK_0xb310  codep:0x5d0b parp:0xb310 size:0x04ff C-string:'UNK_0xb310'
// 1897:      UNK_0xb811  codep:0x5846 parp:0xb811 size:0x1806 C-string:'UNK_0xb811'
// 1898:      UNK_0xd019  codep:0x0000 parp:0xd019 size:0x00d3 C-string:'UNK_0xd019'
// 1899:      UNK_0xd0ee  codep:0x90f3 parp:0xd0ee size:0x0e11 C-string:'UNK_0xd0ee'
// 1900:      UNK_0xdf01  codep:0x4f48 parp:0xdf01 size:0x0d0b C-string:'UNK_0xdf01'
// 1901:      UNK_0xec0e  codep:0x7394 parp:0xec0e size:0x0006 C-string:'UNK_0xec0e'
// 1902:      UNK_0xec16  codep:0x224c parp:0xec16 size:0x0008 C-string:'UNK_0xec16'
// 1903:      UNK_0xec20  codep:0x1d29 parp:0xec20 size:0x0008 C-string:'UNK_0xec20'
// 1904:      UNK_0xec2a  codep:0x224c parp:0xec2a size:0x0022 C-string:'UNK_0xec2a'
// 1905:      UNK_0xec4e  codep:0x224c parp:0xec4e size:0x0010 C-string:'UNK_0xec4e'
// 1906:      UNK_0xec60  codep:0x224c parp:0xec60 size:0x002e C-string:'UNK_0xec60'
// 1907:      UNK_0xec90  codep:0x224c parp:0xec90 size:0x0010 C-string:'UNK_0xec90'
// 1908:      UNK_0xeca2  codep:0x224c parp:0xeca2 size:0x004d C-string:'UNK_0xeca2'
// 1909:      UNK_0xecf1  codep:0x224c parp:0xecf1 size:0x002c C-string:'UNK_0xecf1'
// 1910:      UNK_0xed1f  codep:0x224c parp:0xed1f size:0x0010 C-string:'UNK_0xed1f'
// 1911:      UNK_0xed31  codep:0x224c parp:0xed31 size:0x0032 C-string:'UNK_0xed31'
// 1912:      UNK_0xed65  codep:0x224c parp:0xed65 size:0x001f C-string:'UNK_0xed65'
// 1913:      UNK_0xed86  codep:0x224c parp:0xed86 size:0x0181 C-string:'UNK_0xed86'
// 1914:      UNK_0xef09  codep:0x3b9f parp:0xef09 size:0x0044 C-string:'UNK_0xef09'
// 1915:         TD-SCRO  codep:0x4b3b parp:0xef59 size:0x0060 C-string:'TD_minus_SCRO'
// 1916:      UNK_0xefbb  codep:0x224c parp:0xefbb size:0x000c C-string:'UNK_0xefbb'
// 1917:      UNK_0xefc9  codep:0x224c parp:0xefc9 size:0x000c C-string:'UNK_0xefc9'
// 1918:      UNK_0xefd7  codep:0x224c parp:0xefd7 size:0x000c C-string:'UNK_0xefd7'
// 1919:            ACT#  codep:0x1d29 parp:0xefec size:0x0002 C-string:'ACT_n_'
// 1920:      UNK_0xeff0  codep:0x224c parp:0xeff0 size:0x000a C-string:'UNK_0xeff0'
// 1921:      UNK_0xeffc  codep:0x224c parp:0xeffc size:0x0019 C-string:'UNK_0xeffc'
// 1922:      UNK_0xf017  codep:0x4c16 parp:0xf017 size:0x0011 C-string:'UNK_0xf017'
// 1923:      UNK_0xf02a  codep:0x224c parp:0xf02a size:0x004e C-string:'UNK_0xf02a'
// 1924:         ACT-SCR  codep:0x4b3b parp:0xf084 size:0x000c C-string:'ACT_minus_SCR'
// 1925:      UNK_0xf092  codep:0x224c parp:0xf092 size:0x0018 C-string:'UNK_0xf092'
// 1926:         ACTION?  codep:0x224c parp:0xf0b6 size:0x0012 C-string:'ACTION_ask_'
// 1927:         #>ACTIO  codep:0x4b3b parp:0xf0d4 size:0x0010 C-string:'_n__gt_ACTIO'
// 1928:      UNK_0xf0e6  codep:0x1d29 parp:0xf0e6 size:0x0052 C-string:'UNK_0xf0e6'
// 1929:      UNK_0xf13a  codep:0x1d29 parp:0xf13a size:0x000b C-string:'UNK_0xf13a'
// 1930:      UNK_0xf147  codep:0x2502 parp:0xf147 size:0x0008 C-string:'UNK_0xf147'
// 1931:         10!TIME  codep:0xf144 parp:0xf15b size:0x0001 C-string:'_10_ex_TIME'
// 1932:         20!TIME  codep:0xf144 parp:0xf168 size:0x0001 C-string:'_20_ex_TIME'
// 1933:         30!TIME  codep:0xf144 parp:0xf175 size:0x0001 C-string:'_30_ex_TIME'
// 1934:          5!TIME  codep:0xf144 parp:0xf181 size:0x0001 C-string:'_5_ex_TIME'
// 1935:          7!TIME  codep:0xf144 parp:0xf18d size:0x0001 C-string:'_7_ex_TIME'
// 1936:         13!TIME  codep:0xf144 parp:0xf19a size:0x0001 C-string:'_13_ex_TIME'
// 1937:          3!TIME  codep:0xf144 parp:0xf1a6 size:0x0001 C-string:'_3_ex_TIME'
// 1938:      UNK_0xf1a9  codep:0x224c parp:0xf1a9 size:0x0028 C-string:'UNK_0xf1a9'
// 1939:         (TIMER)  codep:0xaccc parp:0xf1dd size:0x0044 C-string:'_ro_TIMER_rc_'
// 1940:      UNK_0xf223  codep:0x224c parp:0xf223 size:0x0012 C-string:'UNK_0xf223'
// 1941:           TIMES  codep:0x1d29 parp:0xf23f size:0x0030 C-string:'TIMES'
// 1942:      UNK_0xf271  codep:0x224c parp:0xf271 size:0x000a C-string:'UNK_0xf271'
// 1943:      UNK_0xf27d  codep:0x224c parp:0xf27d size:0x000a C-string:'UNK_0xf27d'
// 1944:      UNK_0xf289  codep:0x224c parp:0xf289 size:0x0040 C-string:'UNK_0xf289'
// 1945:      UNK_0xf2cb  codep:0x224c parp:0xf2cb size:0x0020 C-string:'UNK_0xf2cb'
// 1946:      UNK_0xf2ed  codep:0x224c parp:0xf2ed size:0x002e C-string:'UNK_0xf2ed'
// 1947:      UNK_0xf31d  codep:0x224c parp:0xf31d size:0x001e C-string:'UNK_0xf31d'
// 1948:      UNK_0xf33d  codep:0x224c parp:0xf33d size:0x0012 C-string:'UNK_0xf33d'
// 1949:      UNK_0xf351  codep:0x224c parp:0xf351 size:0x0032 C-string:'UNK_0xf351'
// 1950:      UNK_0xf385  codep:0x224c parp:0xf385 size:0x0018 C-string:'UNK_0xf385'
// 1951:      UNK_0xf39f  codep:0x224c parp:0xf39f size:0x0008 C-string:'UNK_0xf39f'
// 1952:      UNK_0xf3a9  codep:0x224c parp:0xf3a9 size:0x001e C-string:'UNK_0xf3a9'
// 1953:      UNK_0xf3c9  codep:0x224c parp:0xf3c9 size:0x002e C-string:'UNK_0xf3c9'
// 1954:      UNK_0xf3f9  codep:0x224c parp:0xf3f9 size:0x0074 C-string:'UNK_0xf3f9'
// 1955:      UNK_0xf46f  codep:0x224c parp:0xf46f size:0x0020 C-string:'UNK_0xf46f'
// 1956:          RECALL  codep:0x224c parp:0xf49a size:0x002c C-string:'RECALL'
// 1957:           DRONE  codep:0x224c parp:0xf4d0 size:0x0090 C-string:'DRONE'

// =================================
// =========== VARIABLES ===========
// =================================
unsigned char UNK_0xec20[8] = {0x00, 0x00, 0x7e, 0xff, 0x5a, 0x3c, 0x42, 0xe7}; // UNK_0xec20
unsigned char ACT_n_[2] = {0x01, 0x00}; // ACT#
unsigned char UNK_0xf0e6[82] = {0x3a, 0x20, 0x4c, 0x22, 0xaf, 0x64, 0x2f, 0x7a, 0x90, 0x16, 0x4c, 0x22, 0xe8, 0xf0, 0xf4, 0xeb, 0x92, 0x0c, 0xdf, 0x79, 0x90, 0x16, 0x4c, 0x22, 0xe8, 0xf0, 0xfc, 0xeb, 0x92, 0x0c, 0xdf, 0x79, 0x90, 0x16, 0x4c, 0x22, 0xe8, 0xf0, 0x04, 0xec, 0x92, 0x0c, 0xdf, 0x79, 0x90, 0x16, 0x4c, 0x22, 0xe4, 0xf0, 0xae, 0x0b, 0xf0, 0xf0, 0x5f, 0x12, 0x90, 0x16, 0x4c, 0x22, 0xe4, 0xf0, 0xae, 0x0b, 0xfc, 0xf0, 0x5f, 0x12, 0x90, 0x16, 0x4c, 0x22, 0xe4, 0xf0, 0xae, 0x0b, 0x08, 0xf1, 0x5f, 0x12, 0x90, 0x16}; // UNK_0xf0e6
unsigned char UNK_0xf13a[11] = {0x3a, 0x20, 0x4c, 0x22, 0x4f, 0x06, 0xaf, 0x21, 0xfa, 0x1b, 0xe8}; // UNK_0xf13a
unsigned char TIMES[48] = {0x05, 0x41, 0x4c, 0x4c, 0x4f, 0x54, 0x20, 0x4e, 0x54, 0x53, 0x20, 0x01, 0x00, 0x00, 0x1a, 0x06, 0x00, 0x00, 0x33, 0x07, 0x00, 0x00, 0x64, 0x08, 0x00, 0x00, 0x10, 0x01, 0x00, 0x00, 0x1f, 0x02, 0x00, 0x00, 0x2e, 0x03, 0x00, 0x00, 0x3d, 0x04, 0x00, 0x00, 0x64, 0x05, 0x00, 0x00, 0x10, 0x06}; // TIMES



// 0xebf2: db 0x98 0x00 0x94 0x73 0x20 0x0c 0x01 0x17 0x49 0x6c 0x94 0x73 0x20 0x0d 0x01 0x17 0x49 0x6c 0x94 0x73 0x20 0x0e 0x01 0x17 0x49 0x6c '   s    Il s    Il s    Il'

// ================================================
// 0xec0c: WORD 'UNK_0xec0e' codep=0x7394 parp=0xec0e
// ================================================
// 0xec0e: db 0x20 0x09 0x01 0x17 0x49 0x6c '    Il'

// ================================================
// 0xec14: WORD 'UNK_0xec16' codep=0x224c parp=0xec16
// ================================================

void UNK_0xec16() // UNK_0xec16
{
  Push(0x0018);
  Push(1); // 1
}


// ================================================
// 0xec1e: WORD 'UNK_0xec20' codep=0x1d29 parp=0xec20
// ================================================
// 0xec20: db 0x00 0x00 0x7e 0xff 0x5a 0x3c 0x42 0xe7 '  ~ Z<B '

// ================================================
// 0xec28: WORD 'UNK_0xec2a' codep=0x224c parp=0xec2a
// ================================================

void UNK_0xec2a() // UNK_0xec2a
{
  Push(cc__8); // 8
  Push(pp_LBLT); // LBLT
  _st__ex__gt_(); // <!>
  Push(cc__8); // 8
  Push(pp_WBLT); // WBLT
  _st__ex__gt_(); // <!>
  Push(pp_UNK_0xec20); // UNK_0xec20
  Push(pp_ABLT); // ABLT
  _st__ex__gt_(); // <!>
  _at_DS(); // @DS
  Push(pp_BLTSEG); // BLTSEG
  _st__ex__gt_(); // <!>
  BLACK(); // BLACK
  _ex_COLOR(); // !COLOR
  Push(pp_XORMODE); // XORMODE
  _099(); // 099
}


// ================================================
// 0xec4c: WORD 'UNK_0xec4e' codep=0x224c parp=0xec4e
// ================================================

void UNK_0xec4e() // UNK_0xec4e
{
  _gt_MAINVI(); // >MAINVI
  Push(pp_XORMODE); // XORMODE
  _099(); // 099
  _dot_BACKGR(); // .BACKGR
  _dot_LOCAL_minus_(); // .LOCAL-
  V_gt_DISPL(); // V>DISPL
  _gt_DISPLA(); // >DISPLA
}


// ================================================
// 0xec5e: WORD 'UNK_0xec60' codep=0x224c parp=0xec60
// ================================================

void UNK_0xec60() // UNK_0xec60
{
  _gt_MAINVI(); // >MAINVI
  _dot_BACKGR(); // .BACKGR
  UNK_0xec2a(); // UNK_0xec2a
  Push(pp_YABS); // YABS
  Push(Read16(Pop())); // @
  ROT(); // ROT
  Push(Pop() + Pop()); // +
  Push(pp_XABS); // XABS
  Push(Read16(Pop())); // @
  Push(Pop()-1); // 1-
  ROT(); // ROT
  Push(Pop() + Pop()); // +
  SWAP(); // SWAP
  WLD_gt_SCR(); // WLD>SCR
  Push(pp_YBLT); // YBLT
  _ex_(); // !
  Push(pp_XBLT); // XBLT
  _ex_(); // !
  BLT(); // BLT
  _dot_LOCAL_minus_(); // .LOCAL-
  V_gt_DISPL(); // V>DISPL
  _gt_DISPLA(); // >DISPLA
}


// ================================================
// 0xec8e: WORD 'UNK_0xec90' codep=0x224c parp=0xec90
// ================================================

void UNK_0xec90() // UNK_0xec90
{
  Push(1); // 1
  Push(0); // 0
  Push(2); // 2
  RRND(); // RRND
  if (Pop() == 0) return;
  Push(-Pop()); // NEGATE
}


// ================================================
// 0xeca0: WORD 'UNK_0xeca2' codep=0x224c parp=0xeca2
// ================================================

void UNK_0xeca2() // UNK_0xeca2
{
  CTERASE(); // CTERASE
  CTINIT(); // CTINIT
  UNK_0x3f09(); // UNK_0x3f09
  UNK_0x2820(); // UNK_0x2820
  UNK_0x3248(); // UNK_0x3248
  UNK_0x202b(); // UNK_0x202b
  UNK_0x5251(); // UNK_0x5251
  UNK_0x4c22(); // UNK_0x4c22
  UNK_0x5543(); // UNK_0x5543
  UNK_0x4350(); // UNK_0x4350
  UNK_0x204a(); // UNK_0x204a
  UNK_0x4f56(); // UNK_0x4f56
  UNK_0x5222(); // UNK_0x5222
  DOS_minus_DTA(); // DOS-DTA
  UNK_0x4c43(); // UNK_0x4c43
  UNK_0x204e(); // UNK_0x204e
  UNK_0x5246(); // UNK_0x5246
  UNK_0x4e51(); // UNK_0x4e51
  UNK_0xf147(); // UNK_0xf147
  UNK_0x5da1(); // UNK_0x5da1
  UNK_0xd019(); // UNK_0xd019
  UNK_0xef09(); // UNK_0xef09
  UNK_0x8e2c(); // UNK_0x8e2c
  UNK_0x8eee(); // UNK_0x8eee
  UNK_0x9fee(); // UNK_0x9fee
  UNK_0x2e3d(); // UNK_0x2e3d
  UNK_0xb811(); // UNK_0xb811
  UNK_0x5017(); // UNK_0x5017
  UNK_0x7f10(); // UNK_0x7f10
  UNK_0xb310(); // UNK_0xb310
  UNK_0x5011(); // UNK_0x5011
  UNK_0x7f10(); // UNK_0x7f10
  UNK_0xb310(); // UNK_0xb310
  UNK_0x5e11(); // UNK_0x5e11
  UNK_0xd0ee(); // UNK_0xd0ee
  UNK_0xf017(); // UNK_0xf017
  UNK_0xdf01(); // UNK_0xdf01
  UNK_0x900f(); // UNK_0x900f
  UNK_0x4c18(); // UNK_0x4c18

// ================================================
// 0xecef: WORD 'UNK_0xecf1' codep=0x224c parp=0xecf1
// ================================================
  UNK_0x2a24(); // UNK_0x2a24

void UNK_0xecf1() // UNK_0xecf1
{
  Push(pp_CONTEXT); // CONTEXT
  Push(Read16(Pop())); // @
  if (Pop() == 0) Push(1); else Push(0); // 0=
  if (Pop() == 0) return;
  UNK_0xec90(); // UNK_0xec90
  UNK_0xec90(); // UNK_0xec90
  Push(0); // 0
  Push(cc__5); // 5

  signed short int i = Pop();
  signed short int imax = Pop();
  do // (DO)
  {
  Push(i); // I
  OVER(); // OVER
  Push(Pop() * Pop()); // *
  Push(i); // I
  OVER(); // OVER
  Push(Pop() * Pop()); // *
  UNK_0xec60(); // UNK_0xec60
  Push(cc__minus_1); // -1
  int step = Pop();
  i += step;
  } while(((step>=0) && (i<imax)) || ((step<0) && (i>imax))); // (+LOOP) 0xffee

  Pop(); Pop();// 2DROP
}


// ================================================
// 0xed1d: WORD 'UNK_0xed1f' codep=0x224c parp=0xed1f
// ================================================

void UNK_0xed1f() // UNK_0xed1f
{
  _gt_C_plus_S(); // >C+S
  PHRASE_do_(); // PHRASE$
  Push(pp_LSCAN); // LSCAN
  _do__ex_(); // $!
  Push(pp_LSCAN); // LSCAN
  COUNT(); // COUNT
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xed2f: WORD 'UNK_0xed31' codep=0x224c parp=0xed31
// ================================================

void UNK_0xed31() // UNK_0xed31
{
  _gt_R(); // >R
  _at_CRS(); // @CRS
  Push(cc__3); // 3
  R_gt_(); // R>
  POS_dot_(); // POS.
  CURSORS(); // CURSORS
  Push(pp_ABLT); // ABLT
  _st__ex__gt_(); // <!>
  Push(cc__7); // 7
  Push(pp_LBLT); // LBLT
  _st__ex__gt_(); // <!>
  Push(0x0099);
  Push(pp_WBLT); // WBLT
  _st__ex__gt_(); // <!>
  DK_minus_BLUE(); // DK-BLUE
  _ex_COLOR(); // !COLOR
  Push(1); // 1
  Push(pp_XORMODE); // XORMODE
  _st__ex__gt_(); // <!>
  BLT(); // BLT
  _ex_CRS(); // !CRS
  Push(pp_XORMODE); // XORMODE
  OFF(); // OFF
}


// ================================================
// 0xed63: WORD 'UNK_0xed65' codep=0x224c parp=0xed65
// ================================================

void UNK_0xed65() // UNK_0xed65
{
  Push(pp_WTOP); // WTOP
  Push(Read16(Pop())); // @
  UNK_0xed31(); // UNK_0xed31
}

// 0xed6d: db 0x29 0x1d 0x3a 0x20 0x05 0x4c 0x22 0x8b 0x75 0x6d 0xed 0x32 0x6d 0x90 0x16 0x4c 0x22 0x6d 0xed 0x83 0x4a 0x90 0x16 ') :  L" um 2m  L"m  J  '

// ================================================
// 0xed84: WORD 'UNK_0xed86' codep=0x224c parp=0xed86
// ================================================

void UNK_0xed86() // UNK_0xed86
{
  Push(pp__ro_ELIST_rc_); // (ELIST)
  _at__gt_C_plus_S(); // @>C+S
  IOPEN(); // IOPEN
}

// 0xed8e: db 0x4c 0x22 0x84 0xed 0xa7 0x75 0x7c 0xed 0x1f 0x7a 0xb1 0x7a 0x72 0xed 0x3d 0x0f 0x0a 0x7a 0x90 0x16 0x4c 0x22 0x84 0xed 0xa7 0x75 0x7c 0xed 0x1f 0x7a 0xc9 0x7a 0x72 0xed 0x3d 0x0f 0x0a 0x7a 0x90 0x16 0x29 0x1d 0x3a 0x20 0x05 0x4c 0x22 0x8b 0x75 0xb6 0xed 0x32 0x6d 0x90 0x16 0x4c 0x22 0xb6 0xed 0x83 0x4a 0x90 0x16 0x4c 0x22 0x84 0xed 0xa7 0x75 0xc5 0xed 0x1f 0x7a 0xb1 0x7a 0xbb 0xed 0x3d 0x0f 0x0a 0x7a 0x90 0x16 0x4c 0x22 0x84 0xed 0xa7 0x75 0xc5 0xed 0x1f 0x7a 0xc9 0x7a 0xbb 0xed 0x3d 0x0f 0x0a 0x7a 0x90 0x16 0x4c 0x22 0x57 0xaa 0xae 0x0b 0xfa 0x15 0x08 0x00 0x53 0x50 0x60 0x16 0x10 0x00 0x0f 0x86 0xfa 0x15 0x08 0x00 0xd5 0x4f 0x60 0x16 0x04 0x00 0xf7 0x4f 0x9d 0x86 0x90 0x16 0x4c 0x22 0xb5 0x75 0x1f 0x7a 0xb5 0x75 0x1f 0x7a 0x90 0x16 0x4c 0x22 0xf5 0xed 0x75 0xaa 0xee 0x9d 0x90 0x16 0x4c 0x22 0x17 0xee 0x90 0x5d 0xae 0x0b 0x20 0x0f 0xb8 0x15 0x83 0x5d 0xae 0x0b 0x5c 0x5d 0xae 0x0b 0x3d 0x0f 0x92 0x0f 0x50 0x0e 0x9f 0x3b 0xb3 0x0f 0x92 0x0f 0x7b 0x9a 0x23 0xee 0xb1 0x7a 0xd0 0x15 0xe4 0xff 0x90 0x16 0x4c 0x22 0x84 0xed 0x72 0xed 0x2d 0xee 0xc9 0x7a 0xbb 0xed 0x3d 0x0f 0x0a 0x7a 0x3d 0x0f 0x0a 0x7a 0x84 0xed 0x90 0x16 0x4c 0x22 0x84 0xed 0xb1 0x7a 0x8d 0x7a 0x07 0x13 0xfa 0x15 0x0c 0x00 0x20 0x0f 0x57 0xaa 0x16 0x6d 0x60 0x16 0xee 0xff 0x3d 0x0f 0x0a 0x7a 0x90 0x16 0x4c 0x22 0x84 0xed 0x20 0x0f 0x57 0xaa 0x16 0x6d 0x3d 0x0f 0x0a 0x7a 0x90 0x16 0x4c 0x22 0x2e 0xa6 0xfa 0x15 0x24 0x00 0x7c 0xed 0x1f 0x7a 0x57 0xaa 0xae 0x0b 0x07 0x13 0x57 0xaa 0x16 0x6d 0x8d 0x7a 0xfa 0x15 0x08 0x00 0x71 0xee 0x60 0x16 0x04 0x00 0x8f 0xee 0x2d 0xee 0x7f 0x3b 0x0a 0x7a 0x90 0x16 0x4c 0x22 0x16 0x16 0x13 0x68 0x02 0x00 0x1d 0xed 0x90 0x16 0x4c 0x22 0x16 0x16 0x30 0x68 0x02 0x00 0x1d 0xed 0x90 0x16 0x4c 0x22 0x78 0x9f 0xd7 0xee 0xe6 0x06 0xa7 0x3b 0x46 0x5a 0x23 0x6d 0xcb 0xee 0xe6 0x06 0x90 0x16 0x4c 0x22 0xdb 0x9b 0x46 0x9c 0xd2 0x9f 0xe3 0xee 0xb8 0x3b 0x90 0x5d 0x23 0x6d 'L"   u|  z zr =  z  L"   u|  z zr =  z  ) :  L" u  2m  L"   J  L"   u   z z  =  z  L"   u   z z  =  z  L"W       SP`          O`    O    L" u z u z  L"  u     L"   ]       ]  \]  =   P  ;    { #  z      L"  r -  z  =  z=  z    L"   z z        W  m`   =  z  L"    W  m=  z  L".   $ |  zW     W  m z    q `     - ; z  L"   h      L"  0h      L"x      ;FZ#m      L"  F      ; ]#m'

// ================================================
// 0xef07: WORD 'UNK_0xef09' codep=0x3b9f parp=0xef09
// ================================================
// 0xef09: db 0x6a 0x5d 0x23 0x6d 0x46 0x9c 0x59 0xee 0x90 0x16 0x4c 0x22 0x8c 0x9c 0x8e 0xed 0xcd 0xed 0xf5 0xed 0xc5 0xed 0x1f 0x7a 0xf5 0xed 0x75 0xaa 0xfc 0x9e 0xdf 0x79 0x90 0x16 0x4c 0x22 0x8c 0x9c 0xa2 0xed 0xe1 0xed 0xc1 0x3b 0x5c 0x5d 0x23 0x6d 0x7c 0xed 0x1f 0x7a 0xf5 0xed 0x75 0xaa 0x0e 0x9f 0xdf 0x79 0x3d 0x0f 0x5c 0x5d 0x23 0x6d 0x90 0x16 'j]#mF Y   L"           z  u    y  L"       ;\]#m|  z  u    y= \]#m  '

// ================================================
// 0xef4d: WORD 'TD-SCRO' codep=0x4b3b parp=0xef59
// ================================================
// 0xef59: db 0x02 0x00 0xa1 0xee 0xff 0xff 0x2d 0xef 0x01 0x00 0x15 0xef 0x4c 0x22 0x16 0xa6 0x89 0x12 0xfa 0x15 0x08 0x00 0x57 0xef 0x60 0x16 0x04 0x00 0x32 0x0e 0x17 0x5e 0xae 0x0b 0xfa 0x15 0xea 0xff 0x20 0x0f 0x90 0x16 0x4c 0x22 0x46 0x9c 0xd2 0x9f 0xd7 0xee 0xf1 0x9f 0x16 0x16 0x4f 0x68 0x02 0x00 0x1d 0xed 0xf1 0x9f 0xcb 0xee 0xf1 0x9f 0x16 0x16 0x81 0x68 0x02 0x00 0x1d 0xed 0xf1 0x9f 0x97 0x49 0x32 0x0e 0x90 0x16 0x4c 0x22 0x83 0xef 0xf7 0xee 0x65 0xef 0x3d 0x0f 0x0a 0x7a 0x90 0x16 '      -     L"        W `   2  ^          L"F         Oh             h       I2   L"    e =  z  '

// ================================================
// 0xefb9: WORD 'UNK_0xefbb' codep=0x224c parp=0xefbb
// ================================================

void UNK_0xefbb() // UNK_0xefbb
{
  Push(0x68ac); Pust(0x0002);
  UNK_0xed1f(); // UNK_0xed1f
  TYPE(); // TYPE
}


// ================================================
// 0xefc7: WORD 'UNK_0xefc9' codep=0x224c parp=0xefc9
// ================================================

void UNK_0xefc9() // UNK_0xefc9
{
  Push(0x68df); Pust(0x0002);
  UNK_0xed1f(); // UNK_0xed1f
  TYPE(); // TYPE
}


// ================================================
// 0xefd5: WORD 'UNK_0xefd7' codep=0x224c parp=0xefd7
// ================================================

void UNK_0xefd7() // UNK_0xefd7
{
  Push(0x690e); Pust(0x0002);
  UNK_0xed1f(); // UNK_0xed1f
  TYPE(); // TYPE
}


// ================================================
// 0xefe3: WORD 'ACT#' codep=0x1d29 parp=0xefec
// ================================================
// 0xefec: db 0x01 0x00 '  '

// ================================================
// 0xefee: WORD 'UNK_0xeff0' codep=0x224c parp=0xeff0
// ================================================

void UNK_0xeff0() // UNK_0xeff0
{
  GCR(); // GCR
  Push(1); // 1
  Push(pp_XBLT); // XBLT
  _plus__ex_(); // +!
}


// ================================================
// 0xeffa: WORD 'UNK_0xeffc' codep=0x224c parp=0xeffc
// ================================================

void UNK_0xeffc() // UNK_0xeffc
{
  _gt_TVCT(); // >TVCT
  CTERASE(); // CTERASE
  CTINIT(); // CTINIT
  UNK_0xefbb(); // UNK_0xefbb
  UNK_0xeff0(); // UNK_0xeff0
  UNK_0xefc9(); // UNK_0xefc9
  UNK_0xeff0(); // UNK_0xeff0
  UNK_0xefd7(); // UNK_0xefd7
  UNK_0xed65(); // UNK_0xed65
  Push(1); // 1
  Push(pp_ACT_n_); // ACT#
  _ex_(); // !
}


// ================================================
// 0xf015: WORD 'UNK_0xf017' codep=0x4c16 parp=0xf017
// ================================================
// 0xf017: db 0x22 0x22 0x5e 0xae 0x0b 0x5d 0x17 0x3b 0x01 0x5d 0x17 0x45 0x01 0x25 0x40 0x90 0x16 '""^  ] ; ] E %@  '

// ================================================
// 0xf028: WORD 'UNK_0xf02a' codep=0x224c parp=0xf02a
// ================================================

void UNK_0xf02a() // UNK_0xf02a
{
  Push(pp_WTOP); // WTOP
  Push(Read16(Pop())); // @
  SWAP(); // SWAP
  Push(Pop()-1); // 1-
  Push(cc__7); // 7
  Push(Pop() * Pop()); // *
  _minus_(); // -
}

// 0xf03a: db 0x4c 0x22 0xf2 0x0e 0x28 0xf0 0x2f 0xed 0x28 0xf0 0x2f 0xed 0x90 0x16 0x4c 0x22 0xea 0xef 0xae 0x0b 0x41 0x0e 0xe7 0x0f 0x7f 0x3b 0xad 0x11 0x41 0x0e 0xea 0xef 0x16 0x6d 0x3a 0xf0 0x90 0x16 0x4c 0x22 0xea 0xef 0xae 0x0b 0x41 0x0e 0xf6 0x0f 0x2e 0x0f 0x89 0x11 0x41 0x0e 0xea 0xef 0x16 0x6d 0x3a 0xf0 0x90 0x16 'L"  ( / ( /   L"    A   ;  A    m:   L"    A   .   A    m:   '

// ================================================
// 0xf078: WORD 'ACT-SCR' codep=0x4b3b parp=0xf084
// ================================================
// 0xf084: db 0x02 0x00 0x48 0x3a 0xff 0xff 0x4a 0xf0 0x01 0x00 0x62 0xf0 '  H:  J   b '

// ================================================
// 0xf090: WORD 'UNK_0xf092' codep=0x224c parp=0xf092
// ================================================

void UNK_0xf092() // UNK_0xf092
{

  label2:
  XYSCAN(); // XYSCAN
  if (Pop() == 0) Push(1); else Push(0); // 0=
  if (Pop() == 0) goto label1;
  ACT_minus_SCR(); // ACT-SCR
  goto label3;

  label1:
  Pop(); // DROP

  label3:
  _ask_TRIG(); // ?TRIG
  if (Pop() == 0) goto label2;
}


// ================================================
// 0xf0aa: WORD 'ACTION?' codep=0x224c parp=0xf0b6
// ================================================

void ACTION_ask_() // ACTION?
{
  UNK_0xeffc(); // UNK_0xeffc
  UNK_0xf092(); // UNK_0xf092
}

// 0xf0bc: db 0x4c 0x22 0x2e 0x0f 0x90 0x16 0x4c 0x22 0x3d 0x0f 0x90 0x16 'L".   L"=   '

// ================================================
// 0xf0c8: WORD '#>ACTIO' codep=0x4b3b parp=0xf0d4
// ================================================
// 0xf0d4: db 0x03 0x00 0x6b 0x26 0x01 0x00 0xbe 0xf0 0x02 0x00 0xad 0xef 0x03 0x00 0xc4 0xf0 '  k&            '

// ================================================
// 0xf0e4: WORD 'UNK_0xf0e6' codep=0x1d29 parp=0xf0e6
// ================================================
// 0xf0e6: db 0x3a 0x20 0x4c 0x22 0xaf 0x64 0x2f 0x7a 0x90 0x16 0x4c 0x22 0xe8 0xf0 0xf4 0xeb 0x92 0x0c 0xdf 0x79 0x90 0x16 0x4c 0x22 0xe8 0xf0 0xfc 0xeb 0x92 0x0c 0xdf 0x79 0x90 0x16 0x4c 0x22 0xe8 0xf0 0x04 0xec 0x92 0x0c 0xdf 0x79 0x90 0x16 0x4c 0x22 0xe4 0xf0 0xae 0x0b 0xf0 0xf0 0x5f 0x12 0x90 0x16 0x4c 0x22 0xe4 0xf0 0xae 0x0b 0xfc 0xf0 0x5f 0x12 0x90 0x16 0x4c 0x22 0xe4 0xf0 0xae 0x0b 0x08 0xf1 0x5f 0x12 0x90 0x16 ': L" d/z  L"       y  L"       y  L"       y  L"      _   L"      _   L"      _   '

// ================================================
// 0xf138: WORD 'UNK_0xf13a' codep=0x1d29 parp=0xf13a
// ================================================
// 0xf13a: db 0x3a 0x20 0x4c 0x22 0x4f 0x06 0xaf 0x21 0xfa 0x1b ': L"O  !  '
// 0xf144: call   1649

// ================================================
// 0xf145: WORD 'UNK_0xf147' codep=0x2502 parp=0xf147
// ================================================
// 0xf147: db 0x92 0x0c 0x38 0xf1 0x16 0x6d 0x90 0x16 '  8  m  '

// ================================================
// 0xf14f: WORD '10!TIME' codep=0xf144 parp=0xf15b
// ================================================
// 0xf15b: db 0x0a ' '

// ================================================
// 0xf15c: WORD '20!TIME' codep=0xf144 parp=0xf168
// ================================================
// 0xf168: db 0x14 ' '

// ================================================
// 0xf169: WORD '30!TIME' codep=0xf144 parp=0xf175
// ================================================
// 0xf175: db 0x1e ' '

// ================================================
// 0xf176: WORD '5!TIME' codep=0xf144 parp=0xf181
// ================================================
// 0xf181: db 0x05 ' '

// ================================================
// 0xf182: WORD '7!TIME' codep=0xf144 parp=0xf18d
// ================================================
// 0xf18d: db 0x07 ' '

// ================================================
// 0xf18e: WORD '13!TIME' codep=0xf144 parp=0xf19a
// ================================================
// 0xf19a: db 0x0d ' '

// ================================================
// 0xf19b: WORD '3!TIME' codep=0xf144 parp=0xf1a6
// ================================================
// 0xf1a6: db 0x03 ' '

// ================================================
// 0xf1a7: WORD 'UNK_0xf1a9' codep=0x224c parp=0xf1a9
// ================================================

void UNK_0xf1a9() // UNK_0xf1a9
{
  Push(0); // 0
  Push(0x0064);
  RRND(); // RRND
  Push(0x001e);
  _st_(); // <
  if (Pop() == 0) goto label1;
  Push(0x0032);
  Push(0x00c9);
  RRND(); // RRND
  goto label2;

  label1:
  Push(0); // 0

  label2:
  Push(pp_UNK_0xf13a); // UNK_0xf13a
  _ex_(); // !
}


// ================================================
// 0xf1d1: WORD '(TIMER)' codep=0xaccc parp=0xf1dd
// ================================================
// 0xf1dd: db 0x07 0x03 0x07 0xf7 0xf1 0xfd 0xf1 0x03 0xf2 0x09 0xf2 0x0f 0xf2 0x15 0xf2 0x1b 0xf2 0x16 0xf1 0x22 0xf1 0x2e 0xf1 0xca 0xf1 0xe7 0x03 0xa6 0xf1 0x80 0x81 0x82 0x03 0x81 0xf1 0x80 0x81 0x02 0x03 0x9a 0xf1 0x00 0x81 0x82 0x03 0x8d 0xf1 0x80 0x01 0x82 0x03 0x5b 0xf1 0x80 0x01 0x02 0x03 0x68 0xf1 0x00 0x81 0x02 0x03 0x75 0xf1 0x00 0x01 0x82 '                   " .                             [     h     u    '

// ================================================
// 0xf221: WORD 'UNK_0xf223' codep=0x224c parp=0xf223
// ================================================

void UNK_0xf223() // UNK_0xf223
{
  Push(0xf1dd);
  DISTRAC(); // DISTRAC
  _ro_TIMER_rc_(); // (TIMER)
  if (Pop() == 0) Push(1); else Push(0); // 0=
  if (Pop() == 0) return;
  UNK_0xf1a9(); // UNK_0xf1a9
}


// ================================================
// 0xf235: WORD 'TIMES' codep=0x1d29 parp=0xf23f
// ================================================
// 0xf23f: db 0x05 0x41 0x4c 0x4c 0x4f 0x54 0x20 0x4e 0x54 0x53 0x20 0x01 0x00 0x00 0x1a 0x06 0x00 0x00 0x33 0x07 0x00 0x00 0x64 0x08 0x00 0x00 0x10 0x01 0x00 0x00 0x1f 0x02 0x00 0x00 0x2e 0x03 0x00 0x00 0x3d 0x04 0x00 0x00 0x64 0x05 0x00 0x00 0x10 0x06 ' ALLOT NTS        3   d           .   =   d     '

// ================================================
// 0xf26f: WORD 'UNK_0xf271' codep=0x224c parp=0xf271
// ================================================

void UNK_0xf271() // UNK_0xf271
{
  Push(Pop()*2); // 2*
  Push(pp_TIMES); // TIMES
  Push(Pop() + Pop()); // +
  _ex_(); // !
}


// ================================================
// 0xf27b: WORD 'UNK_0xf27d' codep=0x224c parp=0xf27d
// ================================================

void UNK_0xf27d() // UNK_0xf27d
{
  Push(Pop()*2); // 2*
  Push(pp_TIMES); // TIMES
  Push(Pop() + Pop()); // +
  Push(Read16(Pop())); // @
}


// ================================================
// 0xf287: WORD 'UNK_0xf289' codep=0x224c parp=0xf289
// ================================================

void UNK_0xf289() // UNK_0xf289
{
  Push(pp_TIMES); // TIMES
  UNK_0xec16(); // UNK_0xec16
  Pop(); // DROP
  Push(Pop()*2); // 2*
  Push(0); // 0
  FILL(); // FILL
  UNK_0xed86(); // UNK_0xed86
  TEXT_minus_CO(); // TEXT-CO
  Push(Read16(Pop())); // @
  if (Pop() == 0) goto label1;
  UNK_0xec16(); // UNK_0xec16

  signed short int j = Pop();
  signed short int jmax = Pop();
  do // (DO)
  {
  Push(1); // 1
  Push(j); // I
  UNK_0xf271(); // UNK_0xf271
  j++;
  } while(j<jmax); // (LOOP) 0xfff8

  goto label2;

  label1:
  UNK_0xec16(); // UNK_0xec16

  signed short int i = Pop();
  signed short int imax = Pop();
  do // (DO)
  {
  INEXT(); // INEXT
  TEXT_minus_CO(); // TEXT-CO
  Push(Read16(Pop())); // @
  Push(i); // I
  UNK_0xf271(); // UNK_0xf271
  i++;
  } while(i<imax); // (LOOP) 0xfff4


  label2:
  Push(2); // 2
  _star_CLOSE(); // *CLOSE
}


// ================================================
// 0xf2c9: WORD 'UNK_0xf2cb' codep=0x224c parp=0xf2cb
// ================================================

void UNK_0xf2cb() // UNK_0xf2cb
{
  UNK_0xec16(); // UNK_0xec16

  signed short int i = Pop();
  signed short int imax = Pop();
  do // (DO)
  {
  Push(i); // I
  Push(pp_UNK_0xf0e6); // UNK_0xf0e6
  _ex_(); // !
  UNK_0xf223(); // UNK_0xf223
  Push(pp_UNK_0xf13a); // UNK_0xf13a
  Push(Read16(Pop())); // @
  Push(i); // I
  UNK_0xf27d(); // UNK_0xf27d
  Push(Pop() * Pop()); // *
  Push(i); // I
  UNK_0xf271(); // UNK_0xf271
  i++;
  } while(i<imax); // (LOOP) 0xffe8

}


// ================================================
// 0xf2eb: WORD 'UNK_0xf2ed' codep=0x224c parp=0xf2ed
// ================================================

void UNK_0xf2ed() // UNK_0xf2ed
{
  Push(0x00ff);
  Push(pp_XABS); // XABS
  Push(Read16(Pop())); // @
  Push(pp_YABS); // YABS
  Push(Read16(Pop())); // @
  Push(0x6a82);
  SETLARR(); // SETLARR
  SWAP(); // SWAP
  Push(pp_XCON); // XCON
  Push(Read16(Pop())); // @
  Push(Pop()+1); // 1+
  _minus_(); // -
  SWAP(); // SWAP
  Push(pp_YCON); // YCON
  Push(Read16(Pop())); // @
  Push(Pop()+1); // 1+
  _minus_(); // -
  ACELLAD(); // ACELLAD
  A_at_(); // A@
  _minus_(); // -
}


// ================================================
// 0xf31b: WORD 'UNK_0xf31d' codep=0x224c parp=0xf31d
// ================================================

void UNK_0xf31d() // UNK_0xf31d
{
  UNK_0xf2ed(); // UNK_0xf2ed
  UNK_0xec16(); // UNK_0xec16

  signed short int i = Pop();
  signed short int imax = Pop();
  do // (DO)
  {
  Push(i); // I
  UNK_0xf27d(); // UNK_0xf27d
  OVER(); // OVER
  Push(0x0064);
  _star__slash_(); // */
  Push(i); // I
  UNK_0xf271(); // UNK_0xf271
  i++;
  } while(i<imax); // (LOOP) 0xffee

  Pop(); // DROP
}


// ================================================
// 0xf33b: WORD 'UNK_0xf33d' codep=0x224c parp=0xf33d
// ================================================

void UNK_0xf33d() // UNK_0xf33d
{
  DUP(); // DUP
  if (Pop() == 0) goto label1;
  _slash_(); // /
  return;

  label1:
  SWAP(); // SWAP
  Pop(); // DROP
}


// ================================================
// 0xf34f: WORD 'UNK_0xf351' codep=0x224c parp=0xf351
// ================================================

void UNK_0xf351() // UNK_0xf351
{
  Push(0x0065);
  Push(pp__ro_PLANET); // (PLANET
  _at__gt_C_plus_S(); // @>C+S
  UNK_0xec0e(); // UNK_0xec0e
  C_at_(); // C@
  Push(0x0064);
  Push(0x0100);
  _star__slash_(); // */
  _minus_(); // -
  UNK_0xec16(); // UNK_0xec16

  signed short int i = Pop();
  signed short int imax = Pop();
  do // (DO)
  {
  Push(i); // I
  UNK_0xf27d(); // UNK_0xf27d
  OVER(); // OVER
  Push(Pop() * Pop()); // *
  Push(i); // I
  UNK_0xf271(); // UNK_0xf271
  i++;
  } while(i<imax); // (LOOP) 0xfff2

  Pop(); // DROP
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xf383: WORD 'UNK_0xf385' codep=0x224c parp=0xf385
// ================================================

void UNK_0xf385() // UNK_0xf385
{
  UNK_0xec16(); // UNK_0xec16

  signed short int i = Pop();
  signed short int imax = Pop();
  do // (DO)
  {
  Push(0x1388);
  Push(i); // I
  UNK_0xf27d(); // UNK_0xf27d
  UNK_0xf33d(); // UNK_0xf33d
  Push(i); // I
  UNK_0xf271(); // UNK_0xf271
  i++;
  } while(i<imax); // (LOOP) 0xfff0

}


// ================================================
// 0xf39d: WORD 'UNK_0xf39f' codep=0x224c parp=0xf39f
// ================================================

void UNK_0xf39f() // UNK_0xf39f
{
  UNK_0xf31d(); // UNK_0xf31d
  UNK_0xf351(); // UNK_0xf351
  UNK_0xf385(); // UNK_0xf385
}


// ================================================
// 0xf3a7: WORD 'UNK_0xf3a9' codep=0x224c parp=0xf3a9
// ================================================

void UNK_0xf3a9() // UNK_0xf3a9
{
  Push(0); // 0
  UNK_0xec16(); // UNK_0xec16

  signed short int i = Pop();
  signed short int imax = Pop();
  do // (DO)
  {
  Push(i); // I
  UNK_0xf27d(); // UNK_0xf27d
  Push(Pop() + Pop()); // +
  i++;
  } while(i<imax); // (LOOP) 0xfff8

  DUP(); // DUP
  if (Pop() == 0) return;
  Push(0x0021);
  MIN(); // MIN
}


// ================================================
// 0xf3c7: WORD 'UNK_0xf3c9' codep=0x224c parp=0xf3c9
// ================================================

void UNK_0xf3c9() // UNK_0xf3c9
{
  Push(0x01f4);
  UNK_0xf2cb(); // UNK_0xf2cb
  UNK_0xf39f(); // UNK_0xf39f
  UNK_0xf3a9(); // UNK_0xf3a9
  SAVE_minus_OV(); // SAVE-OV
  _ask_DUP(); // ?DUP
  if (Pop() == 0) goto label1;
  _slash_(); // /
  Push(0x0006);
  Push(Pop() * Pop()); // *
  Push(pp_ETIME); // ETIME
  _ex_(); // !
  goto label2;

  label1:
  Pop(); // DROP

  label2:
  Push(pp_ACT_n_); // ACT#
  Push(Read16(Pop())); // @
  UNK_0xf02a(); // UNK_0xf02a
  UNK_0xed31(); // UNK_0xed31
}


// ================================================
// 0xf3f7: WORD 'UNK_0xf3f9' codep=0x224c parp=0xf3f9
// ================================================

void UNK_0xf3f9() // UNK_0xf3f9
{
  Push(pp_THIS_minus_RE); // THIS-RE
  _at__gt_C_plus_S(); // @>C+S
  IOPEN(); // IOPEN
  UNK_0xec16(); // UNK_0xec16

  signed short int i = Pop();
  signed short int imax = Pop();
  do // (DO)
  {
  Push(i); // I
  UNK_0xf27d(); // UNK_0xf27d
  _ask_DUP(); // ?DUP
  if (Pop() == 0) goto label1;
  Push(Pop()-1); // 1-
  Push(pp_ETIME); // ETIME
  Push(Read16(Pop())); // @
  Push(0x0006);
  _slash_(); // /
  Push(Pop()-1); // 1-
  Push(Pop() * Pop()); // *
  _ask_DUP(); // ?DUP
  if (Pop() == 0) goto label1;
  Push(0x001a);
  Push(i); // I
  Push(1); // 1
  _star_CREATE(); // *CREATE
  Push(0x01f4);
  MIN(); // MIN
  Push(0); // 0
  MAX(); // MAX
  INST_minus_QT(); // INST-QT
  _ex_(); // !
  Push(pp_XABS); // XABS
  Push(Read16(Pop())); // @
  INST_minus_X(); // INST-X
  _ex_(); // !
  Push(pp_YABS); // YABS
  Push(Read16(Pop())); // @
  Push(Pop()-1); // 1-
  INST_minus_Y(); // INST-Y
  _ex_(); // !
  Push(0xba55);
  MODULE(); // MODULE
  _plus_ICON(); // +ICON

  label1:
  i++;
  } while(i<imax); // (LOOP) 0xffac

  Push(0xec78);
  DUP(); // DUP
  Push(pp_ANCHOR); // ANCHOR
  D_ex_(); // D!
  ORGLIST(); // ORGLIST
  UNK_0xec4e(); // UNK_0xec4e
  Push(2); // 2
  _star_CLOSE(); // *CLOSE
}


// ================================================
// 0xf46d: WORD 'UNK_0xf46f' codep=0x224c parp=0xf46f
// ================================================

void UNK_0xf46f() // UNK_0xf46f
{
  TIME(); // TIME
  _2_at_(); // 2@
  Push(pp__n_ETIME); // #ETIME
  _2_at_(); // 2@
  D_minus_(); // D-
  Push(0x03e8);
  M_slash_(); // M/
  SWAP(); // SWAP
  Pop(); // DROP
  Push(pp_ETIME); // ETIME
  Push(Read16(Pop())); // @
  MIN(); // MIN
  Push(pp_ETIME); // ETIME
  _ex_(); // !
}


// ================================================
// 0xf48f: WORD 'RECALL' codep=0x224c parp=0xf49a
// ================================================

void RECALL() // RECALL
{
  Push(pp_ETIME); // ETIME
  Push(Read16(Pop())); // @
  _gt_FLAG(); // >FLAG
  Push(pp_NOF); // NOF
  Push(Read16(Pop())); // @
  if (Pop() == 0) Push(1); else Push(0); // 0=
  Push(Pop() & Pop()); // AND
  if (Pop() == 0) goto label1;
  UNK_0xecf1(); // UNK_0xecf1
  Push(pp_NOF); // NOF
  ON(); // ON
  UNK_0xf3f9(); // UNK_0xf3f9
  Push(pp_NOF); // NOF
  _099(); // 099
  Push(pp_ETIME); // ETIME
  _099(); // 099
  _i_F2(); // 'F2
  Pop(); Pop();// 2DROP

  label1:
  Push(pp_NOF); // NOF
  _099(); // 099
}


// ================================================
// 0xf4c6: WORD 'DRONE' codep=0x224c parp=0xf4d0
// ================================================

void DRONE() // DRONE
{
  Push(pp_CONTEXT); // CONTEXT
  Push(Read16(Pop())); // @
  if (Pop() == 0) Push(1); else Push(0); // 0=
  Push(0x0034);
  Push(0xb78d);
  MODULE(); // MODULE
  Push(Pop() & Pop()); // AND
  Push(pp_NOF); // NOF
  Push(Read16(Pop())); // @
  if (Pop() == 0) Push(1); else Push(0); // 0=
  Push(Pop() & Pop()); // AND
  if (Pop() == 0) goto label1;
  Push(pp_ETIME); // ETIME
  Push(Read16(Pop())); // @
  if (Pop() == 0) Push(1); else Push(0); // NOT
  if (Pop() == 0) goto label2;
  Push(pp_NOF); // NOF
  ON(); // ON
  Push(0); // 0
  Push(0); // 0
  UNK_0xec60(); // UNK_0xec60
  Push(pp_ESC_minus_EN); // ESC-EN
  _099(); // 099

  label4:
  ACTION_ask_(); // ACTION?
  Push(pp_ACT_n_); // ACT#
  Push(Read16(Pop())); // @
  _n__gt_ACTIO(); // #>ACTIO
  _ask_DUP(); // ?DUP
  if (Pop() == 0) goto label4;
  Push(pp_ESC_minus_EN); // ESC-EN
  ON(); // ON
  Push(pp_NOF); // NOF
  _099(); // 099
  Push(1); // 1
  _eq_(); // =
  if (Pop() == 0) goto label5;
  UNK_0xf289(); // UNK_0xf289
  UNK_0xf3c9(); // UNK_0xf3c9
  UNK_0xeca2(); // UNK_0xeca2
  TIME(); // TIME
  _2_at_(); // 2@
  Push(pp__n_ETIME); // #ETIME
  D_ex_(); // D!
  goto label7;

  label5:
  UNK_0xec4e(); // UNK_0xec4e

  label7:
  goto label6;

  label2:
  UNK_0xf46f(); // UNK_0xf46f
  RECALL(); // RECALL

  label6:
  Push(pp_NOF); // NOF
  _099(); // 099
  CTERASE(); // CTERASE
  goto label3;

  label1:
  Push(0xb7e7);
  MODULE(); // MODULE
  Push(0x07d0);
  MS(); // MS

  label3:
  NULL(); // NULL
}

// 0xf55a: db 0x44 0x52 0x4f 0x4e 0x45 0x2d 0x00 'DRONE- '
  