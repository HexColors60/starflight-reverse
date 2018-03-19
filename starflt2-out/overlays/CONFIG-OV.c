// ====== OVERLAY 'CONFIG-OV' ======
// store offset = 0xe6e0
// overlay size   = 0x0e80

#include"../../emul/cpu.h"

#include"../data.h"
#include"../../emul/starflt1.h"


// =================================
// =========== DICTIONARY ==========
// =================================
//      UNK_0xe6f6  codep:0x224c parp:0xe6f6 size:0x0008 C-string:'UNK_0xe6f6'
//      UNK_0xe700  codep:0x224c parp:0xe700 size:0x0008 C-string:'UNK_0xe700'
//      UNK_0xe70a  codep:0x224c parp:0xe70a size:0x0008 C-string:'UNK_0xe70a'
//      UNK_0xe714  codep:0x224c parp:0xe714 size:0x0008 C-string:'UNK_0xe714'
//      UNK_0xe71e  codep:0x224c parp:0xe71e size:0x0008 C-string:'UNK_0xe71e'
//      UNK_0xe728  codep:0x224c parp:0xe728 size:0x0008 C-string:'UNK_0xe728'
//      UNK_0xe732  codep:0x224c parp:0xe732 size:0x0008 C-string:'UNK_0xe732'
//      UNK_0xe73c  codep:0x224c parp:0xe73c size:0x0008 C-string:'UNK_0xe73c'
//      UNK_0xe746  codep:0x224c parp:0xe746 size:0x0008 C-string:'UNK_0xe746'
//      UNK_0xe750  codep:0x224c parp:0xe750 size:0x0008 C-string:'UNK_0xe750'
//      UNK_0xe75a  codep:0x7420 parp:0xe75a size:0x0003 C-string:'UNK_0xe75a'
//      UNK_0xe75f  codep:0x7420 parp:0xe75f size:0x0003 C-string:'UNK_0xe75f'
//      UNK_0xe764  codep:0x7420 parp:0xe764 size:0x0003 C-string:'UNK_0xe764'
//      UNK_0xe769  codep:0x7420 parp:0xe769 size:0x0003 C-string:'UNK_0xe769'
//      UNK_0xe76e  codep:0x7420 parp:0xe76e size:0x0003 C-string:'UNK_0xe76e'
//      UNK_0xe773  codep:0x7420 parp:0xe773 size:0x0003 C-string:'UNK_0xe773'
//      UNK_0xe778  codep:0x7420 parp:0xe778 size:0x0003 C-string:'UNK_0xe778'
//      UNK_0xe77d  codep:0x7420 parp:0xe77d size:0x0003 C-string:'UNK_0xe77d'
//      UNK_0xe782  codep:0x7420 parp:0xe782 size:0x0003 C-string:'UNK_0xe782'
//      UNK_0xe787  codep:0x7420 parp:0xe787 size:0x0003 C-string:'UNK_0xe787'
//      UNK_0xe78c  codep:0x7420 parp:0xe78c size:0x0003 C-string:'UNK_0xe78c'
//      UNK_0xe791  codep:0x7420 parp:0xe791 size:0x0003 C-string:'UNK_0xe791'
//      UNK_0xe796  codep:0x7420 parp:0xe796 size:0x0003 C-string:'UNK_0xe796'
//         #JUMPOS  codep:0x7420 parp:0xe7a5 size:0x0003 C-string:'_n_JUMPOS'
//        #BLASTOS  codep:0x7420 parp:0xe7b5 size:0x0003 C-string:'_n_BLASTOS'
//      UNK_0xe7ba  codep:0x1d29 parp:0xe7ba size:0x0002 C-string:'UNK_0xe7ba'
//      UNK_0xe7be  codep:0x224c parp:0xe7be size:0x0014 C-string:'UNK_0xe7be'
//      UNK_0xe7d4  codep:0x224c parp:0xe7d4 size:0x001a C-string:'UNK_0xe7d4'
//      UNK_0xe7f0  codep:0x224c parp:0xe7f0 size:0x0018 C-string:'UNK_0xe7f0'
//      UNK_0xe80a  codep:0x224c parp:0xe80a size:0x001a C-string:'UNK_0xe80a'
//      UNK_0xe826  codep:0x224c parp:0xe826 size:0x003e C-string:'UNK_0xe826'
//      UNK_0xe866  codep:0x224c parp:0xe866 size:0x0020 C-string:'UNK_0xe866'
//      UNK_0xe888  codep:0x224c parp:0xe888 size:0x002e C-string:'UNK_0xe888'
//      UNK_0xe8b8  codep:0x224c parp:0xe8b8 size:0x0032 C-string:'UNK_0xe8b8'
//      UNK_0xe8ec  codep:0x1d29 parp:0xe8ec size:0x0015 C-string:'UNK_0xe8ec'
//      UNK_0xe903  codep:0x1d29 parp:0xe903 size:0x0021 C-string:'UNK_0xe903'
//      UNK_0xe926  codep:0x224c parp:0xe926 size:0x0082 C-string:'UNK_0xe926'
//      UNK_0xe9aa  codep:0x224c parp:0xe9aa size:0x0082 C-string:'UNK_0xe9aa'
//      UNK_0xea2e  codep:0x224c parp:0xea2e size:0x0022 C-string:'UNK_0xea2e'
//      UNK_0xea52  codep:0x224c parp:0xea52 size:0x0022 C-string:'UNK_0xea52'
//      UNK_0xea76  codep:0x1d29 parp:0xea76 size:0x0032 C-string:'UNK_0xea76'
//      UNK_0xeaaa  codep:0x224c parp:0xeaaa size:0x005b C-string:'UNK_0xeaaa'
//      UNK_0xeb07  codep:0x224c parp:0xeb07 size:0x003c C-string:'UNK_0xeb07'
//      UNK_0xeb45  codep:0x224c parp:0xeb45 size:0x0014 C-string:'UNK_0xeb45'
//      UNK_0xeb5b  codep:0x224c parp:0xeb5b size:0x0014 C-string:'UNK_0xeb5b'
//      UNK_0xeb71  codep:0x224c parp:0xeb71 size:0x0014 C-string:'UNK_0xeb71'
//      UNK_0xeb87  codep:0x224c parp:0xeb87 size:0x0042 C-string:'UNK_0xeb87'
//      UNK_0xebcb  codep:0x224c parp:0xebcb size:0x004e C-string:'UNK_0xebcb'
//             #>.  codep:0x4b3b parp:0xec21 size:0x0010 C-string:'_n__gt__dot_'
//      UNK_0xec33  codep:0x224c parp:0xec33 size:0x0012 C-string:'UNK_0xec33'
//      (PARTADDR)  codep:0x4b3b parp:0xec54 size:0x0014 C-string:'_ro_PARTADDR_rc_'
//      UNK_0xec6a  codep:0x224c parp:0xec6a size:0x0006 C-string:'UNK_0xec6a'
//           (PTS)  codep:0x4b3b parp:0xec7a size:0x000c C-string:'_ro_PTS_rc_'
//      UNK_0xec88  codep:0x224c parp:0xec88 size:0x0012 C-string:'UNK_0xec88'
//      UNK_0xec9c  codep:0x1d29 parp:0xec9c size:0x0004 C-string:'UNK_0xec9c'
//      UNK_0xeca2  codep:0x224c parp:0xeca2 size:0x007e C-string:'UNK_0xeca2'
//      UNK_0xed22  codep:0x224c parp:0xed22 size:0x0022 C-string:'UNK_0xed22'
//      UNK_0xed46  codep:0x224c parp:0xed46 size:0x002c C-string:'UNK_0xed46'
//      UNK_0xed74  codep:0x224c parp:0xed74 size:0x0020 C-string:'UNK_0xed74'
//         #>VALUE  codep:0x4b3b parp:0xeda0 size:0x0010 C-string:'_n__gt_VALUE'
//      UNK_0xedb2  codep:0x224c parp:0xedb2 size:0x001e C-string:'UNK_0xedb2'
//      UNK_0xedd2  codep:0x224c parp:0xedd2 size:0x000a C-string:'UNK_0xedd2'
//      UNK_0xedde  codep:0x224c parp:0xedde size:0x009a C-string:'UNK_0xedde'
//           #>BUY  codep:0x4b3b parp:0xee82 size:0x0010 C-string:'_n__gt_BUY'
//      UNK_0xee94  codep:0x224c parp:0xee94 size:0x00bc C-string:'UNK_0xee94'
//      UNK_0xef52  codep:0x224c parp:0xef52 size:0x0078 C-string:'UNK_0xef52'
//      UNK_0xefcc  codep:0x224c parp:0xefcc size:0x0079 C-string:'UNK_0xefcc'
//      UNK_0xf047  codep:0x224c parp:0xf047 size:0x0097 C-string:'UNK_0xf047'
//          #>SELL  codep:0x4b3b parp:0xf0e9 size:0x0010 C-string:'_n__gt_SELL'
//      UNK_0xf0fb  codep:0x224c parp:0xf0fb size:0x0072 C-string:'UNK_0xf0fb'
//      UNK_0xf16f  codep:0x1d29 parp:0xf16f size:0x0002 C-string:'UNK_0xf16f'
//      UNK_0xf173  codep:0x224c parp:0xf173 size:0x0088 C-string:'UNK_0xf173'
//      UNK_0xf1fd  codep:0x224c parp:0xf1fd size:0x004e C-string:'UNK_0xf1fd'
//      UNK_0xf24d  codep:0x224c parp:0xf24d size:0x0060 C-string:'UNK_0xf24d'
//      UNK_0xf2af  codep:0x224c parp:0xf2af size:0x003b C-string:'UNK_0xf2af'
//      UNK_0xf2ec  codep:0x224c parp:0xf2ec size:0x0033 C-string:'UNK_0xf2ec'
//      UNK_0xf321  codep:0x224c parp:0xf321 size:0x004a C-string:'UNK_0xf321'
//      UNK_0xf36d  codep:0x224c parp:0xf36d size:0x0070 C-string:'UNK_0xf36d'
//      UNK_0xf3df  codep:0x224c parp:0xf3df size:0x001d C-string:'UNK_0xf3df'
//      UNK_0xf3fe  codep:0x224c parp:0xf3fe size:0x0024 C-string:'UNK_0xf3fe'
//      UNK_0xf424  codep:0x224c parp:0xf424 size:0x006e C-string:'UNK_0xf424'
//      UNK_0xf494  codep:0x224c parp:0xf494 size:0x0008 C-string:'UNK_0xf494'
//      UNK_0xf49e  codep:0x224c parp:0xf49e size:0x0008 C-string:'UNK_0xf49e'
// CONFIG-FUNCTION  codep:0x4b3b parp:0xf4ba size:0x0018 C-string:'CONFIG_dash_FUNCTION'
//      (U-CONFIG)  codep:0x224c parp:0xf4e1 size:0x0000 C-string:'_ro_U_dash_CONFIG_rc_'

// =================================
// ============= EXTERN ============
// =================================
extern const unsigned short int pp_YBLT; // YBLT
extern const unsigned short int pp_XBLT; // XBLT
extern const unsigned short int pp_XORMODE; // XORMODE
extern const unsigned short int pp_WBLT; // WBLT
extern const unsigned short int pp_IsREPAIR; // ?REPAIR
extern const unsigned short int pp_NCRS; // NCRS
extern const unsigned short int pp_OCRS; // OCRS
extern const unsigned short int pp__dash_AIN; // -AIN
extern const unsigned short int pp_FQUIT; // FQUIT
extern const unsigned short int pp_CRSCOLO; // CRSCOLO
extern Color BLACK; // BLACK
extern Color DK_dash_GREE; // DK-GREE
extern Color GREY1; // GREY1
extern Color BLUE; // BLUE
extern Color WHITE; // WHITE
extern IFieldType _pe_NAME; // %NAME
void _star__slash_(); // */
void M_star_(); // M*
void MAX(); // MAX
void MOD(); // MOD
void MIN(); // MIN
void Draw(); // .
void DrawR(); // .R
void D_dot_(); // D.
void D_dot_R(); // D.R
void U_dot_(); // U.
void NOP(); // NOP
void _2OVER(); // 2OVER
void D_dash_(); // D-
void D_gt_(); // D>
void WITHIN(); // WITHIN
void DMAX(); // DMAX
void BIT(); // BIT
void _gt_FLAG(); // >FLAG
void C_ex__2(); // C!_2
void Store_2(); // !_2
void _plus__ex__2(); // +!_2
void StoreD(); // D!
void ON_2(); // ON_2
void _099(); // 099
void FILL_2(); // FILL_2
void ICLOSE(); // ICLOSE
void _gt_C_plus_S(); // >C+S
void StoreCOLOR(); // !COLOR
void DARK(); // DARK
void LLINE(); // LLINE
void _gt_1FONT(); // >1FONT
void _gt_DISPLA(); // >DISPLA
void _gt_HIDDEN(); // >HIDDEN
void SCR_dash_RES(); // SCR-RES
void POS_dot_(); // POS.
void GetCRS(); // @CRS
void StoreCRS(); // !CRS
void _do__dot_(); // $.
void POS_dot_PXT(); // POS.PXT
void CTINIT(); // CTINIT
void IsMRC(); // ?MRC
void XYSCAN(); // XYSCAN
void IsTRIG(); // ?TRIG
void IsQUIT(); // ?QUIT
void Y_slash_N(); // Y/N
void BLD_dash_CRS(); // BLD-CRS
void SET_dash_CRS(); // SET-CRS
void _do__ex_(); // $!
void CMESS(); // CMESS
void _0MESS(); // 0MESS
void _2_at_(); // 2@
void _2DUP(); // 2DUP
void OVER(); // OVER
void ROT(); // ROT
void SWAP(); // SWAP
void _dash_(); // -
void D_plus_(); // D+
void DNEGATE(); // DNEGATE
void U_star_(); // U*
void _gt_(); // >
void _st_(); // <
void TIME(); // TIME
void _plus_BIT(); // +BIT
void BLT(); // BLT


// =================================
// =========== VARIABLES ===========
// =================================
const unsigned short int pp_UNK_0xe7ba = 0xe7ba; // UNK_0xe7ba size: 2
// {0x3a, 0x20}

const unsigned short int pp_UNK_0xe8ec = 0xe8ec; // UNK_0xe8ec size: 21
// {0x04, 0x0a, 0x02, 0x09, 0x13, 0x0a, 0x16, 0x09, 0x25, 0x0a, 0x3c, 0x09, 0x27, 0x0a, 0x64, 0x09, 0x1b, 0x0a, 0x80, 0x09, 0x1e}

const unsigned short int pp_UNK_0xe903 = 0xe903; // UNK_0xe903 size: 33
// {0x07, 0xb0, 0x06, 0x09, 0x29, 0xa6, 0x06, 0x09, 0x1d, 0x9c, 0x06, 0x09, 0x25, 0x92, 0x06, 0x09, 0x15, 0x88, 0x06, 0x09, 0x41, 0x7e, 0x06, 0x09, 0x31, 0x74, 0x06, 0x09, 0x2d, 0x6a, 0x06, 0x09, 0x25}

const unsigned short int pp_UNK_0xea76 = 0xea76; // UNK_0xea76 size: 50
// {0xe8, 0x03, 0x90, 0x01, 0xc8, 0x00, 0x50, 0x00, 0x0a, 0x00, 0xe2, 0x04, 0xbc, 0x02, 0x40, 0x01, 0x78, 0x00, 0x28, 0x00, 0xfa, 0x00, 0x7d, 0x00, 0x3e, 0x00, 0x1f, 0x00, 0x0f, 0x00, 0xd0, 0x07, 0xb0, 0x04, 0x58, 0x02, 0x18, 0x01, 0x78, 0x00, 0xdc, 0x05, 0x84, 0x03, 0x1c, 0x02, 0xc8, 0x00, 0x50, 0x00}

const unsigned short int pp_UNK_0xec9c = 0xec9c; // UNK_0xec9c size: 4
// {0x56, 0x3a, 0x20, 0x70}

const unsigned short int pp_UNK_0xf16f = 0xf16f; // UNK_0xf16f size: 2
// {0x3a, 0x20}




// 0xe6f2: db 0xe7 0x00 '  '

// ================================================
// 0xe6f4: WORD 'UNK_0xe6f6' codep=0x224c parp=0xe6f6 params=0 returns=0
// ================================================

void UNK_0xe6f6() // UNK_0xe6f6
{
  Push(0xc261); // probable 'OVINIT-_1'
  MODULE(); // MODULE
}


// ================================================
// 0xe6fe: WORD 'UNK_0xe700' codep=0x224c parp=0xe700 params=0 returns=0
// ================================================

void UNK_0xe700() // UNK_0xe700
{
  Push(0xc273); // probable 'OVTRANS'
  MODULE(); // MODULE
}


// ================================================
// 0xe708: WORD 'UNK_0xe70a' codep=0x224c parp=0xe70a params=0 returns=0
// ================================================
// orphan

void UNK_0xe70a() // UNK_0xe70a
{
  Push(0xc285); // probable 'OVD@BAL'
  MODULE(); // MODULE
}


// ================================================
// 0xe712: WORD 'UNK_0xe714' codep=0x224c parp=0xe714 params=0 returns=0
// ================================================

void UNK_0xe714() // UNK_0xe714
{
  Push(0xc2a9); // probable 'OV?BALA'
  MODULE(); // MODULE
}


// ================================================
// 0xe71c: WORD 'UNK_0xe71e' codep=0x224c parp=0xe71e params=0 returns=0
// ================================================

void UNK_0xe71e() // UNK_0xe71e
{
  Push(0xc2ed); // probable 'T+BALAN'
  MODULE(); // MODULE
}


// ================================================
// 0xe726: WORD 'UNK_0xe728' codep=0x224c parp=0xe728 params=0 returns=0
// ================================================

void UNK_0xe728() // UNK_0xe728
{
  Push(0xb6fd); // probable 'OV#IN$'
  MODULE(); // MODULE
}


// ================================================
// 0xe730: WORD 'UNK_0xe732' codep=0x224c parp=0xe732 params=0 returns=0
// ================================================

void UNK_0xe732() // UNK_0xe732
{
  Push(0xb70e); // probable 'OVQUIT'
  MODULE(); // MODULE
}


// ================================================
// 0xe73a: WORD 'UNK_0xe73c' codep=0x224c parp=0xe73c params=0 returns=0
// ================================================

void UNK_0xe73c() // UNK_0xe73c
{
  Push(0xb71f); // probable 'OV.0$$'
  MODULE(); // MODULE
}


// ================================================
// 0xe744: WORD 'UNK_0xe746' codep=0x224c parp=0xe746 params=0 returns=0
// ================================================

void UNK_0xe746() // UNK_0xe746
{
  Push(0xb730); // probable 'OV0$$$'
  MODULE(); // MODULE
}


// ================================================
// 0xe74e: WORD 'UNK_0xe750' codep=0x224c parp=0xe750 params=0 returns=0
// ================================================

void UNK_0xe750() // UNK_0xe750
{
  Push(0xcc56); // probable 'OVBALAN'
  MODULE(); // MODULE
}


// ================================================
// 0xe758: WORD 'UNK_0xe75a' codep=0x7420 parp=0xe75a
// ================================================
IFieldType UNK_0xe75a = {SHIPIDX, 0x11, 0x02};

// ================================================
// 0xe75d: WORD 'UNK_0xe75f' codep=0x7420 parp=0xe75f
// ================================================
IFieldType UNK_0xe75f = {SHIPIDX, 0x13, 0x02};

// ================================================
// 0xe762: WORD 'UNK_0xe764' codep=0x7420 parp=0xe764
// ================================================
IFieldType UNK_0xe764 = {SHIPIDX, 0x15, 0x02};

// ================================================
// 0xe767: WORD 'UNK_0xe769' codep=0x7420 parp=0xe769
// ================================================
IFieldType UNK_0xe769 = {SHIPIDX, 0x17, 0x02};

// ================================================
// 0xe76c: WORD 'UNK_0xe76e' codep=0x7420 parp=0xe76e
// ================================================
IFieldType UNK_0xe76e = {SHIPIDX, 0x19, 0x02};

// ================================================
// 0xe771: WORD 'UNK_0xe773' codep=0x7420 parp=0xe773
// ================================================
IFieldType UNK_0xe773 = {SHIPIDX, 0x1b, 0x02};

// ================================================
// 0xe776: WORD 'UNK_0xe778' codep=0x7420 parp=0xe778
// ================================================
IFieldType UNK_0xe778 = {SHIPIDX, 0x1d, 0x02};

// ================================================
// 0xe77b: WORD 'UNK_0xe77d' codep=0x7420 parp=0xe77d
// ================================================
IFieldType UNK_0xe77d = {SHIPIDX, 0x1f, 0x02};

// ================================================
// 0xe780: WORD 'UNK_0xe782' codep=0x7420 parp=0xe782
// ================================================
IFieldType UNK_0xe782 = {SHIPIDX, 0x29, 0x07};

// ================================================
// 0xe785: WORD 'UNK_0xe787' codep=0x7420 parp=0xe787
// ================================================
IFieldType UNK_0xe787 = {SHIPIDX, 0x30, 0x02};

// ================================================
// 0xe78a: WORD 'UNK_0xe78c' codep=0x7420 parp=0xe78c
// ================================================
IFieldType UNK_0xe78c = {SHIPIDX, 0x32, 0x02};

// ================================================
// 0xe78f: WORD 'UNK_0xe791' codep=0x7420 parp=0xe791
// ================================================
IFieldType UNK_0xe791 = {SHIPIDX, 0x43, 0x02};

// ================================================
// 0xe794: WORD 'UNK_0xe796' codep=0x7420 parp=0xe796
// ================================================
// orphan
IFieldType UNK_0xe796 = {SHIPIDX, 0x45, 0x04};

// ================================================
// 0xe799: WORD '#JUMPOS' codep=0x7420 parp=0xe7a5
// ================================================
IFieldType _n_JUMPOS = {SHIPIDX, 0x56, 0x01};

// ================================================
// 0xe7a8: WORD '#BLASTOS' codep=0x7420 parp=0xe7b5
// ================================================
IFieldType _n_BLASTOS = {SHIPIDX, 0x57, 0x01};

// ================================================
// 0xe7b8: WORD 'UNK_0xe7ba' codep=0x1d29 parp=0xe7ba
// ================================================
// 0xe7ba: db 0x3a 0x20 ': '

// ================================================
// 0xe7bc: WORD 'UNK_0xe7be' codep=0x224c parp=0xe7be params=0 returns=1
// ================================================

void UNK_0xe7be() // UNK_0xe7be
{
  Push(Read16(pp_UNK_0xe7ba)); // UNK_0xe7ba @
  Push(Read16(regsp)); // DUP
  Push(Pop()==0?1:0); //  0=
  SWAP(); // SWAP
  Push(6);
  Push(8);
  WITHIN(); // WITHIN
  Push(Pop() | Pop()); // OR
}


// ================================================
// 0xe7d2: WORD 'UNK_0xe7d4' codep=0x224c parp=0xe7d4 params=1 returns=1
// ================================================

void UNK_0xe7d4() // UNK_0xe7d4
{
  UNK_0xe7be(); // UNK_0xe7be
  if (Pop() != 0)
  {
    Pop(); // DROP
    Push(0x0064);
    return;
  }
  Push((Read16(Pop())&0xFF) & 0x007f); //  C@ 0x007f AND
}


// ================================================
// 0xe7ee: WORD 'UNK_0xe7f0' codep=0x224c parp=0xe7f0 params=1 returns=1
// ================================================

void UNK_0xe7f0() // UNK_0xe7f0
{
  UNK_0xe7be(); // UNK_0xe7be
  if (Pop() != 0)
  {
    Pop(); // DROP
    Push(7);
    return;
  }
  Push((Read16(Pop() + 1)&0xFF) & 7); //  1+ C@ 7 AND
}


// ================================================
// 0xe808: WORD 'UNK_0xe80a' codep=0x224c parp=0xe80a params=0 returns=1
// ================================================

void UNK_0xe80a() // UNK_0xe80a
{
  Push2Words("*SHIP");
  _gt_C_plus_S(); // >C+S
  Push(Read16(0x65e1+UNK_0xe77d.offset)); // UNK_0xe77d<IFIELD> @
  _plus_BIT(); // +BIT
  Push((Pop() + (Read16(0x65e1+_n_JUMPOS.offset)&0xFF)) + (Read16(0x65e1+_n_BLASTOS.offset)&0xFF)); //  #JUMPOS<IFIELD> C@ + #BLASTOS<IFIELD> C@ +
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xe824: WORD 'UNK_0xe826' codep=0x224c parp=0xe826
// ================================================

void UNK_0xe826() // UNK_0xe826
{
  StoreCOLOR(); // !COLOR
  Push(2);
  Push(0x00b5);
  Push(0x004f);
  OVER(); // OVER
  LLINE(); // LLINE
  Push(2);
  Push(0x001b);
  Push(0x004f);
  OVER(); // OVER
  LLINE(); // LLINE
  Push(2);
  Push(0x00b5);
  Push(2);
  Push(0x001b);
  LLINE(); // LLINE
  Push(0x004f);
  Push(0x00b5);
  OVER(); // OVER
  Push(0x001b);
  LLINE(); // LLINE
}


// ================================================
// 0xe864: WORD 'UNK_0xe866' codep=0x224c parp=0xe866
// ================================================

void UNK_0xe866() // UNK_0xe866
{
  TIME(); // TIME
  _2_at_(); // 2@
  do
  {
    TIME(); // TIME
    _2_at_(); // 2@
    _2OVER(); // 2OVER
    D_dash_(); // D-
    Push(0x09c4); Push(0x0000);
    D_gt_(); // D>
    Exec("IsTERMINAL"); // call of word 0x25bc '(?TERMINAL)'
    Push(Pop() | Pop()); // OR
  } while(Pop() == 0);
  Pop(); Pop(); // 2DROP
}


// ================================================
// 0xe886: WORD 'UNK_0xe888' codep=0x224c parp=0xe888
// ================================================

void UNK_0xe888() // UNK_0xe888
{
  GetCRS(); // @CRS
  Push(2);
  GetColor(BLACK);
  Push(0x00ae);
  Push(0x0085);
  _2DUP(); // 2DUP
  SWAP(); // SWAP
  POS_dot_(); // POS.
  POS_dot_PXT(); // POS.PXT
  CTINIT(); // CTINIT
  UNK_0xe80a(); // UNK_0xe80a
  Push(2);
  DrawR(); // .R
  StoreCRS(); // !CRS
  Push(0xcc0f); // probable 'OV.MASS'
  MODULE(); // MODULE
  Push(0xcc20); // probable 'OV.ACC'
  MODULE(); // MODULE
}


// ================================================
// 0xe8b6: WORD 'UNK_0xe8b8' codep=0x224c parp=0xe8b8
// ================================================

void UNK_0xe8b8() // UNK_0xe8b8
{
  Push(1);
  _0MESS(); // 0MESS
  Push(1);
  Push(0x001a);
  CMESS(); // CMESS
  PRINT("SHIP CAN'T HANDLE THIS LOAD", 27); // (.")
  StoreCRS(); // !CRS
  UNK_0xe866(); // UNK_0xe866
  UNK_0xe732(); // UNK_0xe732
}


// ================================================
// 0xe8ea: WORD 'UNK_0xe8ec' codep=0x1d29 parp=0xe8ec
// ================================================
// 0xe8ec: db 0x04 0x0a 0x02 0x09 0x13 0x0a 0x16 0x09 0x25 0x0a 0x3c 0x09 0x27 0x0a 0x64 0x09 0x1b 0x0a 0x80 0x09 0x1e '        % < ' d      '

// ================================================
// 0xe901: WORD 'UNK_0xe903' codep=0x1d29 parp=0xe903
// ================================================
// 0xe903: db 0x07 0xb0 0x06 0x09 0x29 0xa6 0x06 0x09 0x1d 0x9c 0x06 0x09 0x25 0x92 0x06 0x09 0x15 0x88 0x06 0x09 0x41 0x7e 0x06 0x09 0x31 0x74 0x06 0x09 0x2d 0x6a 0x06 0x09 0x25 '    )       %       A~  1t  -j  %'

// ================================================
// 0xe924: WORD 'UNK_0xe926' codep=0x224c parp=0xe926
// ================================================

void UNK_0xe926() // UNK_0xe926
{
  UNK_0xe80a(); // UNK_0xe80a
  Push(0x0010);
  _st_(); // <
  Push(0xc350); Push(0x0000);
  UNK_0xe714(); // UNK_0xe714
  Push(Pop() & Pop()); // AND
  if (Pop() != 0)
  {
    Push(Read16(0x65e1+_n_BLASTOS.offset)&0xFF); // #BLASTOS<IFIELD> C@
    Push(1);
    _gt_(); // >
    if (Pop() != 0)
    {
      UNK_0xe8b8(); // UNK_0xe8b8
    } else
    {
      Push(0x3cb0); Push(0xffff);
      UNK_0xe71e(); // UNK_0xe71e
      UNK_0xe750(); // UNK_0xe750
      Push(1);
      Push(0x65e1+_n_BLASTOS.offset); // #BLASTOS<IFIELD>
      _plus__ex__2(); // +!_2
      Push(0xcc32); // probable 'OV.PODS'
      MODULE(); // MODULE
      UNK_0xe888(); // UNK_0xe888
    }
    return;
  }
  Push(1);
  _0MESS(); // 0MESS
  UNK_0xe80a(); // UNK_0xe80a
  Push(Pop()==0x0010?1:0); //  0x0010 =
  if (Pop() != 0)
  {
    Push(1);
    Push(0x001b);
    CMESS(); // CMESS
    PRINT("NO POD BAYS AVAILABLE", 21); // (.")
    StoreCRS(); // !CRS
  } else
  {
    UNK_0xe746(); // UNK_0xe746
  }
  UNK_0xe866(); // UNK_0xe866
  UNK_0xe732(); // UNK_0xe732
}


// ================================================
// 0xe9a8: WORD 'UNK_0xe9aa' codep=0x224c parp=0xe9aa
// ================================================

void UNK_0xe9aa() // UNK_0xe9aa
{
  UNK_0xe80a(); // UNK_0xe80a
  Push(0x0010);
  _st_(); // <
  Push(0x4e20); Push(0x0000);
  UNK_0xe714(); // UNK_0xe714
  Push(Pop() & Pop()); // AND
  if (Pop() != 0)
  {
    Push(Read16(0x65e1+_n_JUMPOS.offset)&0xFF); // #JUMPOS<IFIELD> C@
    Push(3);
    _gt_(); // >
    if (Pop() != 0)
    {
      UNK_0xe8b8(); // UNK_0xe8b8
    } else
    {
      Push(0xb1e0); Push(0xffff);
      UNK_0xe71e(); // UNK_0xe71e
      UNK_0xe750(); // UNK_0xe750
      Push(1);
      Push(0x65e1+_n_JUMPOS.offset); // #JUMPOS<IFIELD>
      _plus__ex__2(); // +!_2
      Push(0xcc32); // probable 'OV.PODS'
      MODULE(); // MODULE
      UNK_0xe888(); // UNK_0xe888
    }
    return;
  }
  Push(1);
  _0MESS(); // 0MESS
  UNK_0xe80a(); // UNK_0xe80a
  Push(Pop()==0x0010?1:0); //  0x0010 =
  if (Pop() != 0)
  {
    Push(1);
    Push(0x001b);
    CMESS(); // CMESS
    PRINT("NO POD BAYS AVAILABLE", 21); // (.")
    StoreCRS(); // !CRS
  } else
  {
    UNK_0xe746(); // UNK_0xe746
  }
  UNK_0xe866(); // UNK_0xe866
  UNK_0xe732(); // UNK_0xe732
}


// ================================================
// 0xea2c: WORD 'UNK_0xea2e' codep=0x224c parp=0xea2e params=0 returns=0
// ================================================

void UNK_0xea2e() // UNK_0xea2e
{
  Push(Read16(0x65e1+_n_BLASTOS.offset)&0xFF); // #BLASTOS<IFIELD> C@
  if (Pop() == 0) return;
  Push(-1);
  Push(0x65e1+_n_BLASTOS.offset); // #BLASTOS<IFIELD>
  _plus__ex__2(); // +!_2
  Push(0xafc8); Push(0x0000);
  UNK_0xe71e(); // UNK_0xe71e
  Push(0xcc32); // probable 'OV.PODS'
  MODULE(); // MODULE
  UNK_0xe888(); // UNK_0xe888
  UNK_0xe750(); // UNK_0xe750
}


// ================================================
// 0xea50: WORD 'UNK_0xea52' codep=0x224c parp=0xea52 params=0 returns=0
// ================================================

void UNK_0xea52() // UNK_0xea52
{
  Push(Read16(0x65e1+_n_JUMPOS.offset)&0xFF); // #JUMPOS<IFIELD> C@
  if (Pop() == 0) return;
  Push(-1);
  Push(0x65e1+_n_JUMPOS.offset); // #JUMPOS<IFIELD>
  _plus__ex__2(); // +!_2
  Push(0x1194); Push(0x0000);
  UNK_0xe71e(); // UNK_0xe71e
  Push(0xcc32); // probable 'OV.PODS'
  MODULE(); // MODULE
  UNK_0xe888(); // UNK_0xe888
  UNK_0xe750(); // UNK_0xe750
}


// ================================================
// 0xea74: WORD 'UNK_0xea76' codep=0x1d29 parp=0xea76
// ================================================
// 0xea76: db 0xe8 0x03 0x90 0x01 0xc8 0x00 0x50 0x00 0x0a 0x00 0xe2 0x04 0xbc 0x02 0x40 0x01 0x78 0x00 0x28 0x00 0xfa 0x00 0x7d 0x00 0x3e 0x00 0x1f 0x00 0x0f 0x00 0xd0 0x07 0xb0 0x04 0x58 0x02 0x18 0x01 0x78 0x00 0xdc 0x05 0x84 0x03 0x1c 0x02 0xc8 0x00 0x50 0x00 '      P       @ x (   } >         X   x         P '

// ================================================
// 0xeaa8: WORD 'UNK_0xeaaa' codep=0x224c parp=0xeaaa
// ================================================

void UNK_0xeaaa() // UNK_0xeaaa
{
  Push(7);
  GetColor(BLACK);
  ROT(); // ROT
  Push(Pop() * 0x000a + 0x007c); //  0x000a * 0x007c +
  Push(0x007d);
  _2DUP(); // 2DUP
  SWAP(); // SWAP
  POS_dot_(); // POS.
  POS_dot_PXT(); // POS.PXT
  CTINIT(); // CTINIT
  Push(Pop() & 7); //  7 AND
  if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
  if (Pop() != 0)
  {
    Push(Read16(regsp)); // DUP
    Push(Pop()==6?1:0); //  6 =
    if (Pop() != 0)
    {
      PRINT("PLASMA", 6); // (.")
      Pop(); // DROP
    } else
    {
      PRINT("CLASS ", 6); // (.")
      Draw(); // .
    }
    return;
  }
  PRINT("NONE", 4); // (.")
}


// ================================================
// 0xeb05: WORD 'UNK_0xeb07' codep=0x224c parp=0xeb07
// ================================================

void UNK_0xeb07() // UNK_0xeb07
{
  GetCRS(); // @CRS
  CTINIT(); // CTINIT
  Push(Read16((0x65e1+UNK_0xe75f.offset) + 1)&0xFF); // UNK_0xe75f<IFIELD> 1+ C@
  Push(4);
  UNK_0xeaaa(); // UNK_0xeaaa
  Push(Read16((0x65e1+UNK_0xe76e.offset) + 1)&0xFF); // UNK_0xe76e<IFIELD> 1+ C@
  Push(3);
  UNK_0xeaaa(); // UNK_0xeaaa
  Push(Read16((0x65e1+UNK_0xe75a.offset) + 1)&0xFF); // UNK_0xe75a<IFIELD> 1+ C@
  Push(2);
  UNK_0xeaaa(); // UNK_0xeaaa
  Push(Read16((0x65e1+UNK_0xe773.offset) + 1)&0xFF); // UNK_0xe773<IFIELD> 1+ C@
  Push(1);
  UNK_0xeaaa(); // UNK_0xeaaa
  Push(Read16((0x65e1+UNK_0xe778.offset) + 1)&0xFF); // UNK_0xe778<IFIELD> 1+ C@
  Push(0);
  UNK_0xeaaa(); // UNK_0xeaaa
  UNK_0xe888(); // UNK_0xe888
  StoreCRS(); // !CRS
}


// ================================================
// 0xeb43: WORD 'UNK_0xeb45' codep=0x224c parp=0xeb45
// ================================================

void UNK_0xeb45() // UNK_0xeb45
{
  Pop(); // DROP
  Push(0x003b);
  Push(0x00ae);
  POS_dot_(); // POS.
  Push(0x01f4);
  Draw(); // .
}


// ================================================
// 0xeb59: WORD 'UNK_0xeb5b' codep=0x224c parp=0xeb5b
// ================================================

void UNK_0xeb5b() // UNK_0xeb5b
{
  Pop(); // DROP
  Push(0x003b);
  Push(0x0072);
  POS_dot_(); // POS.
  Push(0xc350);
  U_dot_(); // U.
}


// ================================================
// 0xeb6f: WORD 'UNK_0xeb71' codep=0x224c parp=0xeb71
// ================================================

void UNK_0xeb71() // UNK_0xeb71
{
  Pop(); // DROP
  Push(0x003b);
  Push(0x0068);
  POS_dot_(); // POS.
  Push(0x4e20);
  U_dot_(); // U.
}


// ================================================
// 0xeb85: WORD 'UNK_0xeb87' codep=0x224c parp=0xeb87
// ================================================

void UNK_0xeb87() // UNK_0xeb87
{
  unsigned short int i, imax;
  Push((Pop() - 1) * 5); //  1- 5 *
  Push(5);
  OVER(); // OVER
  Push(Pop() + Pop()); // +
  SWAP(); // SWAP

  i = Pop();
  imax = Pop();
  do // (DO)
  {
    Push(0x0037);
    Push(i); // I
    Push(5);
    MOD(); // MOD
    Push(Pop() * 0x000a + 0x002c); //  0x000a * 0x002c +
    POS_dot_(); // POS.
    Push(Read16(pp_UNK_0xea76 + i * 2)); // UNK_0xea76 I 2* + @
    Push(0x0064);
    M_star_(); // M*
    Push(6);
    D_dot_R(); // D.R
    i++;
  } while(i<imax); // (LOOP)

}


// ================================================
// 0xebc9: WORD 'UNK_0xebcb' codep=0x224c parp=0xebcb
// ================================================

void UNK_0xebcb() // UNK_0xebcb
{
  unsigned short int i, imax;
  Push(5);
  Push(0);

  i = Pop();
  imax = Pop();
  do // (DO)
  {
    Push(6);
    GetColor(BLACK);
    Push(0x002c + i * 0x000a); // 0x002c I 0x000a * +
    Push(0x0036);
    POS_dot_PXT(); // POS.PXT
    i++;
  } while(i<imax); // (LOOP)

  Push(4);
  GetColor(BLACK);
  Push(0x00ae);
  Push(0x0037);
  POS_dot_PXT(); // POS.PXT
  Push(6);
  GetColor(BLACK);
  Push(0x0072);
  Push(0x0036);
  POS_dot_PXT(); // POS.PXT
  Push(6);
  GetColor(BLACK);
  Push(0x0068);
  Push(0x0036);
  POS_dot_PXT(); // POS.PXT
}


// ================================================
// 0xec19: WORD '#>.' codep=0x4b3b parp=0xec21
// ================================================

void _n__gt__dot_() // #>.
{
  switch(Pop()) // #>.
  {
  case 0:
    UNK_0xeb45(); // UNK_0xeb45
    break;
  case 6:
    UNK_0xeb5b(); // UNK_0xeb5b
    break;
  case 7:
    UNK_0xeb71(); // UNK_0xeb71
    break;
  default:
    UNK_0xeb87(); // UNK_0xeb87
    break;

  }
}

// ================================================
// 0xec31: WORD 'UNK_0xec33' codep=0x224c parp=0xec33
// ================================================

void UNK_0xec33() // UNK_0xec33
{
  unsigned short int a;
  a = Pop(); // >R
  GetCRS(); // @CRS
  Push(a); // R>
  CTINIT(); // CTINIT
  UNK_0xebcb(); // UNK_0xebcb
  Push(Read16(regsp)); // DUP
  _n__gt__dot_(); // #>. case
  StoreCRS(); // !CRS
}


// ================================================
// 0xec45: WORD '(PARTADDR)' codep=0x4b3b parp=0xec54
// ================================================

void _ro_PARTADDR_rc_() // (PARTADDR)
{
  switch(Pop()) // (PARTADDR)
  {
  case 1:
    Push(0x65e1+UNK_0xe75f.offset); // IFIELD
    break;
  case 2:
    Push(0x65e1+UNK_0xe76e.offset); // IFIELD
    break;
  case 3:
    Push(0x65e1+UNK_0xe75a.offset); // IFIELD
    break;
  case 4:
    Push(0x65e1+UNK_0xe773.offset); // IFIELD
    break;
  default:
    Push(0x65e1+UNK_0xe778.offset); // IFIELD
    break;

  }
}

// ================================================
// 0xec68: WORD 'UNK_0xec6a' codep=0x224c parp=0xec6a
// ================================================

void UNK_0xec6a() // UNK_0xec6a
{
  Push(Read16(regsp)); // DUP
  _ro_PARTADDR_rc_(); // (PARTADDR) case
}


// ================================================
// 0xec70: WORD '(PTS)' codep=0x4b3b parp=0xec7a
// ================================================

void _ro_PTS_rc_() // (PTS)
{
  switch(Pop()) // (PTS)
  {
  case 2:
    Push(0x65e1+UNK_0xe787.offset); // IFIELD
    break;
  case 3:
    Push(0x65e1+UNK_0xe78c.offset); // IFIELD
    break;
  default:
    Push(0);
    break;

  }
}

// ================================================
// 0xec86: WORD 'UNK_0xec88' codep=0x224c parp=0xec88
// ================================================

void UNK_0xec88() // UNK_0xec88
{
  _ro_PTS_rc_(); // (PTS) case
  if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
  if (Pop() != 0)
  {
    Store_2(); // !_2
    return;
  }
  Pop(); // DROP
}


// ================================================
// 0xec9a: WORD 'UNK_0xec9c' codep=0x1d29 parp=0xec9c
// ================================================
// 0xec9c: db 0x56 0x3a 0x20 0x70 'V: p'

// ================================================
// 0xeca0: WORD 'UNK_0xeca2' codep=0x224c parp=0xeca2
// ================================================

void UNK_0xeca2() // UNK_0xeca2
{
  UNK_0xec6a(); // UNK_0xec6a
  Push(Read16(regsp)); // DUP
  UNK_0xe7f0(); // UNK_0xe7f0
  Push(Read16(regsp)); // DUP
  Push(Read16(regsp)); // DUP
  Push(6);
  _st_(); // <
  SWAP(); // SWAP
  _gt_FLAG(); // >FLAG
  Push(Pop() & Pop()); // AND
  if (Pop() != 0)
  {
    Push(5);
    SWAP(); // SWAP
    _dash_(); // -
    Push(Pop() * 0x000a + 0x002c); //  0x000a * 0x002c +
    Push(pp_YBLT); // YBLT
    Store_2(); // !_2
    SWAP(); // SWAP
    Push((Pop() - 1) * 0x000a); //  1- 0x000a *
    OVER(); // OVER
    UNK_0xe7f0(); // UNK_0xe7f0
    Push(5);
    SWAP(); // SWAP
    _dash_(); // -
    Push(Pop() * 2); //  2*
    Push(Pop() + Pop()); // +
    Push(Read16(Pop() + pp_UNK_0xea76)); //  UNK_0xea76 + @
    SWAP(); // SWAP
    UNK_0xe7d4(); // UNK_0xe7d4
    Push(0x0069);
    _star__slash_(); // */
    Push(0x0064);
    U_star_(); // U*
    Push(0x0005); Push(0x0000);
    DMAX(); // DMAX
    _2DUP(); // 2DUP
    Push(pp_UNK_0xec9c); // UNK_0xec9c
    StoreD(); // D!
    Push(6);
    D_dot_R(); // D.R
    return;
  }
  Pop(); // DROP
  Pop(); Pop(); // 2DROP
  Push2Words("NULL");
  Push(pp_UNK_0xec9c); // UNK_0xec9c
  StoreD(); // D!
}


// ================================================
// 0xed20: WORD 'UNK_0xed22' codep=0x224c parp=0xed22 params=1 returns=0
// ================================================

void UNK_0xed22() // UNK_0xed22
{
  Pop(); // DROP
  Push(0x00ae);
  Push(pp_YBLT); // YBLT
  Store_2(); // !_2
  Push(Read16(0x65e1+UNK_0xe77d.offset)); // UNK_0xe77d<IFIELD> @
  if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
  if (Pop() == 0) return;
  _plus_BIT(); // +BIT
  Push(Pop() * 0x01f4); //  0x01f4 *
  Push(4);
  DrawR(); // .R
}


// ================================================
// 0xed44: WORD 'UNK_0xed46' codep=0x224c parp=0xed46 params=1 returns=0
// ================================================

void UNK_0xed46() // UNK_0xed46
{
  Pop(); // DROP
  Push(0x0072);
  Push(pp_YBLT); // YBLT
  Store_2(); // !_2
  Push(0xfffc);
  Push(pp_XBLT); // XBLT
  _plus__ex__2(); // +!_2
  Push(Read16(0x65e1+_n_BLASTOS.offset)&0xFF); // #BLASTOS<IFIELD> C@
  if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
  if (Pop() == 0) return;
  Push(0x1194);
  M_star_(); // M*
  Push(6);
  D_dot_R(); // D.R
  PRINT("0", 1); // (.")
}


// ================================================
// 0xed72: WORD 'UNK_0xed74' codep=0x224c parp=0xed74 params=1 returns=0
// ================================================

void UNK_0xed74() // UNK_0xed74
{
  Pop(); // DROP
  Push(0x0068);
  Push(pp_YBLT); // YBLT
  Store_2(); // !_2
  Push(Read16(0x65e1+_n_JUMPOS.offset)&0xFF); // #JUMPOS<IFIELD> C@
  if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
  if (Pop() == 0) return;
  Push(0x1194);
  M_star_(); // M*
  Push(6);
  D_dot_R(); // D.R
}


// ================================================
// 0xed94: WORD '#>VALUE' codep=0x4b3b parp=0xeda0
// ================================================

void _n__gt_VALUE() // #>VALUE
{
  switch(Pop()) // #>VALUE
  {
  case 0:
    UNK_0xed22(); // UNK_0xed22
    break;
  case 6:
    UNK_0xed46(); // UNK_0xed46
    break;
  case 7:
    UNK_0xed74(); // UNK_0xed74
    break;
  default:
    UNK_0xeca2(); // UNK_0xeca2
    break;

  }
}

// ================================================
// 0xedb0: WORD 'UNK_0xedb2' codep=0x224c parp=0xedb2
// ================================================

void UNK_0xedb2() // UNK_0xedb2
{
  unsigned short int a;
  a = Pop(); // >R
  GetCRS(); // @CRS
  Push(a); // R>
  _gt_1FONT(); // >1FONT
  Push(pp_XORMODE); // XORMODE
  _099(); // 099
  UNK_0xebcb(); // UNK_0xebcb
  Push(0x0037);
  Push(pp_XBLT); // XBLT
  Store_2(); // !_2
  Push(Read16(regsp)); // DUP
  _n__gt_VALUE(); // #>VALUE case
  StoreCRS(); // !CRS
}


// ================================================
// 0xedd0: WORD 'UNK_0xedd2' codep=0x224c parp=0xedd2
// ================================================

void UNK_0xedd2() // UNK_0xedd2
{
  UNK_0xec6a(); // UNK_0xec6a
  UNK_0xe7f0(); // UNK_0xe7f0
  SWAP(); // SWAP
  Pop(); // DROP
}


// ================================================
// 0xeddc: WORD 'UNK_0xedde' codep=0x224c parp=0xedde
// ================================================

void UNK_0xedde() // UNK_0xedde
{
  unsigned short int i, imax;
  UNK_0xe80a(); // UNK_0xe80a
  Push(0x0010);
  _st_(); // <
  Push(0x01f4); Push(0x0000);
  UNK_0xe714(); // UNK_0xe714
  Push(Pop() & Pop()); // AND
  if (Pop() != 0)
  {
    Push(0xfe0c); Push(0xffff);
    UNK_0xe71e(); // UNK_0xe71e
    UNK_0xe750(); // UNK_0xe750
    Push(1);
    Push(0x0010);
    Push(0);

    i = Pop();
    imax = Pop();
    do // (DO)
    {
      Push(Read16(regsp)); // DUP
      Push((Pop() & Read16(0x65e1+UNK_0xe77d.offset))==0?1:0); //  UNK_0xe77d<IFIELD> @ AND 0=
      if (Pop() != 0)
      {
        Push(0x65e1+UNK_0xe77d.offset); // UNK_0xe77d<IFIELD>
        _plus__ex__2(); // +!_2
        Push(0x01f4);
        Push(0x65e1+UNK_0xe791.offset); // UNK_0xe791<IFIELD>
        _plus__ex__2(); // +!_2
        imax = i; // LEAVE
      } else
      {
        Push(Pop() * 2); //  2*
      }
      i++;
    } while(i<imax); // (LOOP)

    Push(0xcc32); // probable 'OV.PODS'
    MODULE(); // MODULE
    UNK_0xe888(); // UNK_0xe888
    return;
  }
  Push(1);
  _0MESS(); // 0MESS
  UNK_0xe80a(); // UNK_0xe80a
  Push(Pop()==0x0010?1:0); //  0x0010 =
  if (Pop() != 0)
  {
    Push(1);
    Push(0x001b);
    CMESS(); // CMESS
    PRINT("NO POD BAYS AVAILABLE", 21); // (.")
    StoreCRS(); // !CRS
  } else
  {
    UNK_0xe746(); // UNK_0xe746
  }
  UNK_0xe866(); // UNK_0xe866
  UNK_0xe732(); // UNK_0xe732
}


// ================================================
// 0xee78: WORD '#>BUY' codep=0x4b3b parp=0xee82
// ================================================

void _n__gt_BUY() // #>BUY
{
  switch(Pop()) // #>BUY
  {
  case 0:
    UNK_0xedde(); // UNK_0xedde
    break;
  case 6:
    UNK_0xe926(); // UNK_0xe926
    break;
  case 7:
    UNK_0xe9aa(); // UNK_0xe9aa
    break;
  default:
    NOP(); // NOP
    break;

  }
}

// ================================================
// 0xee92: WORD 'UNK_0xee94' codep=0x224c parp=0xee94 params=0 returns=2
// ================================================

void UNK_0xee94() // UNK_0xee94
{
  unsigned short int a;
  Push(Read16((pp_UNK_0xea76 + (Read16(pp_UNK_0xe7ba) - 1) * 0x000a) + (4 - Read16(pp_OCRS)) * 2)); // UNK_0xea76 UNK_0xe7ba @ 1- 0x000a * + 4 OCRS @ - 2* + @
  Push(Read16(regsp)); // DUP
  Push(0x0064);
  U_star_(); // U*
  UNK_0xe714(); // UNK_0xe714
  if (Pop() != 0)
  {
    Push(0x0064);
    U_star_(); // U*
    DNEGATE(); // DNEGATE
    UNK_0xe71e(); // UNK_0xe71e
    Push(Read16(pp_OCRS) + 1); // OCRS @ 1+
    Push(Read16(pp_UNK_0xe7ba)); // UNK_0xe7ba @
    UNK_0xec6a(); // UNK_0xec6a
    SWAP(); // SWAP
    Pop(); // DROP
    Push(0x0064);
    OVER(); // OVER
    C_ex__2(); // C!_2
    Push(Pop() + 1); //  1+
    C_ex__2(); // C!_2
    Push((Read16(pp_OCRS) + 1) * 0x01f4); // OCRS @ 1+ 0x01f4 *
    Push(Read16(pp_UNK_0xe7ba)); // UNK_0xe7ba @
    a = Pop(); // >R
    Push(a==3?1:0); // I 3 =
    if (Pop() != 0)
    {
      Push(Read16(0x65e1+UNK_0xe78c.offset)); // UNK_0xe78c<IFIELD> @
      Push(0x00fa);
      MAX(); // MAX
      Push(0x65e1+UNK_0xe78c.offset); // UNK_0xe78c<IFIELD>
      Store_2(); // !_2
      Push((Pop() >> 1) + Read16(0x65e1+UNK_0xe78c.offset)); //  2/ UNK_0xe78c<IFIELD> @ +
      Push(Read16(regsp)); // DUP
      Push(0x65e1+UNK_0xe75a.offset); // UNK_0xe75a<IFIELD>
      UNK_0xe7f0(); // UNK_0xe7f0
      Push(Read16(regsp)); // DUP
      Push((Pop() + 1) * 0x00fa); //  1+ 0x00fa *
      _star__slash_(); // */
      Push((0x65e1+UNK_0xe75a.offset) + 1); // UNK_0xe75a<IFIELD> 1+
      C_ex__2(); // C!_2
    }
    Push(a); // R>
    UNK_0xec88(); // UNK_0xec88
    Push(0xcc44); // probable 'OV.SHIP'
    MODULE(); // MODULE
    UNK_0xeb07(); // UNK_0xeb07
    UNK_0xe750(); // UNK_0xe750
    Push(1);
    return;
  }
  Pop(); // DROP
  UNK_0xe746(); // UNK_0xe746
  Push(pp_XORMODE); // XORMODE
  ON_2(); // ON_2
  Push(0);
}


// ================================================
// 0xef50: WORD 'UNK_0xef52' codep=0x224c parp=0xef52
// ================================================

void UNK_0xef52() // UNK_0xef52
{
  do
  {
    XYSCAN(); // XYSCAN
    Push(Pop()==0?1:0); //  0=
    if (Pop() != 0)
    {
      Push(Pop() * -1); //  -1 *
      Push(pp_NCRS); // NCRS
      _plus__ex__2(); // +!_2
      Push(!(Read16(pp_NCRS)==Read16(pp_OCRS)?1:0)); // NCRS @ OCRS @ = NOT
      Push(Read16(pp_NCRS)); // NCRS @
      Push(0);
      Push(5);
      WITHIN(); // WITHIN
      Push(Pop() & Pop()); // AND
      if (Pop() != 0)
      {
        BLT(); // BLT
        Push(0x0056);
        Push(Read16(pp_NCRS)); // NCRS @
        Push(Read16(regsp)); // DUP
        Push(pp_OCRS); // OCRS
        Store_2(); // !_2
        Push(Pop() * 0x000a); //  0x000a *
        _dash_(); // -
        Push(pp_YBLT); // YBLT
        Store_2(); // !_2
        BLT(); // BLT
      } else
      {
        Push(Read16(pp_OCRS)); // OCRS @
        Push(pp_NCRS); // NCRS
        Store_2(); // !_2
      }
      Push(0);
    } else
    {
      Pop(); // DROP
      Push(1);
    }
    IsTRIG(); // ?TRIG
    if (Pop() != 0)
    {
      Pop(); // DROP
      UNK_0xee94(); // UNK_0xee94
    }
  } while(Pop() == 0);
  Push(pp_XORMODE); // XORMODE
  ON_2(); // ON_2
  Push(pp_FQUIT); // FQUIT
  _099(); // 099
}


// ================================================
// 0xefca: WORD 'UNK_0xefcc' codep=0x224c parp=0xefcc
// ================================================

void UNK_0xefcc() // UNK_0xefcc
{
  Push(Read16(pp_OCRS)); // OCRS @
  Push(Read16(regsp)); // DUP
  Push(1);
  Push(6);
  WITHIN(); // WITHIN
  if (Pop() != 0)
  {
    Push(Read16(regsp)); // DUP
    Push(pp_UNK_0xe7ba); // UNK_0xe7ba
    Store_2(); // !_2
    UNK_0xedd2(); // UNK_0xedd2
    if (Pop() != 0)
    {
      Push(1);
      _0MESS(); // 0MESS
      Push(1);
      Push(0x000e);
      CMESS(); // CMESS
      PRINT("DE-EQUIP FIRST", 14); // (.")
      StoreCRS(); // !CRS
      UNK_0xe866(); // UNK_0xe866
      UNK_0xe732(); // UNK_0xe732
    } else
    {
      GetCRS(); // @CRS
      Push(0x000e);
      Push(0x0056);
      POS_dot_(); // POS.
      Push(0x001d);
      Push(pp_WBLT); // WBLT
      Store_2(); // !_2
      Push(pp_NCRS); // NCRS
      _099(); // 099
      Push(pp_OCRS); // OCRS
      _099(); // 099
      Push(pp_XORMODE); // XORMODE
      ON_2(); // ON_2
      Push(Read16(pp_CRSCOLO)); // CRSCOLO @
      StoreCOLOR(); // !COLOR
      BLT(); // BLT
      UNK_0xef52(); // UNK_0xef52
      BLT(); // BLT
      StoreCRS(); // !CRS
    }
    return;
  }
  _n__gt_BUY(); // #>BUY case
}


// ================================================
// 0xf045: WORD 'UNK_0xf047' codep=0x224c parp=0xf047 params=0 returns=0
// ================================================

void UNK_0xf047() // UNK_0xf047
{
  unsigned short int i, imax;
  Push(Read16(0x65e1+UNK_0xe791.offset)); // UNK_0xe791<IFIELD> @
  Push(0x01f3);
  _gt_(); // >
  Push(Pop() & Read16(0x65e1+UNK_0xe77d.offset)); //  UNK_0xe77d<IFIELD> @ AND
  if (Pop() != 0)
  {
    Push(1);
    Push(0x0010);

    i = Pop();
    imax = Pop();
    do // (DO)
    {
      Push(i); // I
      BIT(); // BIT
      Push(Pop() & Read16(0x65e1+UNK_0xe77d.offset)); //  UNK_0xe77d<IFIELD> @ AND
      Push(Read16(0x65e1+UNK_0xe791.offset)); // UNK_0xe791<IFIELD> @
      Push(0x01f3);
      _gt_(); // >
      Push(Pop() * Pop()); // *
      if (Pop() != 0)
      {
        Push(i); // I
        BIT(); // BIT
        Push(Pop() * -1); //  -1 *
        Push(0x65e1+UNK_0xe77d.offset); // UNK_0xe77d<IFIELD>
        _plus__ex__2(); // +!_2
        Push(0x01f4); Push(0x0000);
        UNK_0xe71e(); // UNK_0xe71e
        Push(0xcc32); // probable 'OV.PODS'
        MODULE(); // MODULE
        UNK_0xe888(); // UNK_0xe888
        UNK_0xe750(); // UNK_0xe750
        imax = i; // LEAVE
        Push(0xfe0c);
        Push(0x65e1+UNK_0xe791.offset); // UNK_0xe791<IFIELD>
        _plus__ex__2(); // +!_2
      }
      Push(-1);
      int step = Pop();
      i += step;
      if (((step>=0) && (i>=imax)) || ((step<0) && (i<=imax))) break;
    } while(1); // (+LOOP)

    return;
  }
  Push(Read16(0x65e1+UNK_0xe77d.offset)); // UNK_0xe77d<IFIELD> @
  if (Pop() == 0) return;
  Push(1);
  _0MESS(); // 0MESS
  Push(1);
  Push(0x0010);
  CMESS(); // CMESS
  PRINT("POD IS NOT EMPTY", 16); // (.")
  StoreCRS(); // !CRS
  UNK_0xe866(); // UNK_0xe866
  UNK_0xe732(); // UNK_0xe732
}


// ================================================
// 0xf0de: WORD '#>SELL' codep=0x4b3b parp=0xf0e9
// ================================================

void _n__gt_SELL() // #>SELL
{
  switch(Pop()) // #>SELL
  {
  case 0:
    UNK_0xf047(); // UNK_0xf047
    break;
  case 6:
    UNK_0xea2e(); // UNK_0xea2e
    break;
  case 7:
    UNK_0xea52(); // UNK_0xea52
    break;
  default:
    NOP(); // NOP
    break;

  }
}

// ================================================
// 0xf0f9: WORD 'UNK_0xf0fb' codep=0x224c parp=0xf0fb
// ================================================

void UNK_0xf0fb() // UNK_0xf0fb
{
  Push(Read16(pp_OCRS)); // OCRS @
  Push(Read16(regsp)); // DUP
  Push(1);
  Push(6);
  WITHIN(); // WITHIN
  if (Pop() != 0)
  {
    Push(pp_UNK_0xec9c); // UNK_0xec9c
    _2_at_(); // 2@
    Push(Pop() | Pop()); // OR
    if (Pop() != 0)
    {
      UNK_0xec6a(); // UNK_0xec6a
      Push(Read16(regsp)); // DUP
      Push(Pop()==0x65e1+UNK_0xe75a.offset?1:0); //  UNK_0xe75a<IFIELD> =
      OVER(); // OVER
      Push(Read16(Pop())&0xFF); //  C@
      Push(Pop() * Pop()); // *
      SWAP(); // SWAP
      Store_2(); // !_2
      Pop(); // DROP
      Push((Read16(pp_OCRS)==3?1:0) * 0x00fa); // OCRS @ 3 = 0x00fa *
      Push(Read16(0x65e1+UNK_0xe78c.offset)); // UNK_0xe78c<IFIELD> @
      MIN(); // MIN
      Push(Read16(pp_OCRS)); // OCRS @
      UNK_0xec88(); // UNK_0xec88
      Push(pp_UNK_0xec9c); // UNK_0xec9c
      _2_at_(); // 2@
      UNK_0xe71e(); // UNK_0xe71e
      Push(0xcc44); // probable 'OV.SHIP'
      MODULE(); // MODULE
      UNK_0xeb07(); // UNK_0xeb07
      UNK_0xe750(); // UNK_0xe750
      Push(Read16(pp_OCRS)); // OCRS @
      UNK_0xedb2(); // UNK_0xedb2
    } else
    {
      Pop(); // DROP
    }
    return;
  }
  _n__gt_SELL(); // #>SELL case
  Push(Read16(pp_OCRS)); // OCRS @
  UNK_0xedb2(); // UNK_0xedb2
}


// ================================================
// 0xf16d: WORD 'UNK_0xf16f' codep=0x1d29 parp=0xf16f
// ================================================
// 0xf16f: db 0x3a 0x20 ': '

// ================================================
// 0xf171: WORD 'UNK_0xf173' codep=0x224c parp=0xf173
// ================================================

void UNK_0xf173() // UNK_0xf173
{
  UNK_0xe732(); // UNK_0xe732
  GetColor(BLUE);
  UNK_0xe826(); // UNK_0xe826
  GetCRS(); // @CRS
  Push(pp_NCRS); // NCRS
  _099(); // 099
  Push(pp_OCRS); // OCRS
  _099(); // 099
  Push(pp_UNK_0xe903); // UNK_0xe903
  BLD_dash_CRS(); // BLD-CRS
  Push(0);
  Push(Read16(pp_UNK_0xf16f)); // UNK_0xf16f @
  if (Pop() != 0)
  {
    UNK_0xec33(); // UNK_0xec33
  } else
  {
    UNK_0xedb2(); // UNK_0xedb2
  }
  do
  {
    XYSCAN(); // XYSCAN
    Push(Pop()==0?1:0); //  0=
    if (Pop() != 0)
    {
      Push(Pop() * -1); //  -1 *
      Push(pp_NCRS); // NCRS
      _plus__ex__2(); // +!_2
      Push(pp_UNK_0xe903); // UNK_0xe903
      SET_dash_CRS(); // SET-CRS
      if (Pop() != 0)
      {
        Push(Read16(pp_OCRS)); // OCRS @
        Push(Read16(pp_UNK_0xf16f)); // UNK_0xf16f @
        if (Pop() != 0)
        {
          UNK_0xec33(); // UNK_0xec33
        } else
        {
          UNK_0xedb2(); // UNK_0xedb2
        }
      }
      IsTRIG(); // ?TRIG
      if (Pop() != 0)
      {
        Push(Read16(pp_UNK_0xf16f)); // UNK_0xf16f @
        if (Pop() != 0)
        {
          UNK_0xefcc(); // UNK_0xefcc
        } else
        {
          UNK_0xf0fb(); // UNK_0xf0fb
        }
      }
    } else
    {
      Pop(); // DROP
    }
    IsQUIT(); // ?QUIT
  } while(Pop() == 0);
  _gt_1FONT(); // >1FONT
  UNK_0xebcb(); // UNK_0xebcb
  GetColor(BLACK);
  UNK_0xe826(); // UNK_0xe826
  Push(pp_UNK_0xe903); // UNK_0xe903
  BLD_dash_CRS(); // BLD-CRS
  StoreCRS(); // !CRS
  Push(1);
  _0MESS(); // 0MESS
}


// ================================================
// 0xf1fb: WORD 'UNK_0xf1fd' codep=0x224c parp=0xf1fd
// ================================================

void UNK_0xf1fd() // UNK_0xf1fd
{
  unsigned short int a;
  a = Pop(); // >R
  Push(a); // I
  _ro_PARTADDR_rc_(); // (PARTADDR) case
  UNK_0xe7f0(); // UNK_0xe7f0
  if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
  if (Pop() != 0)
  {
    Push(0x000a);
    SWAP(); // SWAP
    Push(Pop() * 2); //  2*
    _dash_(); // -
    Push(Read16((Pop() + pp_UNK_0xea76) + (a - 1) * 0x000a)); //  UNK_0xea76 + I 1- 0x000a * + @
    Push(0x0064);
    Push(a); // I
    _ro_PARTADDR_rc_(); // (PARTADDR) case
    UNK_0xe7d4(); // UNK_0xe7d4
    _dash_(); // -
    Push(0x0019);
    Push(0x0064);
    _star__slash_(); // */
    U_star_(); // U*
  } else
  {
    Push2Words("NULL");
  }
  Push(a); // R>
  Pop(); // DROP
}


// ================================================
// 0xf24b: WORD 'UNK_0xf24d' codep=0x224c parp=0xf24d
// ================================================

void UNK_0xf24d() // UNK_0xf24d
{
  unsigned short int i, imax;
  Push2Words("NULL");
  Push(6);
  Push(1);

  i = Pop();
  imax = Pop();
  do // (DO)
  {
    Push(i); // I
    UNK_0xf1fd(); // UNK_0xf1fd
    D_plus_(); // D+
    i++;
  } while(i<imax); // (LOOP)

  Push(3);
  UNK_0xf1fd(); // UNK_0xf1fd
  D_dash_(); // D-
  Push(0x0064);
  Push(0x65e1+UNK_0xe75a.offset); // UNK_0xe75a<IFIELD>
  UNK_0xe7d4(); // UNK_0xe7d4
  _dash_(); // -
  Push(0x003c);
  U_star_(); // U*
  D_plus_(); // D+
  Push(0x00c8);
  Push(0x65e1+UNK_0xe764.offset); // UNK_0xe764<IFIELD>
  UNK_0xe7d4(); // UNK_0xe7d4
  Push(0x65e1+UNK_0xe769.offset); // UNK_0xe769<IFIELD>
  UNK_0xe7d4(); // UNK_0xe7d4
  Push(Pop() + Pop()); // +
  _dash_(); // -
  Push(0x0019);
  U_star_(); // U*
  D_plus_(); // D+
  Push(0x65e1+UNK_0xe75a.offset); // UNK_0xe75a<IFIELD>
  UNK_0xe7f0(); // UNK_0xe7f0
  Push((Pop() + 1) * 0x003c - Read16(0x65e1+UNK_0xe78c.offset)); //  1+ 0x003c * UNK_0xe78c<IFIELD> @ -
  Push(0);
  MAX(); // MAX
  Push(2);
  U_star_(); // U*
  D_plus_(); // D+
}


// ================================================
// 0xf2ad: WORD 'UNK_0xf2af' codep=0x224c parp=0xf2af
// ================================================

void UNK_0xf2af() // UNK_0xf2af
{
  unsigned short int a, b;
  a = Pop(); // >R
  b = Pop(); // >R
  Push(0);
  Push(0x0026);
  CMESS(); // CMESS
  PRINT("COST TO REPAIR ENTIRE SHIP: ", 28); // (.")
  Push(b); // R>
  Push(a); // R>
  D_dot_(); // D.
  PRINT(" SP", 3); // (.")
  StoreCRS(); // !CRS
}


// ================================================
// 0xf2ea: WORD 'UNK_0xf2ec' codep=0x224c parp=0xf2ec
// ================================================

void UNK_0xf2ec() // UNK_0xf2ec
{
  UNK_0xf2af(); // UNK_0xf2af
  Push(1);
  Push(0x0021);
  CMESS(); // CMESS
  PRINT("SHALL WE REPAIR THE SHIP\?  [N Y]", 32); // (.")
  StoreCRS(); // !CRS
  Y_slash_N(); // Y/N
}


// ================================================
// 0xf31f: WORD 'UNK_0xf321' codep=0x224c parp=0xf321 params=2 returns=2
// ================================================

void UNK_0xf321() // UNK_0xf321
{
  unsigned short int i, imax, a;
  DNEGATE(); // DNEGATE
  UNK_0xe71e(); // UNK_0xe71e
  Push(0x65e1+UNK_0xe782.offset); // UNK_0xe782<IFIELD>
  Push(7);
  Push(0);
  FILL_2(); // FILL_2
  Push(pp_IsREPAIR); // ?REPAIR
  _099(); // 099
  Push(0x000e);
  Push(0);

  i = Pop();
  imax = Pop();
  do // (DO)
  {
    Push((0x65e1+UNK_0xe75a.offset) + i); // UNK_0xe75a<IFIELD> I +
    a = Pop(); // >R
    Push(a); // I
    UNK_0xe7f0(); // UNK_0xe7f0
    Push(a + 1); // I 1+
    C_ex__2(); // C!_2
    Push(0x0064);
    Push(a); // R>
    C_ex__2(); // C!_2
    Push(2);
    int step = Pop();
    i += step;
    if (((step>=0) && (i>=imax)) || ((step<0) && (i<=imax))) break;
  } while(1); // (+LOOP)

  Push(0x65e1+UNK_0xe75a.offset); // UNK_0xe75a<IFIELD>
  UNK_0xe7f0(); // UNK_0xe7f0
  Push((Pop() + 1) * 0x00fa); //  1+ 0x00fa *
  Push(0x65e1+UNK_0xe78c.offset); // UNK_0xe78c<IFIELD>
  Store_2(); // !_2
}


// ================================================
// 0xf36b: WORD 'UNK_0xf36d' codep=0x224c parp=0xf36d
// ================================================

void UNK_0xf36d() // UNK_0xf36d
{
  Push(0);
  _0MESS(); // 0MESS
  Push(1);
  _0MESS(); // 0MESS
  UNK_0xf24d(); // UNK_0xf24d
  _2DUP(); // 2DUP
  Push(Pop() | Pop()); // OR
  if (Pop() != 0)
  {
    _2DUP(); // 2DUP
    UNK_0xe714(); // UNK_0xe714
    if (Pop() != 0)
    {
      _2DUP(); // 2DUP
      UNK_0xf2ec(); // UNK_0xf2ec
      if (Pop() != 0)
      {
        UNK_0xf321(); // UNK_0xf321
      } else
      {
        Pop(); Pop(); // 2DROP
      }
    } else
    {
      UNK_0xf2af(); // UNK_0xf2af
      Push(1);
      Push(0x0012);
      CMESS(); // CMESS
      UNK_0xe73c(); // UNK_0xe73c
      StoreCRS(); // !CRS
      UNK_0xe866(); // UNK_0xe866
    }
  } else
  {
    Pop(); Pop(); // 2DROP
    Push(0);
    Push(0x0015);
    CMESS(); // CMESS
    PRINT("NO REPAIRS ARE NEEDED", 21); // (.")
    StoreCRS(); // !CRS
    UNK_0xe866(); // UNK_0xe866
  }
  Push(1);
  _0MESS(); // 0MESS
  UNK_0xe750(); // UNK_0xe750
}


// ================================================
// 0xf3dd: WORD 'UNK_0xf3df' codep=0x224c parp=0xf3df params=2 returns=0
// ================================================

void UNK_0xf3df() // UNK_0xf3df
{
  PRINT("TYPE", 4); // (.")
  Exec("TYPE"); // call of word 0x2690 '(TYPE)'
  PRINT("SHIP NAME: ISS ", 15); // (.")
}


// ================================================
// 0xf3fc: WORD 'UNK_0xf3fe' codep=0x224c parp=0xf3fe
// ================================================

void UNK_0xf3fe() // UNK_0xf3fe
{
  Push(0);
  SWAP(); // SWAP
  CMESS(); // CMESS
  PRINT("SHIP IS NAMED: ISS ", 19); // (.")
  Push(0x65e1+_pe_NAME.offset); // %NAME<IFIELD>
  _do__dot_(); // $.
  StoreCRS(); // !CRS
}


// ================================================
// 0xf422: WORD 'UNK_0xf424' codep=0x224c parp=0xf424
// ================================================

void UNK_0xf424() // UNK_0xf424
{
  Push(pp__dash_AIN); // -AIN
  _099(); // 099
  Push(0);
  _0MESS(); // 0MESS
  Push(1);
  _0MESS(); // 0MESS
  Push(Read16(0x65e1+_pe_NAME.offset)&0xFF); // %NAME<IFIELD> C@
  if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
  if (Pop() != 0)
  {
    Push(Pop() + 0x0013); //  0x0013 +
    UNK_0xf3fe(); // UNK_0xf3fe
    Push(1);
    Push(0x0026);
    CMESS(); // CMESS
    SET_STR_AS_PARAM(" NEW ");
  } else
  {
    Push(0);
    Push(0x0022);
    CMESS(); // CMESS
    SET_STR_AS_PARAM(" ");
  }
  UNK_0xf3df(); // UNK_0xf3df
  Push(pp_XORMODE); // XORMODE
  ON_2(); // ON_2
  Push(pp__dash_AIN); // -AIN
  _099(); // 099
  Push(0x000d);
  UNK_0xe728(); // UNK_0xe728
  Push(0x65e1+_pe_NAME.offset); // %NAME<IFIELD>
  _do__ex_(); // $!
  StoreCRS(); // !CRS
  Push(0);
  _0MESS(); // 0MESS
  Push(1);
  _0MESS(); // 0MESS
  Push((Read16(0x65e1+_pe_NAME.offset)&0xFF) + 0x0013); // %NAME<IFIELD> C@ 0x0013 +
  UNK_0xf3fe(); // UNK_0xf3fe
  UNK_0xe866(); // UNK_0xe866
  UNK_0xe750(); // UNK_0xe750
}


// ================================================
// 0xf492: WORD 'UNK_0xf494' codep=0x224c parp=0xf494
// ================================================

void UNK_0xf494() // UNK_0xf494
{
  Push(pp_UNK_0xf16f); // UNK_0xf16f
  ON_2(); // ON_2
  UNK_0xf173(); // UNK_0xf173
}


// ================================================
// 0xf49c: WORD 'UNK_0xf49e' codep=0x224c parp=0xf49e
// ================================================

void UNK_0xf49e() // UNK_0xf49e
{
  Push(pp_UNK_0xf16f); // UNK_0xf16f
  _099(); // 099
  UNK_0xf173(); // UNK_0xf173
}


// ================================================
// 0xf4a6: WORD 'CONFIG-FUNCTION' codep=0x4b3b parp=0xf4ba
// ================================================

void CONFIG_dash_FUNCTION() // CONFIG-FUNCTION
{
  switch(Pop()) // CONFIG-FUNCTION
  {
  case 0:
    UNK_0xf494(); // UNK_0xf494
    break;
  case 1:
    UNK_0xf49e(); // UNK_0xf49e
    break;
  case 2:
    UNK_0xf36d(); // UNK_0xf36d
    break;
  case 3:
    UNK_0xf424(); // UNK_0xf424
    break;
  case 4:
    if (Pop() == 0) Push(1); else Push(0); // NOT
    break;
  default:
    NOP(); // NOP
    break;

  }
}

// ================================================
// 0xf4d2: WORD '(U-CONFIG)' codep=0x224c parp=0xf4e1
// ================================================
// entry

void _ro_U_dash_CONFIG_rc_() // (U-CONFIG)
{
  Push(0xc8c3); // probable '?FRE'
  MODULE(); // MODULE
  Push2Words("*SHIP");
  _gt_C_plus_S(); // >C+S
  UNK_0xe6f6(); // UNK_0xe6f6
  GetColor(WHITE);
  GetColor(GREY1);
  GetColor(DK_dash_GREE);
  IsMRC(); // ?MRC
  Push(pp_CRSCOLO); // CRSCOLO
  Store_2(); // !_2
  Push(pp_OCRS); // OCRS
  _099(); // 099
  Push(pp_NCRS); // NCRS
  _099(); // 099
  _gt_HIDDEN(); // >HIDDEN
  DARK(); // DARK
  Push(0xcc68); // probable 'OV.CONF'
  MODULE(); // MODULE
  UNK_0xeb07(); // UNK_0xeb07
  Push(pp_UNK_0xe8ec); // UNK_0xe8ec
  BLD_dash_CRS(); // BLD-CRS
  _gt_DISPLA(); // >DISPLA
  SCR_dash_RES(); // SCR-RES
  do
  {
    XYSCAN(); // XYSCAN
    Push(pp_NCRS); // NCRS
    _plus__ex__2(); // +!_2
    Pop(); // DROP
    Push(pp_UNK_0xe8ec); // UNK_0xe8ec
    SET_dash_CRS(); // SET-CRS
    Pop(); // DROP
    IsTRIG(); // ?TRIG
    if (Pop() != 0)
    {
      Push(0);
      Push(Read16(pp_OCRS)); // OCRS @
      CONFIG_dash_FUNCTION(); // CONFIG-FUNCTION case
    } else
    {
      Push(0);
    }
  } while(Pop() == 0);
  Push(1);
  UNK_0xe700(); // UNK_0xe700
  ICLOSE(); // ICLOSE
}

// 0xf543: db 0x43 0x4f 0x4e 0x46 0x49 0x47 0x2d 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x00 'CONFIG-______________________ '

