                                      1 ;--------------------------------------------------------
                                      2 ; File Created by SDCC : free open source ANSI-C Compiler
                                      3 ; Version 3.5.0 #9253 (Apr  3 2018) (Linux)
                                      4 ; This file was generated Sat Jun 29 10:23:46 2019
                                      5 ;--------------------------------------------------------
                                      6 	.module aes_test
                                      7 	.optsdcc -mmcs51 --model-small
                                      8 	
                                      9 ;--------------------------------------------------------
                                     10 ; Public variables in this module
                                     11 ;--------------------------------------------------------
                                     12 	.globl _main
                                     13 	.globl _quit
                                     14 	.globl _TF2
                                     15 	.globl _EXF2
                                     16 	.globl _RCLK
                                     17 	.globl _TCLK
                                     18 	.globl _EXEN2
                                     19 	.globl _TR2
                                     20 	.globl _C_T2
                                     21 	.globl _CP_RL2
                                     22 	.globl _T2CON_7
                                     23 	.globl _T2CON_6
                                     24 	.globl _T2CON_5
                                     25 	.globl _T2CON_4
                                     26 	.globl _T2CON_3
                                     27 	.globl _T2CON_2
                                     28 	.globl _T2CON_1
                                     29 	.globl _T2CON_0
                                     30 	.globl _PT2
                                     31 	.globl _ET2
                                     32 	.globl _CY
                                     33 	.globl _AC
                                     34 	.globl _F0
                                     35 	.globl _RS1
                                     36 	.globl _RS0
                                     37 	.globl _OV
                                     38 	.globl _F1
                                     39 	.globl _P
                                     40 	.globl _PS
                                     41 	.globl _PT1
                                     42 	.globl _PX1
                                     43 	.globl _PT0
                                     44 	.globl _PX0
                                     45 	.globl _RD
                                     46 	.globl _WR
                                     47 	.globl _T1
                                     48 	.globl _T0
                                     49 	.globl _INT1
                                     50 	.globl _INT0
                                     51 	.globl _TXD
                                     52 	.globl _RXD
                                     53 	.globl _P3_7
                                     54 	.globl _P3_6
                                     55 	.globl _P3_5
                                     56 	.globl _P3_4
                                     57 	.globl _P3_3
                                     58 	.globl _P3_2
                                     59 	.globl _P3_1
                                     60 	.globl _P3_0
                                     61 	.globl _EA
                                     62 	.globl _ES
                                     63 	.globl _ET1
                                     64 	.globl _EX1
                                     65 	.globl _ET0
                                     66 	.globl _EX0
                                     67 	.globl _P2_7
                                     68 	.globl _P2_6
                                     69 	.globl _P2_5
                                     70 	.globl _P2_4
                                     71 	.globl _P2_3
                                     72 	.globl _P2_2
                                     73 	.globl _P2_1
                                     74 	.globl _P2_0
                                     75 	.globl _SM0
                                     76 	.globl _SM1
                                     77 	.globl _SM2
                                     78 	.globl _REN
                                     79 	.globl _TB8
                                     80 	.globl _RB8
                                     81 	.globl _TI
                                     82 	.globl _RI
                                     83 	.globl _P1_7
                                     84 	.globl _P1_6
                                     85 	.globl _P1_5
                                     86 	.globl _P1_4
                                     87 	.globl _P1_3
                                     88 	.globl _P1_2
                                     89 	.globl _P1_1
                                     90 	.globl _P1_0
                                     91 	.globl _TF1
                                     92 	.globl _TR1
                                     93 	.globl _TF0
                                     94 	.globl _TR0
                                     95 	.globl _IE1
                                     96 	.globl _IT1
                                     97 	.globl _IE0
                                     98 	.globl _IT0
                                     99 	.globl _P0_7
                                    100 	.globl _P0_6
                                    101 	.globl _P0_5
                                    102 	.globl _P0_4
                                    103 	.globl _P0_3
                                    104 	.globl _P0_2
                                    105 	.globl _P0_1
                                    106 	.globl _P0_0
                                    107 	.globl _TH2
                                    108 	.globl _TL2
                                    109 	.globl _RCAP2H
                                    110 	.globl _RCAP2L
                                    111 	.globl _T2CON
                                    112 	.globl _B
                                    113 	.globl _ACC
                                    114 	.globl _PSW
                                    115 	.globl _IP
                                    116 	.globl _P3
                                    117 	.globl _IE
                                    118 	.globl _P2
                                    119 	.globl _SBUF
                                    120 	.globl _SCON
                                    121 	.globl _P1
                                    122 	.globl _TH1
                                    123 	.globl _TH0
                                    124 	.globl _TL1
                                    125 	.globl _TL0
                                    126 	.globl _TMOD
                                    127 	.globl _TCON
                                    128 	.globl _PCON
                                    129 	.globl _DPH
                                    130 	.globl _DPL
                                    131 	.globl _SP
                                    132 	.globl _P0
                                    133 	.globl _pt_rden
                                    134 	.globl _pt_wren
                                    135 	.globl _data
                                    136 	.globl _aes_reg_key1
                                    137 	.globl _aes_reg_key0
                                    138 	.globl _aes_reg_ctr
                                    139 	.globl _aes_reg_len
                                    140 	.globl _aes_reg_addr
                                    141 	.globl _aes_reg_state
                                    142 	.globl _aes_reg_start
                                    143 ;--------------------------------------------------------
                                    144 ; special function registers
                                    145 ;--------------------------------------------------------
                                    146 	.area RSEG    (ABS,DATA)
      000000                        147 	.org 0x0000
                           000080   148 _P0	=	0x0080
                           000081   149 _SP	=	0x0081
                           000082   150 _DPL	=	0x0082
                           000083   151 _DPH	=	0x0083
                           000087   152 _PCON	=	0x0087
                           000088   153 _TCON	=	0x0088
                           000089   154 _TMOD	=	0x0089
                           00008A   155 _TL0	=	0x008a
                           00008B   156 _TL1	=	0x008b
                           00008C   157 _TH0	=	0x008c
                           00008D   158 _TH1	=	0x008d
                           000090   159 _P1	=	0x0090
                           000098   160 _SCON	=	0x0098
                           000099   161 _SBUF	=	0x0099
                           0000A0   162 _P2	=	0x00a0
                           0000A8   163 _IE	=	0x00a8
                           0000B0   164 _P3	=	0x00b0
                           0000B8   165 _IP	=	0x00b8
                           0000D0   166 _PSW	=	0x00d0
                           0000E0   167 _ACC	=	0x00e0
                           0000F0   168 _B	=	0x00f0
                           0000C8   169 _T2CON	=	0x00c8
                           0000CA   170 _RCAP2L	=	0x00ca
                           0000CB   171 _RCAP2H	=	0x00cb
                           0000CC   172 _TL2	=	0x00cc
                           0000CD   173 _TH2	=	0x00cd
                                    174 ;--------------------------------------------------------
                                    175 ; special function bits
                                    176 ;--------------------------------------------------------
                                    177 	.area RSEG    (ABS,DATA)
      000000                        178 	.org 0x0000
                           000080   179 _P0_0	=	0x0080
                           000081   180 _P0_1	=	0x0081
                           000082   181 _P0_2	=	0x0082
                           000083   182 _P0_3	=	0x0083
                           000084   183 _P0_4	=	0x0084
                           000085   184 _P0_5	=	0x0085
                           000086   185 _P0_6	=	0x0086
                           000087   186 _P0_7	=	0x0087
                           000088   187 _IT0	=	0x0088
                           000089   188 _IE0	=	0x0089
                           00008A   189 _IT1	=	0x008a
                           00008B   190 _IE1	=	0x008b
                           00008C   191 _TR0	=	0x008c
                           00008D   192 _TF0	=	0x008d
                           00008E   193 _TR1	=	0x008e
                           00008F   194 _TF1	=	0x008f
                           000090   195 _P1_0	=	0x0090
                           000091   196 _P1_1	=	0x0091
                           000092   197 _P1_2	=	0x0092
                           000093   198 _P1_3	=	0x0093
                           000094   199 _P1_4	=	0x0094
                           000095   200 _P1_5	=	0x0095
                           000096   201 _P1_6	=	0x0096
                           000097   202 _P1_7	=	0x0097
                           000098   203 _RI	=	0x0098
                           000099   204 _TI	=	0x0099
                           00009A   205 _RB8	=	0x009a
                           00009B   206 _TB8	=	0x009b
                           00009C   207 _REN	=	0x009c
                           00009D   208 _SM2	=	0x009d
                           00009E   209 _SM1	=	0x009e
                           00009F   210 _SM0	=	0x009f
                           0000A0   211 _P2_0	=	0x00a0
                           0000A1   212 _P2_1	=	0x00a1
                           0000A2   213 _P2_2	=	0x00a2
                           0000A3   214 _P2_3	=	0x00a3
                           0000A4   215 _P2_4	=	0x00a4
                           0000A5   216 _P2_5	=	0x00a5
                           0000A6   217 _P2_6	=	0x00a6
                           0000A7   218 _P2_7	=	0x00a7
                           0000A8   219 _EX0	=	0x00a8
                           0000A9   220 _ET0	=	0x00a9
                           0000AA   221 _EX1	=	0x00aa
                           0000AB   222 _ET1	=	0x00ab
                           0000AC   223 _ES	=	0x00ac
                           0000AF   224 _EA	=	0x00af
                           0000B0   225 _P3_0	=	0x00b0
                           0000B1   226 _P3_1	=	0x00b1
                           0000B2   227 _P3_2	=	0x00b2
                           0000B3   228 _P3_3	=	0x00b3
                           0000B4   229 _P3_4	=	0x00b4
                           0000B5   230 _P3_5	=	0x00b5
                           0000B6   231 _P3_6	=	0x00b6
                           0000B7   232 _P3_7	=	0x00b7
                           0000B0   233 _RXD	=	0x00b0
                           0000B1   234 _TXD	=	0x00b1
                           0000B2   235 _INT0	=	0x00b2
                           0000B3   236 _INT1	=	0x00b3
                           0000B4   237 _T0	=	0x00b4
                           0000B5   238 _T1	=	0x00b5
                           0000B6   239 _WR	=	0x00b6
                           0000B7   240 _RD	=	0x00b7
                           0000B8   241 _PX0	=	0x00b8
                           0000B9   242 _PT0	=	0x00b9
                           0000BA   243 _PX1	=	0x00ba
                           0000BB   244 _PT1	=	0x00bb
                           0000BC   245 _PS	=	0x00bc
                           0000D0   246 _P	=	0x00d0
                           0000D1   247 _F1	=	0x00d1
                           0000D2   248 _OV	=	0x00d2
                           0000D3   249 _RS0	=	0x00d3
                           0000D4   250 _RS1	=	0x00d4
                           0000D5   251 _F0	=	0x00d5
                           0000D6   252 _AC	=	0x00d6
                           0000D7   253 _CY	=	0x00d7
                           0000AD   254 _ET2	=	0x00ad
                           0000BD   255 _PT2	=	0x00bd
                           0000C8   256 _T2CON_0	=	0x00c8
                           0000C9   257 _T2CON_1	=	0x00c9
                           0000CA   258 _T2CON_2	=	0x00ca
                           0000CB   259 _T2CON_3	=	0x00cb
                           0000CC   260 _T2CON_4	=	0x00cc
                           0000CD   261 _T2CON_5	=	0x00cd
                           0000CE   262 _T2CON_6	=	0x00ce
                           0000CF   263 _T2CON_7	=	0x00cf
                           0000C8   264 _CP_RL2	=	0x00c8
                           0000C9   265 _C_T2	=	0x00c9
                           0000CA   266 _TR2	=	0x00ca
                           0000CB   267 _EXEN2	=	0x00cb
                           0000CC   268 _TCLK	=	0x00cc
                           0000CD   269 _RCLK	=	0x00cd
                           0000CE   270 _EXF2	=	0x00ce
                           0000CF   271 _TF2	=	0x00cf
                                    272 ;--------------------------------------------------------
                                    273 ; overlayable register banks
                                    274 ;--------------------------------------------------------
                                    275 	.area REG_BANK_0	(REL,OVR,DATA)
      000000                        276 	.ds 8
                                    277 ;--------------------------------------------------------
                                    278 ; internal ram data
                                    279 ;--------------------------------------------------------
                                    280 	.area DSEG    (DATA)
                                    281 ;--------------------------------------------------------
                                    282 ; overlayable items in internal ram 
                                    283 ;--------------------------------------------------------
                                    284 ;--------------------------------------------------------
                                    285 ; Stack segment in internal ram 
                                    286 ;--------------------------------------------------------
                                    287 	.area	SSEG
      000008                        288 __start__stack:
      000008                        289 	.ds	1
                                    290 
                                    291 ;--------------------------------------------------------
                                    292 ; indirectly addressable internal ram data
                                    293 ;--------------------------------------------------------
                                    294 	.area ISEG    (DATA)
                                    295 ;--------------------------------------------------------
                                    296 ; absolute internal ram data
                                    297 ;--------------------------------------------------------
                                    298 	.area IABS    (ABS,DATA)
                                    299 	.area IABS    (ABS,DATA)
                                    300 ;--------------------------------------------------------
                                    301 ; bit data
                                    302 ;--------------------------------------------------------
                                    303 	.area BSEG    (BIT)
                                    304 ;--------------------------------------------------------
                                    305 ; paged external ram data
                                    306 ;--------------------------------------------------------
                                    307 	.area PSEG    (PAG,XDATA)
                                    308 ;--------------------------------------------------------
                                    309 ; external ram data
                                    310 ;--------------------------------------------------------
                                    311 	.area XSEG    (XDATA)
                           00FF00   312 _aes_reg_start	=	0xff00
                           00FF01   313 _aes_reg_state	=	0xff01
                           00FF02   314 _aes_reg_addr	=	0xff02
                           00FF04   315 _aes_reg_len	=	0xff04
                           00FF10   316 _aes_reg_ctr	=	0xff10
                           00FF20   317 _aes_reg_key0	=	0xff20
                           00FF30   318 _aes_reg_key1	=	0xff30
                           00E000   319 _data	=	0xe000
                           00FF80   320 _pt_wren	=	0xff80
                           00FFA0   321 _pt_rden	=	0xffa0
                                    322 ;--------------------------------------------------------
                                    323 ; absolute external ram data
                                    324 ;--------------------------------------------------------
                                    325 	.area XABS    (ABS,XDATA)
                                    326 ;--------------------------------------------------------
                                    327 ; external initialized ram data
                                    328 ;--------------------------------------------------------
                                    329 	.area XISEG   (XDATA)
                                    330 	.area HOME    (CODE)
                                    331 	.area GSINIT0 (CODE)
                                    332 	.area GSINIT1 (CODE)
                                    333 	.area GSINIT2 (CODE)
                                    334 	.area GSINIT3 (CODE)
                                    335 	.area GSINIT4 (CODE)
                                    336 	.area GSINIT5 (CODE)
                                    337 	.area GSINIT  (CODE)
                                    338 	.area GSFINAL (CODE)
                                    339 	.area CSEG    (CODE)
                                    340 ;--------------------------------------------------------
                                    341 ; interrupt vector 
                                    342 ;--------------------------------------------------------
                                    343 	.area HOME    (CODE)
      000000                        344 __interrupt_vect:
      000000 02 00 06         [24]  345 	ljmp	__sdcc_gsinit_startup
                                    346 ;--------------------------------------------------------
                                    347 ; global & static initialisations
                                    348 ;--------------------------------------------------------
                                    349 	.area HOME    (CODE)
                                    350 	.area GSINIT  (CODE)
                                    351 	.area GSFINAL (CODE)
                                    352 	.area GSINIT  (CODE)
                                    353 	.globl __sdcc_gsinit_startup
                                    354 	.globl __sdcc_program_startup
                                    355 	.globl __start__stack
                                    356 	.globl __mcs51_genXINIT
                                    357 	.globl __mcs51_genXRAMCLEAR
                                    358 	.globl __mcs51_genRAMCLEAR
                                    359 	.area GSFINAL (CODE)
      00005F 02 00 03         [24]  360 	ljmp	__sdcc_program_startup
                                    361 ;--------------------------------------------------------
                                    362 ; Home
                                    363 ;--------------------------------------------------------
                                    364 	.area HOME    (CODE)
                                    365 	.area HOME    (CODE)
      000003                        366 __sdcc_program_startup:
      000003 02 00 88         [24]  367 	ljmp	_main
                                    368 ;	return from main will return to caller
                                    369 ;--------------------------------------------------------
                                    370 ; code
                                    371 ;--------------------------------------------------------
                                    372 	.area CSEG    (CODE)
                                    373 ;------------------------------------------------------------
                                    374 ;Allocation info for local variables in function 'quit'
                                    375 ;------------------------------------------------------------
                                    376 ;	aes_test.c:16: void quit() {
                                    377 ;	-----------------------------------------
                                    378 ;	 function quit
                                    379 ;	-----------------------------------------
      000062                        380 _quit:
                           000007   381 	ar7 = 0x07
                           000006   382 	ar6 = 0x06
                           000005   383 	ar5 = 0x05
                           000004   384 	ar4 = 0x04
                           000003   385 	ar3 = 0x03
                           000002   386 	ar2 = 0x02
                           000001   387 	ar1 = 0x01
                           000000   388 	ar0 = 0x00
                                    389 ;	aes_test.c:17: P0 = P1 = P2 = P3 = 0xDE;
      000062 75 B0 DE         [24]  390 	mov	_P3,#0xDE
      000065 75 A0 DE         [24]  391 	mov	_P2,#0xDE
      000068 75 90 DE         [24]  392 	mov	_P1,#0xDE
      00006B 75 80 DE         [24]  393 	mov	_P0,#0xDE
                                    394 ;	aes_test.c:18: P0 = P1 = P2 = P3 = 0xAD;
      00006E 75 B0 AD         [24]  395 	mov	_P3,#0xAD
      000071 75 A0 AD         [24]  396 	mov	_P2,#0xAD
      000074 75 90 AD         [24]  397 	mov	_P1,#0xAD
      000077 75 80 AD         [24]  398 	mov	_P0,#0xAD
                                    399 ;	aes_test.c:19: P0 = P1 = P2 = P3 = 0x00;
      00007A 75 B0 00         [24]  400 	mov	_P3,#0x00
      00007D 75 A0 00         [24]  401 	mov	_P2,#0x00
      000080 75 90 00         [24]  402 	mov	_P1,#0x00
      000083 75 80 00         [24]  403 	mov	_P0,#0x00
                                    404 ;	aes_test.c:20: while(1);
      000086                        405 00102$:
      000086 80 FE            [24]  406 	sjmp	00102$
                                    407 ;------------------------------------------------------------
                                    408 ;Allocation info for local variables in function 'main'
                                    409 ;------------------------------------------------------------
                                    410 ;i                         Allocated to registers r4 r5 
                                    411 ;good                      Allocated to registers r6 r7 
                                    412 ;repeat                    Allocated to registers 
                                    413 ;------------------------------------------------------------
                                    414 ;	aes_test.c:38: void main() {
                                    415 ;	-----------------------------------------
                                    416 ;	 function main
                                    417 ;	-----------------------------------------
      000088                        418 _main:
                                    419 ;	aes_test.c:41: int good=1;
      000088 7E 01            [12]  420 	mov	r6,#0x01
      00008A 7F 00            [12]  421 	mov	r7,#0x00
                                    422 ;	aes_test.c:45: for(i=0; i < 32; i++) {
      00008C 7C 00            [12]  423 	mov	r4,#0x00
      00008E 7D 00            [12]  424 	mov	r5,#0x00
      000090                        425 00115$:
                                    426 ;	aes_test.c:46: pt_wren[i] = 0xff;
      000090 EC               [12]  427 	mov	a,r4
      000091 24 80            [12]  428 	add	a,#_pt_wren
      000093 F5 82            [12]  429 	mov	dpl,a
      000095 ED               [12]  430 	mov	a,r5
      000096 34 FF            [12]  431 	addc	a,#(_pt_wren >> 8)
      000098 F5 83            [12]  432 	mov	dph,a
      00009A 74 FF            [12]  433 	mov	a,#0xFF
      00009C F0               [24]  434 	movx	@dptr,a
                                    435 ;	aes_test.c:47: pt_rden[i] = 0xff;
      00009D EC               [12]  436 	mov	a,r4
      00009E 24 A0            [12]  437 	add	a,#_pt_rden
      0000A0 F5 82            [12]  438 	mov	dpl,a
      0000A2 ED               [12]  439 	mov	a,r5
      0000A3 34 FF            [12]  440 	addc	a,#(_pt_rden >> 8)
      0000A5 F5 83            [12]  441 	mov	dph,a
      0000A7 74 FF            [12]  442 	mov	a,#0xFF
      0000A9 F0               [24]  443 	movx	@dptr,a
                                    444 ;	aes_test.c:45: for(i=0; i < 32; i++) {
      0000AA 0C               [12]  445 	inc	r4
      0000AB BC 00 01         [24]  446 	cjne	r4,#0x00,00182$
      0000AE 0D               [12]  447 	inc	r5
      0000AF                        448 00182$:
      0000AF C3               [12]  449 	clr	c
      0000B0 EC               [12]  450 	mov	a,r4
      0000B1 94 20            [12]  451 	subb	a,#0x20
      0000B3 ED               [12]  452 	mov	a,r5
      0000B4 64 80            [12]  453 	xrl	a,#0x80
      0000B6 94 80            [12]  454 	subb	a,#0x80
      0000B8 40 D6            [24]  455 	jc	00115$
                                    456 ;	aes_test.c:51: for(i=0; i < 32; i++) {
      0000BA 7C 00            [12]  457 	mov	r4,#0x00
      0000BC 7D 00            [12]  458 	mov	r5,#0x00
      0000BE                        459 00117$:
                                    460 ;	aes_test.c:52: data[i]=i;
      0000BE 8C 82            [24]  461 	mov	dpl,r4
      0000C0 74 E0            [12]  462 	mov	a,#(_data >> 8)
      0000C2 2D               [12]  463 	add	a,r5
      0000C3 F5 83            [12]  464 	mov	dph,a
      0000C5 8C 03            [24]  465 	mov	ar3,r4
      0000C7 EB               [12]  466 	mov	a,r3
      0000C8 F0               [24]  467 	movx	@dptr,a
                                    468 ;	aes_test.c:51: for(i=0; i < 32; i++) {
      0000C9 0C               [12]  469 	inc	r4
      0000CA BC 00 01         [24]  470 	cjne	r4,#0x00,00184$
      0000CD 0D               [12]  471 	inc	r5
      0000CE                        472 00184$:
      0000CE C3               [12]  473 	clr	c
      0000CF EC               [12]  474 	mov	a,r4
      0000D0 94 20            [12]  475 	subb	a,#0x20
      0000D2 ED               [12]  476 	mov	a,r5
      0000D3 64 80            [12]  477 	xrl	a,#0x80
      0000D5 94 80            [12]  478 	subb	a,#0x80
      0000D7 40 E5            [24]  479 	jc	00117$
                                    480 ;	aes_test.c:60: __endasm;
                                    481 ;
      0000D9 00               [12]  482 	nop;
      0000DA 00               [12]  483 	nop;
      0000DB 00               [12]  484 	nop;
      0000DC 00               [12]  485 	nop;
                                    486 ;	aes_test.c:61: data[0]=1;
      0000DD 90 E0 00         [24]  487 	mov	dptr,#_data
      0000E0 74 01            [12]  488 	mov	a,#0x01
      0000E2 F0               [24]  489 	movx	@dptr,a
                                    490 ;	aes_test.c:67: __endasm;
                                    491 ;
      0000E3 00               [12]  492 	nop;
      0000E4 00               [12]  493 	nop;
      0000E5 00               [12]  494 	nop;
      0000E6 00               [12]  495 	nop;
                                    496 ;	aes_test.c:71: aes_reg_addr = 0xE000;
      0000E7 90 FF 02         [24]  497 	mov	dptr,#_aes_reg_addr
      0000EA E4               [12]  498 	clr	a
      0000EB F0               [24]  499 	movx	@dptr,a
      0000EC 74 E0            [12]  500 	mov	a,#0xE0
      0000EE A3               [24]  501 	inc	dptr
      0000EF F0               [24]  502 	movx	@dptr,a
                                    503 ;	aes_test.c:72: aes_reg_len = 32;
      0000F0 90 FF 04         [24]  504 	mov	dptr,#_aes_reg_len
      0000F3 74 20            [12]  505 	mov	a,#0x20
      0000F5 F0               [24]  506 	movx	@dptr,a
      0000F6 E4               [12]  507 	clr	a
      0000F7 A3               [24]  508 	inc	dptr
      0000F8 F0               [24]  509 	movx	@dptr,a
                                    510 ;	aes_test.c:73: for(i=0; i < 16; i++) { aes_reg_ctr[i] = i*i*i; }
      0000F9 7C 00            [12]  511 	mov	r4,#0x00
      0000FB 7D 00            [12]  512 	mov	r5,#0x00
      0000FD                        513 00119$:
      0000FD EC               [12]  514 	mov	a,r4
      0000FE 24 10            [12]  515 	add	a,#_aes_reg_ctr
      000100 F5 82            [12]  516 	mov	dpl,a
      000102 ED               [12]  517 	mov	a,r5
      000103 34 FF            [12]  518 	addc	a,#(_aes_reg_ctr >> 8)
      000105 F5 83            [12]  519 	mov	dph,a
      000107 8C 03            [24]  520 	mov	ar3,r4
      000109 EB               [12]  521 	mov	a,r3
      00010A F5 F0            [12]  522 	mov	b,a
      00010C A4               [48]  523 	mul	ab
      00010D 8B F0            [24]  524 	mov	b,r3
      00010F A4               [48]  525 	mul	ab
      000110 FB               [12]  526 	mov	r3,a
      000111 F0               [24]  527 	movx	@dptr,a
      000112 0C               [12]  528 	inc	r4
      000113 BC 00 01         [24]  529 	cjne	r4,#0x00,00186$
      000116 0D               [12]  530 	inc	r5
      000117                        531 00186$:
      000117 C3               [12]  532 	clr	c
      000118 EC               [12]  533 	mov	a,r4
      000119 94 10            [12]  534 	subb	a,#0x10
      00011B ED               [12]  535 	mov	a,r5
      00011C 64 80            [12]  536 	xrl	a,#0x80
      00011E 94 80            [12]  537 	subb	a,#0x80
      000120 40 DB            [24]  538 	jc	00119$
                                    539 ;	aes_test.c:74: for(i=0; i < 16; i++) { aes_reg_key0[i] = i | (i << 4); }
      000122 7C 00            [12]  540 	mov	r4,#0x00
      000124 7D 00            [12]  541 	mov	r5,#0x00
      000126                        542 00121$:
      000126 EC               [12]  543 	mov	a,r4
      000127 24 20            [12]  544 	add	a,#_aes_reg_key0
      000129 F5 82            [12]  545 	mov	dpl,a
      00012B ED               [12]  546 	mov	a,r5
      00012C 34 FF            [12]  547 	addc	a,#(_aes_reg_key0 >> 8)
      00012E F5 83            [12]  548 	mov	dph,a
      000130 8C 03            [24]  549 	mov	ar3,r4
      000132 EB               [12]  550 	mov	a,r3
      000133 C4               [12]  551 	swap	a
      000134 54 F0            [12]  552 	anl	a,#0xF0
      000136 FB               [12]  553 	mov	r3,a
      000137 33               [12]  554 	rlc	a
      000138 95 E0            [12]  555 	subb	a,acc
      00013A FA               [12]  556 	mov	r2,a
      00013B EC               [12]  557 	mov	a,r4
      00013C 42 03            [12]  558 	orl	ar3,a
      00013E ED               [12]  559 	mov	a,r5
      00013F 42 02            [12]  560 	orl	ar2,a
      000141 EB               [12]  561 	mov	a,r3
      000142 F0               [24]  562 	movx	@dptr,a
      000143 0C               [12]  563 	inc	r4
      000144 BC 00 01         [24]  564 	cjne	r4,#0x00,00188$
      000147 0D               [12]  565 	inc	r5
      000148                        566 00188$:
      000148 C3               [12]  567 	clr	c
      000149 EC               [12]  568 	mov	a,r4
      00014A 94 10            [12]  569 	subb	a,#0x10
      00014C ED               [12]  570 	mov	a,r5
      00014D 64 80            [12]  571 	xrl	a,#0x80
      00014F 94 80            [12]  572 	subb	a,#0x80
      000151 40 D3            [24]  573 	jc	00121$
                                    574 ;	aes_test.c:77: aes_reg_start = 1;
      000153 90 FF 00         [24]  575 	mov	dptr,#_aes_reg_start
      000156 74 01            [12]  576 	mov	a,#0x01
      000158 F0               [24]  577 	movx	@dptr,a
                                    578 ;	aes_test.c:79: while(aes_reg_state != 0);
      000159                        579 00105$:
      000159 90 FF 01         [24]  580 	mov	dptr,#_aes_reg_state
      00015C E0               [24]  581 	movx	a,@dptr
      00015D E0               [24]  582 	movx	a,@dptr
                                    583 ;	aes_test.c:82: for(i=0; i < 32; i++) {
      00015E 70 F9            [24]  584 	jnz	00105$
      000160 FC               [12]  585 	mov	r4,a
      000161 FD               [12]  586 	mov	r5,a
      000162                        587 00123$:
                                    588 ;	aes_test.c:83: P0 = data[i];
      000162 8C 82            [24]  589 	mov	dpl,r4
      000164 74 E0            [12]  590 	mov	a,#(_data >> 8)
      000166 2D               [12]  591 	add	a,r5
      000167 F5 83            [12]  592 	mov	dph,a
      000169 E0               [24]  593 	movx	a,@dptr
      00016A F5 80            [12]  594 	mov	_P0,a
                                    595 ;	aes_test.c:82: for(i=0; i < 32; i++) {
      00016C 0C               [12]  596 	inc	r4
      00016D BC 00 01         [24]  597 	cjne	r4,#0x00,00191$
      000170 0D               [12]  598 	inc	r5
      000171                        599 00191$:
      000171 C3               [12]  600 	clr	c
      000172 EC               [12]  601 	mov	a,r4
      000173 94 20            [12]  602 	subb	a,#0x20
      000175 ED               [12]  603 	mov	a,r5
      000176 64 80            [12]  604 	xrl	a,#0x80
      000178 94 80            [12]  605 	subb	a,#0x80
      00017A 40 E6            [24]  606 	jc	00123$
                                    607 ;	aes_test.c:87: aes_reg_start = 1;
      00017C 90 FF 00         [24]  608 	mov	dptr,#_aes_reg_start
      00017F 74 01            [12]  609 	mov	a,#0x01
      000181 F0               [24]  610 	movx	@dptr,a
                                    611 ;	aes_test.c:88: while(aes_reg_state != 0)  {
      000182                        612 00109$:
      000182 90 FF 01         [24]  613 	mov	dptr,#_aes_reg_state
      000185 E0               [24]  614 	movx	a,@dptr
      000186 E0               [24]  615 	movx	a,@dptr
      000187 60 1A            [24]  616 	jz	00144$
                                    617 ;	aes_test.c:114: __endasm;
                                    618 ;
      000189 00               [12]  619 	nop;
      00018A 00               [12]  620 	nop;
      00018B 00               [12]  621 	nop;
      00018C 00               [12]  622 	nop;
      00018D 00               [12]  623 	nop;
      00018E 00               [12]  624 	nop;
      00018F 00               [12]  625 	nop;
      000190 00               [12]  626 	nop;
      000191 00               [12]  627 	nop;
      000192 00               [12]  628 	nop;
      000193 00               [12]  629 	nop;
      000194 00               [12]  630 	nop;
      000195 00               [12]  631 	nop;
      000196 00               [12]  632 	nop;
      000197 00               [12]  633 	nop;
      000198 00               [12]  634 	nop;
      000199 00               [12]  635 	nop;
      00019A 00               [12]  636 	nop;
      00019B 00               [12]  637 	nop;
      00019C 00               [12]  638 	nop;
      00019D 00               [12]  639 	nop;
      00019E 00               [12]  640 	nop;
      00019F 00               [12]  641 	nop;
      0001A0 00               [12]  642 	nop;
                                    643 ;	aes_test.c:123: for(i=0; i < 32; i++) {
      0001A1 80 DF            [24]  644 	sjmp	00109$
      0001A3                        645 00144$:
      0001A3 7C 00            [12]  646 	mov	r4,#0x00
      0001A5 7D 00            [12]  647 	mov	r5,#0x00
      0001A7                        648 00125$:
                                    649 ;	aes_test.c:124: if(data[i] != i) {
      0001A7 8C 82            [24]  650 	mov	dpl,r4
      0001A9 74 E0            [12]  651 	mov	a,#(_data >> 8)
      0001AB 2D               [12]  652 	add	a,r5
      0001AC F5 83            [12]  653 	mov	dph,a
      0001AE E0               [24]  654 	movx	a,@dptr
      0001AF FB               [12]  655 	mov	r3,a
      0001B0 7A 00            [12]  656 	mov	r2,#0x00
      0001B2 B5 04 06         [24]  657 	cjne	a,ar4,00194$
      0001B5 EA               [12]  658 	mov	a,r2
      0001B6 B5 05 02         [24]  659 	cjne	a,ar5,00194$
      0001B9 80 06            [24]  660 	sjmp	00126$
      0001BB                        661 00194$:
                                    662 ;	aes_test.c:125: good =0;
      0001BB 7E 00            [12]  663 	mov	r6,#0x00
      0001BD 7F 00            [12]  664 	mov	r7,#0x00
                                    665 ;	aes_test.c:126: break;
      0001BF 80 10            [24]  666 	sjmp	00114$
      0001C1                        667 00126$:
                                    668 ;	aes_test.c:123: for(i=0; i < 32; i++) {
      0001C1 0C               [12]  669 	inc	r4
      0001C2 BC 00 01         [24]  670 	cjne	r4,#0x00,00195$
      0001C5 0D               [12]  671 	inc	r5
      0001C6                        672 00195$:
      0001C6 C3               [12]  673 	clr	c
      0001C7 EC               [12]  674 	mov	a,r4
      0001C8 94 20            [12]  675 	subb	a,#0x20
      0001CA ED               [12]  676 	mov	a,r5
      0001CB 64 80            [12]  677 	xrl	a,#0x80
      0001CD 94 80            [12]  678 	subb	a,#0x80
      0001CF 40 D6            [24]  679 	jc	00125$
      0001D1                        680 00114$:
                                    681 ;	aes_test.c:129: P0 = good;
      0001D1 8E 80            [24]  682 	mov	_P0,r6
                                    683 ;	aes_test.c:130: P1 = data[0];
      0001D3 90 E0 00         [24]  684 	mov	dptr,#_data
      0001D6 E0               [24]  685 	movx	a,@dptr
      0001D7 F5 90            [12]  686 	mov	_P1,a
                                    687 ;	aes_test.c:132: quit();
      0001D9 02 00 62         [24]  688 	ljmp	_quit
                                    689 	.area CSEG    (CODE)
                                    690 	.area CONST   (CODE)
                                    691 	.area XINIT   (CODE)
                                    692 	.area CABS    (ABS,CODE)
