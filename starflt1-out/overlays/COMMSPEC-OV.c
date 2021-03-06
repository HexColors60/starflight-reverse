// ====== OVERLAY 'COMMSPEC-OV' ======
// store offset = 0xea30
// overlay size   = 0x0b30

#include"../../emul/cpu.h"

#include"../data.h"
#include"../../emul/starflt1.h"


// =================================
// =========== Dictionary ==========
// =================================
//       ?ARTIFACT  codep:0x224c wordp:0xea46 size:0x0008 C-string:'IsARTIFACT'
//           WEA50  codep:0x224c wordp:0xea50 size:0x001e C-string:'WEA50'
//    A>ORIGINATOR  codep:0x224c wordp:0xea70 size:0x0008 C-string:'A_gt_ORIGINATOR'
//    ORIGINATOR>C  codep:0x224c wordp:0xea7a size:0x0008 C-string:'ORIGINATOR_gt_C'
//           +!EDL  codep:0x224c wordp:0xea84 size:0x0008 C-string:'_plus__ex_EDL'
//           WEA8E  codep:0x224c wordp:0xea8e size:0x0010 C-string:'WEA8E'
//        BASE-EDL  codep:0x744d wordp:0xeaa0 size:0x0003 C-string:'BASE_dash_EDL'
//             AET  codep:0x744d wordp:0xeaa5 size:0x0003 C-string:'AET'
//           WEAAA  codep:0x744d wordp:0xeaaa size:0x0003 C-string:'WEAAA'
//           WEAAF  codep:0x3b68 wordp:0xeaaf size:0x0004 C-string:'WEAAF'
//           WEAB5  codep:0x3b68 wordp:0xeab5 size:0x0004 C-string:'WEAB5'
//           WEABB  codep:0x3b68 wordp:0xeabb size:0x0004 C-string:'WEABB'
//           WEAC1  codep:0x224c wordp:0xeac1 size:0x0019 C-string:'WEAC1'
//     (PHRASE>CT)  codep:0x224c wordp:0xeadc size:0x0010 C-string:'_ro_PHRASE_gt_CT_rc_'
//           WEAEE  codep:0x224c wordp:0xeaee size:0x004f C-string:'WEAEE'
//           WEB3F  codep:0x224c wordp:0xeb3f size:0x003a C-string:'WEB3F'
//       (>BUTTON)  codep:0x224c wordp:0xeb7b size:0x000e C-string:'_ro__gt_BUTTON_rc_'
//          ?VOWEL  codep:0x4a4f wordp:0xeb94 size:0x0018 C-string:'IsVOWEL'
//           WEBAE  codep:0x224c wordp:0xebae size:0x0006 C-string:'WEBAE'
//           WEBB6  codep:0x224c wordp:0xebb6 size:0x000c C-string:'WEBB6'
//           WEBC4  codep:0x224c wordp:0xebc4 size:0x0008 C-string:'WEBC4'
//             QTY  codep:0x1d29 wordp:0xebce size:0x0002 C-string:'QTY'
//           WEBD2  codep:0x224c wordp:0xebd2 size:0x0012 C-string:'WEBD2'
//      ?>=ELEMENT  codep:0x224c wordp:0xebe6 size:0x003c C-string:'Is_gt__eq_ELEMENT'
//           WEC24  codep:0x224c wordp:0xec24 size:0x0010 C-string:'WEC24'
//           WEC36  codep:0x224c wordp:0xec36 size:0x0016 C-string:'WEC36'
//        +ELEMENT  codep:0x224c wordp:0xec4e size:0x001e C-string:'_plus_ELEMENT'
//        +ELEMENT  codep:0x224c wordp:0xec6e size:0x001e C-string:'_plus_ELEMENT'
//       -ARTIFACT  codep:0x224c wordp:0xec8e size:0x002a C-string:'_dash_ARTIFACT'
//           WECBA  codep:0x224c wordp:0xecba size:0x000e C-string:'WECBA'
//         STOP-SA  codep:0x1d29 wordp:0xecca size:0x0002 C-string:'STOP_dash_SA'
//         VPROBE#  codep:0x224c wordp:0xecce size:0x00d7 C-string:'VPROBE_n_'
//           WEDA7  codep:0x224c wordp:0xeda7 size:0x0032 C-string:'WEDA7'
//           WEDDB  codep:0x224c wordp:0xeddb size:0x003a C-string:'WEDDB'
//           WEE17  codep:0x224c wordp:0xee17 size:0x0026 C-string:'WEE17'
//           WEE3F  codep:0x224c wordp:0xee3f size:0x0032 C-string:'WEE3F'
//           WEE73  codep:0x224c wordp:0xee73 size:0x003a C-string:'WEE73'
//            XY/N  codep:0x224c wordp:0xeeb6 size:0x006e C-string:'XY_slash_N'
//           WEF26  codep:0x1d29 wordp:0xef26 size:0x0002 C-string:'WEF26'
//           WEF2A  codep:0x224c wordp:0xef2a size:0x000a C-string:'WEF2A'
//           WEF36  codep:0x224c wordp:0xef36 size:0x007c C-string:'WEF36'
//            ORB#  codep:0x224c wordp:0xefb4 size:0x000a C-string:'ORB_n_'
//     CRYSTAL-ORB  codep:0x224c wordp:0xefc0 size:0x0040 C-string:'CRYSTAL_dash_ORB'
//           EnQTY  codep:0x1d29 wordp:0xf002 size:0x0002 C-string:'EnQTY'
//      PLUTONIUM$  codep:0x224c wordp:0xf006 size:0x000a C-string:'PLUTONIUM_do_'
//       PLUTONIUM  codep:0x224c wordp:0xf012 size:0x0076 C-string:'PLUTONIUM'
//           WF08A  codep:0x2214 wordp:0xf08a size:0x0002 C-string:'WF08A'
//           WF08E  codep:0x224c wordp:0xf08e size:0x000a C-string:'WF08E'
//           WF09A  codep:0x224c wordp:0xf09a size:0x000a C-string:'WF09A'
//     NEED-ENERGY  codep:0x224c wordp:0xf0a6 size:0x007c C-string:'NEED_dash_ENERGY'
//           WF124  codep:0x224c wordp:0xf124 size:0x000a C-string:'WF124'
//           WF130  codep:0x224c wordp:0xf130 size:0x002a C-string:'WF130'
//           WF15C  codep:0x224c wordp:0xf15c size:0x000a C-string:'WF15C'
//           WF168  codep:0x224c wordp:0xf168 size:0x000a C-string:'WF168'
//           WF174  codep:0x224c wordp:0xf174 size:0x0050 C-string:'WF174'
//           WF1C6  codep:0x224c wordp:0xf1c6 size:0x000a C-string:'WF1C6'
//           WF1D2  codep:0x224c wordp:0xf1d2 size:0x007a C-string:'WF1D2'
//           WF24E  codep:0x224c wordp:0xf24e size:0x000a C-string:'WF24E'
//           WF25A  codep:0x224c wordp:0xf25a size:0x004e C-string:'WF25A'
//           WF2AA  codep:0x224c wordp:0xf2aa size:0x0066 C-string:'WF2AA'
//           WF312  codep:0x224c wordp:0xf312 size:0x0082 C-string:'WF312'
//           WF396  codep:0x224c wordp:0xf396 size:0x000a C-string:'WF396'
//           WF3A2  codep:0x224c wordp:0xf3a2 size:0x0058 C-string:'WF3A2'
//           WF3FC  codep:0x224c wordp:0xf3fc size:0x000a C-string:'WF3FC'
//           WF408  codep:0x224c wordp:0xf408 size:0x000a C-string:'WF408'
//           WF414  codep:0x224c wordp:0xf414 size:0x003e C-string:'WF414'
//       SA-ELOWAN  codep:0x1d29 wordp:0xf454 size:0x0009 C-string:'SA_dash_ELOWAN'
//       SA-THRYNN  codep:0x1d29 wordp:0xf45f size:0x000b C-string:'SA_dash_THRYNN'
//        SA-VELOX  codep:0x1d29 wordp:0xf46c size:0x0007 C-string:'SA_dash_VELOX'
//       SA-MECHAN  codep:0x1d29 wordp:0xf475 size:0x0003 C-string:'SA_dash_MECHAN'
//       SA-VPROBE  codep:0x1d29 wordp:0xf47a size:0x0003 C-string:'SA_dash_VPROBE'
//           WF47F  codep:0x1d29 wordp:0xf47f size:0x0005 C-string:'WF47F'
//           DO-SA  codep:0x224c wordp:0xf486 size:0x002e C-string:'DO_dash_SA'
//         SA-CASE  codep:0x4a4f wordp:0xf4c0 size:0x001c C-string:'SA_dash_CASE'
//           WF4DE  codep:0x224c wordp:0xf4de size:0x0014 C-string:'WF4DE'
//         (XCOMM)  codep:0x224c wordp:0xf4fe size:0x0000 C-string:'_ro_XCOMM_rc_'

// =================================
// ============= EXTERN ============
// =================================
extern const unsigned short int cc_BL; // BL
extern const unsigned short int pp_EDL; // EDL
extern const unsigned short int pp_A_dash_POSTU; // A-POSTU
extern const unsigned short int pp_P_dash_RACES; // P-RACES
extern const unsigned short int pp__dash_END; // -END
extern const unsigned short int pp_IsELAN; // ?ELAN
extern const unsigned short int pp_IsSPHEXI; // ?SPHEXI
extern const unsigned short int pp__ro_STOP_dash_COMM_rc_; // (STOP-COMM)
extern const unsigned short int pp_THIS_dash_BUTTON; // THIS-BUTTON
extern const unsigned short int pp_SKIP2NEST; // SKIP2NEST
extern const unsigned short int pp_FTRIG; // FTRIG
extern const unsigned short int pp_Is12; // ?12
extern const unsigned short int pp_TERMINA; // TERMINA
extern const unsigned short int pp_E_dash_USE; // E-USE
extern const unsigned short int pp_IsSECURE; // ?SECURE
extern const unsigned short int pp__i_RSIDE; // 'RSIDE
extern const unsigned short int pp_TIRED_dash_TIME; // TIRED-TIME
extern const unsigned short int pp_OK_dash_TALK; // OK-TALK
extern const unsigned short int pp__ro_AORIGINATOR_rc_; // (AORIGINATOR)
extern const unsigned short int pp_LSCAN; // LSCAN
extern LoadDataType ART_dash_NAME; // ART-NAME
extern LoadDataType ART_dash_VAL; // ART-VAL
extern LoadDataType ART_dash_VOL; // ART-VOL
extern Color BLACK; // BLACK
extern Color BLUE; // BLUE
extern Color YELLOW; // YELLOW
extern IFieldType INST_dash_QTY; // INST-QTY
extern IFieldType INST_dash_X; // INST-X
extern IFieldType PHRASE_do_; // PHRASE$
void COUNT(); // COUNT
void _star__slash_(); // */
void MAX(); // MAX
void MOD(); // MOD
void MIN(); // MIN
void _n__gt_(); // #>
void _n_S(); // #S
void _st__n_(); // <#
void PAD(); // PAD
void MS(); // MS
void PICK(); // PICK
void _2OVER(); // 2OVER
void D_eq_(); // D=
void D_gt_(); // D>
void KEY_2(); // KEY_2
void RRND(); // RRND
void C_ex_(); // C!
void Store_3(); // !_3
void _plus__ex__2(); // +!_2
void StoreD(); // D!
void ON_3(); // ON_3
void OFF(); // OFF
void CMOVE(); // CMOVE
void FILL_1(); // FILL_1
void GetINST_dash_SPECIES(); // @INST-SPECIES
void CDROP(); // CDROP
void ICLOSE(); // ICLOSE
void _gt_C_plus_S(); // >C+S
void Get_gt_C_plus_S(); // @>C+S
void IOPEN(); // IOPEN
void IsFIRST(); // ?FIRST
void _gt_C_plus_(); // >C+
void INEXT(); // INEXT
void IFIRST(); // IFIRST
void IINSERT(); // IINSERT
void IFIND(); // IFIND
void _gt_INACTIVE(); // >INACTIVE
void IDELETE(); // IDELETE
void ICREATE(); // ICREATE
void StoreCOLOR(); // !COLOR
void BYE(); // BYE
void CTPOS_dot_(); // CTPOS.
void CTERASE(); // CTERASE
void TTY_dash_SCR(); // TTY-SCR
void CTINIT(); // CTINIT
void DrawTTY(); // .TTY
void DrawON(); // .ON
void INIT_dash_BUTTON(); // INIT-BUTTON
void _i_KEY(); // 'KEY
void XYSCAN(); // XYSCAN
void IsTRIG(); // ?TRIG
void DrawBTN_dash_TEXT(); // .BTN-TEXT
void NEW_dash_BUT(); // NEW-BUT
void _do__ex_(); // $!
void _dash_XTRAILING(); // -XTRAILING
void _gt_BOX(); // >BOX
void BOX_gt_(); // BOX>
void DrawSORD(); // .SORD
void _2_at_(); // 2@
void _2DUP(); // 2DUP
void OVER(); // OVER
void ROT(); // ROT
void SWAP(); // SWAP
void _slash_(); // /
void _dash_(); // -
void D_plus_(); // D+
void U_slash_MOD(); // U/MOD
void _gt_(); // >
void _st_(); // <
void _0_st_(); // 0<
void _0_gt_(); // 0>
void TIME(); // TIME
void GetEXECUTE(); // @EXECUTE
void _1_dot_5_at_(); // 1.5@
void C_gt_(); // C>
void CI(); // CI


// =================================
// =========== VARIABLES ===========
// =================================
const unsigned short int pp_QTY = 0xebce; // QTY size: 2
// {0x3a, 0x20}

const unsigned short int pp_STOP_dash_SA = 0xecca; // STOP-SA size: 2
// {0x3a, 0x20}

const unsigned short int pp_WEF26 = 0xef26; // WEF26 size: 2
// {0x3a, 0x20}

const unsigned short int pp_EnQTY = 0xf002; // EnQTY size: 2
// {0x3a, 0x20}

const unsigned short int pp_SA_dash_ELOWAN = 0xf454; // SA-ELOWAN size: 9
// {0x04, 0x30, 0xf1, 0xa7, 0xed, 0xdb, 0xed, 0x74, 0xf1}

const unsigned short int pp_SA_dash_THRYNN = 0xf45f; // SA-THRYNN size: 11
// {0x05, 0x3f, 0xee, 0x73, 0xee, 0x12, 0xf0, 0x12, 0xf3, 0xa6, 0xf0}

const unsigned short int pp_SA_dash_VELOX = 0xf46c; // SA-VELOX size: 7
// {0x03, 0xc0, 0xef, 0x36, 0xef, 0xd2, 0xf1}

const unsigned short int pp_SA_dash_MECHAN = 0xf475; // SA-MECHAN size: 3
// {0x01, 0x17, 0xee}

const unsigned short int pp_SA_dash_VPROBE = 0xf47a; // SA-VPROBE size: 3
// {0x01, 0xce, 0xec}

const unsigned short int pp_WF47F = 0xf47f; // WF47F size: 5
// {0x02, 0x14, 0xf4, 0xa2, 0xf3}


const unsigned short int cc_WF08A = 0xf08a; // WF08A


// 0xea42: db 0xaf 0x00 '  '

// ================================================
// 0xea44: WORD '?ARTIFACT' codep=0x224c wordp=0xea46 params=0 returns=0
// ================================================
// orphan

void IsARTIFACT() // ?ARTIFACT
{
  Push(0xbdd8); // 'OV?ARTIFACT'
  MODULE(); // MODULE
}


// ================================================
// 0xea4e: WORD 'WEA50' codep=0x224c wordp=0xea50 params=0 returns=0
// ================================================
// orphan

void WEA50() // WEA50
{
  Push(0x000d);
  IsARTIFACT(); // ?ARTIFACT
  Push(pp_Is12); // ?12
  Store_3(); // !_3
  Push(Read16(pp_E_dash_USE)); // E-USE @
  Push(7);
  IsARTIFACT(); // ?ARTIFACT
  if (Pop() != 0)
  {
    Push(Pop() >> 1); //  2/
  }
  Push(pp__dash_END); // -END
  Store_3(); // !_3
}


// ================================================
// 0xea6e: WORD 'A>ORIGINATOR' codep=0x224c wordp=0xea70 params=0 returns=0
// ================================================
// orphan

void A_gt_ORIGINATOR() // A>ORIGINATOR
{
  Push(0xc1d1); // 'A>O'
  MODULE(); // MODULE
}


// ================================================
// 0xea78: WORD 'ORIGINATOR>C' codep=0x224c wordp=0xea7a params=0 returns=0
// ================================================
// orphan

void ORIGINATOR_gt_C() // ORIGINATOR>C
{
  Push(0xc1e1); // 'O>C'
  MODULE(); // MODULE
}


// ================================================
// 0xea82: WORD '+!EDL' codep=0x224c wordp=0xea84 params=0 returns=0
// ================================================

void _plus__ex_EDL() // +!EDL
{
  Push(0xc205); // 'OV+!EDL'
  MODULE(); // MODULE
}


// ================================================
// 0xea8c: WORD 'WEA8E' codep=0x224c wordp=0xea8e params=2 returns=2
// ================================================

void WEA8E() // WEA8E
{
  _gt_C_plus_S(); // >C+S
  Push(0x63ef+PHRASE_do_.offset); // PHRASE$<IFIELD>
  Push(pp_LSCAN); // LSCAN
  _do__ex_(); // $!
  Push(pp_LSCAN); // LSCAN
  COUNT(); // COUNT
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xea9e: WORD 'BASE-EDL' codep=0x744d wordp=0xeaa0
// ================================================
// orphan
IFieldType BASE_dash_EDL = {ORIGINATORIDX, 0x12, 0x01};

// ================================================
// 0xeaa3: WORD 'AET' codep=0x744d wordp=0xeaa5
// ================================================
// orphan
IFieldType AET = {ORIGINATORIDX, 0x13, 0x01};

// ================================================
// 0xeaa8: WORD 'WEAAA' codep=0x744d wordp=0xeaaa
// ================================================
IFieldType WEAAA = {SHIPIDX, 0x43, 0x02};

// ================================================
// 0xeaad: WORD 'WEAAF' codep=0x3b68 wordp=0xeaaf
// ================================================
// 0xeaaf: dw 0x0001 0x6090

// ================================================
// 0xeab3: WORD 'WEAB5' codep=0x3b68 wordp=0xeab5
// ================================================
// 0xeab5: dw 0x0001 0x8272

// ================================================
// 0xeab9: WORD 'WEABB' codep=0x3b68 wordp=0xeabb
// ================================================
// 0xeabb: dw 0x0000 0xdac0

// ================================================
// 0xeabf: WORD 'WEAC1' codep=0x224c wordp=0xeac1 params=0 returns=2
// ================================================
// orphan

void WEAC1() // WEAC1
{
  CTINIT(); // CTINIT
  SET_STR_AS_PARAM("RECEIVING:");
  DrawTTY(); // .TTY
  Push(0x01f4);
  MS(); // MS
}


// ================================================
// 0xeada: WORD '(PHRASE>CT)' codep=0x224c wordp=0xeadc params=0 returns=2
// ================================================
// orphan

void _ro_PHRASE_gt_CT_rc_() // (PHRASE>CT)
{
  WEAC1(); // WEAC1
  A_gt_ORIGINATOR(); // A>ORIGINATOR
  ORIGINATOR_gt_C(); // ORIGINATOR>C
  Push(0xc216); // 'P>CT'
  MODULE(); // MODULE
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xeaec: WORD 'WEAEE' codep=0x224c wordp=0xeaee params=1 returns=0
// ================================================

void WEAEE() // WEAEE
{
  Push(Read16(pp_THIS_dash_BUTTON)); // THIS-BUTTON @
  Push(2);
  _st_(); // <
  if (Pop() != 0)
  {
    GetColor(BLUE);
    Push(Read16(pp_THIS_dash_BUTTON)); // THIS-BUTTON @
    DrawON(); // .ON
    CTINIT(); // CTINIT
    Push(0x118a); Push(0x0002); // 'TRANSMITTING:'
    WEA8E(); // WEA8E
    DrawTTY(); // .TTY
    Push(0x01f4);
    MS(); // MS
    if (Pop() != 0)
    {
      SET_STR_AS_PARAM("YES.");
    } else
    {
      SET_STR_AS_PARAM("NO.");
    }
    DrawTTY(); // .TTY
    TTY_dash_SCR(); // TTY-SCR
  } else
  {
    Pop(); // DROP
  }
  GetColor(BLACK);
  Push(Read16(pp_THIS_dash_BUTTON)); // THIS-BUTTON @
  DrawON(); // .ON
}


// ================================================
// 0xeb3d: WORD 'WEB3F' codep=0x224c wordp=0xeb3f params=2 returns=0
// ================================================
// orphan

void WEB3F() // WEB3F
{
  _gt_C_plus_S(); // >C+S
  Push(0x02d5);
  Push(0x04de);
  Push(0x63ef+INST_dash_X.offset); // INST-X<IFIELD>
  StoreD(); // D!
  CI(); // CI
  GetINST_dash_SPECIES(); // @INST-SPECIES
  Push(Pop()==1?1:0); //  1 =
  ICLOSE(); // ICLOSE
  Push(Read16(pp_IsSPHEXI)); // ?SPHEXI @
  _0_gt_(); // 0>
  Push(Pop() & Pop()); // AND
  Push(pp__ro_AORIGINATOR_rc_); // (AORIGINATOR)
  _1_dot_5_at_(); // 1.5@
  Push2Words("WEABB");
  D_eq_(); // D=
  Push(Pop() & Pop()); // AND
  if (Pop() != 0)
  {
    Push2Words("*SP");
    IINSERT(); // IINSERT
    return;
  }
  _gt_INACTIVE(); // >INACTIVE
}


// ================================================
// 0xeb79: WORD '(>BUTTON)' codep=0x224c wordp=0xeb7b
// ================================================

void _ro__gt_BUTTON_rc_() // (>BUTTON)
{
  XYSCAN(); // XYSCAN
  Pop(); // DROP
  if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
  if (Pop() == 0) return;
  NEW_dash_BUT(); // NEW-BUT
}


// ================================================
// 0xeb89: WORD '?VOWEL' codep=0x4a4f wordp=0xeb94
// ================================================

void IsVOWEL() // ?VOWEL
{
  switch(Pop()) // ?VOWEL
  {
  case 65:
    Push(1);
    break;
  case 69:
    Push(1);
    break;
  case 73:
    Push(1);
    break;
  case 79:
    Push(1);
    break;
  case 85:
    Push(1);
    break;
  default:
    Push(0);
    break;

  }
}

// ================================================
// 0xebac: WORD 'WEBAE' codep=0x224c wordp=0xebae
// ================================================
// orphan

void WEBAE() // WEBAE
{
  Push(Read16(Pop())&0xFF); //  C@
  IsVOWEL(); // ?VOWEL case
}


// ================================================
// 0xebb4: WORD 'WEBB6' codep=0x224c wordp=0xebb6 params=0 returns=1
// ================================================
// orphan

void WEBB6() // WEBB6
{
  Push(pp__ro_STOP_dash_COMM_rc_); // (STOP-COMM)
  ON_3(); // ON_3
  Push(0x0064);
  _plus__ex_EDL(); // +!EDL
}


// ================================================
// 0xebc2: WORD 'WEBC4' codep=0x224c wordp=0xebc4 params=0 returns=0
// ================================================
// orphan

void WEBC4() // WEBC4
{
  Push(0xbd4a); // '=CARGO'
  MODULE(); // MODULE
}


// ================================================
// 0xebcc: WORD 'QTY' codep=0x1d29 wordp=0xebce
// ================================================
// orphan
// 0xebce: db 0x3a 0x20 ': '

// ================================================
// 0xebd0: WORD 'WEBD2' codep=0x224c wordp=0xebd2
// ================================================
// orphan

void WEBD2() // WEBD2
{
  Push2Words("*STARSHIP-HOLD");
  _gt_C_plus_S(); // >C+S
  IOPEN(); // IOPEN
  Push(0x000b);
  Push(0x000a);
  IFIND(); // IFIND
}


// ================================================
// 0xebe4: WORD '?>=ELEMENT' codep=0x224c wordp=0xebe6
// ================================================
// orphan

void Is_gt__eq_ELEMENT() // ?>=ELEMENT
{
  WEBD2(); // WEBD2
  if (Pop() != 0)
  {
    IOPEN(); // IOPEN
    Push(0);
    SWAP(); // SWAP
    IFIND(); // IFIND
    if (Pop() != 0)
    {
      Push(Read16(0x63ef+INST_dash_QTY.offset)); // INST-QTY<IFIELD> @
      Push(Read16(regsp)); // DUP
      Push(pp_QTY); // QTY
      Store_3(); // !_3
      SWAP(); // SWAP
      _dash_(); // -
      _0_st_(); // 0<
      Push(!Pop()); //  NOT
    } else
    {
      Pop(); // DROP
      Push(0);
    }
    ICLOSE(); // ICLOSE
  } else
  {
    Pop(); Pop(); // 2DROP
    Push(0);
  }
  CDROP(); // CDROP
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xec22: WORD 'WEC24' codep=0x224c wordp=0xec24
// ================================================
// orphan

void WEC24() // WEC24
{
  WEBD2(); // WEBD2
  Pop(); // DROP
  IOPEN(); // IOPEN
  Push(0);
  SWAP(); // SWAP
  IFIND(); // IFIND
  Pop(); // DROP
}


// ================================================
// 0xec34: WORD 'WEC36' codep=0x224c wordp=0xec36 params=0 returns=0
// ================================================
// orphan

void WEC36() // WEC36
{
  while(1)
  {
    CI(); // CI
    Push2Words("*STARSHIP-HOLD");
    D_eq_(); // D=
    Push(!Pop()); //  NOT
    if (Pop() == 0) break;

    CDROP(); // CDROP
  }
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xec4c: WORD '+ELEMENT' codep=0x224c wordp=0xec4e
// ================================================
// orphan

void _plus_ELEMENT() // +ELEMENT
{
  WEC24(); // WEC24
  Push(-Pop()); //  NEGATE
  Push(0x63ef+INST_dash_QTY.offset); // INST-QTY<IFIELD>
  _plus__ex__2(); // +!_2
  Push(Read16(0x63ef+INST_dash_QTY.offset)); // INST-QTY<IFIELD> @
  _0_gt_(); // 0>
  Push(!Pop()); //  NOT
  if (Pop() != 0)
  {
    IDELETE(); // IDELETE
  }
  WEC36(); // WEC36
  WEBC4(); // WEBC4
  DrawSORD(); // .SORD
}


// ================================================
// 0xec6c: WORD '+ELEMENT' codep=0x224c wordp=0xec6e
// ================================================
// orphan

void _plus_ELEMENT() // +ELEMENT
{
  Push(0x001a);
  SWAP(); // SWAP
  ICREATE(); // ICREATE
  _gt_C_plus_S(); // >C+S
  Push(0x63ef+INST_dash_QTY.offset); // INST-QTY<IFIELD>
  Store_3(); // !_3
  C_gt_(); // C>
  Push2Words("*STARSHIP-HOLD");
  _gt_C_plus_S(); // >C+S
  _gt_BOX(); // >BOX
  ICLOSE(); // ICLOSE
  WEBC4(); // WEBC4
  DrawSORD(); // .SORD
}


// ================================================
// 0xec8c: WORD '-ARTIFACT' codep=0x224c wordp=0xec8e
// ================================================
// orphan

void _dash_ARTIFACT() // -ARTIFACT
{
  Push2Words("*STARSHIP-HOLD");
  _gt_C_plus_S(); // >C+S
  IOPEN(); // IOPEN
  Push(0x000b);
  Push(0x000f);
  IFIND(); // IFIND
  Pop(); // DROP
  IOPEN(); // IOPEN
  Push(0);
  SWAP(); // SWAP
  IFIND(); // IFIND
  Pop(); // DROP
  BOX_gt_(); // BOX>
  WEB3F(); // WEB3F
  Pop(); // DROP
  WEC36(); // WEC36
  WEBC4(); // WEBC4
  WEA50(); // WEA50
}


// ================================================
// 0xecb8: WORD 'WECBA' codep=0x224c wordp=0xecba params=1 returns=1
// ================================================
// orphan

void WECBA() // WECBA
{
  Push2Words("*SHIP");
  _gt_C_plus_S(); // >C+S
  Push(Read16(0x63ef+WEAAA.offset)); // WEAAA<IFIELD> @
  MIN(); // MIN
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xecc8: WORD 'STOP-SA' codep=0x1d29 wordp=0xecca
// ================================================
// 0xecca: db 0x3a 0x20 ': '

// ================================================
// 0xeccc: WORD 'VPROBE#' codep=0x224c wordp=0xecce
// ================================================

void VPROBE_n_() // VPROBE#
{
  unsigned short int i, imax;
  _i_KEY(); // 'KEY
  Pop(); // DROP
  Push(1);

  i = 0;
  imax = 6;
  do // (DO)
  {
    WEAC1(); // WEAC1
    TTY_dash_SCR(); // TTY-SCR
    Push(0);
    Push(6);
    CTPOS_dot_(); // CTPOS.
    Push(1);
    Push(0x0064);
    RRND(); // RRND
    Push(Read16(regsp)); // DUP
    Push(0);
    _st__n_(); // <#
    _n_S(); // #S
    _n__gt_(); // #>
    _2DUP(); // 2DUP
    Push(Pop() + Pop()); // +
    Push(0x003f);
    SWAP(); // SWAP
    C_ex_(); // C!
    Push(Pop() + 1); //  1+
    GetColor(BLUE);
    StoreCOLOR(); // !COLOR
    Exec("TYPE"); // call of word 0x2690 '(TYPE)'
    Push(0x000a);
    DrawBTN_dash_TEXT(); // .BTN-TEXT
    INIT_dash_BUTTON(); // INIT-BUTTON
    TIME(); // TIME
    _2_at_(); // 2@
    Push(0x3a98); Push(0x0000);
    D_plus_(); // D+
    Push(pp_TIRED_dash_TIME); // TIRED-TIME
    StoreD(); // D!
    do
    {
      _ro__gt_BUTTON_rc_(); // (>BUTTON)
      Push(Read16(pp_FTRIG)); // FTRIG @
      TIME(); // TIME
      _2_at_(); // 2@
      Push(pp_TIRED_dash_TIME); // TIRED-TIME
      _2_at_(); // 2@
      D_gt_(); // D>
      Push(Pop() | Pop()); // OR
    } while(Pop() == 0);
    IsTRIG(); // ?TRIG
    if (Pop() != 0)
    {
      Push(Read16(pp_THIS_dash_BUTTON)); // THIS-BUTTON @
      Push(Read16(regsp)); // DUP
      Push(Pop()==0?1:0); //  0=
      WEAEE(); // WEAEE
    } else
    {
      Push(2);
    }
    SWAP(); // SWAP
    Push(6);
    MOD(); // MOD
    _0_gt_(); // 0>
    Push((Pop()==Pop())?1:0); // =
    Push(Pop() * Pop()); // *
    Push(Read16(regsp)); // DUP
    Push(Pop()==0?1:0); //  0=
    if (Pop() != 0)
    {
      imax = i; // LEAVE
    }
    i++;
  } while(i<imax); // (LOOP)

  GetColor(BLUE);
  StoreCOLOR(); // !COLOR
  Push(0x11a4); Push(0x0002); // 'PERMISSION TO ORBIT '
  WEA8E(); // WEA8E
  DrawTTY(); // .TTY
  Push(Pop()==0?1:0); //  0=
  if (Pop() != 0)
  {
    PRINT("DENIED.", 7); // (.")
    WEBB6(); // WEBB6
    return;
  }
  PRINT("GRANTED.", 8); // (.")
  Push(pp__ro_STOP_dash_COMM_rc_); // (STOP-COMM)
  ON_3(); // ON_3
  Push(pp_SKIP2NEST); // SKIP2NEST
  ON_3(); // ON_3
  Push(pp_TERMINA); // TERMINA
  ON_3(); // ON_3
}


// ================================================
// 0xeda5: WORD 'WEDA7' codep=0x224c wordp=0xeda7 params=0 returns=0
// ================================================

void WEDA7() // WEDA7
{
  Push(!((Read16(pp_P_dash_RACES) & 4)==0?1:0)); // P-RACES @ 4 AND 0= NOT
  Push(Read16(pp_A_dash_POSTU)); // A-POSTU @
  Push(1);
  _gt_(); // >
  Push(Pop() & Pop()); // AND
  if (Pop() == 0) return;
  A_gt_ORIGINATOR(); // A>ORIGINATOR
  ORIGINATOR_gt_C(); // ORIGINATOR>C
  Push(pp_STOP_dash_SA); // STOP-SA
  ON_3(); // ON_3
  WEBB6(); // WEBB6
  Push(0x11c5); Push(0x0002); // 'WE DOST DETECT THE PRESENCE OF ACCURSED THRYNN ABOARD THY VESSEL. WE WOULDST HAVE NO DEALINGS WITH THEE, FRIENDS OF OUR ENEMIES.'
  WEA8E(); // WEA8E
  _ro_PHRASE_gt_CT_rc_(); // (PHRASE>CT)
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xedd9: WORD 'WEDDB' codep=0x224c wordp=0xeddb params=0 returns=0
// ================================================

void WEDDB() // WEDDB
{
  Push2Words("WEAB5");
  _gt_C_plus_S(); // >C+S
  Push(Read16(0x63ef+BASE_dash_EDL.offset)&0xFF); // BASE-EDL<IFIELD> C@
  Push(Read16(0x63ef+AET.offset)&0xFF); // AET<IFIELD> C@
  _st_(); // <
  ICLOSE(); // ICLOSE
  Push(!(Pop()==0?1:0)); //  0= NOT
  Push(Read16(pp_A_dash_POSTU)); // A-POSTU @
  Push(1);
  _gt_(); // >
  Push(Pop() & Pop()); // AND
  if (Pop() == 0) return;
  A_gt_ORIGINATOR(); // A>ORIGINATOR
  ORIGINATOR_gt_C(); // ORIGINATOR>C
  Push(pp_STOP_dash_SA); // STOP-SA
  ON_3(); // ON_3
  WEBB6(); // WEBB6
  Push(0x1252); Push(0x0002); // 'OUR INVESTIGATIONS REVEAL THAT THOU ART FRIENDS OF THE EVIL THRYNN. THEREFORE ART THOU ENEMIES OF THE ELOWAN.'
  WEA8E(); // WEA8E
  _ro_PHRASE_gt_CT_rc_(); // (PHRASE>CT)
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xee15: WORD 'WEE17' codep=0x224c wordp=0xee17 params=0 returns=0
// ================================================

void WEE17() // WEE17
{
  Push((Read16(pp_P_dash_RACES) & 1)==0?1:0); // P-RACES @ 1 AND 0=
  if (Pop() == 0) return;
  A_gt_ORIGINATOR(); // A>ORIGINATOR
  ORIGINATOR_gt_C(); // ORIGINATOR>C
  Push(pp_STOP_dash_SA); // STOP-SA
  ON_3(); // ON_3
  WEBB6(); // WEBB6
  Push(0x12cc); Push(0x0002); // 'WE DO NOT DETECT THE PRESENCE OF ANY HUMAN LIFEFORMS ABOARD YOUR VESSEL. WE THEREFORE CONCLUDE YOU CANNOT BE GROUP 9.'
  WEA8E(); // WEA8E
  _ro_PHRASE_gt_CT_rc_(); // (PHRASE>CT)
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xee3d: WORD 'WEE3F' codep=0x224c wordp=0xee3f params=0 returns=0
// ================================================

void WEE3F() // WEE3F
{
  Push(!((Read16(pp_P_dash_RACES) & 8)==0?1:0)); // P-RACES @ 8 AND 0= NOT
  Push(Read16(pp_A_dash_POSTU)); // A-POSTU @
  Push(1);
  _gt_(); // >
  Push(Pop() & Pop()); // AND
  if (Pop() == 0) return;
  A_gt_ORIGINATOR(); // A>ORIGINATOR
  ORIGINATOR_gt_C(); // ORIGINATOR>C
  Push(pp_STOP_dash_SA); // STOP-SA
  ON_3(); // ON_3
  WEBB6(); // WEBB6
  Push(0x134e); Push(0x0002); // 'SSSO YOU ARRRE FRIENDSS WITHH THE ELLLOWANN. OURR SCANNERSSS SSHOW THEY ARRE ABOARRD YOURR SSHIP. MOSSST RREGRRETABLE.'
  WEA8E(); // WEA8E
  _ro_PHRASE_gt_CT_rc_(); // (PHRASE>CT)
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xee71: WORD 'WEE73' codep=0x224c wordp=0xee73 params=0 returns=0
// ================================================

void WEE73() // WEE73
{
  Push2Words("WEAAF");
  _gt_C_plus_S(); // >C+S
  Push(Read16(0x63ef+BASE_dash_EDL.offset)&0xFF); // BASE-EDL<IFIELD> C@
  Push(Read16(0x63ef+AET.offset)&0xFF); // AET<IFIELD> C@
  _st_(); // <
  ICLOSE(); // ICLOSE
  Push(!(Pop()==0?1:0)); //  0= NOT
  Push(Read16(pp_A_dash_POSTU)); // A-POSTU @
  Push(1);
  _gt_(); // >
  Push(Pop() & Pop()); // AND
  if (Pop() == 0) return;
  A_gt_ORIGINATOR(); // A>ORIGINATOR
  ORIGINATOR_gt_C(); // ORIGINATOR>C
  Push(pp_STOP_dash_SA); // STOP-SA
  ON_3(); // ON_3
  WEBB6(); // WEBB6
  Push(0x1400); Push(0x0002); // 'OUR INNTELLIGENCCCE INNDICATESS THAT YOU HAVVE ALLIED WITH THE ELLOWANNN. UNLESSS YOU CHANGE YOUR MINND WE MUSSST CONSSIDER YOU OUR ENNEMY.'
  WEA8E(); // WEA8E
  _ro_PHRASE_gt_CT_rc_(); // (PHRASE>CT)
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xeead: WORD 'XY/N' codep=0x224c wordp=0xeeb6
// ================================================

void XY_slash_N() // XY/N
{
  _i_KEY(); // 'KEY
  Pop(); // DROP
  Push(0x000a);
  DrawBTN_dash_TEXT(); // .BTN-TEXT
  INIT_dash_BUTTON(); // INIT-BUTTON
  TIME(); // TIME
  _2_at_(); // 2@
  Push(0xea60); Push(0x0000);
  D_plus_(); // D+
  Push(pp_TIRED_dash_TIME); // TIRED-TIME
  StoreD(); // D!
  do
  {
    _ro__gt_BUTTON_rc_(); // (>BUTTON)
    Push(Read16(pp_FTRIG)); // FTRIG @
    TIME(); // TIME
    _2_at_(); // 2@
    Push(pp_TIRED_dash_TIME); // TIRED-TIME
    _2_at_(); // 2@
    D_gt_(); // D>
    Push(Pop() | Pop()); // OR
  } while(Pop() == 0);
  Push(Read16(pp_THIS_dash_BUTTON)); // THIS-BUTTON @
  Push(Read16(regsp)); // DUP
  Push((Pop()==2?1:0) * Read16(pp_FTRIG)); //  2 = FTRIG @ *
  Push(pp__ro_STOP_dash_COMM_rc_); // (STOP-COMM)
  Store_3(); // !_3
  IsTRIG(); // ?TRIG
  Push((Pop()==0?1:0) * 2); //  0= 2*
  Push(Pop() + Pop()); // +
  Push(Pop()==0?1:0); //  0=
  if (Pop() != 0)
  {
    Pop(); // DROP
    _plus__ex_EDL(); // +!EDL
    Push(1);
  } else
  {
    _plus__ex_EDL(); // +!EDL
    Pop(); // DROP
    Push(0);
  }
  Push(Read16(regsp)); // DUP
  WEAEE(); // WEAEE
  Push(9);
  DrawBTN_dash_TEXT(); // .BTN-TEXT
}


// ================================================
// 0xef24: WORD 'WEF26' codep=0x1d29 wordp=0xef26
// ================================================
// orphan
// 0xef26: db 0x3a 0x20 ': '

// ================================================
// 0xef28: WORD 'WEF2A' codep=0x224c wordp=0xef2a params=0 returns=2
// ================================================
// orphan

void WEF2A() // WEF2A
{
  Push(0x1498); Push(0x0002); // 'OUR SCANNER ARE SHOW YOU IS HAVE FOCUSING STONE OF VELOXI. YOU IS IMMEDIATELY GIVING TO VELOXI. AGREEING?'
  WEA8E(); // WEA8E
}


// ================================================
// 0xef34: WORD 'WEF36' codep=0x224c wordp=0xef36 params=0 returns=0
// ================================================

void WEF36() // WEF36
{
  Push(0x000e);
  IsARTIFACT(); // ?ARTIFACT
  Push(Read16(pp_A_dash_POSTU)); // A-POSTU @
  Push(1);
  _gt_(); // >
  Push(Pop() & Pop()); // AND
  if (Pop() == 0) return;
  A_gt_ORIGINATOR(); // A>ORIGINATOR
  ORIGINATOR_gt_C(); // ORIGINATOR>C
  WEF2A(); // WEF2A
  _ro_PHRASE_gt_CT_rc_(); // (PHRASE>CT)
  Push(0xffd8);
  Push(0x0032);
  XY_slash_N(); // XY/N
  if (Pop() != 0)
  {
    Push(0x000e);
    _dash_ARTIFACT(); // -ARTIFACT
    Push(0xffd8);
  } else
  {
    Push(pp_STOP_dash_SA); // STOP-SA
    ON_3(); // ON_3
    WEBB6(); // WEBB6
    Push(0x0032);
  }
  Push(Read16(pp_WEF26)); // WEF26 @
  if (Pop() != 0)
  {
    Push(0xe979); Push(0x0000);
    _gt_C_plus_(); // >C+
    Push(0xec50); Push(0x0000);
    _gt_C_plus_S(); // >C+S
    IDELETE(); // IDELETE
    ICLOSE(); // ICLOSE
    ICLOSE(); // ICLOSE
    Push(pp_WEF26); // WEF26
    OFF(); // OFF
  }
  Push(Pop() + (Read16(0x63ef+BASE_dash_EDL.offset)&0xFF)); //  BASE-EDL<IFIELD> C@ +
  Push(0x0064);
  MIN(); // MIN
  Push(0);
  MAX(); // MAX
  Push(0x63ef+BASE_dash_EDL.offset); // BASE-EDL<IFIELD>
  C_ex_(); // C!
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xefb2: WORD 'ORB#' codep=0x224c wordp=0xefb4 params=0 returns=2
// ================================================

void ORB_n_() // ORB#
{
  Push(0x150e); Push(0x0002); // 'OUR SCANNER IS SHOW YOU ARE HAVE MOST PRECIOUS SMALL EGG OF VELOXI GRAND LOVELY. YOU ARE RETURN IMMEDIATELY, OR VELOXI IS DECLARING WAR. AGREEING?'
  WEA8E(); // WEA8E
}


// ================================================
// 0xefbe: WORD 'CRYSTAL-ORB' codep=0x224c wordp=0xefc0 params=0 returns=0
// ================================================

void CRYSTAL_dash_ORB() // CRYSTAL-ORB
{
  Push(1);
  IsARTIFACT(); // ?ARTIFACT
  Push(Read16(pp_A_dash_POSTU)); // A-POSTU @
  Push(1);
  _gt_(); // >
  Push(Pop() & Pop()); // AND
  if (Pop() == 0) return;
  A_gt_ORIGINATOR(); // A>ORIGINATOR
  ORIGINATOR_gt_C(); // ORIGINATOR>C
  ORB_n_(); // ORB#
  _ro_PHRASE_gt_CT_rc_(); // (PHRASE>CT)
  Push(0);
  Push(0x0064);
  XY_slash_N(); // XY/N
  if (Pop() != 0)
  {
    Push(1);
    _dash_ARTIFACT(); // -ARTIFACT
  } else
  {
    Push(pp_STOP_dash_SA); // STOP-SA
    ON_3(); // ON_3
    WEBB6(); // WEBB6
    Push(0x0064);
    Push(0x63ef+BASE_dash_EDL.offset); // BASE-EDL<IFIELD>
    C_ex_(); // C!
  }
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xf000: WORD 'EnQTY' codep=0x1d29 wordp=0xf002
// ================================================
// 0xf002: db 0x3a 0x20 ': '

// ================================================
// 0xf004: WORD 'PLUTONIUM$' codep=0x224c wordp=0xf006 params=0 returns=2
// ================================================

void PLUTONIUM_do_() // PLUTONIUM$
{
  Push(0x15ad); Push(0x0002); // 'WE DETTECT YOU ARE CARRRYING SSOME PLLLUTONIUM. WE WILLL PAYY WELLL FOR THISSS. LET USS SSAY XXX UNITSS OF ENERGY CRYSTALSSS. AGREED?'
  WEA8E(); // WEA8E
}


// ================================================
// 0xf010: WORD 'PLUTONIUM' codep=0x224c wordp=0xf012
// ================================================

void PLUTONIUM() // PLUTONIUM
{
  Push(3);
  Push(0x000f);
  Is_gt__eq_ELEMENT(); // ?>=ELEMENT
  if (Pop() == 0) return;
  A_gt_ORIGINATOR(); // A>ORIGINATOR
  ORIGINATOR_gt_C(); // ORIGINATOR>C
  PLUTONIUM_do_(); // PLUTONIUM$
  Push(Read16(pp_QTY)); // QTY @
  Push(0x0054);
  Push(0x0064);
  _star__slash_(); // */
  WECBA(); // WECBA
  Push(Read16(regsp)); // DUP
  Push(pp_EnQTY); // EnQTY
  Store_3(); // !_3
  Push(0x000a);
  _slash_(); // /
  Push(0);
  _st__n_(); // <#
  _n_S(); // #S
  _n__gt_(); // #>
  _2OVER(); // 2OVER
  Pop(); // DROP
  Push(Pop() + 0x005d); //  0x005d +
  Push(Read16(regsp)); // DUP
  Push(3);
  Push(Read16(cc_BL)); // BL
  FILL_1(); // FILL_1
  SWAP(); // SWAP
  CMOVE(); // CMOVE
  _ro_PHRASE_gt_CT_rc_(); // (PHRASE>CT)
  ICLOSE(); // ICLOSE
  Push(0);
  Push(5);
  XY_slash_N(); // XY/N
  if (Pop() != 0)
  {
    Push(Read16(pp_QTY)); // QTY @
    Push(0x000f);
    _plus_ELEMENT(); // +ELEMENT
    Push(Read16(pp_EnQTY)); // EnQTY @
    Push(6);
    _plus_ELEMENT(); // +ELEMENT
    return;
  }
  Push(pp_STOP_dash_SA); // STOP-SA
  ON_3(); // ON_3
}


// ================================================
// 0xf088: WORD 'WF08A' codep=0x2214 wordp=0xf08a
// ================================================
// 0xf08a: dw 0x0001

// ================================================
// 0xf08c: WORD 'WF08E' codep=0x224c wordp=0xf08e params=0 returns=2
// ================================================

void WF08E() // WF08E
{
  Push(0x163f); Push(0x0002); // 'TO DEMONSSTRATTE OUR GOOD WILLL WE WILLL SSSELL YOU A DEVICCE THAT WILLL MAKE YOUR SSSHIP INVULLLNERRABLE. THE COSST ISS ONLY 30 OF YOUR ENERGY CRYSTALSSS. DO YOU WISH TO PURRCHASSE THISS?'
  WEA8E(); // WEA8E
}


// ================================================
// 0xf098: WORD 'WF09A' codep=0x224c wordp=0xf09a params=0 returns=2
// ================================================

void WF09A() // WF09A
{
  Push(0x1708); Push(0x0002); // 'YOU DO NOTT HAVE ENOUGHHH. DO NNOT TRYY TO DECEIVVE USSS.'
  WEA8E(); // WEA8E
}


// ================================================
// 0xf0a4: WORD 'NEED-ENERGY' codep=0x224c wordp=0xf0a6 params=0 returns=0
// ================================================

void NEED_dash_ENERGY() // NEED-ENERGY
{
  A_gt_ORIGINATOR(); // A>ORIGINATOR
  ORIGINATOR_gt_C(); // ORIGINATOR>C
  Push((Read16(pp_A_dash_POSTU)==2?1:0) & Read16(cc_WF08A)); // A-POSTU @ 2 = WF08A AND
  if (Pop() != 0)
  {
    WF08E(); // WF08E
    _ro_PHRASE_gt_CT_rc_(); // (PHRASE>CT)
    Push(0);
    Push(0);
    XY_slash_N(); // XY/N
    if (Pop() != 0)
    {
      Push(0x012c);
      Push(6);
      Is_gt__eq_ELEMENT(); // ?>=ELEMENT
      if (Pop() != 0)
      {
        Push(0x012c);
        Push(6);
        _plus_ELEMENT(); // +ELEMENT
        Push(0x001c);
        Push(0x000f);
        ICREATE(); // ICREATE
        _gt_C_plus_S(); // >C+S
        LoadData(ART_dash_VOL); // from 'ARTIFACT'
        Push(Read16(Pop())); //  @
        Push(0x63ef+INST_dash_QTY.offset); // INST-QTY<IFIELD>
        Store_3(); // !_3
        CI(); // CI
        ICLOSE(); // ICLOSE
        Push2Words("*STARSHIP-HOLD");
        _gt_C_plus_S(); // >C+S
        _gt_BOX(); // >BOX
        ICLOSE(); // ICLOSE
        Push(0xf08a); // 'WF08A'
        OFF(); // OFF
        WEBC4(); // WEBC4
      } else
      {
        WF09A(); // WF09A
        _ro_PHRASE_gt_CT_rc_(); // (PHRASE>CT)
        Push(5);
        _plus__ex_EDL(); // +!EDL
      }
    } else
    {
      Push(0x174e); Push(0x0002); // 'VERY WELLLL.'
      WEA8E(); // WEA8E
      _ro_PHRASE_gt_CT_rc_(); // (PHRASE>CT)
    }
  }
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xf122: WORD 'WF124' codep=0x224c wordp=0xf124 params=0 returns=2
// ================================================

void WF124() // WF124
{
  Push(0x1800); Push(0x0002); // 'THOU HAST DONE A DEED MOST UNTHINKABLY FOUL. THOU HAST DESTROYED ELAN, THE SACRED PLANET OF OUR YOUNG AND THEREBY HAST THOU ALL BUT DESTROYED THE ELOWAN. TRULY ART THOU MORE VILE EVEN THAN THE THRYNN. WE ARE NOW AND FOREVER MORTAL ENEMIES.'
  WEA8E(); // WEA8E
}


// ================================================
// 0xf12e: WORD 'WF130' codep=0x224c wordp=0xf130 params=0 returns=0
// ================================================

void WF130() // WF130
{
  Push(!Read16(pp_IsELAN)); // ?ELAN @ NOT
  if (Pop() == 0) return;
  A_gt_ORIGINATOR(); // A>ORIGINATOR
  ORIGINATOR_gt_C(); // ORIGINATOR>C
  Push(pp_STOP_dash_SA); // STOP-SA
  ON_3(); // ON_3
  WEBB6(); // WEBB6
  WF124(); // WF124
  _ro_PHRASE_gt_CT_rc_(); // (PHRASE>CT)
  Push(0x0064);
  _plus__ex_EDL(); // +!EDL
  Push(0x0064);
  Push(0x63ef+BASE_dash_EDL.offset); // BASE-EDL<IFIELD>
  C_ex_(); // C!
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xf15a: WORD 'WF15C' codep=0x224c wordp=0xf15c params=0 returns=2
// ================================================

void WF15C() // WF15C
{
  Push(0x18fc); Push(0x0002); // 'SCANNERS OF OURS SHOW THAT THOU HAST 20 ARTH UNITS AT LEAST. THY NEED DOES NOT SEEM DIRE. THOU WOULD'ST SPEAK FALSELY AND TAKE ADVANTAGE ON US.'
  WEA8E(); // WEA8E
}


// ================================================
// 0xf166: WORD 'WF168' codep=0x224c wordp=0xf168 params=0 returns=2
// ================================================

void WF168() // WF168
{
  Push(0x1998); Push(0x0002); // 'WE GIVE UNTO THEE, FRIENDS OF THE ELOWAN, 15 ARTH UNITS OF FUEL.'
  WEA8E(); // WEA8E
}


// ================================================
// 0xf172: WORD 'WF174' codep=0x224c wordp=0xf174 params=0 returns=0
// ================================================

void WF174() // WF174
{
  A_gt_ORIGINATOR(); // A>ORIGINATOR
  ORIGINATOR_gt_C(); // ORIGINATOR>C
  Push(Read16(pp_A_dash_POSTU)==2?1:0); // A-POSTU @ 2 =
  if (Pop() != 0)
  {
    Push(0x19e5); Push(0x0002); // 'IS THINE NEED FOR ENERGY DIRE?'
    WEA8E(); // WEA8E
    _ro_PHRASE_gt_CT_rc_(); // (PHRASE>CT)
    Push(0);
    Push(0);
    XY_slash_N(); // XY/N
    if (Pop() != 0)
    {
      Push(0x00c8);
      Push(6);
      Is_gt__eq_ELEMENT(); // ?>=ELEMENT
      if (Pop() != 0)
      {
        Push(8);
        _plus__ex_EDL(); // +!EDL
        WF15C(); // WF15C
      } else
      {
        Push(pp_STOP_dash_SA); // STOP-SA
        ON_3(); // ON_3
        WF168(); // WF168
        Push(0x0096);
        WECBA(); // WECBA
        Push(6);
        _plus_ELEMENT(); // +ELEMENT
      }
      _ro_PHRASE_gt_CT_rc_(); // (PHRASE>CT)
    }
  }
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xf1c4: WORD 'WF1C6' codep=0x224c wordp=0xf1c6 params=0 returns=2
// ================================================

void WF1C6() // WF1C6
{
  Push(0x1a10); Push(0x0002); // 'THE YOU ALIENS TRESPASSING IN OURS THE SPACE. MOST GRACIOUS GROSSNESS OF AUGUST QUEEN PERHAPS FORGIVING IF YOU ARE PAY TRIBUTE OF X ARTH ENERGY CRYSTALS RIGHT AWAY, BY JOVE. AGREEING?'
  WEA8E(); // WEA8E
}


// ================================================
// 0xf1d0: WORD 'WF1D2' codep=0x224c wordp=0xf1d2
// ================================================

void WF1D2() // WF1D2
{
  A_gt_ORIGINATOR(); // A>ORIGINATOR
  ORIGINATOR_gt_C(); // ORIGINATOR>C
  Push(Read16(pp_A_dash_POSTU) & 0x000c); // A-POSTU @ 0x000c AND
  Push(0x0028);
  Push(6);
  Is_gt__eq_ELEMENT(); // ?>=ELEMENT
  Push(Pop() * Pop()); // *
  if (Pop() != 0)
  {
    WF1C6(); // WF1C6
    Push(((Read16(pp_A_dash_POSTU)==8?1:0) * 6 + 3) + 0x0030); // A-POSTU @ 8 = 6 * 3 + 0x0030 +
    Push(3);
    PICK(); // PICK
    Push(Pop() + 0x0082); //  0x0082 +
    C_ex_(); // C!
    _ro_PHRASE_gt_CT_rc_(); // (PHRASE>CT)
    Push(0);
    Push(0x0064);
    XY_slash_N(); // XY/N
    if (Pop() != 0)
    {
      Push(Read16(pp_QTY)); // QTY @
      Push((Read16(pp_A_dash_POSTU)==8?1:0) * 0x003c + 0x001e); // A-POSTU @ 8 = 0x003c * 0x001e +
      MIN(); // MIN
      Push(6);
      _plus_ELEMENT(); // +ELEMENT
    } else
    {
      Push(pp_STOP_dash_SA); // STOP-SA
      ON_3(); // ON_3
      WEBB6(); // WEBB6
    }
  }
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xf24c: WORD 'WF24E' codep=0x224c wordp=0xf24e params=0 returns=2
// ================================================

void WF24E() // WF24E
{
  Push(0x1ad4); Push(0x0002); // 'OUR SCANNERSS INNDICATE THAT YOU HAVVE ABOARD YOUR SSHIP AX XXXXXXXXXXXXXXXXXXXXXXXX THISS ARTIFACT ISS OF INTERESST TO USS. WE WILL BUY ITT FROM YOU FOR XXXX CUBIC ARTH UNITXX OF ENERGY CRYSSTALSSS. AGREED?'
  WEA8E(); // WEA8E
}


// ================================================
// 0xf258: WORD 'WF25A' codep=0x224c wordp=0xf25a
// ================================================

void WF25A() // WF25A
{
  LoadData(ART_dash_NAME); // from 'ARTIFACT'
  Push(Read16(regsp)); // DUP
  PAD(); // PAD
  Push(0x0018);
  CMOVE(); // CMOVE
  WEBAE(); // WEBAE
  if (Pop() != 0)
  {
    Push(0x004e);
  } else
  {
    Push(Read16(cc_BL)); // BL
  }
  Push(pp_LSCAN + 0x003b); // LSCAN 0x003b +
  C_ex_(); // C!
  Push(pp_LSCAN + 0x003d); // LSCAN 0x003d +
  Push(Read16(regsp)); // DUP
  Push(0x0018);
  Push(Read16(cc_BL)); // BL
  FILL_1(); // FILL_1
  PAD(); // PAD
  Push(0x0018);
  Push(0x002e);
  _dash_XTRAILING(); // -XTRAILING
  Push(Pop() + 1); //  1+
  ROT(); // ROT
  SWAP(); // SWAP
  CMOVE(); // CMOVE
}


// ================================================
// 0xf2a8: WORD 'WF2AA' codep=0x224c wordp=0xf2aa
// ================================================

void WF2AA() // WF2AA
{
  LoadData(ART_dash_VAL); // from 'ARTIFACT'
  Push(Read16(Pop())); //  @
  Push(0);
  Push(0x0021);
  U_slash_MOD(); // U/MOD
  Push(0x000a);
  MAX(); // MAX
  WECBA(); // WECBA
  Push(Read16(regsp)); // DUP
  Push(pp_EnQTY); // EnQTY
  Store_3(); // !_3
  Push(0x000a);
  _slash_(); // /
  Push(0);
  _st__n_(); // <#
  _n_S(); // #S
  _n__gt_(); // #>
  Push(pp_LSCAN + 0x009b); // LSCAN 0x009b +
  Push(Read16(regsp)); // DUP
  Push(4);
  Push(Read16(cc_BL)); // BL
  FILL_1(); // FILL_1
  SWAP(); // SWAP
  CMOVE(); // CMOVE
  Pop(); // DROP
  Push(Read16(pp_EnQTY)); // EnQTY @
  Push(0x000a);
  _gt_(); // >
  if (Pop() != 0)
  {
    Push(0x0053);
  } else
  {
    Push(Read16(cc_BL)); // BL
  }
  Push(pp_LSCAN + 0x00af); // LSCAN 0x00af +
  Push(2);
  ROT(); // ROT
  FILL_1(); // FILL_1
}


// ================================================
// 0xf310: WORD 'WF312' codep=0x224c wordp=0xf312
// ================================================

void WF312() // WF312
{
  unsigned short int i, imax;
  A_gt_ORIGINATOR(); // A>ORIGINATOR
  ORIGINATOR_gt_C(); // ORIGINATOR>C
  Push2Words("*STARSHIP-HOLD");
  _gt_C_plus_S(); // >C+S
  IOPEN(); // IOPEN
  Push(0x000b);
  Push(0x000f);
  IFIND(); // IFIND
  if (Pop() != 0)
  {
    IOPEN(); // IOPEN
    Push(1);
    Push(0x000a);
    RRND(); // RRND

    i = 0;
    imax = Pop();
    do // (DO)
    {
      INEXT(); // INEXT
      i++;
    } while(i<imax); // (LOOP)

    GetINST_dash_SPECIES(); // @INST-SPECIES
    Push(Pop()==0x000f?1:0); //  0x000f =
    if (Pop() != 0)
    {
      IFIRST(); // IFIRST
    }
    do
    {
      GetINST_dash_SPECIES(); // @INST-SPECIES
      Push(!(Pop()==0x000f?1:0)); //  0x000f = NOT
      Push(Read16(regsp)); // DUP
      if (Pop() != 0)
      {
        WF24E(); // WF24E
        Pop(); Pop(); // 2DROP
        WF25A(); // WF25A
        WF2AA(); // WF2AA
        Push(pp_LSCAN); // LSCAN
        COUNT(); // COUNT
        _ro_PHRASE_gt_CT_rc_(); // (PHRASE>CT)
        Push(0);
        Push(5);
        XY_slash_N(); // XY/N
        if (Pop() != 0)
        {
          WEBC4(); // WEBC4
          BOX_gt_(); // BOX>
          _gt_INACTIVE(); // >INACTIVE
          Pop(); // DROP
          Push(Read16(pp_EnQTY)); // EnQTY @
          Push(6);
          _plus_ELEMENT(); // +ELEMENT
        }
      }
      INEXT(); // INEXT
      IsFIRST(); // ?FIRST
      Push(Pop() | Pop()); // OR
    } while(Pop() == 0);
  }
  WEC36(); // WEC36
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xf394: WORD 'WF396' codep=0x224c wordp=0xf396 params=0 returns=2
// ================================================
// orphan

void WF396() // WF396
{
  Push(0x1c00); Push(0x0002); // 'ALL YOUR ASSETS AT STARPORT HAVE BEEN SEIZED. YOUR SHIP WILL BE IMPOUNDED. WE HAVE REMOTELY DISABLED YOUR ENGINES. ANY ATTEMPT AT RESISTANCE WILL BE MET WITH FORCE. DO YOU AGREE TO COME ALONG PEACEFULLY?'
  WEA8E(); // WEA8E
}


// ================================================
// 0xf3a0: WORD 'WF3A2' codep=0x224c wordp=0xf3a2
// ================================================
// orphan

void WF3A2() // WF3A2
{
  A_gt_ORIGINATOR(); // A>ORIGINATOR
  ORIGINATOR_gt_C(); // ORIGINATOR>C
  WF396(); // WF396
  _ro_PHRASE_gt_CT_rc_(); // (PHRASE>CT)
  Push(0);
  Push(0x0064);
  XY_slash_N(); // XY/N
  if (Pop() != 0)
  {
    CTINIT(); // CTINIT
    GetColor(BLACK);
    StoreCOLOR(); // !COLOR
    GetColor(YELLOW);
    Push(0x4f0c); // 'BLACK'
    Store_3(); // !_3
    CTERASE(); // CTERASE
    SET_STR_AS_PARAM("CREW ARRESTED");
    DrawTTY(); // .TTY
    SET_STR_AS_PARAM("GAME OVER");
    DrawTTY(); // .TTY
    _i_KEY(); // 'KEY
    Pop(); // DROP
    KEY_2(); // KEY_2
    Pop(); // DROP
    BYE(); // BYE
  }
  Push(pp_STOP_dash_SA); // STOP-SA
  ON_3(); // ON_3
  WEBB6(); // WEBB6
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xf3fa: WORD 'WF3FC' codep=0x224c wordp=0xf3fc params=0 returns=2
// ================================================

void WF3FC() // WF3FC
{
  Push(0x1cd8); Push(0x0002); // 'OKAY, BUDDY. LET'S SEE YOUR SECURITY CODE.'
  WEA8E(); // WEA8E
}


// ================================================
// 0xf406: WORD 'WF408' codep=0x224c wordp=0xf408 params=0 returns=2
// ================================================

void WF408() // WF408
{
  Push(0x1d0f); Push(0x0002); // 'OUR APOLOGIES CAPTAIN, THERE'S BEEN SOME KIND OF MISTAKE. YOU CAN GO. HAVE A SAFE VOYAGE.'
  WEA8E(); // WEA8E
}


// ================================================
// 0xf412: WORD 'WF414' codep=0x224c wordp=0xf414 params=0 returns=6
// ================================================

void WF414() // WF414
{
  A_gt_ORIGINATOR(); // A>ORIGINATOR
  ORIGINATOR_gt_C(); // ORIGINATOR>C
  WF3FC(); // WF3FC
  _ro_PHRASE_gt_CT_rc_(); // (PHRASE>CT)
  Push(0x09c4);
  MS(); // MS
  Push(Read16(pp__i_RSIDE)); // 'RSIDE @
  MODULE(); // MODULE
  Push(!Read16(pp_IsSECURE)); // ?SECURE @ NOT
  if (Pop() != 0)
  {
    WF408(); // WF408
    _ro_PHRASE_gt_CT_rc_(); // (PHRASE>CT)
    Push(0x09c4);
    MS(); // MS
    Push(pp_STOP_dash_SA); // STOP-SA
    ON_3(); // ON_3
    Push(pp__ro_STOP_dash_COMM_rc_); // (STOP-COMM)
    ON_3(); // ON_3
    Push(0);
    Push(0x63ef+BASE_dash_EDL.offset); // BASE-EDL<IFIELD>
    C_ex_(); // C!
    Push(pp_EDL); // EDL
    OFF(); // OFF
  }
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xf452: WORD 'SA-ELOWAN' codep=0x1d29 wordp=0xf454
// ================================================
// 0xf454: db 0x04 0x30 0xf1 0xa7 0xed 0xdb 0xed 0x74 0xf1 ' 0     t '

// ================================================
// 0xf45d: WORD 'SA-THRYNN' codep=0x1d29 wordp=0xf45f
// ================================================
// 0xf45f: db 0x05 0x3f 0xee 0x73 0xee 0x12 0xf0 0x12 0xf3 0xa6 0xf0 ' ? s       '

// ================================================
// 0xf46a: WORD 'SA-VELOX' codep=0x1d29 wordp=0xf46c
// ================================================
// 0xf46c: db 0x03 0xc0 0xef 0x36 0xef 0xd2 0xf1 '   6   '

// ================================================
// 0xf473: WORD 'SA-MECHAN' codep=0x1d29 wordp=0xf475
// ================================================
// 0xf475: db 0x01 0x17 0xee '   '

// ================================================
// 0xf478: WORD 'SA-VPROBE' codep=0x1d29 wordp=0xf47a
// ================================================
// 0xf47a: db 0x01 0xce 0xec '   '

// ================================================
// 0xf47d: WORD 'WF47F' codep=0x1d29 wordp=0xf47f
// ================================================
// 0xf47f: db 0x02 0x14 0xf4 0xa2 0xf3 '     '

// ================================================
// 0xf484: WORD 'DO-SA' codep=0x224c wordp=0xf486 params=1 returns=0
// ================================================

void DO_dash_SA() // DO-SA
{
  unsigned short int i, imax;
  if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
  if (Pop() == 0) return;
  Push(pp_STOP_dash_SA); // STOP-SA
  OFF(); // OFF
  COUNT(); // COUNT
  Push(Pop() * 2); //  2*
  OVER(); // OVER
  Push(Pop() + Pop()); // +
  SWAP(); // SWAP

  i = Pop();
  imax = Pop();
  do // (DO)
  {
    Push(i); // I
    GetEXECUTE(); // @EXECUTE
    Push(Read16(pp_STOP_dash_SA)); // STOP-SA @
    if (Pop() != 0)
    {
      imax = i; // LEAVE
    }
    DrawSORD(); // .SORD
    Push(2);
    int step = Pop();
    i += step;
    if (((step>=0) && (i>=imax)) || ((step<0) && (i<=imax))) break;
  } while(1); // (+LOOP)

}


// ================================================
// 0xf4b4: WORD 'SA-CASE' codep=0x4a4f wordp=0xf4c0
// ================================================

void SA_dash_CASE() // SA-CASE
{
  switch(Pop()) // SA-CASE
  {
  case 1:
    Push(pp_SA_dash_ELOWAN); // SA-ELOWAN
    break;
  case 7:
    Push(pp_SA_dash_THRYNN); // SA-THRYNN
    break;
  case 8:
    Push(pp_SA_dash_VELOX); // SA-VELOX
    break;
  case 3:
    Push(pp_SA_dash_MECHAN); // SA-MECHAN
    break;
  case 10:
    Push(pp_SA_dash_VPROBE); // SA-VPROBE
    break;
  case 21:
    Push(pp_WF47F); // WF47F
    break;
  default:
    Push(0);
    break;

  }
}

// ================================================
// 0xf4dc: WORD 'WF4DE' codep=0x224c wordp=0xf4de
// ================================================

void WF4DE() // WF4DE
{
  do
  {
    TIME(); // TIME
    _2_at_(); // 2@
    Push(pp_OK_dash_TALK); // OK-TALK
    _2_at_(); // 2@
    D_gt_(); // D>
    Exec("IsTERMINAL"); // call of word 0x25bc '(?TERMINAL)'
    Push(Pop() | Pop()); // OR
  } while(Pop() == 0);
}


// ================================================
// 0xf4f2: WORD '(XCOMM)' codep=0x224c wordp=0xf4fe
// ================================================
// entry

void _ro_XCOMM_rc_() // (XCOMM)
{
  WF4DE(); // WF4DE
  Push(pp__ro_AORIGINATOR_rc_); // (AORIGINATOR)
  Get_gt_C_plus_S(); // @>C+S
  GetINST_dash_SPECIES(); // @INST-SPECIES
  ICLOSE(); // ICLOSE
  SA_dash_CASE(); // SA-CASE case
  DO_dash_SA(); // DO-SA
  WF4DE(); // WF4DE
}

// 0xf510: db 0x58 0x43 0x4f 0x4d 0x2d 0x56 0x4f 0x43 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x20 0x53 0x50 0x45 0x43 0x20 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x38 0x2f 0x31 0x33 0x2f 0x38 0x35 0x20 0x41 0x57 0x4b 0x20 0x29 0x31 0x31 0x37 0x35 0xcf 0x8b 0x90 0x16 0x43 0x4f 0x4d 0x4d 0x2d 0x56 0x4f 0x43 0x00 'XCOM-VOC________________________ SPEC -------------8/13/85 AWK )1175    COMM-VOC '

