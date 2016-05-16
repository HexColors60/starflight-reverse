// store offset = 0xf200
// overlay size   = 0x0360
// name = 'BLT-VOC_________________'

// =================================
// =========== DICTIONARY ==========
// =================================
// 1703:         .RUNBIT bitfield: 0 0 0  codep:0xf220 parp:0xf220 size:0x00cd
// 1704:          .PARMS bitfield: 0 0 0  codep:0x224c parp:0xf2f8 size:0x0059
// 1705:          BRIGHT bitfield: 0 0 0  codep:0x1d29 parp:0xf35c size:0x0002
// 1706:           2TEMP bitfield: 0 0 0  codep:0x1d29 parp:0xf368 size:0x0002
// 1707:      .EGARUNBIT bitfield: 0 0 0  codep:0xf379 parp:0xf379 size:0x00e1
// 1708:         .HYBRID bitfield: 0 0 0  codep:0x224c parp:0xf466 size:0x0094
// 1709:          PADSEG bitfield: 0 0 0  codep:0x224c parp:0xf505 size:0x0008
// 1710:        @.HYBRID bitfield: 0 0 0  codep:0x224c parp:0xf51a size:0x000c
// 1711:           SETUP bitfield: 0 0 0  codep:0x224c parp:0xf530 size:0x0030

// =================================
// =========== VARIABLES ===========
// =================================
unsigned char BRIGHT[2] = {0x2e, 0x52};
unsigned char 2TEMP[2] = {0x20, 0x2e};



// 0xf212: db 0x35 0x00 '5 '
  
// ================================================
// 0xf214: WORD '.RUNBIT' codep=0xf220 parp=0xf220
// ================================================
// 0xf220: cli    
// 0xf221: push   word ptr [586E]
// 0xf225: pop    word ptr [561C]
// 0xf229: push   word ptr [5863]
// 0xf22d: pop    word ptr [5613]
// 0xf231: pop    bx
// 0xf232: pop    es
// 0xf233: es:    
// 0xf234: mov    cx,[bx]
// 0xf236: push   es
// 0xf237: pop    word ptr [58AA]
// 0xf23b: push   si
// 0xf23c: push   di
// 0xf23d: add    bx,02
// 0xf240: mov    [562E],bx
// 0xf244: mov    ax,[586E]
// 0xf248: add    ax,[5892]
// 0xf24c: mov    [5625],ax
// 0xf250: push   cx
// 0xf251: xor    cx,cx
// 0xf253: push   word ptr [58AA]
// 0xf257: pop    es
// 0xf258: es:    
// 0xf259: mov    cl,[bx]
// 0xf25b: inc    bx
// 0xf25c: or     cx,cx
// 0xf25e: jz     F2DC
// 0xf260: mov    ax,bx
// 0xf262: dec    ax
// 0xf263: sub    ax,[562E]
// 0xf267: and    ax,0001
// 0xf26a: jnz    F2BE
// 0xf26c: push   word ptr [5648]
// 0xf270: pop    es
// 0xf271: mov    dx,[5613]
// 0xf275: shl    dx,1
// 0xf277: mov    ax,[561C]
// 0xf27b: add    dx,[563A]
// 0xf27f: mov    di,dx
// 0xf281: shr    ax,1
// 0xf283: mov    dx,00F0
// 0xf286: jae    F28A
// 0xf288: mov    dl,0F
// 0xf28a: add    ax,[di]
// 0xf28c: mov    di,ax
// 0xf28e: es:    
// 0xf28f: mov    al,[di]
// 0xf291: mov    dh,[55F2]
// 0xf295: and    dh,dl
// 0xf297: not    dl
// 0xf299: and    al,dl
// 0xf29b: or     al,dh
// 0xf29d: es:    
// 0xf29e: mov    [di],al
// 0xf2a0: inc    word ptr [561C]
// 0xf2a4: mov    ax,[561C]
// 0xf2a8: cmp    ax,[5625]
// 0xf2ac: jnz    F2BA
// 0xf2ae: push   word ptr [586E]
// 0xf2b2: pop    word ptr [561C]
// 0xf2b6: dec    word ptr [5613]
// 0xf2ba: loop   F271
// 0xf2bc: jmp    F2DC
// 0xf2be: add    [561C],cx
// 0xf2c2: mov    ax,[561C]
// 0xf2c6: cmp    ax,[5625]
// 0xf2ca: js     F2D8
// 0xf2cc: sub    ax,[5892]
// 0xf2d0: dec    word ptr [5613]
// 0xf2d4: jmp    F2C6
// 0xf2d6: jmp    F2DC
// 0xf2d8: mov    [561C],ax
// 0xf2dc: pop    cx
// 0xf2dd: dec    cx
// 0xf2de: jz     F2E3
// 0xf2e0: jmp    F250
// 0xf2e3: pop    di
// 0xf2e4: pop    si
// 0xf2e5: push   ds
// 0xf2e6: pop    es
// 0xf2e7: sti    
// 0xf2e8: lodsw
// 0xf2e9: mov    bx,ax
// 0xf2eb: jmp    word ptr [bx]

// ================================================
// 0xf2ed: WORD '.PARMS' codep=0x224c parp=0xf2f8
// ================================================

void .PARMS()
{
  CR 
  (.") string 4 "x2= "
  pp_X2 @ Push(cc_4); .R();
  
  (.") string 4 "x1= "
  pp_X1 @ Push(cc_4); .R();
  
  (.") string 3 "st "
  pp_XSTART @ Push(cc_4); .R();
  
  (.") string 3 "en "
  pp_XEND @ Push(cc_4); .R();
  
  (.") string 2 "y "
  pp_YLINE @ Push(cc_4); .R();
  KEY();
  Push(0x000d); = 
  if (Pop() == 0) goto label538;
  QUIT();
  
  label538:
  
}


// ================================================
// 0xf351: WORD 'BRIGHT' codep=0x1d29 parp=0xf35c
// ================================================
// 0xf35c: db 0x2e 0x52 '.R'
  
// ================================================
// 0xf35e: WORD '2TEMP' codep=0x1d29 parp=0xf368
// ================================================
// 0xf368: db 0x20 0x2e ' .'
  
// ================================================
// 0xf36a: WORD '.EGARUNBIT' codep=0xf379 parp=0xf379
// ================================================
// 0xf379: mov    dx,03CE
// 0xf37c: mov    ah,[55F2]
// 0xf380: mov    al,00
// 0xf382: out    dx,al
// 0xf383: inc    dx
// 0xf384: xchg   ah,al
// 0xf386: out    dx,al
// 0xf387: mov    bx,[586E]
// 0xf38b: mov    [561C],bx
// 0xf38f: mov    ax,[5892]
// 0xf393: dec    ax
// 0xf394: add    bx,ax
// 0xf396: mov    [F35C],bx
// 0xf39a: mov    bx,[5863]
// 0xf39e: mov    [5613],bx
// 0xf3a2: mov    dx,es
// 0xf3a4: pop    bx
// 0xf3a5: pop    es
// 0xf3a6: push   dx
// 0xf3a7: es:    
// 0xf3a8: mov    cx,[bx]
// 0xf3aa: mov    [F368],cx
// 0xf3ae: sub    cx,cx
// 0xf3b0: push   bx
// 0xf3b1: push   cx
// 0xf3b2: add    bx,cx
// 0xf3b4: inc    bx
// 0xf3b5: inc    bx
// 0xf3b6: sub    ax,ax
// 0xf3b8: es:    
// 0xf3b9: mov    al,[bx]
// 0xf3bb: and    ax,00FF
// 0xf3be: jnz    F3C3
// 0xf3c0: jmp    F448
// 0xf3c3: mov    cx,[561C]
// 0xf3c7: add    cx,ax
// 0xf3c9: dec    cx
// 0xf3ca: mov    [562E],cx
// 0xf3ce: cmp    cx,[F35C]
// 0xf3d2: jbe    F41B
// 0xf3d4: mov    bx,sp
// 0xf3d6: mov    ax,[bx]
// 0xf3d8: and    ax,0001
// 0xf3db: jnz    F3F8
// 0xf3dd: mov    ax,[561C]
// 0xf3e1: mov    [57B7],ax
// 0xf3e5: mov    ax,[F35C]
// 0xf3e9: mov    [57C2],ax
// 0xf3ed: mov    ax,[5613]
// 0xf3f1: mov    [57CE],ax
// 0xf3f5: call   9125
// 0xf3f8: mov    ax,[562E]
// 0xf3fc: mov    cx,[5892]
// 0xf400: sub    ax,cx
// 0xf402: mov    [562E],ax
// 0xf406: mov    ax,[586E]
// 0xf40a: mov    [561C],ax
// 0xf40e: dec    word ptr [5613]
// 0xf412: mov    cx,[562E]
// 0xf416: jmp    F3CE
// 0xf419: jmp    F448
// 0xf41b: mov    bx,sp
// 0xf41d: mov    ax,[bx]
// 0xf41f: and    ax,0001
// 0xf422: jnz    F43F
// 0xf424: mov    ax,[561C]
// 0xf428: mov    [57B7],ax
// 0xf42c: mov    ax,[562E]
// 0xf430: mov    [57C2],ax
// 0xf434: mov    ax,[5613]
// 0xf438: mov    [57CE],ax
// 0xf43c: call   9125
// 0xf43f: mov    ax,[562E]
// 0xf443: inc    ax
// 0xf444: mov    [561C],ax
// 0xf448: pop    cx
// 0xf449: pop    bx
// 0xf44a: inc    cx
// 0xf44b: cmp    cx,[F368]
// 0xf44f: jz     F454
// 0xf451: jmp    F3B0
// 0xf454: pop    es
// 0xf455: lodsw
// 0xf456: mov    bx,ax
// 0xf458: jmp    word ptr [bx]

// ================================================
// 0xf45a: WORD '.HYBRID' codep=0x224c parp=0xf466
// ================================================

void .HYBRID()
{
  DUP pp_BLTSEG !();
  >R Push(cc_5); pp_ABLT !();
  I Push(2); LC@ pp_LBLT !();
  I Push(cc_3); LC@ pp_WBLT !();
  R> Push(cc_4); LC@ Push(0); 
  do // (DO)
  {
  pp_ABLT @ >R pp_BLTSEG @ >R Push(cc_4); pp_ABLT +!();
  I I' 2+ LC@ ?>EGA();
  pp_COLOR !();
  R> R> Push(cc_3); + LC@ 
  if (Pop() == 0) goto label534;
  pp_BLTSEG @ pp_ABLT @ pp_?EGA @ 
  if (Pop() == 0) goto label535;
  .EGARUNBIT 
  goto label537;
  
  label535:
  .RUNBIT 
  label537:
  
  goto label536;
  
  label534:
  {BLT} 
  label536:
  pp_BLTSEG @ pp_ABLT @ Push(cc_4); - L@ Push(cc_4); - pp_ABLT +!();
  
  } while(...); // (LOOP) 0xff9c
  
}


// ================================================
// 0xf4fa: WORD 'PADSEG' codep=0x224c parp=0xf505
// ================================================

void PADSEG()
{
  PAD();
  ADDR>SEG 1+ 
}


// ================================================
// 0xf50d: WORD '@.HYBRID' codep=0x224c parp=0xf51a
// ================================================

void @.HYBRID()
{
  PADSEG();
  SWAP FILE<();
  PADSEG();
  .HYBRID();
  
}


// ================================================
// 0xf526: WORD 'SETUP' codep=0x224c parp=0xf530
// ================================================

void SETUP()
{
  >LORES();
  >MONO();
  >A();
  DARK();
  Push(0); Push(0x00c7); POS.();
  NODRIVES();
  MOUNTA();
  MOUNTB();
  
}

// 0xf548: db 0x42 0x4c 0x54 0x2d 0x56 0x4f 0x43 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x00 'BLT-VOC_________________ '
  