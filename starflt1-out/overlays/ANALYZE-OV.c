// ====== OVERLAY 'ANALYZE-OV' ======
// store offset = 0xeb60
// overlay size   = 0x0a00

#include"../../emul/cpu.h"

#include"../data.h"
#include"../../emul/starflt1.h"


// =================================
// =========== DICTIONARY ==========
// =================================
//           %MASS  codep:0x744d parp:0xeb76 size:0x0003 C-string:'_pe_MASS'
//      UNK_0xeb7b  codep:0x744d parp:0xeb7b size:0x0003 C-string:'UNK_0xeb7b'
//      UNK_0xeb80  codep:0x744d parp:0xeb80 size:0x0003 C-string:'UNK_0xeb80'
//      UNK_0xeb85  codep:0x73ea parp:0xeb85 size:0x0006 C-string:'UNK_0xeb85'
//      UNK_0xeb8d  codep:0x73ea parp:0xeb8d size:0x0006 C-string:'UNK_0xeb8d'
//      UNK_0xeb95  codep:0x744d parp:0xeb95 size:0x0003 C-string:'UNK_0xeb95'
//      UNK_0xeb9a  codep:0x73ea parp:0xeb9a size:0x0006 C-string:'UNK_0xeb9a'
//      UNK_0xeba2  codep:0x73ea parp:0xeba2 size:0x0006 C-string:'UNK_0xeba2'
//      UNK_0xebaa  codep:0x73ea parp:0xebaa size:0x0006 C-string:'UNK_0xebaa'
//      UNK_0xebb2  codep:0x73ea parp:0xebb2 size:0x0006 C-string:'UNK_0xebb2'
//      UNK_0xebba  codep:0x73ea parp:0xebba size:0x0006 C-string:'UNK_0xebba'
//      UNK_0xebc2  codep:0x744d parp:0xebc2 size:0x0003 C-string:'UNK_0xebc2'
//      UNK_0xebc7  codep:0x73ea parp:0xebc7 size:0x0006 C-string:'UNK_0xebc7'
//      UNK_0xebcf  codep:0x73ea parp:0xebcf size:0x0006 C-string:'UNK_0xebcf'
//      UNK_0xebd7  codep:0x73ea parp:0xebd7 size:0x0006 C-string:'UNK_0xebd7'
//   ATMO.ACTIVITY  codep:0x73ea parp:0xebdf size:0x0006 C-string:'ATMO_dot_ACTIVITY'
//      UNK_0xebe7  codep:0x73ea parp:0xebe7 size:0x0006 C-string:'UNK_0xebe7'
//      UNK_0xebef  codep:0x73ea parp:0xebef size:0x0006 C-string:'UNK_0xebef'
//      UNK_0xebf7  codep:0x73ea parp:0xebf7 size:0x0006 C-string:'UNK_0xebf7'
//      UNK_0xebff  codep:0x744d parp:0xebff size:0x0003 C-string:'UNK_0xebff'
//      UNK_0xec04  codep:0x224c parp:0xec04 size:0x0020 C-string:'UNK_0xec04'
//      UNK_0xec26  codep:0x224c parp:0xec26 size:0x003a C-string:'UNK_0xec26'
//      UNK_0xec62  codep:0x224c parp:0xec62 size:0x000b C-string:'UNK_0xec62'
//      UNK_0xec6f  codep:0x224c parp:0xec6f size:0x000b C-string:'UNK_0xec6f'
//      UNK_0xec7c  codep:0x224c parp:0xec7c size:0x000b C-string:'UNK_0xec7c'
//      UNK_0xec89  codep:0x224c parp:0xec89 size:0x000d C-string:'UNK_0xec89'
//       (.VESSEL)  codep:0x4a4f parp:0xeca4 size:0x0010 C-string:'_ro__dot_VESSEL_rc_'
//      UNK_0xecb6  codep:0x224c parp:0xecb6 size:0x0006 C-string:'UNK_0xecb6'
//      UNK_0xecbe  codep:0x224c parp:0xecbe size:0x000b C-string:'UNK_0xecbe'
//      UNK_0xeccb  codep:0x224c parp:0xeccb size:0x000b C-string:'UNK_0xeccb'
//      UNK_0xecd8  codep:0x224c parp:0xecd8 size:0x001d C-string:'UNK_0xecd8'
//       (.OBJECT)  codep:0x4a4f parp:0xed03 size:0x0014 C-string:'_ro__dot_OBJECT_rc_'
//         .OBJECT  codep:0x224c parp:0xed19 size:0x0041 C-string:'DrawOBJECT'
//      UNK_0xed5c  codep:0x224c parp:0xed5c size:0x0014 C-string:'UNK_0xed5c'
//           .SIZE  codep:0x224c parp:0xed72 size:0x0055 C-string:'DrawSIZE'
//       ?.CERTAIN  codep:0x224c parp:0xedc9 size:0x003e C-string:'Is_dot_CERTAIN'
//          HEADER  codep:0x224c parp:0xee09 size:0x000a C-string:'HEADER'
//      UNK_0xee15  codep:0x224c parp:0xee15 size:0x000e C-string:'UNK_0xee15'
//      UNK_0xee25  codep:0x224c parp:0xee25 size:0x000a C-string:'UNK_0xee25'
//      UNK_0xee31  codep:0x224c parp:0xee31 size:0x000c C-string:'UNK_0xee31'
//         (.TYPE)  codep:0x4a4f parp:0xee49 size:0x0010 C-string:'_ro__dot_TYPE_rc_'
//           .TYPE  codep:0x224c parp:0xee5b size:0x0019 C-string:'DrawTYPE'
//      UNK_0xee76  codep:0x224c parp:0xee76 size:0x0009 C-string:'UNK_0xee76'
//        .SHIELDS  codep:0x224c parp:0xee81 size:0x0084 C-string:'DrawSHIELDS'
//           .WEAP  codep:0x224c parp:0xef07 size:0x0033 C-string:'DrawWEAP'
//          .DELEM  codep:0x224c parp:0xef3c size:0x0050 C-string:'DrawDELEM'
//        .CONSTIT  codep:0x224c parp:0xef8e size:0x0027 C-string:'DrawCONSTIT'
//      UNK_0xefb7  codep:0x224c parp:0xefb7 size:0x000c C-string:'UNK_0xefb7'
//          .ORBIT  codep:0x224c parp:0xefc5 size:0x0025 C-string:'DrawORBIT'
//      UNK_0xefec  codep:0x224c parp:0xefec size:0x000b C-string:'UNK_0xefec'
//      UNK_0xeff9  codep:0x224c parp:0xeff9 size:0x000b C-string:'UNK_0xeff9'
//      UNK_0xf006  codep:0x224c parp:0xf006 size:0x000e C-string:'UNK_0xf006'
//      UNK_0xf016  codep:0x224c parp:0xf016 size:0x000d C-string:'UNK_0xf016'
//      UNK_0xf025  codep:0x224c parp:0xf025 size:0x000c C-string:'UNK_0xf025'
//      UNK_0xf033  codep:0x224c parp:0xf033 size:0x000c C-string:'UNK_0xf033'
//          .TDESC  codep:0x4a4f parp:0xf04a size:0x001c C-string:'DrawTDESC'
//      UNK_0xf068  codep:0x224c parp:0xf068 size:0x003d C-string:'UNK_0xf068'
//      UNK_0xf0a7  codep:0x224c parp:0xf0a7 size:0x0008 C-string:'UNK_0xf0a7'
//      UNK_0xf0b1  codep:0x224c parp:0xf0b1 size:0x000b C-string:'UNK_0xf0b1'
//      UNK_0xf0be  codep:0x224c parp:0xf0be size:0x000b C-string:'UNK_0xf0be'
//      UNK_0xf0cb  codep:0x224c parp:0xf0cb size:0x0009 C-string:'UNK_0xf0cb'
//      UNK_0xf0d6  codep:0x224c parp:0xf0d6 size:0x000b C-string:'UNK_0xf0d6'
//         (.SURF)  codep:0x4a4f parp:0xf0ed size:0x0018 C-string:'_ro__dot_SURF_rc_'
//           .SURF  codep:0x224c parp:0xf107 size:0x0028 C-string:'DrawSURF'
//           .GRAV  codep:0x224c parp:0xf131 size:0x0060 C-string:'DrawGRAV'
//      UNK_0xf193  codep:0x224c parp:0xf193 size:0x0009 C-string:'UNK_0xf193'
//      UNK_0xf19e  codep:0x224c parp:0xf19e size:0x000c C-string:'UNK_0xf19e'
//      UNK_0xf1ac  codep:0x224c parp:0xf1ac size:0x000d C-string:'UNK_0xf1ac'
//      UNK_0xf1bb  codep:0x224c parp:0xf1bb size:0x000a C-string:'UNK_0xf1bb'
//      UNK_0xf1c7  codep:0x224c parp:0xf1c7 size:0x000c C-string:'UNK_0xf1c7'
//         (.ATMO)  codep:0x4a4f parp:0xf1df size:0x0018 C-string:'_ro__dot_ATMO_rc_'
//      UNK_0xf1f9  codep:0x224c parp:0xf1f9 size:0x0028 C-string:'UNK_0xf1f9'
//      UNK_0xf223  codep:0x224c parp:0xf223 size:0x0009 C-string:'UNK_0xf223'
//      UNK_0xf22e  codep:0x224c parp:0xf22e size:0x000d C-string:'UNK_0xf22e'
//      UNK_0xf23d  codep:0x224c parp:0xf23d size:0x000c C-string:'UNK_0xf23d'
//      UNK_0xf24b  codep:0x224c parp:0xf24b size:0x000c C-string:'UNK_0xf24b'
//        (.WEATH)  codep:0x4a4f parp:0xf264 size:0x0014 C-string:'_ro__dot_WEATH_rc_'
//          .WEATH  codep:0x224c parp:0xf27a size:0x0023 C-string:'DrawWEATH'
//      UNK_0xf29f  codep:0x224c parp:0xf29f size:0x001e C-string:'UNK_0xf29f'
//      UNK_0xf2bf  codep:0x1d29 parp:0xf2bf size:0x0007 C-string:'UNK_0xf2bf'
//      UNK_0xf2c8  codep:0x224c parp:0xf2c8 size:0x0028 C-string:'UNK_0xf2c8'
//      UNK_0xf2f2  codep:0x224c parp:0xf2f2 size:0x002a C-string:'UNK_0xf2f2'
//      UNK_0xf31e  codep:0x224c parp:0xf31e size:0x00cb C-string:'UNK_0xf31e'
//      UNK_0xf3eb  codep:0x224c parp:0xf3eb size:0x0004 C-string:'UNK_0xf3eb'
//      UNK_0xf3f1  codep:0x224c parp:0xf3f1 size:0x0004 C-string:'UNK_0xf3f1'
//      UNK_0xf3f7  codep:0x224c parp:0xf3f7 size:0x000a C-string:'UNK_0xf3f7'
//      (.V/P-OBJ)  codep:0x4a4f parp:0xf410 size:0x000c C-string:'_ro__dot_V_slash_P_dash_OBJ_rc_'
//      UNK_0xf41e  codep:0x224c parp:0xf41e size:0x0006 C-string:'UNK_0xf41e'
//      UNK_0xf426  codep:0x224c parp:0xf426 size:0x000e C-string:'UNK_0xf426'
//      UNK_0xf436  codep:0x224c parp:0xf436 size:0x0012 C-string:'UNK_0xf436'
//     (.ANALYSIS)  codep:0x4a4f parp:0xf458 size:0x0010 C-string:'_ro__dot_ANALYSIS_rc_'
//     (/ANALYSIS)  codep:0x224c parp:0xf478 size:0x0000 C-string:'_ro__slash_ANALYSIS_rc_'

// =================================
// ============= EXTERN ============
// =================================
extern const unsigned short int cc_IsA_dash_SHIE; // ?A-SHIE
extern const unsigned short int cc_IsA_dash_WEAP; // ?A-WEAP
extern const unsigned short int pp_FILE_n_; // FILE#
extern const unsigned short int pp_RECORD_n_; // RECORD#
extern const unsigned short int pp_IsWIN; // ?WIN
extern const unsigned short int pp_IsG_dash_AWARE; // ?G-AWARE
extern const unsigned short int pp_STARDATE; // STARDATE
extern const unsigned short int pp_PLHI; // PLHI
extern const unsigned short int pp_SENSE_dash_ADDR; // SENSE-ADDR
extern const unsigned short int pp_OK_dash_TALK; // OK-TALK
extern const unsigned short int pp__ro_ORBIT_rc_; // (ORBIT)
extern const unsigned short int pp_IsFANLYZ; // ?FANLYZ
extern Color BLUE; // BLUE
extern Color PINK; // PINK
extern Color YELLOW; // YELLOW
extern IFieldType INST_dash_QTY; // INST-QTY
void DABS(); // DABS
void MIN(); // MIN
void Draw(); // .
void DrawR(); // .R
void SPACE(); // SPACE
void SPACES(); // SPACES
void NOP(); // NOP
void UNRAVEL(); // UNRAVEL
void PICK(); // PICK
void D_eq_(); // D=
void D_gt_(); // D>
void WITHIN(); // WITHIN
void RRND(); // RRND
void SQRT(); // SQRT
void C_ex_(); // C!
void Store_3(); // !_3
void _1_dot_5_ex_(); // 1.5!
void StoreD(); // D!
void GetINST_dash_CLASS(); // @INST-CLASS
void GetINST_dash_SPECIES(); // @INST-SPECIES
void CDROP(); // CDROP
void SET_dash_CURRENT(); // SET-CURRENT
void ICLOSE(); // ICLOSE
void _gt_C_plus_S(); // >C+S
void Get_gt_C_plus_S(); // @>C+S
void IOPEN(); // IOPEN
void IsFIRST(); // ?FIRST
void INEXT(); // INEXT
void IFIND(); // IFIND
void StoreCOLOR(); // !COLOR
void CTPOS_dot_(); // CTPOS.
void CTERASE(); // CTERASE
void CTCR(); // CTCR
void CTINIT(); // CTINIT
void _dash_XTRAILING(); // -XTRAILING
void _2_at_(); // 2@
void _2DUP(); // 2DUP
void OVER(); // OVER
void SWAP(); // SWAP
void _slash_(); // /
void _slash_MOD(); // /MOD
void _dash_(); // -
void D_plus_(); // D+
void U_slash_MOD(); // U/MOD
void _gt_(); // >
void _st_(); // <
void _0_st_(); // 0<
void _0_gt_(); // 0>
void TIME(); // TIME
void _1_dot_5_at_(); // 1.5@


// =================================
// =========== VARIABLES ===========
// =================================
const unsigned short int pp_UNK_0xf2bf = 0xf2bf; // UNK_0xf2bf size: 7
// {0x4d, 0x4b, 0x47, 0x46, 0x41, 0x42, 0x4f}




// 0xeb72: db 0x9b 0x00 '  '

// ================================================
// 0xeb74: WORD '%MASS' codep=0x744d parp=0xeb76
// ================================================
IFieldType _pe_MASS = {SHIPIDX, 0x27, 0x02};

// ================================================
// 0xeb79: WORD 'UNK_0xeb7b' codep=0x744d parp=0xeb7b
// ================================================
IFieldType UNK_0xeb7b = {ASSIGN_CREWIDX, 0x14, 0x03};

// ================================================
// 0xeb7e: WORD 'UNK_0xeb80' codep=0x744d parp=0xeb80
// ================================================
IFieldType UNK_0xeb80 = {CREWMEMBERIDX, 0x1a, 0x02};

// ================================================
// 0xeb83: WORD 'UNK_0xeb85' codep=0x73ea parp=0xeb85
// ================================================
LoadDataType UNK_0xeb85 = {ELEMENTIDX, 0x00, 0x10, 0x17, 0x650a};

// ================================================
// 0xeb8b: WORD 'UNK_0xeb8d' codep=0x73ea parp=0xeb8d
// ================================================
LoadDataType UNK_0xeb8d = {VESSELIDX, 0x00, 0x01, 0x49, 0x6491};

// ================================================
// 0xeb93: WORD 'UNK_0xeb95' codep=0x744d parp=0xeb95
// ================================================
IFieldType UNK_0xeb95 = {VESSELIDX, 0x12, 0x07};

// ================================================
// 0xeb98: WORD 'UNK_0xeb9a' codep=0x73ea parp=0xeb9a
// ================================================
LoadDataType UNK_0xeb9a = {VESSELIDX, 0x04, 0x01, 0x49, 0x6491};

// ================================================
// 0xeba0: WORD 'UNK_0xeba2' codep=0x73ea parp=0xeba2
// ================================================
// orphan
LoadDataType UNK_0xeba2 = {VESSELIDX, 0x06, 0x01, 0x49, 0x6491};

// ================================================
// 0xeba8: WORD 'UNK_0xebaa' codep=0x73ea parp=0xebaa
// ================================================
LoadDataType UNK_0xebaa = {VESSELIDX, 0x07, 0x02, 0x49, 0x6491};

// ================================================
// 0xebb0: WORD 'UNK_0xebb2' codep=0x73ea parp=0xebb2
// ================================================
LoadDataType UNK_0xebb2 = {VESSELIDX, 0x0e, 0x02, 0x49, 0x6491};

// ================================================
// 0xebb8: WORD 'UNK_0xebba' codep=0x73ea parp=0xebba
// ================================================
// orphan
LoadDataType UNK_0xebba = {VESSELIDX, 0x12, 0x01, 0x49, 0x6491};

// ================================================
// 0xebc0: WORD 'UNK_0xebc2' codep=0x744d parp=0xebc2
// ================================================
// orphan
IFieldType UNK_0xebc2 = {STARSYSTEMIDX, 0x11, 0x01};

// ================================================
// 0xebc5: WORD 'UNK_0xebc7' codep=0x73ea parp=0xebc7
// ================================================
LoadDataType UNK_0xebc7 = {PLANETIDX, 0x01, 0x01, 0x16, 0x658f};

// ================================================
// 0xebcd: WORD 'UNK_0xebcf' codep=0x73ea parp=0xebcf
// ================================================
LoadDataType UNK_0xebcf = {PLANETIDX, 0x02, 0x02, 0x16, 0x658f};

// ================================================
// 0xebd5: WORD 'UNK_0xebd7' codep=0x73ea parp=0xebd7
// ================================================
LoadDataType UNK_0xebd7 = {PLANETIDX, 0x04, 0x01, 0x16, 0x658f};

// ================================================
// 0xebdd: WORD 'ATMO.ACTIVITY' codep=0x73ea parp=0xebdf
// ================================================
LoadDataType ATMO_dot_ACTIVITY = {PLANETIDX, 0x11, 0x02, 0x16, 0x658f};

// ================================================
// 0xebe5: WORD 'UNK_0xebe7' codep=0x73ea parp=0xebe7
// ================================================
LoadDataType UNK_0xebe7 = {PLANETIDX, 0x13, 0x01, 0x16, 0x658f};

// ================================================
// 0xebed: WORD 'UNK_0xebef' codep=0x73ea parp=0xebef
// ================================================
LoadDataType UNK_0xebef = {PLANETIDX, 0x0f, 0x01, 0x16, 0x658f};

// ================================================
// 0xebf5: WORD 'UNK_0xebf7' codep=0x73ea parp=0xebf7
// ================================================
LoadDataType UNK_0xebf7 = {PLANETIDX, 0x10, 0x01, 0x16, 0x658f};

// ================================================
// 0xebfd: WORD 'UNK_0xebff' codep=0x744d parp=0xebff
// ================================================
IFieldType UNK_0xebff = {STARSYSTEMIDX, 0x0b, 0x02};

// ================================================
// 0xec02: WORD 'UNK_0xec04' codep=0x224c parp=0xec04 params=0 returns=1
// ================================================

void UNK_0xec04() // UNK_0xec04
{
  Push(Read16(pp_STARDATE)); // STARDATE @
  Push(Read16(0x63ef+UNK_0xebff.offset)); // UNK_0xebff<IFIELD> @
  _st_(); // <
  Push(!Pop()); //  NOT
  Push(Read16(pp_IsWIN)); // ?WIN @
  if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
  if (Pop() == 0) return;
  Push(Read16(0x63ef+UNK_0xebff.offset)); // UNK_0xebff<IFIELD> @
  _gt_(); // >
  Push(Pop() & Pop()); // AND
}


// ================================================
// 0xec24: WORD 'UNK_0xec26' codep=0x224c parp=0xec26 params=0 returns=0
// ================================================

void UNK_0xec26() // UNK_0xec26
{
  UNK_0xec04(); // UNK_0xec04
  if (Pop() == 0) return;
  IOPEN(); // IOPEN
  do
  {
    GetINST_dash_CLASS(); // @INST-CLASS
    GetINST_dash_SPECIES(); // @INST-SPECIES
    Push(0x000b);
    Push(4);
    D_eq_(); // D=
    if (Pop() != 0)
    {
      IOPEN(); // IOPEN
      Push(0x0020);
      Push(0);
      IFIND(); // IFIND
      if (Pop() != 0)
      {
        Push(0);
        LoadData(UNK_0xebd7); // from 'PLANET'
        C_ex_(); // C!
      }
      ICLOSE(); // ICLOSE
    }
    INEXT(); // INEXT
    IsFIRST(); // ?FIRST
  } while(Pop() == 0);
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xec60: WORD 'UNK_0xec62' codep=0x224c parp=0xec62 params=0 returns=0
// ================================================

void UNK_0xec62() // UNK_0xec62
{
  PRINT("UKNOWN", 6); // (.")
}


// ================================================
// 0xec6d: WORD 'UNK_0xec6f' codep=0x224c parp=0xec6f params=0 returns=0
// ================================================

void UNK_0xec6f() // UNK_0xec6f
{
  PRINT("VESSEL", 6); // (.")
}


// ================================================
// 0xec7a: WORD 'UNK_0xec7c' codep=0x224c parp=0xec7c params=0 returns=0
// ================================================

void UNK_0xec7c() // UNK_0xec7c
{
  PRINT("DEBRIS", 6); // (.")
}


// ================================================
// 0xec87: WORD 'UNK_0xec89' codep=0x224c parp=0xec89 params=0 returns=0
// ================================================

void UNK_0xec89() // UNK_0xec89
{
  PRINT("LIFEFORM", 8); // (.")
}


// ================================================
// 0xec96: WORD '(.VESSEL)' codep=0x4a4f parp=0xeca4
// ================================================

void _ro__dot_VESSEL_rc_() // (.VESSEL)
{
  switch(Pop()) // (.VESSEL)
  {
  case 22:
    UNK_0xec89(); // UNK_0xec89
    break;
  case 24:
    UNK_0xec7c(); // UNK_0xec7c
    break;
  case 20:
    UNK_0xec62(); // UNK_0xec62
    break;
  default:
    UNK_0xec6f(); // UNK_0xec6f
    break;

  }
}

// ================================================
// 0xecb4: WORD 'UNK_0xecb6' codep=0x224c parp=0xecb6
// ================================================

void UNK_0xecb6() // UNK_0xecb6
{
  GetINST_dash_SPECIES(); // @INST-SPECIES
  _ro__dot_VESSEL_rc_(); // (.VESSEL) case
}


// ================================================
// 0xecbc: WORD 'UNK_0xecbe' codep=0x224c parp=0xecbe params=0 returns=0
// ================================================

void UNK_0xecbe() // UNK_0xecbe
{
  PRINT("DEBRIS", 6); // (.")
}


// ================================================
// 0xecc9: WORD 'UNK_0xeccb' codep=0x224c parp=0xeccb params=0 returns=0
// ================================================

void UNK_0xeccb() // UNK_0xeccb
{
  PRINT("PLANET", 6); // (.")
}


// ================================================
// 0xecd6: WORD 'UNK_0xecd8' codep=0x224c parp=0xecd8 params=0 returns=0
// ================================================

void UNK_0xecd8() // UNK_0xecd8
{
  GetColor(BLUE);
  StoreCOLOR(); // !COLOR
  PRINT("STELLAR PARAMETERS", 18); // (.")
  CTINIT(); // CTINIT
}


// ================================================
// 0xecf5: WORD '(.OBJECT)' codep=0x4a4f parp=0xed03
// ================================================

void _ro__dot_OBJECT_rc_() // (.OBJECT)
{
  switch(Pop()) // (.OBJECT)
  {
  case 25:
    UNK_0xecb6(); // UNK_0xecb6
    break;
  case 24:
    UNK_0xecbe(); // UNK_0xecbe
    break;
  case 32:
    UNK_0xeccb(); // UNK_0xeccb
    break;
  case 23:
    UNK_0xecd8(); // UNK_0xecd8
    break;
  default:
    UNK_0xec62(); // UNK_0xec62
    break;

  }
}

// ================================================
// 0xed17: WORD '.OBJECT' codep=0x224c parp=0xed19
// ================================================

void DrawOBJECT() // .OBJECT
{
  GetColor(BLUE);
  StoreCOLOR(); // !COLOR
  if (Pop() != 0)
  {
    PRINT("ANALYSIS OF LAST SENSOR READING:", 32); // (.")
    CTCR(); // CTCR
    PRINT(" OBJECT: ", 9); // (.")
  }
  CTINIT(); // CTINIT
  GetINST_dash_CLASS(); // @INST-CLASS
  _ro__dot_OBJECT_rc_(); // (.OBJECT) case
}


// ================================================
// 0xed5a: WORD 'UNK_0xed5c' codep=0x224c parp=0xed5c params=2 returns=3
// ================================================

void UNK_0xed5c() // UNK_0xed5c
{
  Push(Pop() * 0x000a); //  0x000a *
  OVER(); // OVER
  _slash_MOD(); // /MOD
  Push(Read16(regsp)); // DUP
  Push(0);
  DrawR(); // .R
  _0_gt_(); // 0>
}


// ================================================
// 0xed70: WORD '.SIZE' codep=0x224c parp=0xed72
// ================================================

void DrawSIZE() // .SIZE
{
  CTCR(); // CTCR
  SPACE(); // SPACE
  LoadData(UNK_0xebaa); // from 'VESSEL'
  Push(Read16(Pop())); //  @
  Push2Words("*SHIP");
  _gt_C_plus_S(); // >C+S
  Push(Read16(0x63ef+_pe_MASS.offset)); // %MASS<IFIELD> @
  ICLOSE(); // ICLOSE
  SWAP(); // SWAP
  Push(0);
  Push(3);
  PICK(); // PICK
  U_slash_MOD(); // U/MOD
  Push(Read16(regsp)); // DUP
  Push(0);
  DrawR(); // .R
  Push(Pop()==0?1:0); //  0=
  if (Pop() != 0)
  {
    PRINT(".", 1); // (.")
    do
    {
      UNK_0xed5c(); // UNK_0xed5c
    } while(Pop() == 0);
  }
  Pop(); Pop(); // 2DROP
  PRINT(" TIMES THE SIZE OF OUR SHIP.", 28); // (.")
}


// ================================================
// 0xedc7: WORD '?.CERTAIN' codep=0x224c parp=0xedc9 params=0 returns=1
// ================================================

void Is_dot_CERTAIN() // ?.CERTAIN
{
  CTINIT(); // CTINIT
  Push2Words("*ASSIGN-CREW");
  _gt_C_plus_S(); // >C+S
  Push(0x63ef+UNK_0xeb7b.offset); // UNK_0xeb7b<IFIELD>
  Get_gt_C_plus_S(); // @>C+S
  Push(Read16(0x63ef+UNK_0xeb80.offset)&0xFF); // UNK_0xeb80<IFIELD> C@
  Push(0);
  Push(0x00c8);
  RRND(); // RRND
  _gt_(); // >
  CDROP(); // CDROP
  ICLOSE(); // ICLOSE
  Push(Read16(pp_PLHI)); // PLHI @
  _0_st_(); // 0<
  Push(!Pop()); //  NOT
  Push(Pop() | Pop()); // OR
  Push(Read16(regsp)); // DUP
  Push(Pop()==0?1:0); //  0=
  if (Pop() == 0) return;
  PRINT("NOT CERTAIN", 11); // (.")
}


// ================================================
// 0xee07: WORD 'HEADER' codep=0x224c parp=0xee09 params=0 returns=0
// ================================================

void HEADER() // HEADER
{
  CTCR(); // CTCR
  SPACE(); // SPACE
  GetColor(BLUE);
  StoreCOLOR(); // !COLOR
}


// ================================================
// 0xee13: WORD 'UNK_0xee15' codep=0x224c parp=0xee15 params=0 returns=0
// ================================================

void UNK_0xee15() // UNK_0xee15
{
  PRINT("TRANSPORT", 9); // (.")
}


// ================================================
// 0xee23: WORD 'UNK_0xee25' codep=0x224c parp=0xee25 params=0 returns=0
// ================================================

void UNK_0xee25() // UNK_0xee25
{
  PRINT("SCOUT", 5); // (.")
}


// ================================================
// 0xee2f: WORD 'UNK_0xee31' codep=0x224c parp=0xee31 params=0 returns=0
// ================================================

void UNK_0xee31() // UNK_0xee31
{
  PRINT("WARSHIP", 7); // (.")
}


// ================================================
// 0xee3d: WORD '(.TYPE)' codep=0x4a4f parp=0xee49
// ================================================

void _ro__dot_TYPE_rc_() // (.TYPE)
{
  switch(Pop()) // (.TYPE)
  {
  case 1:
    UNK_0xee15(); // UNK_0xee15
    break;
  case 2:
    UNK_0xee25(); // UNK_0xee25
    break;
  case 3:
    UNK_0xee31(); // UNK_0xee31
    break;
  default:
    UNK_0xec62(); // UNK_0xec62
    break;

  }
}

// ================================================
// 0xee59: WORD '.TYPE' codep=0x224c parp=0xee5b params=0 returns=0
// ================================================

void DrawTYPE() // .TYPE
{
  HEADER(); // HEADER
  PRINT("TYPE: ", 6); // (.")
  Is_dot_CERTAIN(); // ?.CERTAIN
  if (Pop() == 0) return;
  LoadData(UNK_0xeb9a); // from 'VESSEL'
  Push(Read16(Pop())&0xFF); //  C@
  _ro__dot_TYPE_rc_(); // (.TYPE) case
}


// ================================================
// 0xee74: WORD 'UNK_0xee76' codep=0x224c parp=0xee76 params=0 returns=0
// ================================================

void UNK_0xee76() // UNK_0xee76
{
  PRINT("NONE", 4); // (.")
}


// ================================================
// 0xee7f: WORD '.SHIELDS' codep=0x224c parp=0xee81 params=0 returns=0
// ================================================

void DrawSHIELDS() // .SHIELDS
{
  HEADER(); // HEADER
  PRINT("SHIELDS: ", 9); // (.")
  Is_dot_CERTAIN(); // ?.CERTAIN
  if (Pop() == 0) return;
  LoadData(UNK_0xebb2); // from 'VESSEL'
  Push(Read16(Pop())); //  @
  if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
  if (Pop() != 0)
  {
    LoadData(UNK_0xeb8d); // from 'VESSEL'
    Push(!((Read16(Pop())&0xFF)==2?1:0)); //  C@ 2 = NOT
    if (Pop() != 0)
    {
      PRINT("CLASS ", 6); // (.")
      Push(0x00c8);
      _slash_(); // /
      Draw(); // .
      PRINT("EQUIVALENT ", 11); // (.")
      Push(Read16(cc_IsA_dash_SHIE)); // ?A-SHIE
      if (Pop() != 0)
      {
        PRINT("RAISED", 6); // (.")
      } else
      {
        PRINT("LOWERED", 7); // (.")
      }
    } else
    {
      Pop(); // DROP
      UNK_0xec62(); // UNK_0xec62
    }
    return;
  }
  UNK_0xee76(); // UNK_0xee76
  PRINT(" APPARENT", 9); // (.")
}


// ================================================
// 0xef05: WORD '.WEAP' codep=0x224c parp=0xef07 params=0 returns=0
// ================================================

void DrawWEAP() // .WEAP
{
  HEADER(); // HEADER
  PRINT("WEAPON STATUS: ", 15); // (.")
  Is_dot_CERTAIN(); // ?.CERTAIN
  if (Pop() == 0) return;
  Push(!Read16(cc_IsA_dash_WEAP)); // ?A-WEAP NOT
  if (Pop() != 0)
  {
    PRINT("NOT ", 4); // (.")
  }
  PRINT("ARMED", 5); // (.")
}


// ================================================
// 0xef3a: WORD '.DELEM' codep=0x224c parp=0xef3c params=1 returns=0
// ================================================

void DrawDELEM() // .DELEM
{
  Push(Read16(regsp)); // DUP
  Push(Read16(Pop() + ((0x63ef+UNK_0xeb95.offset) + 3))&0xFF); //  UNK_0xeb95<IFIELD> 3 + + C@
  if (Pop() != 0)
  {
    if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
    if (Pop() != 0)
    {
      Push(Read16(Pop() + ((0x63ef+UNK_0xeb95.offset) - 1))&0xFF); //  UNK_0xeb95<IFIELD> 1- + C@
    } else
    {
      Push(6);
    }
    Push(pp_RECORD_n_); // RECORD#
    Store_3(); // !_3
    Push(0x001a);
    Push(pp_FILE_n_); // FILE#
    Store_3(); // !_3
    LoadData(UNK_0xeb85); // from 'ELEMENT'
    Push(0x0010);
    Push(0x002e);
    _dash_XTRAILING(); // -XTRAILING
    Exec("TYPE"); // call of word 0x2690 '(TYPE)'
    SET_dash_CURRENT(); // SET-CURRENT
    CTCR(); // CTCR
    Push(0x000f);
    SPACES(); // SPACES
    return;
  }
  Pop(); // DROP
}


// ================================================
// 0xef8c: WORD '.CONSTIT' codep=0x224c parp=0xef8e params=0 returns=0
// ================================================

void DrawCONSTIT() // .CONSTIT
{
  HEADER(); // HEADER
  PRINT("CONSTITUENTS: ", 14); // (.")
  CTINIT(); // CTINIT
  Push(0);
  DrawDELEM(); // .DELEM
  Push(1);
  DrawDELEM(); // .DELEM
  Push(2);
  DrawDELEM(); // .DELEM
  Push(3);
  DrawDELEM(); // .DELEM
}


// ================================================
// 0xefb5: WORD 'UNK_0xefb7' codep=0x224c parp=0xefb7 params=0 returns=1
// ================================================

void UNK_0xefb7() // UNK_0xefb7
{
  Push(pp__ro_ORBIT_rc_); // (ORBIT)
  Get_gt_C_plus_S(); // @>C+S
  Push(Read16(0x63ef+INST_dash_QTY.offset)); // INST-QTY<IFIELD> @
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xefc3: WORD '.ORBIT' codep=0x224c parp=0xefc5 params=0 returns=0
// ================================================

void DrawORBIT() // .ORBIT
{
  Push(0x0014);
  Push(1);
  CTPOS_dot_(); // CTPOS.
  GetColor(BLUE);
  StoreCOLOR(); // !COLOR
  PRINT("ORBIT NUMBER: ", 14); // (.")
  CTINIT(); // CTINIT
  UNK_0xefb7(); // UNK_0xefb7
  Draw(); // .
}


// ================================================
// 0xefea: WORD 'UNK_0xefec' codep=0x224c parp=0xefec params=0 returns=0
// ================================================

void UNK_0xefec() // UNK_0xefec
{
  PRINT("ARCTIC", 6); // (.")
}


// ================================================
// 0xeff7: WORD 'UNK_0xeff9' codep=0x224c parp=0xeff9 params=0 returns=0
// ================================================

void UNK_0xeff9() // UNK_0xeff9
{
  PRINT("SUB-", 4); // (.")
  UNK_0xefec(); // UNK_0xefec
}


// ================================================
// 0xf004: WORD 'UNK_0xf006' codep=0x224c parp=0xf006 params=0 returns=0
// ================================================

void UNK_0xf006() // UNK_0xf006
{
  PRINT("TEMPERATE", 9); // (.")
}


// ================================================
// 0xf014: WORD 'UNK_0xf016' codep=0x224c parp=0xf016 params=0 returns=0
// ================================================

void UNK_0xf016() // UNK_0xf016
{
  PRINT("TROPICAL", 8); // (.")
}


// ================================================
// 0xf023: WORD 'UNK_0xf025' codep=0x224c parp=0xf025 params=0 returns=0
// ================================================

void UNK_0xf025() // UNK_0xf025
{
  PRINT("SEARING", 7); // (.")
}


// ================================================
// 0xf031: WORD 'UNK_0xf033' codep=0x224c parp=0xf033 params=0 returns=0
// ================================================

void UNK_0xf033() // UNK_0xf033
{
  PRINT("INFERNO", 7); // (.")
}


// ================================================
// 0xf03f: WORD '.TDESC' codep=0x4a4f parp=0xf04a
// ================================================

void DrawTDESC() // .TDESC
{
  switch(Pop()) // .TDESC
  {
  case 0:
    UNK_0xeff9(); // UNK_0xeff9
    break;
  case 1:
    UNK_0xefec(); // UNK_0xefec
    break;
  case 2:
    UNK_0xf006(); // UNK_0xf006
    break;
  case 3:
    UNK_0xf016(); // UNK_0xf016
    break;
  case 4:
    UNK_0xf025(); // UNK_0xf025
    break;
  case 5:
    UNK_0xf033(); // UNK_0xf033
    break;
  default:
    NOP(); // NOP
    break;

  }
}

// ================================================
// 0xf066: WORD 'UNK_0xf068' codep=0x224c parp=0xf068 params=0 returns=0
// ================================================

void UNK_0xf068() // UNK_0xf068
{
  HEADER(); // HEADER
  PRINT("TEMPERATURE: ", 13); // (.")
  Is_dot_CERTAIN(); // ?.CERTAIN
  if (Pop() == 0) return;
  LoadData(UNK_0xebf7); // from 'PLANET'
  Push(Read16(Pop())&0xFF); //  C@
  LoadData(UNK_0xebef); // from 'PLANET'
  Push(Read16(Pop())&0xFF); //  C@
  Push(Read16(regsp)); // DUP
  DrawTDESC(); // .TDESC case
  OVER(); // OVER
  Push((Pop()==Pop())?1:0); // =
  if (Pop() != 0)
  {
    Pop(); // DROP
    return;
  }
  PRINT(" TO ", 4); // (.")
  DrawTDESC(); // .TDESC case
}


// ================================================
// 0xf0a5: WORD 'UNK_0xf0a7' codep=0x224c parp=0xf0a7 params=0 returns=0
// ================================================

void UNK_0xf0a7() // UNK_0xf0a7
{
  PRINT("GAS", 3); // (.")
}


// ================================================
// 0xf0af: WORD 'UNK_0xf0b1' codep=0x224c parp=0xf0b1 params=0 returns=0
// ================================================

void UNK_0xf0b1() // UNK_0xf0b1
{
  PRINT("LIQUID", 6); // (.")
}


// ================================================
// 0xf0bc: WORD 'UNK_0xf0be' codep=0x224c parp=0xf0be params=0 returns=0
// ================================================

void UNK_0xf0be() // UNK_0xf0be
{
  PRINT("FROZEN", 6); // (.")
}


// ================================================
// 0xf0c9: WORD 'UNK_0xf0cb' codep=0x224c parp=0xf0cb params=0 returns=0
// ================================================

void UNK_0xf0cb() // UNK_0xf0cb
{
  PRINT("ROCK", 4); // (.")
}


// ================================================
// 0xf0d4: WORD 'UNK_0xf0d6' codep=0x224c parp=0xf0d6 params=0 returns=0
// ================================================

void UNK_0xf0d6() // UNK_0xf0d6
{
  PRINT("MOLTEN", 6); // (.")
}


// ================================================
// 0xf0e1: WORD '(.SURF)' codep=0x4a4f parp=0xf0ed
// ================================================

void _ro__dot_SURF_rc_() // (.SURF)
{
  switch(Pop()) // (.SURF)
  {
  case 1:
    UNK_0xf0a7(); // UNK_0xf0a7
    break;
  case 2:
    UNK_0xf0b1(); // UNK_0xf0b1
    break;
  case 3:
    UNK_0xf0be(); // UNK_0xf0be
    break;
  case 5:
    UNK_0xf0cb(); // UNK_0xf0cb
    break;
  case 4:
    UNK_0xf0d6(); // UNK_0xf0d6
    break;
  default:
    UNK_0xec62(); // UNK_0xec62
    break;

  }
}

// ================================================
// 0xf105: WORD '.SURF' codep=0x224c parp=0xf107 params=0 returns=0
// ================================================

void DrawSURF() // .SURF
{
  HEADER(); // HEADER
  PRINT("PREDOMINANT SURFACE: ", 21); // (.")
  Is_dot_CERTAIN(); // ?.CERTAIN
  if (Pop() == 0) return;
  LoadData(UNK_0xebc7); // from 'PLANET'
  Push(Read16(Pop())&0xFF); //  C@
  _ro__dot_SURF_rc_(); // (.SURF) case
}


// ================================================
// 0xf12f: WORD '.GRAV' codep=0x224c parp=0xf131 params=0 returns=0
// ================================================

void DrawGRAV() // .GRAV
{
  HEADER(); // HEADER
  PRINT("GRAVITY: ", 9); // (.")
  Is_dot_CERTAIN(); // ?.CERTAIN
  Push(Read16(regsp)); // DUP
  Push(pp_IsG_dash_AWARE); // ?G-AWARE
  Store_3(); // !_3
  if (Pop() == 0) return;
  LoadData(UNK_0xebcf); // from 'PLANET'
  Push(Read16(Pop())); //  @
  Push(Read16(regsp)); // DUP
  Push(0x0320);
  _gt_(); // >
  if (Pop() != 0)
  {
    Push(Pop() - 0x0320); //  0x0320 -
    Push(0);
    SQRT(); // SQRT
    Push(Pop() * 0x000a + 0x0320); //  0x000a * 0x0320 +
  }
  Push(0x0064);
  _slash_MOD(); // /MOD
  Push(0);
  DrawR(); // .R
  PRINT(".", 1); // (.")
  Push(0x000a);
  _slash_MOD(); // /MOD
  Push(0);
  DrawR(); // .R
  Draw(); // .
  PRINT("G", 1); // (.")
}


// ================================================
// 0xf191: WORD 'UNK_0xf193' codep=0x224c parp=0xf193 params=0 returns=0
// ================================================

void UNK_0xf193() // UNK_0xf193
{
  PRINT("THIN", 4); // (.")
}


// ================================================
// 0xf19c: WORD 'UNK_0xf19e' codep=0x224c parp=0xf19e params=0 returns=0
// ================================================

void UNK_0xf19e() // UNK_0xf19e
{
  PRINT("VERY ", 5); // (.")
  UNK_0xf193(); // UNK_0xf193
}


// ================================================
// 0xf1aa: WORD 'UNK_0xf1ac' codep=0x224c parp=0xf1ac params=0 returns=0
// ================================================

void UNK_0xf1ac() // UNK_0xf1ac
{
  PRINT("MODERATE", 8); // (.")
}


// ================================================
// 0xf1b9: WORD 'UNK_0xf1bb' codep=0x224c parp=0xf1bb params=0 returns=0
// ================================================

void UNK_0xf1bb() // UNK_0xf1bb
{
  PRINT("THICK", 5); // (.")
}


// ================================================
// 0xf1c5: WORD 'UNK_0xf1c7' codep=0x224c parp=0xf1c7 params=0 returns=0
// ================================================

void UNK_0xf1c7() // UNK_0xf1c7
{
  PRINT("VERY ", 5); // (.")
  UNK_0xf1bb(); // UNK_0xf1bb
}


// ================================================
// 0xf1d3: WORD '(.ATMO)' codep=0x4a4f parp=0xf1df
// ================================================

void _ro__dot_ATMO_rc_() // (.ATMO)
{
  switch(Pop()) // (.ATMO)
  {
  case 1:
    UNK_0xf19e(); // UNK_0xf19e
    break;
  case 2:
    UNK_0xf193(); // UNK_0xf193
    break;
  case 3:
    UNK_0xf1ac(); // UNK_0xf1ac
    break;
  case 4:
    UNK_0xf1bb(); // UNK_0xf1bb
    break;
  case 5:
    UNK_0xf1c7(); // UNK_0xf1c7
    break;
  default:
    UNK_0xee76(); // UNK_0xee76
    break;

  }
}

// ================================================
// 0xf1f7: WORD 'UNK_0xf1f9' codep=0x224c parp=0xf1f9 params=0 returns=0
// ================================================

void UNK_0xf1f9() // UNK_0xf1f9
{
  HEADER(); // HEADER
  PRINT("ATMOSPHERIC DENSITY: ", 21); // (.")
  Is_dot_CERTAIN(); // ?.CERTAIN
  if (Pop() == 0) return;
  LoadData(UNK_0xebe7); // from 'PLANET'
  Push(Read16(Pop())&0xFF); //  C@
  _ro__dot_ATMO_rc_(); // (.ATMO) case
}


// ================================================
// 0xf221: WORD 'UNK_0xf223' codep=0x224c parp=0xf223 params=0 returns=0
// ================================================

void UNK_0xf223() // UNK_0xf223
{
  PRINT("CALM", 4); // (.")
}


// ================================================
// 0xf22c: WORD 'UNK_0xf22e' codep=0x224c parp=0xf22e params=0 returns=0
// ================================================

void UNK_0xf22e() // UNK_0xf22e
{
  PRINT("MODERATE", 8); // (.")
}


// ================================================
// 0xf23b: WORD 'UNK_0xf23d' codep=0x224c parp=0xf23d params=0 returns=0
// ================================================

void UNK_0xf23d() // UNK_0xf23d
{
  PRINT("VIOLENT", 7); // (.")
}


// ================================================
// 0xf249: WORD 'UNK_0xf24b' codep=0x224c parp=0xf24b params=0 returns=0
// ================================================

void UNK_0xf24b() // UNK_0xf24b
{
  PRINT("VERY ", 5); // (.")
  UNK_0xf23d(); // UNK_0xf23d
}


// ================================================
// 0xf257: WORD '(.WEATH)' codep=0x4a4f parp=0xf264
// ================================================

void _ro__dot_WEATH_rc_() // (.WEATH)
{
  switch(Pop()) // (.WEATH)
  {
  case 1:
    UNK_0xf223(); // UNK_0xf223
    break;
  case 2:
    UNK_0xf22e(); // UNK_0xf22e
    break;
  case 3:
    UNK_0xf23d(); // UNK_0xf23d
    break;
  case 4:
    UNK_0xf24b(); // UNK_0xf24b
    break;
  default:
    UNK_0xee76(); // UNK_0xee76
    break;

  }
}

// ================================================
// 0xf278: WORD '.WEATH' codep=0x224c parp=0xf27a params=0 returns=0
// ================================================

void DrawWEATH() // .WEATH
{
  HEADER(); // HEADER
  PRINT("GLOBAL WEATHER: ", 16); // (.")
  Is_dot_CERTAIN(); // ?.CERTAIN
  if (Pop() == 0) return;
  LoadData(ATMO_dot_ACTIVITY); // from 'PLANET'
  Push(Read16(Pop())); //  @
  _ro__dot_WEATH_rc_(); // (.WEATH) case
}


// ================================================
// 0xf29d: WORD 'UNK_0xf29f' codep=0x224c parp=0xf29f params=0 returns=0
// ================================================

void UNK_0xf29f() // UNK_0xf29f
{
  HEADER(); // HEADER
  PRINT(" SPECTRAL CLASS: ", 17); // (.")
  CTINIT(); // CTINIT
  GetINST_dash_SPECIES(); // @INST-SPECIES
  Exec("EMIT"); // call of word 0x2731 '(EMIT)'
}


// ================================================
// 0xf2bd: WORD 'UNK_0xf2bf' codep=0x1d29 parp=0xf2bf
// ================================================
// 0xf2bf: db 0x4d 0x4b 0x47 0x46 0x41 0x42 0x4f 'MKGFABO'

// ================================================
// 0xf2c6: WORD 'UNK_0xf2c8' codep=0x224c parp=0xf2c8 params=1 returns=1
// ================================================

void UNK_0xf2c8() // UNK_0xf2c8
{
  unsigned short int a, i, imax;
  a = Pop(); // >R
  Push(2);
  Push(7);
  Push(0);

  i = Pop();
  imax = Pop();
  do // (DO)
  {
    Push(Pop() + 1); //  1+
    Push((Read16(pp_UNK_0xf2bf + i)&0xFF)==a?1:0); // UNK_0xf2bf I + C@ J =
    if (Pop() != 0)
    {
      imax = i; // LEAVE
    }
    i++;
  } while(i<imax); // (LOOP)

  Push(a); // R>
  Pop(); // DROP
}


// ================================================
// 0xf2f0: WORD 'UNK_0xf2f2' codep=0x224c parp=0xf2f2 params=0 returns=0
// ================================================

void UNK_0xf2f2() // UNK_0xf2f2
{
  HEADER(); // HEADER
  PRINT(" ECOSPHERE: ", 12); // (.")
  GetINST_dash_SPECIES(); // @INST-SPECIES
  UNK_0xf2c8(); // UNK_0xf2c8
  Push(Read16(regsp)); // DUP
  CTINIT(); // CTINIT
  Push(Pop() - 2); //  2-
  Draw(); // .
  PRINT("- ", 2); // (.")
  Push(8);
  MIN(); // MIN
  Draw(); // .
}


// ================================================
// 0xf31c: WORD 'UNK_0xf31e' codep=0x224c parp=0xf31e params=0 returns=0
// ================================================

void UNK_0xf31e() // UNK_0xf31e
{
  unsigned short int a;
  HEADER(); // HEADER
  PRINT(" STATE: ", 8); // (.")
  Is_dot_CERTAIN(); // ?.CERTAIN
  if (Pop() == 0) return;
  Push(Read16(0x63ef+UNK_0xebff.offset) - Read16(pp_STARDATE)); // UNK_0xebff<IFIELD> @ STARDATE @ -
  Push(Read16(regsp)); // DUP
  a = Pop(); // >R
  Push(1);
  Push(0x018f);
  WITHIN(); // WITHIN
  Push(!Pop() | Read16(pp_IsWIN)); //  NOT ?WIN @ OR
  if (Pop() != 0)
  {
    PRINT("STABLE ", 7); // (.")
    UNK_0xec04(); // UNK_0xec04
    if (Pop() != 0)
    {
      PRINT("(POST-FLARE)", 12); // (.")
    }
  } else
  {
    Push(a); // I
    Push(0x003c);
    _gt_(); // >
    if (Pop() != 0)
    {
      GetColor(YELLOW);
      StoreCOLOR(); // !COLOR
      PRINT("SLIGHTLY UNSTABLE", 17); // (.")
    } else
    {
      GetColor(PINK);
      StoreCOLOR(); // !COLOR
      CTCR(); // CTCR
      PRINT("  UNSTABLE - ESTIMATED TIME TO FLARE:", 37); // (.")
      CTCR(); // CTCR
      Push(2);
      SPACES(); // SPACES
      Push(a); // I
      Draw(); // .
      PRINT("ARTH DAYS.", 10); // (.")
    }
  }
  Push(a); // R>
  Pop(); // DROP
}


// ================================================
// 0xf3e9: WORD 'UNK_0xf3eb' codep=0x224c parp=0xf3eb
// ================================================

void UNK_0xf3eb() // UNK_0xf3eb
{
  DrawSIZE(); // .SIZE
}


// ================================================
// 0xf3ef: WORD 'UNK_0xf3f1' codep=0x224c parp=0xf3f1 params=0 returns=0
// ================================================

void UNK_0xf3f1() // UNK_0xf3f1
{
  DrawCONSTIT(); // .CONSTIT
}


// ================================================
// 0xf3f5: WORD 'UNK_0xf3f7' codep=0x224c parp=0xf3f7
// ================================================

void UNK_0xf3f7() // UNK_0xf3f7
{
  DrawTYPE(); // .TYPE
  DrawSIZE(); // .SIZE
  DrawSHIELDS(); // .SHIELDS
  DrawWEAP(); // .WEAP
}


// ================================================
// 0xf401: WORD '(.V/P-OBJ)' codep=0x4a4f parp=0xf410
// ================================================

void _ro__dot_V_slash_P_dash_OBJ_rc_() // (.V/P-OBJ)
{
  switch(Pop()) // (.V/P-OBJ)
  {
  case 22:
    UNK_0xf3eb(); // UNK_0xf3eb
    break;
  case 24:
    UNK_0xf3f1(); // UNK_0xf3f1
    break;
  default:
    UNK_0xf3f7(); // UNK_0xf3f7
    break;

  }
}

// ================================================
// 0xf41c: WORD 'UNK_0xf41e' codep=0x224c parp=0xf41e
// ================================================

void UNK_0xf41e() // UNK_0xf41e
{
  GetINST_dash_SPECIES(); // @INST-SPECIES
  _ro__dot_V_slash_P_dash_OBJ_rc_(); // (.V/P-OBJ) case
}


// ================================================
// 0xf424: WORD 'UNK_0xf426' codep=0x224c parp=0xf426 params=0 returns=0
// ================================================

void UNK_0xf426() // UNK_0xf426
{
  DrawORBIT(); // .ORBIT
  DrawSURF(); // .SURF
  DrawGRAV(); // .GRAV
  UNK_0xf1f9(); // UNK_0xf1f9
  UNK_0xf068(); // UNK_0xf068
  DrawWEATH(); // .WEATH
}


// ================================================
// 0xf434: WORD 'UNK_0xf436' codep=0x224c parp=0xf436 params=0 returns=0
// ================================================

void UNK_0xf436() // UNK_0xf436
{
  UNK_0xf29f(); // UNK_0xf29f
  UNK_0xf2f2(); // UNK_0xf2f2
  UNK_0xec26(); // UNK_0xec26
  Push(Read16(pp_IsFANLYZ)); // ?FANLYZ @
  if (Pop() == 0) return;
  UNK_0xf31e(); // UNK_0xf31e
}


// ================================================
// 0xf448: WORD '(.ANALYSIS)' codep=0x4a4f parp=0xf458
// ================================================

void _ro__dot_ANALYSIS_rc_() // (.ANALYSIS)
{
  switch(Pop()) // (.ANALYSIS)
  {
  case 32:
    UNK_0xf426(); // UNK_0xf426
    break;
  case 23:
    UNK_0xf436(); // UNK_0xf436
    break;
  case 25:
    UNK_0xf41e(); // UNK_0xf41e
    break;
  default:
    UNRAVEL(); // UNRAVEL
    break;

  }
}

// ================================================
// 0xf468: WORD '(/ANALYSIS)' codep=0x224c parp=0xf478
// ================================================
// entry

void _ro__slash_ANALYSIS_rc_() // (/ANALYSIS)
{
  CTINIT(); // CTINIT
  CTERASE(); // CTERASE
  Push(pp_SENSE_dash_ADDR); // SENSE-ADDR
  _1_dot_5_at_(); // 1.5@
  _2DUP(); // 2DUP
  DABS(); // DABS
  Push(0x0002); Push(0x0000);
  D_gt_(); // D>
  if (Pop() != 0)
  {
    _gt_C_plus_S(); // >C+S
    DrawOBJECT(); // .OBJECT
    GetINST_dash_CLASS(); // @INST-CLASS
    _ro__dot_ANALYSIS_rc_(); // (.ANALYSIS) case
    ICLOSE(); // ICLOSE
    Push(0x1b58); Push(0x0000);
  } else
  {
    Push(Pop() | Pop()); // OR
    if (Pop() != 0)
    {
      PRINT("I SAID THERE'S NOTHING THERE!", 29); // (.")
    } else
    {
      PRINT("I NEED A CURRENT SENSOR READING.", 32); // (.")
    }
    Pop(); // DROP
    Push(0x05dc); Push(0x0000);
  }
  TIME(); // TIME
  _2_at_(); // 2@
  D_plus_(); // D+
  Push(pp_OK_dash_TALK); // OK-TALK
  StoreD(); // D!
  Push2Words("NULL");
  Push(pp_SENSE_dash_ADDR); // SENSE-ADDR
  _1_dot_5_ex_(); // 1.5!
}

// 0xf50b: db 0x41 0x4e 0x2d 0x56 0x4f 0x43 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x72 0x6c 0x61 0x79 0x20 0x53 0x75 0x66 0x66 0x69 0x78 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x39 0x2f 0x31 0x30 0x2f 0x38 0x35 0x29 0x31 0x31 0x35 0x35 0x44 0x4f 0x43 0x54 0x4f 0x52 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x00 'AN-VOC__________________________rlay Suffix-------------9/10/85)1155DOCTOR----------- '

