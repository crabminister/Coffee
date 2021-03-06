#include "ladder.h" 

int ladder_start = 1024; 

const srung ladder[] = {
 {   15,   0,     1 },
 {   15,   0,     1 },
 {   16,   1,     2 },
 {   17,   2,     3 },
 {   18,   3,     4 },
 {   19,   4,     5 },
 {   20,   5,     6 },
 {   21,   6,     7 },
 {   22,   7,     8 },
 {   23,   8,     9 },
 {   24,   9,    10 },
 {   25,  10,    11 },
 {   26,  11,    12 },
 {   27,  12,    13 },
 {   28,  13,    14 },
 {   29,  14,    15 },
 {   30,  15,    16 },
 {   31,  16,    17 },
 {   32,  17,    18 },
 {   33,  18,    19 },
 {   34,  19,    20 },
 {   35,  20,    21 },
 {   36,  21,    22 },
 {   37,  22,    23 },
 {   38,  23,    24 },
 {   39,  24,    25 },
 {   40,  25,    26 },
 {   41,  26,    27 },
 {   42,  27,    28 },
 {   43,  28,    29 },
 {   44,  29,    30 },
 {   45,  30,    31 },
 {   46,  31,    32 },
 {   47,  32,    33 },
 {   48,  33,    34 },
 {   49,  34,    35 },
 {   50,  35,    36 },
 {   51,  36,    37 },
 {   52,  37,    38 },
 {   53,  38,    39 },
 {   54,  39,    40 },
 {   55,  40,    41 },
 {   56,  41,    42 },
 {   56,  42,    43 },
 {   57,  43,    44 },
 {   58,  44,    45 },
 {   59,  45,    46 },
 {   60,  46,    47 },
 {   61,  47,    48 },
 {   62,  48,    49 },
 {   63,  49,    50 },
 {   64,  50,    51 },
 {   65,  51,    52 },
 {   66,  52,    53 },
 {   67,  53,    54 },
 {   68,  54,    55 },
 {   69,  55,    56 },
 {   70,  56,    57 },
 {   71,  57,    58 },
 {   72,  58,    59 },
 {   73,  59,    60 },
 {   74,  60,    61 },
 {   75,  61,    62 },
 {   76,  62,    63 },
 {   77,  63,    64 },
 {   78,  64,    65 },
 {   79,  65,    66 },
 {   80,  66,    67 },
 {   81,  67,    68 },
 {   82,  68,    69 },
 {   83,  69,    70 },
 {   84,  70,    71 },
 {   85,  71,    72 },
 {   86,  72,    73 },
 {   87,  73,    74 },
 {   88,  74,    75 },
 {   89,  75,    76 },
 {   90,  76,    77 },
 {   91,  77,    78 },
 {   92,  78,    79 },
 {   93,  79,    80 },
 {   94,  80,    81 },
 {   95,  81,    82 },
 {   96,  82,    83 },
 {   97,  83,    84 },
 {   98,  84,    85 },
 {   99,  85,    86 },
 {  100,  86,    87 },
 {  101,  87,    88 },
 {  102,  88,    89 },
 {  103,  89,    90 },
 {  104,  90,    91 },
 {  105,  91,    92 },
 {  106,  92,    93 },
 {  107,  93,    94 },
 {  108,  94,    95 },
 {  109,  95,    96 },
 {  110,  96,    97 },
 {  111,  97,    98 },
 {  112,  98,    99 },
 {  113,  99,   100 },
 {  114, 100,   101 },
 {  115, 101,   102 },
 {  116, 102,   103 },
 {  117, 103,   104 },
 {  118, 104,   105 },
 {  119, 105,   106 },
 {  120, 106,   107 },
 {  121, 107,   108 },
 {  122, 108,   109 },
 {  123, 108,   110 },
 {  124, 109,   111 },
 {  125, 110,   112 },
 {  126, 111,   113 },
 {  127, 112,   114 },
 {  128, 113,   115 },
 {  128, 114,   116 },
 {  129, 115,   117 },
 {  130, 116,   118 },
 {  131, 117,   119 },
 {  132, 118,   120 },
 {  133, 119,   121 },
 {  134, 120,   122 },
 {  135, 121,   123 },
 {  136, 122,   124 },
 {  137, 123,   125 },
 {  138, 124,   126 },
 {  139, 125,   127 },
 {  140, 126,   128 },
 {  141, 127,   129 },
 {  142, 128,   130 },
 {  143, 129,   131 },
 {  144, 130,   132 },
 {  145, 131,   133 },
 {  146, 132,   134 },
 {  147, 133,   135 },
 {  148, 134,   136 },
 {  149, 135,   137 },
 {  150, 136,   138 },
 {  151, 137,   139 },
 {  152, 138,   140 },
 {  153, 139,   141 },
 {  154, 140,   142 },
 {  155, 141,   143 },
 {  156, 142,   144 },
 {  157, 143,   145 },
 {  158, 144,   146 },
 {  159, 145,   147 },
 {  160, 146,   148 },
 {  161, 147,   149 },
 {  162, 148,   150 },
 {  163, 149,   151 },
 {  164, 150,   152 },
 {  165, 151,   153 },
 {  166, 152,   154 },
 {  167, 153,   155 },
 {  168, 154,   156 },
 {  169, 155,   157 },
 {  170, 156,   158 },
 {  171, 157,   159 },
 {  172, 158,   160 },
 {  173, 159,   161 },
 {  174, 160,   162 },
 {  175, 161,   163 },
 {  176, 162,   164 },
 {  177, 163,   165 },
 {  178, 164,   166 },
 {  179, 165,   167 },
 {  180, 166,   168 },
 {  181, 167,   169 },
 {  182, 168,   170 },
 {  183, 169,   171 },
 {  184, 170,   172 },
 {  185, 171,   173 },
 {  186, 172,   174 },
 {  187, 173,   175 },
 {  188, 174,   176 },
 {  189, 175,   177 },
 {  190, 176,   178 },
 {  191, 177,   179 },
 {  192, 178,   180 },
 {  193, 179,   181 },
 {  194, 179,   182 },
 {  195, 180,   183 },
 {  196, 181,   184 },
 {  197, 182,   185 },
 {  198, 183,   186 },
 {  199, 184,   187 },
 {  200, 185,   188 },
 {  200, 186,   189 },
 {  201, 187,   190 },
 {  202, 188,   191 },
 {  203, 189,   192 },
 {  204, 190,   193 },
 {  205, 191,   194 },
 {  206, 192,   195 },
 {  207, 193,   196 },
 {  208, 194,   197 },
 {  209, 195,   198 },
 {  210, 196,   199 },
 {  211, 197,   200 },
 {  212, 198,   201 },
 {  213, 199,   202 },
 {  214, 200,   203 },
 {  215, 201,   204 },
 {  216, 202,   205 },
 {  217, 203,   206 },
 {  218, 204,   207 },
 {  219, 205,   208 },
 {  220, 206,   209 },
 {  221, 207,   210 },
 {  222, 208,   211 },
 {  223, 209,   212 },
 {  224, 210,   213 },
 {  225, 211,   214 },
 {  226, 212,   215 },
 {  227, 213,   216 },
 {  228, 214,   217 },
 {  229, 215,   218 },
 {  230, 216,   219 },
 {  231, 217,   220 },
 {  232, 218,   221 },
 {  233, 219,   222 },
 {  234, 220,   223 },
 {  235, 221,   224 },
 {  236, 222,   225 },
 {  237, 223,   226 },
 {  238, 224,   227 },
 {  239, 225,   228 },
 {  240, 226,   229 },
 {  241, 227,   230 },
 {  242, 228,   231 },
 {  243, 229,   232 },
 {  244, 230,   233 },
 {  245, 231,   234 },
 {  246, 232,   235 },
 {  247, 233,   236 },
 {  248, 234,   237 },
 {  249, 235,   238 },
 {  250, 236,   239 },
 {  251, 237,   240 },
 {  252, 238,   241 },
 {  253, 239,   242 },
 {  254, 240,   243 },
 {  255, 241,   244 },
 {  256, 242,   245 },
 {  257, 243,   246 },
 {  258, 244,   247 },
 {  259, 245,   248 },
 {  260, 246,   249 },
 {  261, 247,   250 },
 {  262, 248,   251 },
 {  263, 249,   252 },
 {  264, 250,   253 },
 {  265, 251,   254 },
 {  266, 251,   255 },
 {  267, 252,   256 },
 {  268, 253,   257 },
 {  269, 254,   258 },
 {  270, 255,   259 },
 {  271, 256,   260 },
 {  271, 257,   261 },
 {  272, 258,   262 },
 {  273, 259,   263 },
 {  274, 260,   264 },
 {  275, 261,   265 },
 {  276, 262,   266 },
 {  277, 263,   267 },
 {  278, 264,   268 },
 {  279, 265,   269 },
 {  280, 266,   270 },
 {  281, 267,   271 },
 {  282, 268,   272 },
 {  283, 269,   273 },
 {  284, 270,   274 },
 {  285, 271,   275 },
 {  286, 272,   276 },
 {  287, 273,   277 },
 {  288, 274,   278 },
 {  289, 275,   279 },
 {  290, 276,   280 },
 {  291, 277,   281 },
 {  292, 278,   282 },
 {  293, 279,   283 },
 {  294, 280,   284 },
 {  295, 281,   285 },
 {  296, 282,   286 },
 {  297, 283,   287 },
 {  298, 284,   288 },
 {  299, 285,   289 },
 {  300, 286,   290 },
 {  301, 287,   291 },
 {  302, 288,   292 },
 {  303, 289,   293 },
 {  304, 290,   294 },
 {  305, 291,   295 },
 {  306, 292,   296 },
 {  307, 293,   297 },
 {  308, 294,   298 },
 {  309, 295,   299 },
 {  310, 296,   300 },
 {  311, 297,   301 },
 {  312, 298,   302 },
 {  313, 299,   303 },
 {  314, 300,   304 },
 {  315, 301,   305 },
 {  316, 302,   306 },
 {  317, 303,   307 },
 {  318, 304,   308 },
 {  319, 305,   309 },
 {  320, 306,   310 },
 {  321, 307,   311 },
 {  322, 308,   312 },
 {  323, 309,   313 },
 {  324, 310,   314 },
 {  325, 311,   315 },
 {  326, 312,   316 },
 {  327, 313,   317 },
 {  328, 314,   318 },
 {  329, 315,   319 },
 {  330, 316,   320 },
 {  331, 317,   321 },
 {  332, 318,   322 },
 {  333, 319,   323 },
 {  334, 320,   324 },
 {  335, 321,   325 },
 {  336, 322,   326 },
 {  337, 323,   327 },
 {  338, 323,   328 },
 {  339, 324,   329 },
 {  340, 325,   330 },
 {  341, 326,   331 },
 {  342, 327,   332 },
 {  343, 328,   333 },
 {  343, 329,   334 },
 {  344, 330,   335 },
 {  345, 331,   336 },
 {  346, 332,   337 },
 {  347, 333,   338 },
 {  348, 334,   339 },
 {  349, 335,   340 },
 {  350, 336,   341 },
 {  351, 337,   342 },
 {  352, 338,   343 },
 {  353, 339,   344 },
 {  354, 340,   345 },
 {  355, 341,   346 },
 {  356, 342,   347 },
 {  357, 343,   348 },
 {  358, 344,   349 },
 {  359, 345,   350 },
 {  360, 346,   351 },
 {  361, 347,   352 },
 {  362, 348,   353 },
 {  363, 349,   354 },
 {  364, 350,   355 },
 {  365, 351,   356 },
 {  366, 352,   357 },
 {  367, 353,   358 },
 {  368, 354,   359 },
 {  369, 355,   360 },
 {  370, 356,   361 },
 {  371, 357,   362 },
 {  372, 358,   363 },
 {  373, 359,   364 },
 {  374, 360,   365 },
 {  375, 361,   366 },
 {  376, 362,   367 },
 {  377, 363,   368 },
 {  378, 364,   369 },
 {  379, 365,   370 },
 {  380, 366,   371 },
 {  381, 367,   372 },
 {  382, 368,   373 },
 {  383, 369,   374 },
 {  384, 370,   375 },
 {  385, 371,   376 },
 {  386, 372,   377 },
 {  387, 373,   378 },
 {  388, 374,   379 },
 {  389, 375,   380 },
 {  390, 376,   381 },
 {  391, 377,   382 },
 {  392, 378,   383 },
 {  393, 379,   384 },
 {  394, 380,   385 },
 {  395, 381,   386 },
 {  396, 382,   387 },
 {  397, 383,   388 },
 {  398, 384,   389 },
 {  399, 385,   390 },
 {  400, 386,   391 },
 {  401, 387,   392 },
 {  402, 388,   393 },
 {  403, 389,   394 },
 {  404, 390,   395 },
 {  405, 391,   396 },
 {  406, 392,   397 },
 {  407, 393,   398 },
 {  408, 394,   399 },
 {  409, 394,   400 },
 {  410, 395,   401 },
 {  411, 396,   402 },
 {  412, 397,   403 },
 {  413, 398,   404 },
 {  414, 399,   405 },
 {  415, 400,   406 },
 {  415, 401,   407 },
 {  416, 402,   408 },
 {  417, 403,   409 },
 {  418, 404,   410 },
 {  419, 405,   411 },
 {  420, 406,   412 },
 {  421, 407,   413 },
 {  422, 408,   414 },
 {  423, 409,   415 },
 {  424, 410,   416 },
 {  425, 411,   417 },
 {  426, 412,   418 },
 {  427, 413,   419 },
 {  428, 414,   420 },
 {  429, 415,   421 },
 {  430, 416,   422 },
 {  431, 417,   423 },
 {  432, 418,   424 },
 {  433, 419,   425 },
 {  434, 420,   426 },
 {  435, 421,   427 },
 {  436, 422,   428 },
 {  437, 423,   429 },
 {  438, 424,   430 },
 {  439, 425,   431 },
 {  440, 426,   432 },
 {  441, 427,   433 },
 {  442, 428,   434 },
 {  443, 429,   435 },
 {  444, 430,   436 },
 {  445, 431,   437 },
 {  446, 432,   438 },
 {  447, 433,   439 },
 {  448, 434,   440 },
 {  449, 435,   441 },
 {  450, 436,   442 },
 {  451, 437,   443 },
 {  452, 438,   444 },
 {  453, 439,   445 },
 {  454, 440,   446 },
 {  455, 441,   447 },
 {  456, 442,   448 },
 {  457, 443,   449 },
 {  458, 444,   450 },
 {  459, 445,   451 },
 {  460, 446,   452 },
 {  461, 447,   453 },
 {  462, 448,   454 },
 {  463, 449,   455 },
 {  464, 450,   456 },
 {  465, 451,   457 },
 {  466, 452,   458 },
 {  467, 453,   459 },
 {  468, 454,   460 },
 {  469, 455,   461 },
 {  470, 456,   462 },
 {  471, 457,   463 },
 {  472, 458,   464 },
 {  473, 459,   465 },
 {  474, 460,   466 },
 {  475, 461,   467 },
 {  476, 462,   468 },
 {  477, 463,   469 },
 {  478, 464,   470 },
 {  479, 465,   471 },
 {  480, 466,   472 },
 {  481, 466,   473 },
 {  482, 467,   474 },
 {  483, 468,   475 },
 {  484, 469,   476 },
 {  485, 470,   477 },
 {  486, 471,   478 },
 {  486, 472,   479 },
 {  487, 473,   480 },
 {  488, 474,   481 },
 {  489, 475,   482 },
 {  490, 476,   483 },
 {  491, 477,   484 },
 {  492, 478,   485 },
 {  493, 479,   486 },
 {  494, 480,   487 },
 {  495, 481,   488 },
 {  496, 482,   489 },
 {  497, 483,   490 },
 {  498, 484,   491 },
 {  499, 485,   492 },
 {  500, 486,   493 },
 {  501, 487,   494 },
 {  502, 488,   495 },
 {  503, 489,   496 },
 {  504, 490,   497 },
 {  505, 491,   498 },
 {  506, 492,   499 },
 {  507, 493,   500 },
 {  508, 494,   501 },
 {  509, 495,   502 },
 {  510, 496,   503 },
 {  511, 497,   504 },
 {  512, 498,   505 },
 {  513, 499,   506 },
 {  514, 500,   507 },
 {  515, 501,   508 },
 {  516, 502,   509 },
 {  517, 503,   510 },
 {  518, 504,   511 },
 {  519, 505,   512 },
 {  520, 506,   513 },
 {  521, 507,   514 },
 {  522, 508,   515 },
 {  523, 509,   516 },
 {  524, 510,   517 },
 {  525, 511,   518 },
 {  526, 512,   519 },
 {  527, 513,   520 },
 {  528, 514,   521 },
 {  529, 515,   522 },
 {  530, 516,   523 },
 {  531, 517,   524 },
 {  532, 518,   525 },
 {  533, 519,   526 },
 {  534, 520,   527 },
 {  535, 521,   528 },
 {  536, 522,   529 },
 {  537, 523,   530 },
 {  538, 524,   531 },
 {  539, 525,   532 },
 {  540, 526,   533 },
 {  541, 527,   534 },
 {  542, 528,   535 },
 {  543, 529,   536 },
 {  544, 530,   537 },
 {  545, 531,   538 },
 {  546, 532,   539 },
 {  547, 533,   540 },
 {  548, 534,   541 },
 {  549, 535,   542 },
 {  550, 536,   543 },
 {  551, 537,   544 },
 {  552, 538,   545 },
 {  553, 538,   546 },
 {  554, 539,   547 },
 {  555, 540,   548 },
 {  556, 541,   549 },
 {  557, 542,   550 },
 {  558, 543,   551 },
 {  558, 544,   552 },
 {  559, 545,   553 },
 {  560, 546,   554 },
 {  561, 547,   555 },
 {  562, 548,   556 },
 {  563, 549,   557 },
 {  564, 550,   558 },
 {  565, 551,   559 },
 {  566, 552,   560 },
 {  567, 553,   561 },
 {  568, 554,   562 },
 {  569, 555,   563 },
 {  570, 556,   564 },
 {  571, 557,   565 },
 {  572, 558,   566 },
 {  573, 559,   567 },
 {  574, 560,   568 },
 {  575, 561,   569 },
 {  576, 562,   570 },
 {  577, 563,   571 },
 {  578, 564,   572 },
 {  579, 565,   573 },
 {  580, 566,   574 },
 {  581, 567,   575 },
 {  582, 568,   576 },
 {  583, 569,   577 },
 {  584, 570,   578 },
 {  585, 571,   579 },
 {  586, 572,   580 },
 {  587, 573,   581 },
 {  588, 574,   582 },
 {  589, 575,   583 },
 {  590, 576,   584 },
 {  591, 577,   585 },
 {  592, 578,   586 },
 {  593, 579,   587 },
 {  594, 580,   588 },
 {  595, 581,   589 },
 {  596, 582,   590 },
 {  597, 583,   591 },
 {  598, 584,   592 },
 {  599, 585,   593 },
 {  600, 586,   594 },
 {  601, 587,   595 },
 {  602, 588,   596 },
 {  603, 589,   597 },
 {  604, 590,   598 },
 {  605, 591,   599 },
 {  606, 592,   600 },
 {  607, 593,   601 },
 {  608, 594,   602 },
 {  609, 595,   603 },
 {  610, 596,   604 },
 {  611, 597,   605 },
 {  612, 598,   606 },
 {  613, 599,   607 },
 {  614, 600,   608 },
 {  615, 601,   609 },
 {  616, 602,   610 },
 {  617, 603,   611 },
 {  618, 604,   612 },
 {  619, 605,   613 },
 {  620, 606,   614 },
 {  621, 607,   615 },
 {  622, 608,   616 },
 {  623, 609,   617 },
 {  624, 609,   618 },
 {  625, 610,   619 },
 {  626, 611,   620 },
 {  627, 612,   621 },
 {  628, 613,   622 },
 {  629, 614,   623 },
 {  630, 615,   624 },
 {  630, 616,   625 },
 {  631, 617,   626 },
 {  632, 618,   627 },
 {  633, 619,   628 },
 {  634, 620,   629 },
 {  635, 621,   630 },
 {  636, 622,   631 },
 {  637, 623,   632 },
 {  638, 624,   633 },
 {  639, 625,   634 },
 {  640, 626,   635 },
 {  641, 627,   636 },
 {  642, 628,   637 },
 {  643, 629,   638 },
 {  644, 630,   639 },
 {  645, 631,   640 },
 {  646, 632,   641 },
 {  647, 633,   642 },
 {  648, 634,   643 },
 {  649, 635,   644 },
 {  650, 636,   645 },
 {  651, 637,   646 },
 {  652, 638,   647 },
 {  653, 639,   648 },
 {  654, 640,   649 },
 {  655, 641,   650 },
 {  656, 642,   651 },
 {  657, 643,   652 },
 {  658, 644,   653 },
 {  659, 645,   654 },
 {  660, 646,   655 },
 {  661, 647,   656 },
 {  662, 648,   657 },
 {  663, 649,   658 },
 {  664, 650,   659 },
 {  665, 651,   660 },
 {  666, 652,   661 },
 {  667, 653,   662 },
 {  668, 654,   663 },
 {  669, 655,   664 },
 {  670, 656,   665 },
 {  671, 657,   666 },
 {  672, 658,   667 },
 {  673, 659,   668 },
 {  674, 660,   669 },
 {  675, 661,   670 },
 {  676, 662,   671 },
 {  677, 663,   672 },
 {  678, 664,   673 },
 {  679, 665,   674 },
 {  680, 666,   675 },
 {  681, 667,   676 },
 {  682, 668,   677 },
 {  683, 669,   678 },
 {  684, 670,   679 },
 {  685, 671,   680 },
 {  686, 672,   681 },
 {  687, 673,   682 },
 {  688, 674,   683 },
 {  689, 675,   684 },
 {  690, 676,   685 },
 {  691, 677,   686 },
 {  692, 678,   687 },
 {  693, 679,   688 },
 {  694, 680,   689 },
 {  695, 681,   690 },
 {  696, 681,   691 },
 {  697, 682,   692 },
 {  698, 683,   693 },
 {  699, 684,   694 },
 {  700, 685,   695 },
 {  701, 686,   696 },
 {  701, 687,   697 },
 {  702, 688,   698 },
 {  703, 689,   699 },
 {  704, 690,   700 },
 {  705, 691,   701 },
 {  706, 692,   702 },
 {  707, 693,   703 },
 {  708, 694,   704 },
 {  709, 695,   705 },
 {  710, 696,   706 },
 {  711, 697,   707 },
 {  712, 698,   708 },
 {  713, 699,   709 },
 {  714, 700,   710 },
 {  715, 701,   711 },
 {  716, 702,   712 },
 {  717, 703,   713 },
 {  718, 704,   714 },
 {  719, 705,   715 },
 {  720, 706,   716 },
 {  721, 707,   717 },
 {  722, 708,   718 },
 {  723, 709,   719 },
 {  724, 710,   720 },
 {  725, 711,   721 },
 {  726, 712,   722 },
 {  727, 713,   723 },
 {  728, 714,   724 },
 {  729, 715,   725 },
 {  730, 716,   726 },
 {  731, 717,   727 },
 {  732, 718,   728 },
 {  733, 719,   729 },
 {  734, 720,   730 },
 {  735, 721,   731 },
 {  736, 722,   732 },
 {  737, 723,   733 },
 {  738, 724,   734 },
 {  739, 725,   735 },
 {  740, 726,   736 },
 {  741, 727,   737 },
 {  742, 728,   738 },
 {  743, 729,   739 },
 {  744, 730,   740 },
 {  745, 731,   741 },
 {  746, 732,   742 },
 {  747, 733,   743 },
 {  748, 734,   744 },
 {  749, 735,   745 },
 {  750, 736,   746 },
 {  751, 737,   747 },
 {  752, 738,   748 },
 {  753, 739,   749 },
 {  754, 740,   750 },
 {  755, 741,   751 },
 {  756, 742,   752 },
 {  757, 743,   753 },
 {  758, 744,   754 },
 {  759, 745,   755 },
 {  760, 746,   756 },
 {  761, 747,   757 },
 {  762, 748,   758 },
 {  763, 749,   759 },
 {  764, 750,   760 },
 {  765, 751,   761 },
 {  766, 752,   762 },
 {  767, 753,   763 },
 {  768, 753,   764 },
 {  769, 754,   765 },
 {  770, 755,   766 },
 {  771, 756,   767 },
 {  772, 757,   768 },
 {  773, 758,   769 },
 {  773, 759,   770 },
 {  774, 760,   771 },
 {  775, 761,   772 },
 {  776, 762,   773 },
 {  777, 763,   774 },
 {  778, 764,   775 },
 {  779, 765,   776 },
 {  780, 766,   777 },
 {  781, 767,   778 },
 {  782, 768,   779 },
 {  783, 769,   780 },
 {  784, 770,   781 },
 {  785, 771,   782 },
 {  786, 772,   783 },
 {  787, 773,   784 },
 {  788, 774,   785 },
 {  789, 775,   786 },
 {  790, 776,   787 },
 {  791, 777,   788 },
 {  792, 778,   789 },
 {  793, 779,   790 },
 {  794, 780,   791 },
 {  795, 781,   792 },
 {  796, 782,   793 },
 {  797, 783,   794 },
 {  798, 784,   795 },
 {  799, 785,   796 },
 {  800, 786,   797 },
 {  801, 787,   798 },
 {  802, 788,   799 },
 {  803, 789,   800 },
 {  804, 790,   801 },
 {  805, 791,   802 },
 {  806, 792,   803 },
 {  807, 793,   804 },
 {  808, 794,   805 },
 {  809, 795,   806 },
 {  810, 796,   807 },
 {  811, 797,   808 },
 {  812, 798,   809 },
 {  813, 799,   810 },
 {  814, 800,   811 },
 {  815, 801,   812 },
 {  816, 802,   813 },
 {  817, 803,   814 },
 {  818, 804,   815 },
 {  819, 805,   816 },
 {  820, 806,   817 },
 {  821, 807,   818 },
 {  822, 808,   819 },
 {  823, 809,   820 },
 {  824, 810,   821 },
 {  825, 811,   822 },
 {  826, 812,   823 },
 {  827, 813,   824 },
 {  828, 814,   825 },
 {  829, 815,   826 },
 {  830, 816,   827 },
 {  831, 817,   828 },
 {  832, 818,   829 },
 {  833, 819,   830 },
 {  834, 820,   831 },
 {  835, 821,   832 },
 {  836, 822,   833 },
 {  837, 823,   834 },
 {  838, 824,   835 },
 {  839, 824,   836 },
 {  840, 825,   837 },
 {  841, 826,   838 },
 {  842, 827,   839 },
 {  843, 828,   840 },
 {  844, 829,   841 },
 {  845, 830,   842 },
 {  845, 831,   843 },
 {  846, 832,   844 },
 {  847, 833,   845 },
 {  848, 834,   846 },
 {  849, 835,   847 },
 {  850, 836,   848 },
 {  851, 837,   849 },
 {  852, 838,   850 },
 {  853, 839,   851 },
 {  854, 840,   852 },
 {  855, 841,   853 },
 {  856, 842,   854 },
 {  857, 843,   855 },
 {  858, 844,   856 },
 {  859, 845,   857 },
 {  860, 846,   858 },
 {  861, 847,   859 },
 {  862, 848,   860 },
 {  863, 849,   861 },
 {  864, 850,   862 },
 {  865, 851,   863 },
 {  866, 852,   864 },
 {  867, 853,   865 },
 {  868, 854,   866 },
 {  869, 855,   867 },
 {  870, 856,   868 },
 {  871, 857,   869 },
 {  872, 858,   870 },
 {  873, 859,   871 },
 {  874, 860,   872 },
 {  875, 861,   873 },
 {  876, 862,   874 },
 {  877, 863,   875 },
 {  878, 864,   876 },
 {  879, 865,   877 },
 {  880, 866,   878 },
 {  881, 867,   879 },
 {  882, 868,   880 },
 {  883, 869,   881 },
 {  884, 870,   882 },
 {  885, 871,   883 },
 {  886, 872,   884 },
 {  887, 873,   885 },
 {  888, 874,   886 },
 {  889, 875,   887 },
 {  890, 876,   888 },
 {  891, 877,   889 },
 {  892, 878,   890 },
 {  893, 879,   891 },
 {  894, 880,   892 },
 {  895, 881,   893 },
 {  896, 882,   894 },
 {  897, 883,   895 },
 {  898, 884,   896 },
 {  899, 885,   897 },
 {  900, 886,   898 },
 {  901, 887,   899 },
 {  902, 888,   900 },
 {  903, 889,   901 },
 {  904, 890,   902 },
 {  905, 891,   903 },
 {  906, 892,   904 },
 {  907, 893,   905 },
 {  908, 894,   906 },
 {  909, 895,   907 },
 {  910, 896,   908 },
 {  911, 896,   909 },
 {  912, 897,   910 },
 {  913, 898,   911 },
 {  914, 899,   912 },
 {  915, 900,   913 },
 {  916, 901,   914 },
 {  916, 902,   915 },
 {  917, 903,   916 },
 {  918, 904,   917 },
 {  919, 905,   918 },
 {  920, 906,   919 },
 {  921, 907,   920 },
 {  922, 908,   921 },
 {  923, 909,   922 },
 {  924, 910,   923 },
 {  925, 911,   924 },
 {  926, 912,   925 },
 {  927, 913,   926 },
 {  928, 914,   927 },
 {  929, 915,   928 },
 {  930, 916,   929 },
 {  931, 917,   930 },
 {  932, 918,   931 },
 {  933, 919,   932 },
 {  934, 920,   933 },
 {  935, 921,   934 },
 {  936, 922,   935 },
 {  937, 923,   936 },
 {  938, 924,   937 },
 {  939, 925,   938 },
 {  940, 926,   939 },
 {  941, 927,   940 },
 {  942, 928,   941 },
 {  943, 929,   942 },
 {  944, 930,   943 },
 {  945, 931,   944 },
 {  946, 932,   945 },
 {  947, 933,   946 },
 {  948, 934,   947 },
 {  949, 935,   948 },
 {  950, 936,   949 },
 {  951, 937,   950 },
 {  952, 938,   951 },
 {  953, 939,   952 },
 {  954, 940,   953 },
 {  955, 941,   954 },
 {  956, 942,   955 },
 {  957, 943,   956 },
 {  958, 944,   957 },
 {  959, 945,   958 },
 {  960, 946,   959 },
 {  961, 947,   960 },
 {  962, 948,   961 },
 {  963, 949,   962 },
 {  964, 950,   963 },
 {  965, 951,   964 },
 {  966, 952,   965 },
 {  967, 953,   966 },
 {  968, 954,   967 },
 {  969, 955,   968 },
 {  970, 956,   969 },
 {  971, 957,   970 },
 {  972, 958,   971 },
 {  973, 959,   972 },
 {  974, 960,   973 },
 {  975, 961,   974 },
 {  976, 962,   975 },
 {  977, 963,   976 },
 {  978, 964,   977 },
 {  979, 965,   978 },
 {  980, 966,   979 },
 {  981, 967,   980 },
 {  982, 968,   981 },
 {  983, 968,   982 },
 {  984, 969,   983 },
 {  985, 970,   984 },
 {  986, 971,   985 },
 {  987, 972,   986 },
 {  988, 973,   987 },
 {  989, 974,   988 },
 {  990, 975,   989 },
 {  991, 976,   990 },
 {  992, 977,   991 },
 {  993, 978,   992 },
 {  994, 979,   993 },
 {  995, 980,   994 },
 {  996, 981,   995 },
 {  997, 982,   996 },
 {  998, 983,   997 },
 {  999, 984,   998 },
 { 1000, 985,   999 },
 { 1001, 986,  1000 },
 { 1002, 987,  1001 },
 { 1003, 988,  1002 },
 { 1004, 989,  1003 },
 { 1005, 990,  1004 },
 { 1006, 991,  1005 },
 { 1007, 992,  1006 },
 { 1008, 993,  1007 },
 { 1009, 994,  1008 },
 { 1010, 995,  1009 },
 { 1011, 996,  1010 },
 { 1012, 997,  1011 },
 { 1013, 998,  1012 },
 { 1014, 999,  1013 },
 { 1015,1000,  1014 },
 { 1016,1001,  1015 },
 { 1017,1002,  1016 },
 { 1018,1003,  1017 },
 { 1019,1004,  1018 },
 { 1020,1005,  1019 },
 { 1021,1006,  1020 },
 { 1022,1007,  1021 },
 { 1023,1008,  1022 },
 { 1023,1009,  1023 },
 { 1040,1025,   512 },
 { 1041,1026,   341 },
 { 1042,1027,   256 },
 { 1043,1028,   205 },
 { 1044,1029,   171 },
 { 1045,1030,   146 },
 { 1046,1031,   128 },
 { 1047,1032,   114 },
 { 1048,1033,   102 },
 { 1049,1034,    93 },
 { 1050,1035,    85 },
 { 1051,1036,    79 },
 { 1052,1037,    73 },
 { 1053,1038,    68 },
 { 1054,1039,    64 },
 { 1055,  57,    60 },
 { 1056,1041,   683 },
 { 1057,1042,   512 },
 { 1058,1043,   410 },
 { 1059,1044,   341 },
 { 1060,1045,   293 },
 { 1061,1046,   256 },
 { 1062,1047,   228 },
 { 1063,1048,   205 },
 { 1064,1049,   186 },
 { 1065,1050,   171 },
 { 1066,1051,   158 },
 { 1067,1052,   146 },
 { 1068,1053,   137 },
 { 1069,1054,   128 },
 { 1070,1055,   120 },
 { 1071, 108,   114 },
 { 1072,1057,   768 },
 { 1073,1058,   614 },
 { 1074,1059,   512 },
 { 1075,1060,   439 },
 { 1076,1061,   384 },
 { 1077,1062,   341 },
 { 1078,1063,   307 },
 { 1079,1064,   279 },
 { 1080,1065,   256 },
 { 1081,1066,   236 },
 { 1082,1067,   219 },
 { 1083,1068,   205 },
 { 1084,1069,   192 },
 { 1085,1070,   181 },
 { 1086,1071,   171 },
 { 1087, 154,   162 },
 { 1088,1073,   819 },
 { 1089,1074,   683 },
 { 1090,1075,   585 },
 { 1091,1076,   512 },
 { 1092,1077,   455 },
 { 1093,1078,   410 },
 { 1094,1079,   372 },
 { 1095,1080,   341 },
 { 1096,1081,   315 },
 { 1097,1082,   293 },
 { 1098,1083,   273 },
 { 1099,1084,   256 },
 { 1100,1085,   241 },
 { 1101,1086,   228 },
 { 1102,1087,   216 },
 { 1103, 195,   205 },
 { 1104,1089,   853 },
 { 1105,1090,   731 },
 { 1106,1091,   640 },
 { 1107,1092,   569 },
 { 1108,1093,   512 },
 { 1109,1094,   465 },
 { 1110,1095,   427 },
 { 1111,1096,   394 },
 { 1112,1097,   366 },
 { 1113,1098,   341 },
 { 1114,1099,   320 },
 { 1115,1100,   301 },
 { 1116,1101,   284 },
 { 1117,1102,   269 },
 { 1118,1103,   256 },
 { 1119, 233,   244 },
 { 1120,1105,   878 },
 { 1121,1106,   768 },
 { 1122,1107,   683 },
 { 1123,1108,   614 },
 { 1124,1109,   559 },
 { 1125,1110,   512 },
 { 1126,1111,   473 },
 { 1127,1112,   439 },
 { 1128,1113,   410 },
 { 1129,1114,   384 },
 { 1130,1115,   361 },
 { 1131,1116,   341 },
 { 1132,1117,   323 },
 { 1133,1118,   307 },
 { 1134,1119,   293 },
 { 1135, 267,   279 },
 { 1136,1121,   896 },
 { 1137,1122,   796 },
 { 1138,1123,   717 },
 { 1139,1124,   652 },
 { 1140,1125,   597 },
 { 1141,1126,   551 },
 { 1142,1127,   512 },
 { 1143,1128,   478 },
 { 1144,1129,   448 },
 { 1145,1130,   422 },
 { 1146,1131,   398 },
 { 1147,1132,   377 },
 { 1148,1133,   358 },
 { 1149,1134,   341 },
 { 1150,1135,   326 },
 { 1151, 299,   312 },
 { 1152,1137,   910 },
 { 1153,1138,   819 },
 { 1154,1139,   745 },
 { 1155,1140,   683 },
 { 1156,1141,   630 },
 { 1157,1142,   585 },
 { 1158,1143,   546 },
 { 1159,1144,   512 },
 { 1160,1145,   482 },
 { 1161,1146,   455 },
 { 1162,1147,   431 },
 { 1163,1148,   410 },
 { 1164,1149,   390 },
 { 1165,1150,   372 },
 { 1166,1151,   356 },
 { 1167, 328,   341 },
 { 1168,1153,   922 },
 { 1169,1154,   838 },
 { 1170,1155,   768 },
 { 1171,1156,   709 },
 { 1172,1157,   658 },
 { 1173,1158,   614 },
 { 1174,1159,   576 },
 { 1175,1160,   542 },
 { 1176,1161,   512 },
 { 1177,1162,   485 },
 { 1178,1163,   461 },
 { 1179,1164,   439 },
 { 1180,1165,   419 },
 { 1181,1166,   401 },
 { 1182,1167,   384 },
 { 1183, 354,   369 },
 { 1184,1169,   931 },
 { 1185,1170,   853 },
 { 1186,1171,   788 },
 { 1187,1172,   731 },
 { 1188,1173,   683 },
 { 1189,1174,   640 },
 { 1190,1175,   602 },
 { 1191,1176,   569 },
 { 1192,1177,   539 },
 { 1193,1178,   512 },
 { 1194,1179,   488 },
 { 1195,1180,   465 },
 { 1196,1181,   445 },
 { 1197,1182,   427 },
 { 1198,1183,   410 },
 { 1199, 379,   394 },
 { 1200,1185,   939 },
 { 1201,1186,   866 },
 { 1202,1187,   805 },
 { 1203,1188,   751 },
 { 1204,1189,   704 },
 { 1205,1190,   663 },
 { 1206,1191,   626 },
 { 1207,1192,   593 },
 { 1208,1193,   563 },
 { 1209,1194,   536 },
 { 1210,1195,   512 },
 { 1211,1196,   490 },
 { 1212,1197,   469 },
 { 1213,1198,   451 },
 { 1214,1199,   433 },
 { 1215, 402,   417 },
 { 1216,1201,   945 },
 { 1217,1202,   878 },
 { 1218,1203,   819 },
 { 1219,1204,   768 },
 { 1220,1205,   723 },
 { 1221,1206,   683 },
 { 1222,1207,   647 },
 { 1223,1208,   614 },
 { 1224,1209,   585 },
 { 1225,1210,   559 },
 { 1226,1211,   534 },
 { 1227,1212,   512 },
 { 1228,1213,   492 },
 { 1229,1214,   473 },
 { 1230,1215,   455 },
 { 1231, 424,   439 },
 { 1232,1217,   951 },
 { 1233,1218,   887 },
 { 1234,1219,   832 },
 { 1235,1220,   783 },
 { 1236,1221,   740 },
 { 1237,1222,   701 },
 { 1238,1223,   666 },
 { 1239,1224,   634 },
 { 1240,1225,   605 },
 { 1241,1226,   579 },
 { 1242,1227,   555 },
 { 1243,1228,   532 },
 { 1244,1229,   512 },
 { 1245,1230,   493 },
 { 1246,1231,   475 },
 { 1247, 444,   459 },
 { 1248,1233,   956 },
 { 1249,1234,   896 },
 { 1250,1235,   843 },
 { 1251,1236,   796 },
 { 1252,1237,   755 },
 { 1253,1238,   717 },
 { 1254,1239,   683 },
 { 1255,1240,   652 },
 { 1256,1241,   623 },
 { 1257,1242,   597 },
 { 1258,1243,   573 },
 { 1259,1244,   551 },
 { 1260,1245,   531 },
 { 1261,1246,   512 },
 { 1262,1247,   494 },
 { 1263, 462,   478 },
 { 1264,1249,   960 },
 { 1265,1250,   904 },
 { 1266,1251,   853 },
 { 1267,1252,   808 },
 { 1268,1253,   768 },
 { 1269,1254,   731 },
 { 1270,1255,   698 },
 { 1271,1256,   668 },
 { 1272,1257,   640 },
 { 1273,1258,   614 },
 { 1274,1259,   591 },
 { 1275,1260,   569 },
 { 1276,1261,   549 },
 { 1277,1262,   530 },
 { 1278,1263,   512 },
 { 1279, 480,   495 },
 {  967,1265,   964 },
 {  916,1266,   910 },
 {  870,1267,   862 },
 {  829,1268,   819 },
 {  791,1269,   780 },
 {  757,1270,   745 },
 {  725,1271,   712 },
 {  696,1272,   683 },
 {  670,1273,   655 },
 {  645,1274,   630 },
 {  622,1275,   607 },
 {  600,1276,   585 },
 {  580,1277,   565 },
 {  562,1278,   546 },
 {  544,1279,   529 },
 {  528, 496,   512 },
 { 0,0, 0 }
};


srung const * const pladder = ladder;
