// ====== OVERLAY 'LAND-OV' ======
// store offset = 0xf190
// overlay size   = 0x03d0

#include"../../emul/cpu.h"

#include"../data.h"
#include"../../emul/starflt1.h"


// =================================
// =========== DICTIONARY ==========
// =================================
//      UNK_0xf1a6  codep:0x7420 parp:0xf1a6 size:0x0003 C-string:'UNK_0xf1a6'
//      UNK_0xf1ab  codep:0x7394 parp:0xf1ab size:0x0006 C-string:'UNK_0xf1ab'
//      UNK_0xf1b3  codep:0x1d29 parp:0xf1b3 size:0x0002 C-string:'UNK_0xf1b3'
//      UNK_0xf1b7  codep:0x224c parp:0xf1b7 size:0x002e C-string:'UNK_0xf1b7'
//      UNK_0xf1e7  codep:0x224c parp:0xf1e7 size:0x0050 C-string:'UNK_0xf1e7'
//      UNK_0xf239  codep:0x224c parp:0xf239 size:0x0010 C-string:'UNK_0xf239'
//      UNK_0xf24b  codep:0x224c parp:0xf24b size:0x0014 C-string:'UNK_0xf24b'
//      UNK_0xf261  codep:0x224c parp:0xf261 size:0x0065 C-string:'UNK_0xf261'
//      UNK_0xf2c8  codep:0x224c parp:0xf2c8 size:0x00d2 C-string:'UNK_0xf2c8'
//      UNK_0xf39c  codep:0x224c parp:0xf39c size:0x0014 C-string:'UNK_0xf39c'
//      UNK_0xf3b2  codep:0x224c parp:0xf3b2 size:0x0037 C-string:'UNK_0xf3b2'
//      UNK_0xf3eb  codep:0x224c parp:0xf3eb size:0x0020 C-string:'UNK_0xf3eb'
//      UNK_0xf40d  codep:0x224c parp:0xf40d size:0x0037 C-string:'UNK_0xf40d'
//      UNK_0xf446  codep:0x224c parp:0xf446 size:0x000a C-string:'UNK_0xf446'
//      UNK_0xf452  codep:0x224c parp:0xf452 size:0x004c C-string:'UNK_0xf452'
//      UNK_0xf4a0  codep:0x224c parp:0xf4a0 size:0x002c C-string:'UNK_0xf4a0'
//      UNK_0xf4ce  codep:0x224c parp:0xf4ce size:0x0036 C-string:'UNK_0xf4ce'
//           ?LAND  codep:0x224c parp:0xf50e size:0x0018 C-string:'IsLAND'
//         ?LAUNCH  codep:0x224c parp:0xf532 size:0x0000 C-string:'IsLAUNCH'

// =================================
// ============= EXTERN ============
// =================================
extern const unsigned short int cc__star_MAPSCA; // *MAPSCA
extern const unsigned short int pp_IsFUEL_dash_D; // ?FUEL-D
extern const unsigned short int pp_IsG_dash_AWAR; // ?G-AWAR
extern const unsigned short int pp_GWF; // GWF
extern const unsigned short int pp_CONTEXT_3; // CONTEXT_3
extern const unsigned short int pp__ro_SYSTEM; // (SYSTEM
extern const unsigned short int pp__ro_ORBIT_rc_; // (ORBIT)
extern const unsigned short int pp__ro_PLANET; // (PLANET
extern Color BLACK; // BLACK
extern Color YELLOW; // YELLOW
extern IFieldType INST_dash_QT; // INST-QT
extern IFieldType INST_dash_X; // INST-X
extern IFieldType INST_dash_Y; // INST-Y
void COUNT(); // COUNT
void MAX(); // MAX
void MIN(); // MIN
void BEEP(); // BEEP
void DrawR(); // .R
void Is(); // ?
void KEY_2(); // KEY_2
void SQRT(); // SQRT
void Store_2(); // !_2
void ON_2(); // ON_2
void _099(); // 099
void CDROP(); // CDROP
void ICLOSE(); // ICLOSE
void _gt_C_plus_S(); // >C+S
void Get_gt_C_plus_S(); // @>C+S
void IOPEN(); // IOPEN
void IFIND(); // IFIND
void StoreCOLOR(); // !COLOR
void BYE_2(); // BYE_2
void CTERASE(); // CTERASE
void _gt_SND(); // >SND
void CTCR(); // CTCR
void TTY_dash_SCR(); // TTY-SCR
void CTINIT(); // CTINIT
void DrawTTY(); // .TTY
void _i_KEY(); // 'KEY
void OVER(); // OVER
void SWAP(); // SWAP
void _slash_(); // /
void _dash_(); // -
void _gt_(); // >
void _st_(); // <


// =================================
// =========== VARIABLES ===========
// =================================
const unsigned short int pp_UNK_0xf1b3 = 0xf1b3; // UNK_0xf1b3 size: 2
// {0x00, 0x00}




// 0xf1a2: db 0x3c 0x00 '< '

// ================================================
// 0xf1a4: WORD 'UNK_0xf1a6' codep=0x7420 parp=0xf1a6
// ================================================
IFieldType UNK_0xf1a6 = {SHIPIDX, 0x34, 0x0f};

// ================================================
// 0xf1a9: WORD 'UNK_0xf1ab' codep=0x7394 parp=0xf1ab
// ================================================
LoadDataType UNK_0xf1ab = {PLANETIDX, 0x02, 0x02, 0x17, 0x6c49};

// ================================================
// 0xf1b1: WORD 'UNK_0xf1b3' codep=0x1d29 parp=0xf1b3
// ================================================
// 0xf1b3: db 0x00 0x00 '  '

// ================================================
// 0xf1b5: WORD 'UNK_0xf1b7' codep=0x224c parp=0xf1b7
// ================================================

void UNK_0xf1b7() // UNK_0xf1b7
{
  Push(pp__ro_PLANET); // (PLANET
  Get_gt_C_plus_S(); // @>C+S
  LoadData(UNK_0xf1ab); // from 'PLANET'
  Push(Read16(Pop())); // @
  Push(Read16(regsp)); // DUP
  Push(0x0320);
  _gt_(); // >
  if (Pop() != 0)
  {
    Push(0x0320);
    _dash_(); // -
    Push(0);
    SQRT(); // SQRT
    Push(0x000a);
    Push(Pop() * Pop()); // *
    Push(0x0320);
    Push(Pop() + Pop()); // +
  }
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xf1e5: WORD 'UNK_0xf1e7' codep=0x224c parp=0xf1e7 params=3 returns=1
// ================================================

void UNK_0xf1e7() // UNK_0xf1e7
{
  Push2Words("*STARSH");
  _gt_C_plus_S(); // >C+S
  IOPEN(); // IOPEN
  Push(0x000b);
  Push(0x000a);
  IFIND(); // IFIND
  if (Pop() != 0)
  {
    IOPEN(); // IOPEN
    Push(0x001a);
    Push(6);
    IFIND(); // IFIND
    Push(0x65e1+INST_dash_QT.offset); // IFIELD
    Push(Read16(Pop())); // @
    Push(Pop() * Pop()); // *
    Push(pp_UNK_0xf1b3); // UNK_0xf1b3
    Push(Read16(Pop())); // @
    if (Pop() != 0)
    {
      UNK_0xf1b7(); // UNK_0xf1b7
      Push(0x0028);
      _slash_(); // /
      SWAP(); // SWAP
      OVER(); // OVER
      _dash_(); // -
      Push(0);
      MAX(); // MAX
      Push(0x65e1+INST_dash_QT.offset); // IFIELD
      Store_2(); // !_2
    }
    CDROP(); // CDROP
  } else
  {
    Push(0);
  }
  CDROP(); // CDROP
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xf237: WORD 'UNK_0xf239' codep=0x224c parp=0xf239
// ================================================

void UNK_0xf239() // UNK_0xf239
{
  SetColor(BLACK);
  StoreCOLOR(); // !COLOR
  SetColor(YELLOW);
  Push(0x4fa9); // probable 'BLACK'
  Store_2(); // !_2
  CTERASE(); // CTERASE
}


// ================================================
// 0xf249: WORD 'UNK_0xf24b' codep=0x224c parp=0xf24b params=3 returns=0
// ================================================

void UNK_0xf24b() // UNK_0xf24b
{
  Push(pp_UNK_0xf1b3); // UNK_0xf1b3
  ON_2(); // ON_2
  UNK_0xf1e7(); // UNK_0xf1e7
  Pop(); // DROP
  Push(pp_UNK_0xf1b3); // UNK_0xf1b3
  _099(); // 099
  Push(0xb6ec); // probable '=CARGO'
  MODULE(); // MODULE
}


// ================================================
// 0xf25f: WORD 'UNK_0xf261' codep=0x224c parp=0xf261
// ================================================

void UNK_0xf261() // UNK_0xf261
{
  CTINIT(); // CTINIT
  UNK_0xf239(); // UNK_0xf239
  SET_STR_AS_PARAM("CAPTAIN, THE SHIP IS BEING CRUSHED BY");
  Exec("TYPE"); // call of word 0x2690 '(TYPE)'
  CTCR(); // CTCR
  SET_STR_AS_PARAM("EXTREME GRAVITY. THE ...");
  Exec("TYPE"); // call of word 0x2690 '(TYPE)'
  Push(0x1388);
  Push(0x03e8);
  Push(1);
  _gt_SND(); // >SND
  _i_KEY(); // 'KEY
  Pop(); // DROP
  KEY_2(); // KEY_2
  Pop(); // DROP
  BYE_2(); // BYE_2
}


// ================================================
// 0xf2c6: WORD 'UNK_0xf2c8' codep=0x224c parp=0xf2c8
// ================================================

void UNK_0xf2c8() // UNK_0xf2c8
{
  CTINIT(); // CTINIT
  UNK_0xf239(); // UNK_0xf239
  Push2Words("*SHIP");
  _gt_C_plus_S(); // >C+S
  _i_KEY(); // 'KEY
  Pop(); // DROP
  do
  {
    TTY_dash_SCR(); // TTY-SCR
    TTY_dash_SCR(); // TTY-SCR
    SET_STR_AS_PARAM("EMERGENCY LOCATOR TRANSMISSION:");
    DrawTTY(); // .TTY
    SET_STR_AS_PARAM(" STARSHIP ISS ");
    DrawTTY(); // .TTY
    Push(0x65e1+UNK_0xf1a6.offset); // IFIELD
    COUNT(); // COUNT
    Exec("TYPE"); // call of word 0x2690 '(TYPE)'
    SET_STR_AS_PARAM(" CRASHED ON PLANET ");
    DrawTTY(); // .TTY
    Push(pp__ro_ORBIT_rc_); // (ORBIT)
    Get_gt_C_plus_S(); // @>C+S
    Push(0x65e1+INST_dash_QT.offset); // IFIELD
    Is(); // ?
    ICLOSE(); // ICLOSE
    SET_STR_AS_PARAM(" IN SYSTEM ");
    DrawTTY(); // .TTY
    Push(pp__ro_SYSTEM); // (SYSTEM
    Get_gt_C_plus_S(); // @>C+S
    Push(0x65e1+INST_dash_X.offset); // IFIELD
    Push(Read16(Pop())); // @
    Push(Read16(cc__star_MAPSCA)); // *MAPSCA
    _slash_(); // /
    Push(0);
    DrawR(); // .R
    PRINT(",", 1); // (.")
    Push(0x65e1+INST_dash_Y.offset); // IFIELD
    Push(Read16(Pop())); // @
    Push(Read16(cc__star_MAPSCA)); // *MAPSCA
    _slash_(); // /
    Push(0);
    DrawR(); // .R
    ICLOSE(); // ICLOSE
    SET_STR_AS_PARAM("NO SURVIVORS");
    DrawTTY(); // .TTY
    TTY_dash_SCR(); // TTY-SCR
    TTY_dash_SCR(); // TTY-SCR
    Push(0x1388);
    Push(3);
    Push(0x0032);
    Push(0x03e8);
    Push(2);
    _gt_SND(); // >SND
    _i_KEY(); // 'KEY
  } while(Pop() == 0);
  BYE_2(); // BYE_2
}


// ================================================
// 0xf39a: WORD 'UNK_0xf39c' codep=0x224c parp=0xf39c
// ================================================

void UNK_0xf39c() // UNK_0xf39c
{
  UNK_0xf1e7(); // UNK_0xf1e7
  Push(0x0140);
  MIN(); // MIN
  Push(0x0028);
  Push(Pop() * Pop()); // *
  UNK_0xf1b7(); // UNK_0xf1b7
  _st_(); // <
}


// ================================================
// 0xf3b0: WORD 'UNK_0xf3b2' codep=0x224c parp=0xf3b2
// ================================================

void UNK_0xf3b2() // UNK_0xf3b2
{
  UNK_0xf39c(); // UNK_0xf39c
  Push(Read16(regsp)); // DUP
  if (Pop() == 0) return;
  CTINIT(); // CTINIT
  CTERASE(); // CTERASE
  SET_STR_AS_PARAM("INSUFFICIENT FUEL FOR SAFE LANDING");
  Exec("TYPE"); // call of word 0x2690 '(TYPE)'
  BEEP(); // BEEP
}


// ================================================
// 0xf3e9: WORD 'UNK_0xf3eb' codep=0x224c parp=0xf3eb
// ================================================

void UNK_0xf3eb() // UNK_0xf3eb
{
  UNK_0xf1e7(); // UNK_0xf1e7
  Push(0x0140);
  MIN(); // MIN
  Push(Read16(regsp)); // DUP
  Push(pp_CONTEXT_3); // CONTEXT_3
  Push(Read16(Pop())); // @
  if (Pop() == 0) Push(1); else Push(0); // 0=
  Push(Pop() * Pop()); // *
  Push(Pop() + Pop()); // +
  Push(0x0014);
  Push(Pop() * Pop()); // *
  UNK_0xf1b7(); // UNK_0xf1b7
  _st_(); // <
}


// ================================================
// 0xf40b: WORD 'UNK_0xf40d' codep=0x224c parp=0xf40d
// ================================================

void UNK_0xf40d() // UNK_0xf40d
{
  UNK_0xf3eb(); // UNK_0xf3eb
  Push(Read16(regsp)); // DUP
  if (Pop() == 0) return;
  CTINIT(); // CTINIT
  CTERASE(); // CTERASE
  SET_STR_AS_PARAM("INSUFFICIENT FUEL FOR RE-LAUNCHING");
  Exec("TYPE"); // call of word 0x2690 '(TYPE)'
  BEEP(); // BEEP
}


// ================================================
// 0xf444: WORD 'UNK_0xf446' codep=0x224c parp=0xf446
// ================================================

void UNK_0xf446() // UNK_0xf446
{
  UNK_0xf1b7(); // UNK_0xf1b7
  Push(0x031f);
  _gt_(); // >
}


// ================================================
// 0xf450: WORD 'UNK_0xf452' codep=0x224c parp=0xf452
// ================================================

void UNK_0xf452() // UNK_0xf452
{
  UNK_0xf446(); // UNK_0xf446
  Push(Read16(regsp)); // DUP
  if (Pop() == 0) return;
  CTINIT(); // CTINIT
  CTERASE(); // CTERASE
  SET_STR_AS_PARAM("THIS PLANET'S GRAVITY WILL CRUSH THE");
  Exec("TYPE"); // call of word 0x2690 '(TYPE)'
  CTCR(); // CTCR
  SET_STR_AS_PARAM("SHIP'S HULL.");
  Exec("TYPE"); // call of word 0x2690 '(TYPE)'
  BEEP(); // BEEP
}


// ================================================
// 0xf49e: WORD 'UNK_0xf4a0' codep=0x224c parp=0xf4a0
// ================================================

void UNK_0xf4a0() // UNK_0xf4a0
{
  UNK_0xf39c(); // UNK_0xf39c
  Push(pp_IsFUEL_dash_D); // ?FUEL-D
  Store_2(); // !_2
  Push(-1);
  Push(pp_GWF); // GWF
  Store_2(); // !_2
  UNK_0xf24b(); // UNK_0xf24b
  Push(0xbd55); // probable 'DESCE'
  MODULE(); // MODULE
  Push(pp_IsFUEL_dash_D); // ?FUEL-D
  Push(Read16(Pop())); // @
  if (Pop() != 0)
  {
    UNK_0xf2c8(); // UNK_0xf2c8
    return;
  }
  UNK_0xf446(); // UNK_0xf446
  if (Pop() == 0) return;
  UNK_0xf261(); // UNK_0xf261
}


// ================================================
// 0xf4cc: WORD 'UNK_0xf4ce' codep=0x224c parp=0xf4ce params=0 returns=0
// ================================================

void UNK_0xf4ce() // UNK_0xf4ce
{
  Push(pp_GWF); // GWF
  Push(Read16(Pop())); // @
  if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
  if (Pop() == 0) Push(1); else Push(0); // NOT
  if (Pop() == 0) return;
  UNK_0xf452(); // UNK_0xf452
  if (Pop() != 0)
  {
    Push(pp_GWF); // GWF
    ON_2(); // ON_2
  } else
  {
    UNK_0xf3b2(); // UNK_0xf3b2
    if (Pop() != 0)
    {
      Push(pp_GWF); // GWF
      ON_2(); // ON_2
    } else
    {
      UNK_0xf40d(); // UNK_0xf40d
      Push(pp_GWF); // GWF
      Store_2(); // !_2
    }
  }
  Push(pp_GWF); // GWF
  Push(Read16(Pop())); // @
  if (Pop() == 0) Push(1); else Push(0); // NOT
}


// ================================================
// 0xf504: WORD '?LAND' codep=0x224c parp=0xf50e
// ================================================
// entry

void IsLAND() // ?LAND
{
  Push(pp_IsG_dash_AWAR); // ?G-AWAR
  Push(Read16(Pop())); // @
  if (Pop() != 0)
  {
    UNK_0xf4ce(); // UNK_0xf4ce
    if (Pop() != 0)
    {
      UNK_0xf4a0(); // UNK_0xf4a0
    }
    return;
  }
  UNK_0xf4a0(); // UNK_0xf4a0
}


// ================================================
// 0xf526: WORD '?LAUNCH' codep=0x224c parp=0xf532
// ================================================
// entry

void IsLAUNCH() // ?LAUNCH
{
  UNK_0xf40d(); // UNK_0xf40d
  if (Pop() == 0) Push(1); else Push(0); // NOT
  Push(Read16(regsp)); // DUP
  if (Pop() == 0) return;
  UNK_0xf24b(); // UNK_0xf24b
}

// 0xf540: db 0x4c 0x41 0x4e 0x44 0x2d 0x56 0x4f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x00 'LAND-VO_________________________ '

