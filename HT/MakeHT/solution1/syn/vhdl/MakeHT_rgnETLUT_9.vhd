-- ==============================================================
-- File generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
-- Version: 2016.4
-- Copyright (C) 1986-2016 Xilinx, Inc. All Rights Reserved.
-- 
-- ==============================================================

library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity MakeHT_rgnETLUT_9_rom is 
    generic(
             dwidth     : integer := 10; 
             awidth     : integer := 10; 
             mem_size    : integer := 1024
    ); 
    port (
          addr0      : in std_logic_vector(awidth-1 downto 0); 
          ce0       : in std_logic; 
          q0         : out std_logic_vector(dwidth-1 downto 0);
          addr1      : in std_logic_vector(awidth-1 downto 0); 
          ce1       : in std_logic; 
          q1         : out std_logic_vector(dwidth-1 downto 0);
          addr2      : in std_logic_vector(awidth-1 downto 0); 
          ce2       : in std_logic; 
          q2         : out std_logic_vector(dwidth-1 downto 0);
          clk       : in std_logic
    ); 
end entity; 


architecture rtl of MakeHT_rgnETLUT_9_rom is 

signal addr0_tmp : std_logic_vector(awidth-1 downto 0); 
signal addr1_tmp : std_logic_vector(awidth-1 downto 0); 
signal addr2_tmp : std_logic_vector(awidth-1 downto 0); 
type mem_array is array (0 to mem_size-1) of std_logic_vector (dwidth-1 downto 0); 
signal mem0 : mem_array := (
    0 => "0000000000", 1 => "0000000010", 2 => "0000000100", 3 => "0000000110", 
    4 => "0000001000", 5 => "0000001010", 6 => "0000001100", 7 => "0000001110", 
    8 => "0000010000", 9 => "0000010001", 10 => "0000010011", 11 => "0000010101", 
    12 => "0000010111", 13 => "0000011001", 14 => "0000011011", 15 => "0000011101", 
    16 => "0000011111", 17 => "0000100001", 18 => "0000100011", 19 => "0000100101", 
    20 => "0000100110", 21 => "0000101000", 22 => "0000101010", 23 => "0000101100", 
    24 => "0000101110", 25 => "0000110000", 26 => "0000110010", 27 => "0000110100", 
    28 => "0000110110", 29 => "0000110111", 30 => "0000111001", 31 => "0000111011", 
    32 => "0000111101", 33 => "0000111111", 34 => "0001000001", 35 => "0001000011", 
    36 => "0001000101", 37 => "0001000111", 38 => "0001001001", 39 => "0001001011", 
    40 => "0001001100", 41 => "0001001110", 42 => "0001010000", 43 => "0001010010", 
    44 => "0001010100", 45 => "0001010110", 46 => "0001011000", 47 => "0001011010", 
    48 => "0001011100", 49 => "0001011110", 50 => "0001011111", 51 => "0001100001", 
    52 => "0001100011", 53 => "0001100101", 54 => "0001100111", 55 => "0001101001", 
    56 => "0001101011", 57 => "0001101101", 58 => "0001101111", 59 => "0001110001", 
    60 => "0001110010", 61 => "0001110100", 62 => "0001110110", 63 => "0001111000", 
    64 => "0001111010", 65 => "0001111100", 66 => "0001111110", 67 => "0010000000", 
    68 => "0010000010", 69 => "0010000100", 70 => "0010000101", 71 => "0010000111", 
    72 => "0010001001", 73 => "0010001011", 74 => "0010001101", 75 => "0010001111", 
    76 => "0010010001", 77 => "0010010011", 78 => "0010010101", 79 => "0010010111", 
    80 => "0010011000", 81 => "0010011010", 82 => "0010011100", 83 => "0010011110", 
    84 => "0010100000", 85 => "0010100010", 86 => "0010100100", 87 => "0010100110", 
    88 => "0010101000", 89 => "0010101010", 90 => "0010101011", 91 => "0010101101", 
    92 => "0010101111", 93 => "0010110001", 94 => "0010110011", 95 => "0010110101", 
    96 => "0010110111", 97 => "0010111001", 98 => "0010111011", 99 => "0010111101", 
    100 => "0010111110", 101 => "0011000000", 102 => "0011000010", 103 => "0011000100", 
    104 => "0011000110", 105 => "0011001000", 106 => "0011001010", 107 => "0011001100", 
    108 => "0011001110", 109 => "0011010000", 110 => "0011010001", 111 => "0011010011", 
    112 => "0011010101", 113 => "0011010111", 114 => "0011011001", 115 => "0011011011", 
    116 => "0011011101", 117 => "0011011111", 118 => "0011100001", 119 => "0011100011", 
    120 => "0011100100", 121 => "0011100110", 122 => "0011101000", 123 => "0011101010", 
    124 => "0011101100", 125 => "0011101110", 126 => "0011110000", 127 => "0011110010", 
    128 => "0011110100", 129 => "0011110110", 130 => "0011110111", 131 => "0011111001", 
    132 => "0011111011", 133 => "0011111101", 134 => "0011111111", 135 => "0100000001", 
    136 => "0100000011", 137 => "0100000101", 138 => "0100000111", 139 => "0100001000", 
    140 => "0100001010", 141 => "0100001100", 142 => "0100001110", 143 => "0100010000", 
    144 => "0100010010", 145 => "0100010100", 146 => "0100010110", 147 => "0100011000", 
    148 => "0100011010", 149 => "0100011011", 150 => "0100011101", 151 => "0100011111", 
    152 => "0100100001", 153 => "0100100011", 154 => "0100100101", 155 => "0100100111", 
    156 => "0100101001", 157 => "0100101011", 158 => "0100101101", 159 => "0100101110", 
    160 => "0100110000", 161 => "0100110010", 162 => "0100110100", 163 => "0100110110", 
    164 => "0100111000", 165 => "0100111010", 166 => "0100111100", 167 => "0100111110", 
    168 => "0101000000", 169 => "0101000001", 170 => "0101000011", 171 => "0101000101", 
    172 => "0101000111", 173 => "0101001001", 174 => "0101001011", 175 => "0101001101", 
    176 => "0101001111", 177 => "0101010001", 178 => "0101010011", 179 => "0101010100", 
    180 => "0101010110", 181 => "0101011000", 182 => "0101011010", 183 => "0101011100", 
    184 => "0101011110", 185 => "0101100000", 186 => "0101100010", 187 => "0101100100", 
    188 => "0101100110", 189 => "0101100111", 190 => "0101101001", 191 => "0101101011", 
    192 => "0101101101", 193 => "0101101111", 194 => "0101110001", 195 => "0101110011", 
    196 => "0101110101", 197 => "0101110111", 198 => "0101111001", 199 => "0101111010", 
    200 => "0101111100", 201 => "0101111110", 202 => "0110000000", 203 => "0110000010", 
    204 => "0110000100", 205 => "0110000110", 206 => "0110001000", 207 => "0110001010", 
    208 => "0110001100", 209 => "0110001101", 210 => "0110001111", 211 => "0110010001", 
    212 => "0110010011", 213 => "0110010101", 214 => "0110010111", 215 => "0110011001", 
    216 => "0110011011", 217 => "0110011101", 218 => "0110011111", 219 => "0110100000", 
    220 => "0110100010", 221 => "0110100100", 222 => "0110100110", 223 => "0110101000", 
    224 => "0110101010", 225 => "0110101100", 226 => "0110101110", 227 => "0110110000", 
    228 => "0110110010", 229 => "0110110011", 230 => "0110110101", 231 => "0110110111", 
    232 => "0110111001", 233 => "0110111011", 234 => "0110111101", 235 => "0110111111", 
    236 => "0111000001", 237 => "0111000011", 238 => "0111000101", 239 => "0111000110", 
    240 => "0111001000", 241 => "0111001010", 242 => "0111001100", 243 => "0111001110", 
    244 => "0111010000", 245 => "0111010010", 246 => "0111010100", 247 => "0111010110", 
    248 => "0111011000", 249 => "0111011001", 250 => "0111011011", 251 => "0111011101", 
    252 => "0111011111", 253 => "0111100001", 254 => "0111100011", 255 => "0111100101", 
    256 => "0111100111", 257 => "0111101001", 258 => "0111101011", 259 => "0111101100", 
    260 => "0111101110", 261 => "0111110000", 262 => "0111110010", 263 => "0111110100", 
    264 => "0111110110", 265 => "0111111000", 266 => "0111111010", 267 => "0111111100", 
    268 => "0111111110", 269 => "0111111111", 270 => "1000000001", 271 => "1000000011", 
    272 => "1000000101", 273 => "1000000111", 274 => "1000001001", 275 => "1000001011", 
    276 => "1000001101", 277 => "1000001111", 278 => "1000010001", 279 => "1000010011", 
    280 => "1000010100", 281 => "1000010110", 282 => "1000011000", 283 => "1000011010", 
    284 => "1000011100", 285 => "1000011110", 286 => "1000100000", 287 => "1000100010", 
    288 => "1000100100", 289 => "1000100110", 290 => "1000100111", 291 => "1000101001", 
    292 => "1000101011", 293 => "1000101101", 294 => "1000101111", 295 => "1000110001", 
    296 => "1000110011", 297 => "1000110101", 298 => "1000110111", 299 => "1000111001", 
    300 => "1000111010", 301 => "1000111100", 302 => "1000111110", 303 => "1001000000", 
    304 => "1001000010", 305 => "1001000100", 306 => "1001000110", 307 => "1001001000", 
    308 => "1001001010", 309 => "1001001100", 310 => "1001001101", 311 => "1001001111", 
    312 => "1001010001", 313 => "1001010011", 314 => "1001010101", 315 => "1001010111", 
    316 => "1001011001", 317 => "1001011011", 318 => "1001011101", 319 => "1001011111", 
    320 => "1001100000", 321 => "1001100010", 322 => "1001100100", 323 => "1001100110", 
    324 => "1001101000", 325 => "1001101010", 326 => "1001101100", 327 => "1001101110", 
    328 => "1001110000", 329 => "1001110010", 330 => "1001110011", 331 => "1001110101", 
    332 => "1001110111", 333 => "1001111001", 334 => "1001111011", 335 => "1001111101", 
    336 => "1001111111", 337 => "1010000001", 338 => "1010000011", 339 => "1010000101", 
    340 => "1010000110", 341 => "1010001000", 342 => "1010001010", 343 => "1010001100", 
    344 => "1010001110", 345 => "1010010000", 346 => "1010010010", 347 => "1010010100", 
    348 => "1010010110", 349 => "1010011000", 350 => "1010011001", 351 => "1010011011", 
    352 => "1010011101", 353 => "1010011111", 354 => "1010100001", 355 => "1010100011", 
    356 => "1010100101", 357 => "1010100111", 358 => "1010101001", 359 => "1010101011", 
    360 => "1010101100", 361 => "1010101110", 362 => "1010110000", 363 => "1010110010", 
    364 => "1010110100", 365 => "1010110110", 366 => "1010111000", 367 => "1010111010", 
    368 => "1010111100", 369 => "1010111110", 370 => "1010111111", 371 => "1011000001", 
    372 => "1011000011", 373 => "1011000101", 374 => "1011000111", 375 => "1011001001", 
    376 => "1011001011", 377 => "1011001101", 378 => "1011001111", 379 => "1011010001", 
    380 => "1011010010", 381 => "1011010100", 382 => "1011010110", 383 => "1011011000", 
    384 => "1011011010", 385 => "1011011100", 386 => "1011011110", 387 => "1011100000", 
    388 => "1011100010", 389 => "1011100011", 390 => "1011100101", 391 => "1011100111", 
    392 => "1011101001", 393 => "1011101011", 394 => "1011101101", 395 => "1011101111", 
    396 => "1011110001", 397 => "1011110011", 398 => "1011110101", 399 => "1011110110", 
    400 => "1011111000", 401 => "1011111010", 402 => "1011111100", 403 => "1011111110", 
    404 => "1100000000", 405 => "1100000010", 406 => "1100000100", 407 => "1100000110", 
    408 => "1100001000", 409 => "1100001001", 410 => "1100001011", 411 => "1100001101", 
    412 => "1100001111", 413 => "1100010001", 414 => "1100010011", 415 => "1100010101", 
    416 => "1100010111", 417 => "1100011001", 418 => "1100011011", 419 => "1100011100", 
    420 => "1100011110", 421 => "1100100000", 422 => "1100100010", 423 => "1100100100", 
    424 => "1100100110", 425 => "1100101000", 426 => "1100101010", 427 => "1100101100", 
    428 => "1100101110", 429 => "1100101111", 430 => "1100110001", 431 => "1100110011", 
    432 => "1100110101", 433 => "1100110111", 434 => "1100111001", 435 => "1100111011", 
    436 => "1100111101", 437 => "1100111111", 438 => "1101000001", 439 => "1101000010", 
    440 => "1101000100", 441 => "1101000110", 442 => "1101001000", 443 => "1101001010", 
    444 => "1101001100", 445 => "1101001110", 446 => "1101010000", 447 => "1101010010", 
    448 => "1101010100", 449 => "1101010101", 450 => "1101010111", 451 => "1101011001", 
    452 => "1101011011", 453 => "1101011101", 454 => "1101011111", 455 => "1101100001", 
    456 => "1101100011", 457 => "1101100101", 458 => "1101100111", 459 => "1101101000", 
    460 => "1101101010", 461 => "1101101100", 462 => "1101101110", 463 => "1101110000", 
    464 => "1101110010", 465 => "1101110100", 466 => "1101110110", 467 => "1101111000", 
    468 => "1101111010", 469 => "1101111011", 470 => "1101111101", 471 => "1101111111", 
    472 => "1110000001", 473 => "1110000011", 474 => "1110000101", 475 => "1110000111", 
    476 => "1110001001", 477 => "1110001011", 478 => "1110001101", 479 => "1110001110", 
    480 => "1110010000", 481 => "1110010010", 482 => "1110010100", 483 => "1110010110", 
    484 => "1110011000", 485 => "1110011010", 486 => "1110011100", 487 => "1110011110", 
    488 => "1110100000", 489 => "1110100001", 490 => "1110100011", 491 => "1110100101", 
    492 => "1110100111", 493 => "1110101001", 494 => "1110101011", 495 => "1110101101", 
    496 => "1110101111", 497 => "1110110001", 498 => "1110110011", 499 => "1110110100", 
    500 => "1110110110", 501 => "1110111000", 502 => "1110111010", 503 => "1110111100", 
    504 => "1110111110", 505 => "1111000000", 506 => "1111000010", 507 => "1111000100", 
    508 => "1111000110", 509 => "1111000111", 510 => "1111001001", 511 => "1111001011", 
    512 => "1111001101", 513 => "1111001111", 514 => "1111010001", 515 => "1111010011", 
    516 => "1111010101", 517 => "1111010111", 518 => "1111011001", 519 => "1111011010", 
    520 => "1111011100", 521 => "1111011110", 522 => "1111100000", 523 => "1111100010", 
    524 => "1111100100", 525 => "1111100110", 526 => "1111101000", 527 => "1111101010", 
    528 => "1111101100", 529 => "1111101101", 530 => "1111101111", 531 => "1111110001", 
    532 => "1111110011", 533 => "1111110101", 534 => "1111110111", 535 => "1111111001", 
    536 => "1111111011", 537 => "1111111101", 538 to 1023=> "1111111111" );
signal mem1 : mem_array := (
    0 => "0000000000", 1 => "0000000010", 2 => "0000000100", 3 => "0000000110", 
    4 => "0000001000", 5 => "0000001010", 6 => "0000001100", 7 => "0000001110", 
    8 => "0000010000", 9 => "0000010001", 10 => "0000010011", 11 => "0000010101", 
    12 => "0000010111", 13 => "0000011001", 14 => "0000011011", 15 => "0000011101", 
    16 => "0000011111", 17 => "0000100001", 18 => "0000100011", 19 => "0000100101", 
    20 => "0000100110", 21 => "0000101000", 22 => "0000101010", 23 => "0000101100", 
    24 => "0000101110", 25 => "0000110000", 26 => "0000110010", 27 => "0000110100", 
    28 => "0000110110", 29 => "0000110111", 30 => "0000111001", 31 => "0000111011", 
    32 => "0000111101", 33 => "0000111111", 34 => "0001000001", 35 => "0001000011", 
    36 => "0001000101", 37 => "0001000111", 38 => "0001001001", 39 => "0001001011", 
    40 => "0001001100", 41 => "0001001110", 42 => "0001010000", 43 => "0001010010", 
    44 => "0001010100", 45 => "0001010110", 46 => "0001011000", 47 => "0001011010", 
    48 => "0001011100", 49 => "0001011110", 50 => "0001011111", 51 => "0001100001", 
    52 => "0001100011", 53 => "0001100101", 54 => "0001100111", 55 => "0001101001", 
    56 => "0001101011", 57 => "0001101101", 58 => "0001101111", 59 => "0001110001", 
    60 => "0001110010", 61 => "0001110100", 62 => "0001110110", 63 => "0001111000", 
    64 => "0001111010", 65 => "0001111100", 66 => "0001111110", 67 => "0010000000", 
    68 => "0010000010", 69 => "0010000100", 70 => "0010000101", 71 => "0010000111", 
    72 => "0010001001", 73 => "0010001011", 74 => "0010001101", 75 => "0010001111", 
    76 => "0010010001", 77 => "0010010011", 78 => "0010010101", 79 => "0010010111", 
    80 => "0010011000", 81 => "0010011010", 82 => "0010011100", 83 => "0010011110", 
    84 => "0010100000", 85 => "0010100010", 86 => "0010100100", 87 => "0010100110", 
    88 => "0010101000", 89 => "0010101010", 90 => "0010101011", 91 => "0010101101", 
    92 => "0010101111", 93 => "0010110001", 94 => "0010110011", 95 => "0010110101", 
    96 => "0010110111", 97 => "0010111001", 98 => "0010111011", 99 => "0010111101", 
    100 => "0010111110", 101 => "0011000000", 102 => "0011000010", 103 => "0011000100", 
    104 => "0011000110", 105 => "0011001000", 106 => "0011001010", 107 => "0011001100", 
    108 => "0011001110", 109 => "0011010000", 110 => "0011010001", 111 => "0011010011", 
    112 => "0011010101", 113 => "0011010111", 114 => "0011011001", 115 => "0011011011", 
    116 => "0011011101", 117 => "0011011111", 118 => "0011100001", 119 => "0011100011", 
    120 => "0011100100", 121 => "0011100110", 122 => "0011101000", 123 => "0011101010", 
    124 => "0011101100", 125 => "0011101110", 126 => "0011110000", 127 => "0011110010", 
    128 => "0011110100", 129 => "0011110110", 130 => "0011110111", 131 => "0011111001", 
    132 => "0011111011", 133 => "0011111101", 134 => "0011111111", 135 => "0100000001", 
    136 => "0100000011", 137 => "0100000101", 138 => "0100000111", 139 => "0100001000", 
    140 => "0100001010", 141 => "0100001100", 142 => "0100001110", 143 => "0100010000", 
    144 => "0100010010", 145 => "0100010100", 146 => "0100010110", 147 => "0100011000", 
    148 => "0100011010", 149 => "0100011011", 150 => "0100011101", 151 => "0100011111", 
    152 => "0100100001", 153 => "0100100011", 154 => "0100100101", 155 => "0100100111", 
    156 => "0100101001", 157 => "0100101011", 158 => "0100101101", 159 => "0100101110", 
    160 => "0100110000", 161 => "0100110010", 162 => "0100110100", 163 => "0100110110", 
    164 => "0100111000", 165 => "0100111010", 166 => "0100111100", 167 => "0100111110", 
    168 => "0101000000", 169 => "0101000001", 170 => "0101000011", 171 => "0101000101", 
    172 => "0101000111", 173 => "0101001001", 174 => "0101001011", 175 => "0101001101", 
    176 => "0101001111", 177 => "0101010001", 178 => "0101010011", 179 => "0101010100", 
    180 => "0101010110", 181 => "0101011000", 182 => "0101011010", 183 => "0101011100", 
    184 => "0101011110", 185 => "0101100000", 186 => "0101100010", 187 => "0101100100", 
    188 => "0101100110", 189 => "0101100111", 190 => "0101101001", 191 => "0101101011", 
    192 => "0101101101", 193 => "0101101111", 194 => "0101110001", 195 => "0101110011", 
    196 => "0101110101", 197 => "0101110111", 198 => "0101111001", 199 => "0101111010", 
    200 => "0101111100", 201 => "0101111110", 202 => "0110000000", 203 => "0110000010", 
    204 => "0110000100", 205 => "0110000110", 206 => "0110001000", 207 => "0110001010", 
    208 => "0110001100", 209 => "0110001101", 210 => "0110001111", 211 => "0110010001", 
    212 => "0110010011", 213 => "0110010101", 214 => "0110010111", 215 => "0110011001", 
    216 => "0110011011", 217 => "0110011101", 218 => "0110011111", 219 => "0110100000", 
    220 => "0110100010", 221 => "0110100100", 222 => "0110100110", 223 => "0110101000", 
    224 => "0110101010", 225 => "0110101100", 226 => "0110101110", 227 => "0110110000", 
    228 => "0110110010", 229 => "0110110011", 230 => "0110110101", 231 => "0110110111", 
    232 => "0110111001", 233 => "0110111011", 234 => "0110111101", 235 => "0110111111", 
    236 => "0111000001", 237 => "0111000011", 238 => "0111000101", 239 => "0111000110", 
    240 => "0111001000", 241 => "0111001010", 242 => "0111001100", 243 => "0111001110", 
    244 => "0111010000", 245 => "0111010010", 246 => "0111010100", 247 => "0111010110", 
    248 => "0111011000", 249 => "0111011001", 250 => "0111011011", 251 => "0111011101", 
    252 => "0111011111", 253 => "0111100001", 254 => "0111100011", 255 => "0111100101", 
    256 => "0111100111", 257 => "0111101001", 258 => "0111101011", 259 => "0111101100", 
    260 => "0111101110", 261 => "0111110000", 262 => "0111110010", 263 => "0111110100", 
    264 => "0111110110", 265 => "0111111000", 266 => "0111111010", 267 => "0111111100", 
    268 => "0111111110", 269 => "0111111111", 270 => "1000000001", 271 => "1000000011", 
    272 => "1000000101", 273 => "1000000111", 274 => "1000001001", 275 => "1000001011", 
    276 => "1000001101", 277 => "1000001111", 278 => "1000010001", 279 => "1000010011", 
    280 => "1000010100", 281 => "1000010110", 282 => "1000011000", 283 => "1000011010", 
    284 => "1000011100", 285 => "1000011110", 286 => "1000100000", 287 => "1000100010", 
    288 => "1000100100", 289 => "1000100110", 290 => "1000100111", 291 => "1000101001", 
    292 => "1000101011", 293 => "1000101101", 294 => "1000101111", 295 => "1000110001", 
    296 => "1000110011", 297 => "1000110101", 298 => "1000110111", 299 => "1000111001", 
    300 => "1000111010", 301 => "1000111100", 302 => "1000111110", 303 => "1001000000", 
    304 => "1001000010", 305 => "1001000100", 306 => "1001000110", 307 => "1001001000", 
    308 => "1001001010", 309 => "1001001100", 310 => "1001001101", 311 => "1001001111", 
    312 => "1001010001", 313 => "1001010011", 314 => "1001010101", 315 => "1001010111", 
    316 => "1001011001", 317 => "1001011011", 318 => "1001011101", 319 => "1001011111", 
    320 => "1001100000", 321 => "1001100010", 322 => "1001100100", 323 => "1001100110", 
    324 => "1001101000", 325 => "1001101010", 326 => "1001101100", 327 => "1001101110", 
    328 => "1001110000", 329 => "1001110010", 330 => "1001110011", 331 => "1001110101", 
    332 => "1001110111", 333 => "1001111001", 334 => "1001111011", 335 => "1001111101", 
    336 => "1001111111", 337 => "1010000001", 338 => "1010000011", 339 => "1010000101", 
    340 => "1010000110", 341 => "1010001000", 342 => "1010001010", 343 => "1010001100", 
    344 => "1010001110", 345 => "1010010000", 346 => "1010010010", 347 => "1010010100", 
    348 => "1010010110", 349 => "1010011000", 350 => "1010011001", 351 => "1010011011", 
    352 => "1010011101", 353 => "1010011111", 354 => "1010100001", 355 => "1010100011", 
    356 => "1010100101", 357 => "1010100111", 358 => "1010101001", 359 => "1010101011", 
    360 => "1010101100", 361 => "1010101110", 362 => "1010110000", 363 => "1010110010", 
    364 => "1010110100", 365 => "1010110110", 366 => "1010111000", 367 => "1010111010", 
    368 => "1010111100", 369 => "1010111110", 370 => "1010111111", 371 => "1011000001", 
    372 => "1011000011", 373 => "1011000101", 374 => "1011000111", 375 => "1011001001", 
    376 => "1011001011", 377 => "1011001101", 378 => "1011001111", 379 => "1011010001", 
    380 => "1011010010", 381 => "1011010100", 382 => "1011010110", 383 => "1011011000", 
    384 => "1011011010", 385 => "1011011100", 386 => "1011011110", 387 => "1011100000", 
    388 => "1011100010", 389 => "1011100011", 390 => "1011100101", 391 => "1011100111", 
    392 => "1011101001", 393 => "1011101011", 394 => "1011101101", 395 => "1011101111", 
    396 => "1011110001", 397 => "1011110011", 398 => "1011110101", 399 => "1011110110", 
    400 => "1011111000", 401 => "1011111010", 402 => "1011111100", 403 => "1011111110", 
    404 => "1100000000", 405 => "1100000010", 406 => "1100000100", 407 => "1100000110", 
    408 => "1100001000", 409 => "1100001001", 410 => "1100001011", 411 => "1100001101", 
    412 => "1100001111", 413 => "1100010001", 414 => "1100010011", 415 => "1100010101", 
    416 => "1100010111", 417 => "1100011001", 418 => "1100011011", 419 => "1100011100", 
    420 => "1100011110", 421 => "1100100000", 422 => "1100100010", 423 => "1100100100", 
    424 => "1100100110", 425 => "1100101000", 426 => "1100101010", 427 => "1100101100", 
    428 => "1100101110", 429 => "1100101111", 430 => "1100110001", 431 => "1100110011", 
    432 => "1100110101", 433 => "1100110111", 434 => "1100111001", 435 => "1100111011", 
    436 => "1100111101", 437 => "1100111111", 438 => "1101000001", 439 => "1101000010", 
    440 => "1101000100", 441 => "1101000110", 442 => "1101001000", 443 => "1101001010", 
    444 => "1101001100", 445 => "1101001110", 446 => "1101010000", 447 => "1101010010", 
    448 => "1101010100", 449 => "1101010101", 450 => "1101010111", 451 => "1101011001", 
    452 => "1101011011", 453 => "1101011101", 454 => "1101011111", 455 => "1101100001", 
    456 => "1101100011", 457 => "1101100101", 458 => "1101100111", 459 => "1101101000", 
    460 => "1101101010", 461 => "1101101100", 462 => "1101101110", 463 => "1101110000", 
    464 => "1101110010", 465 => "1101110100", 466 => "1101110110", 467 => "1101111000", 
    468 => "1101111010", 469 => "1101111011", 470 => "1101111101", 471 => "1101111111", 
    472 => "1110000001", 473 => "1110000011", 474 => "1110000101", 475 => "1110000111", 
    476 => "1110001001", 477 => "1110001011", 478 => "1110001101", 479 => "1110001110", 
    480 => "1110010000", 481 => "1110010010", 482 => "1110010100", 483 => "1110010110", 
    484 => "1110011000", 485 => "1110011010", 486 => "1110011100", 487 => "1110011110", 
    488 => "1110100000", 489 => "1110100001", 490 => "1110100011", 491 => "1110100101", 
    492 => "1110100111", 493 => "1110101001", 494 => "1110101011", 495 => "1110101101", 
    496 => "1110101111", 497 => "1110110001", 498 => "1110110011", 499 => "1110110100", 
    500 => "1110110110", 501 => "1110111000", 502 => "1110111010", 503 => "1110111100", 
    504 => "1110111110", 505 => "1111000000", 506 => "1111000010", 507 => "1111000100", 
    508 => "1111000110", 509 => "1111000111", 510 => "1111001001", 511 => "1111001011", 
    512 => "1111001101", 513 => "1111001111", 514 => "1111010001", 515 => "1111010011", 
    516 => "1111010101", 517 => "1111010111", 518 => "1111011001", 519 => "1111011010", 
    520 => "1111011100", 521 => "1111011110", 522 => "1111100000", 523 => "1111100010", 
    524 => "1111100100", 525 => "1111100110", 526 => "1111101000", 527 => "1111101010", 
    528 => "1111101100", 529 => "1111101101", 530 => "1111101111", 531 => "1111110001", 
    532 => "1111110011", 533 => "1111110101", 534 => "1111110111", 535 => "1111111001", 
    536 => "1111111011", 537 => "1111111101", 538 to 1023=> "1111111111" );

attribute syn_rom_style : string;
attribute syn_rom_style of mem0 : signal is "block_rom";
attribute syn_rom_style of mem1 : signal is "block_rom";
attribute ROM_STYLE : string;
attribute ROM_STYLE of mem0 : signal is "block";
attribute ROM_STYLE of mem1 : signal is "block";

attribute EQUIVALENT_REGISTER_REMOVAL : string;
begin 


memory_access_guard_0: process (addr0) 
begin
      addr0_tmp <= addr0;
--synthesis translate_off
      if (CONV_INTEGER(addr0) > mem_size-1) then
           addr0_tmp <= (others => '0');
      else 
           addr0_tmp <= addr0;
      end if;
--synthesis translate_on
end process;

memory_access_guard_1: process (addr1) 
begin
      addr1_tmp <= addr1;
--synthesis translate_off
      if (CONV_INTEGER(addr1) > mem_size-1) then
           addr1_tmp <= (others => '0');
      else 
           addr1_tmp <= addr1;
      end if;
--synthesis translate_on
end process;

memory_access_guard_2: process (addr2) 
begin
      addr2_tmp <= addr2;
--synthesis translate_off
      if (CONV_INTEGER(addr2) > mem_size-1) then
           addr2_tmp <= (others => '0');
      else 
           addr2_tmp <= addr2;
      end if;
--synthesis translate_on
end process;

p_rom_access: process (clk)  
begin 
    if (clk'event and clk = '1') then
        if (ce0 = '1') then 
            q0 <= mem0(CONV_INTEGER(addr0_tmp)); 
        end if;
        if (ce1 = '1') then 
            q1 <= mem0(CONV_INTEGER(addr1_tmp)); 
        end if;
        if (ce2 = '1') then 
            q2 <= mem1(CONV_INTEGER(addr2_tmp)); 
        end if;
    end if;
end process;

end rtl;


Library IEEE;
use IEEE.std_logic_1164.all;

entity MakeHT_rgnETLUT_9 is
    generic (
        DataWidth : INTEGER := 10;
        AddressRange : INTEGER := 1024;
        AddressWidth : INTEGER := 10);
    port (
        reset : IN STD_LOGIC;
        clk : IN STD_LOGIC;
        address0 : IN STD_LOGIC_VECTOR(AddressWidth - 1 DOWNTO 0);
        ce0 : IN STD_LOGIC;
        q0 : OUT STD_LOGIC_VECTOR(DataWidth - 1 DOWNTO 0);
        address1 : IN STD_LOGIC_VECTOR(AddressWidth - 1 DOWNTO 0);
        ce1 : IN STD_LOGIC;
        q1 : OUT STD_LOGIC_VECTOR(DataWidth - 1 DOWNTO 0);
        address2 : IN STD_LOGIC_VECTOR(AddressWidth - 1 DOWNTO 0);
        ce2 : IN STD_LOGIC;
        q2 : OUT STD_LOGIC_VECTOR(DataWidth - 1 DOWNTO 0));
end entity;

architecture arch of MakeHT_rgnETLUT_9 is
    component MakeHT_rgnETLUT_9_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR;
            addr1 : IN STD_LOGIC_VECTOR;
            ce1 : IN STD_LOGIC;
            q1 : OUT STD_LOGIC_VECTOR;
            addr2 : IN STD_LOGIC_VECTOR;
            ce2 : IN STD_LOGIC;
            q2 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    MakeHT_rgnETLUT_9_rom_U :  component MakeHT_rgnETLUT_9_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0,
        addr1 => address1,
        ce1 => ce1,
        q1 => q1,
        addr2 => address2,
        ce2 => ce2,
        q2 => q2);

end architecture;


