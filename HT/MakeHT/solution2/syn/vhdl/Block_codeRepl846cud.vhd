-- ==============================================================
-- File generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
-- Version: 2016.4
-- Copyright (C) 1986-2016 Xilinx, Inc. All Rights Reserved.
-- 
-- ==============================================================

library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity Block_codeRepl846cud_rom is 
    generic(
             dwidth     : integer := 10; 
             awidth     : integer := 10; 
             mem_size    : integer := 1024
    ); 
    port (
          addr0      : in std_logic_vector(awidth-1 downto 0); 
          ce0       : in std_logic; 
          q0         : out std_logic_vector(dwidth-1 downto 0);
          clk       : in std_logic
    ); 
end entity; 


architecture rtl of Block_codeRepl846cud_rom is 

signal addr0_tmp : std_logic_vector(awidth-1 downto 0); 
type mem_array is array (0 to mem_size-1) of std_logic_vector (dwidth-1 downto 0); 
signal mem : mem_array := (
    0 => "0000000000", 1 => "0000000001", 2 => "0000000010", 3 => "0000000011", 
    4 => "0000000100", 5 => "0000000101", 6 => "0000000110", 7 => "0000000111", 
    8 => "0000001000", 9 => "0000001010", 10 => "0000001011", 11 => "0000001100", 
    12 => "0000001101", 13 => "0000001110", 14 => "0000001111", 15 => "0000010000", 
    16 => "0000010001", 17 => "0000010010", 18 => "0000010011", 19 => "0000010101", 
    20 => "0000010110", 21 => "0000010111", 22 => "0000011000", 23 => "0000011001", 
    24 => "0000011010", 25 => "0000011011", 26 => "0000011100", 27 => "0000011101", 
    28 => "0000011110", 29 => "0000100000", 30 => "0000100001", 31 => "0000100010", 
    32 => "0000100011", 33 => "0000100100", 34 => "0000100101", 35 => "0000100110", 
    36 => "0000100111", 37 => "0000101000", 38 => "0000101001", 39 => "0000101011", 
    40 => "0000101100", 41 => "0000101101", 42 => "0000101110", 43 => "0000101111", 
    44 => "0000110000", 45 => "0000110001", 46 => "0000110010", 47 => "0000110011", 
    48 => "0000110100", 49 => "0000110110", 50 => "0000110111", 51 => "0000111000", 
    52 => "0000111001", 53 => "0000111010", 54 => "0000111011", 55 => "0000111100", 
    56 => "0000111101", 57 => "0000111110", 58 => "0000111111", 59 => "0001000001", 
    60 => "0001000010", 61 => "0001000011", 62 => "0001000100", 63 => "0001000101", 
    64 => "0001000110", 65 => "0001000111", 66 => "0001001000", 67 => "0001001001", 
    68 => "0001001010", 69 => "0001001100", 70 => "0001001101", 71 => "0001001110", 
    72 => "0001001111", 73 => "0001010000", 74 => "0001010001", 75 => "0001010010", 
    76 => "0001010011", 77 => "0001010100", 78 => "0001010101", 79 => "0001010111", 
    80 => "0001011000", 81 => "0001011001", 82 => "0001011010", 83 => "0001011011", 
    84 => "0001011100", 85 => "0001011101", 86 => "0001011110", 87 => "0001011111", 
    88 => "0001100000", 89 => "0001100010", 90 => "0001100011", 91 => "0001100100", 
    92 => "0001100101", 93 => "0001100110", 94 => "0001100111", 95 => "0001101000", 
    96 => "0001101001", 97 => "0001101010", 98 => "0001101011", 99 => "0001101101", 
    100 => "0001101110", 101 => "0001101111", 102 => "0001110000", 103 => "0001110001", 
    104 => "0001110010", 105 => "0001110011", 106 => "0001110100", 107 => "0001110101", 
    108 => "0001110110", 109 => "0001111000", 110 => "0001111001", 111 => "0001111010", 
    112 => "0001111011", 113 => "0001111100", 114 => "0001111101", 115 => "0001111110", 
    116 => "0001111111", 117 => "0010000000", 118 => "0010000001", 119 => "0010000011", 
    120 => "0010000100", 121 => "0010000101", 122 => "0010000110", 123 => "0010000111", 
    124 => "0010001000", 125 => "0010001001", 126 => "0010001010", 127 => "0010001011", 
    128 => "0010001100", 129 => "0010001110", 130 => "0010001111", 131 => "0010010000", 
    132 => "0010010001", 133 => "0010010010", 134 => "0010010011", 135 => "0010010100", 
    136 => "0010010101", 137 => "0010010110", 138 => "0010010111", 139 => "0010011001", 
    140 => "0010011010", 141 => "0010011011", 142 => "0010011100", 143 => "0010011101", 
    144 => "0010011110", 145 => "0010011111", 146 => "0010100000", 147 => "0010100001", 
    148 => "0010100010", 149 => "0010100100", 150 => "0010100101", 151 => "0010100110", 
    152 => "0010100111", 153 => "0010101000", 154 => "0010101001", 155 => "0010101010", 
    156 => "0010101011", 157 => "0010101100", 158 => "0010101101", 159 => "0010101111", 
    160 => "0010110000", 161 => "0010110001", 162 => "0010110010", 163 => "0010110011", 
    164 => "0010110100", 165 => "0010110101", 166 => "0010110110", 167 => "0010110111", 
    168 => "0010111000", 169 => "0010111010", 170 => "0010111011", 171 => "0010111100", 
    172 => "0010111101", 173 => "0010111110", 174 => "0010111111", 175 => "0011000000", 
    176 => "0011000001", 177 => "0011000010", 178 => "0011000011", 179 => "0011000101", 
    180 => "0011000110", 181 => "0011000111", 182 => "0011001000", 183 => "0011001001", 
    184 => "0011001010", 185 => "0011001011", 186 => "0011001100", 187 => "0011001101", 
    188 => "0011001110", 189 => "0011010000", 190 => "0011010001", 191 => "0011010010", 
    192 => "0011010011", 193 => "0011010100", 194 => "0011010101", 195 => "0011010110", 
    196 => "0011010111", 197 => "0011011000", 198 => "0011011001", 199 => "0011011011", 
    200 => "0011011100", 201 => "0011011101", 202 => "0011011110", 203 => "0011011111", 
    204 => "0011100000", 205 => "0011100001", 206 => "0011100010", 207 => "0011100011", 
    208 => "0011100100", 209 => "0011100110", 210 => "0011100111", 211 => "0011101000", 
    212 => "0011101001", 213 => "0011101010", 214 => "0011101011", 215 => "0011101100", 
    216 => "0011101101", 217 => "0011101110", 218 => "0011101111", 219 => "0011110001", 
    220 => "0011110010", 221 => "0011110011", 222 => "0011110100", 223 => "0011110101", 
    224 => "0011110110", 225 => "0011110111", 226 => "0011111000", 227 => "0011111001", 
    228 => "0011111010", 229 => "0011111100", 230 => "0011111101", 231 => "0011111110", 
    232 => "0011111111", 233 => "0100000000", 234 => "0100000001", 235 => "0100000010", 
    236 => "0100000011", 237 => "0100000100", 238 => "0100000101", 239 => "0100000111", 
    240 => "0100001000", 241 => "0100001001", 242 => "0100001010", 243 => "0100001011", 
    244 => "0100001100", 245 => "0100001101", 246 => "0100001110", 247 => "0100001111", 
    248 => "0100010000", 249 => "0100010010", 250 => "0100010011", 251 => "0100010100", 
    252 => "0100010101", 253 => "0100010110", 254 => "0100010111", 255 => "0100011000", 
    256 => "0100011001", 257 => "0100011010", 258 => "0100011011", 259 => "0100011101", 
    260 => "0100011110", 261 => "0100011111", 262 => "0100100000", 263 => "0100100001", 
    264 => "0100100010", 265 => "0100100011", 266 => "0100100100", 267 => "0100100101", 
    268 => "0100100110", 269 => "0100101000", 270 => "0100101001", 271 => "0100101010", 
    272 => "0100101011", 273 => "0100101100", 274 => "0100101101", 275 => "0100101110", 
    276 => "0100101111", 277 => "0100110000", 278 => "0100110001", 279 => "0100110011", 
    280 => "0100110100", 281 => "0100110101", 282 => "0100110110", 283 => "0100110111", 
    284 => "0100111000", 285 => "0100111001", 286 => "0100111010", 287 => "0100111011", 
    288 => "0100111100", 289 => "0100111110", 290 => "0100111111", 291 => "0101000000", 
    292 => "0101000001", 293 => "0101000010", 294 => "0101000011", 295 => "0101000100", 
    296 => "0101000101", 297 => "0101000110", 298 => "0101000111", 299 => "0101001001", 
    300 => "0101001010", 301 => "0101001011", 302 => "0101001100", 303 => "0101001101", 
    304 => "0101001110", 305 => "0101001111", 306 => "0101010000", 307 => "0101010001", 
    308 => "0101010010", 309 => "0101010100", 310 => "0101010101", 311 => "0101010110", 
    312 => "0101010111", 313 => "0101011000", 314 => "0101011001", 315 => "0101011010", 
    316 => "0101011011", 317 => "0101011100", 318 => "0101011101", 319 => "0101011111", 
    320 => "0101100000", 321 => "0101100001", 322 => "0101100010", 323 => "0101100011", 
    324 => "0101100100", 325 => "0101100101", 326 => "0101100110", 327 => "0101100111", 
    328 => "0101101000", 329 => "0101101010", 330 => "0101101011", 331 => "0101101100", 
    332 => "0101101101", 333 => "0101101110", 334 => "0101101111", 335 => "0101110000", 
    336 => "0101110001", 337 => "0101110010", 338 => "0101110011", 339 => "0101110101", 
    340 => "0101110110", 341 => "0101110111", 342 => "0101111000", 343 => "0101111001", 
    344 => "0101111010", 345 => "0101111011", 346 => "0101111100", 347 => "0101111101", 
    348 => "0101111110", 349 => "0110000000", 350 => "0110000001", 351 => "0110000010", 
    352 => "0110000011", 353 => "0110000100", 354 => "0110000101", 355 => "0110000110", 
    356 => "0110000111", 357 => "0110001000", 358 => "0110001001", 359 => "0110001011", 
    360 => "0110001100", 361 => "0110001101", 362 => "0110001110", 363 => "0110001111", 
    364 => "0110010000", 365 => "0110010001", 366 => "0110010010", 367 => "0110010011", 
    368 => "0110010100", 369 => "0110010110", 370 => "0110010111", 371 => "0110011000", 
    372 => "0110011001", 373 => "0110011010", 374 => "0110011011", 375 => "0110011100", 
    376 => "0110011101", 377 => "0110011110", 378 => "0110011111", 379 => "0110100001", 
    380 => "0110100010", 381 => "0110100011", 382 => "0110100100", 383 => "0110100101", 
    384 => "0110100110", 385 => "0110100111", 386 => "0110101000", 387 => "0110101001", 
    388 => "0110101010", 389 => "0110101100", 390 => "0110101101", 391 => "0110101110", 
    392 => "0110101111", 393 => "0110110000", 394 => "0110110001", 395 => "0110110010", 
    396 => "0110110011", 397 => "0110110100", 398 => "0110110101", 399 => "0110110111", 
    400 => "0110111000", 401 => "0110111001", 402 => "0110111010", 403 => "0110111011", 
    404 => "0110111100", 405 => "0110111101", 406 => "0110111110", 407 => "0110111111", 
    408 => "0111000000", 409 => "0111000010", 410 => "0111000011", 411 => "0111000100", 
    412 => "0111000101", 413 => "0111000110", 414 => "0111000111", 415 => "0111001000", 
    416 => "0111001001", 417 => "0111001010", 418 => "0111001011", 419 => "0111001101", 
    420 => "0111001110", 421 => "0111001111", 422 => "0111010000", 423 => "0111010001", 
    424 => "0111010010", 425 => "0111010011", 426 => "0111010100", 427 => "0111010101", 
    428 => "0111010110", 429 => "0111011000", 430 => "0111011001", 431 => "0111011010", 
    432 => "0111011011", 433 => "0111011100", 434 => "0111011101", 435 => "0111011110", 
    436 => "0111011111", 437 => "0111100000", 438 => "0111100001", 439 => "0111100011", 
    440 => "0111100100", 441 => "0111100101", 442 => "0111100110", 443 => "0111100111", 
    444 => "0111101000", 445 => "0111101001", 446 => "0111101010", 447 => "0111101011", 
    448 => "0111101100", 449 => "0111101110", 450 => "0111101111", 451 => "0111110000", 
    452 => "0111110001", 453 => "0111110010", 454 => "0111110011", 455 => "0111110100", 
    456 => "0111110101", 457 => "0111110110", 458 => "0111110111", 459 => "0111111001", 
    460 => "0111111010", 461 => "0111111011", 462 => "0111111100", 463 => "0111111101", 
    464 => "0111111110", 465 => "0111111111", 466 => "1000000000", 467 => "1000000001", 
    468 => "1000000010", 469 => "1000000100", 470 => "1000000101", 471 => "1000000110", 
    472 => "1000000111", 473 => "1000001000", 474 => "1000001001", 475 => "1000001010", 
    476 => "1000001011", 477 => "1000001100", 478 => "1000001101", 479 => "1000001111", 
    480 => "1000010000", 481 => "1000010001", 482 => "1000010010", 483 => "1000010011", 
    484 => "1000010100", 485 => "1000010101", 486 => "1000010110", 487 => "1000010111", 
    488 => "1000011000", 489 => "1000011010", 490 => "1000011011", 491 => "1000011100", 
    492 => "1000011101", 493 => "1000011110", 494 => "1000011111", 495 => "1000100000", 
    496 => "1000100001", 497 => "1000100010", 498 => "1000100011", 499 => "1000100101", 
    500 => "1000100110", 501 => "1000100111", 502 => "1000101000", 503 => "1000101001", 
    504 => "1000101010", 505 => "1000101011", 506 => "1000101100", 507 => "1000101101", 
    508 => "1000101110", 509 => "1000110000", 510 => "1000110001", 511 => "1000110010", 
    512 => "1000110011", 513 => "1000110100", 514 => "1000110101", 515 => "1000110110", 
    516 => "1000110111", 517 => "1000111000", 518 => "1000111001", 519 => "1000111011", 
    520 => "1000111100", 521 => "1000111101", 522 => "1000111110", 523 => "1000111111", 
    524 => "1001000000", 525 => "1001000001", 526 => "1001000010", 527 => "1001000011", 
    528 => "1001000100", 529 => "1001000110", 530 => "1001000111", 531 => "1001001000", 
    532 => "1001001001", 533 => "1001001010", 534 => "1001001011", 535 => "1001001100", 
    536 => "1001001101", 537 => "1001001110", 538 => "1001001111", 539 => "1001010001", 
    540 => "1001010010", 541 => "1001010011", 542 => "1001010100", 543 => "1001010101", 
    544 => "1001010110", 545 => "1001010111", 546 => "1001011000", 547 => "1001011001", 
    548 => "1001011010", 549 => "1001011100", 550 => "1001011101", 551 => "1001011110", 
    552 => "1001011111", 553 => "1001100000", 554 => "1001100001", 555 => "1001100010", 
    556 => "1001100011", 557 => "1001100100", 558 => "1001100101", 559 => "1001100111", 
    560 => "1001101000", 561 => "1001101001", 562 => "1001101010", 563 => "1001101011", 
    564 => "1001101100", 565 => "1001101101", 566 => "1001101110", 567 => "1001101111", 
    568 => "1001110000", 569 => "1001110010", 570 => "1001110011", 571 => "1001110100", 
    572 => "1001110101", 573 => "1001110110", 574 => "1001110111", 575 => "1001111000", 
    576 => "1001111001", 577 => "1001111010", 578 => "1001111011", 579 => "1001111101", 
    580 => "1001111110", 581 => "1001111111", 582 => "1010000000", 583 => "1010000001", 
    584 => "1010000010", 585 => "1010000011", 586 => "1010000100", 587 => "1010000101", 
    588 => "1010000110", 589 => "1010001000", 590 => "1010001001", 591 => "1010001010", 
    592 => "1010001011", 593 => "1010001100", 594 => "1010001101", 595 => "1010001110", 
    596 => "1010001111", 597 => "1010010000", 598 => "1010010001", 599 => "1010010011", 
    600 => "1010010100", 601 => "1010010101", 602 => "1010010110", 603 => "1010010111", 
    604 => "1010011000", 605 => "1010011001", 606 => "1010011010", 607 => "1010011011", 
    608 => "1010011100", 609 => "1010011110", 610 => "1010011111", 611 => "1010100000", 
    612 => "1010100001", 613 => "1010100010", 614 => "1010100011", 615 => "1010100100", 
    616 => "1010100101", 617 => "1010100110", 618 => "1010100111", 619 => "1010101001", 
    620 => "1010101010", 621 => "1010101011", 622 => "1010101100", 623 => "1010101101", 
    624 => "1010101110", 625 => "1010101111", 626 => "1010110000", 627 => "1010110001", 
    628 => "1010110010", 629 => "1010110100", 630 => "1010110101", 631 => "1010110110", 
    632 => "1010110111", 633 => "1010111000", 634 => "1010111001", 635 => "1010111010", 
    636 => "1010111011", 637 => "1010111100", 638 => "1010111101", 639 => "1010111111", 
    640 => "1011000000", 641 => "1011000001", 642 => "1011000010", 643 => "1011000011", 
    644 => "1011000100", 645 => "1011000101", 646 => "1011000110", 647 => "1011000111", 
    648 => "1011001000", 649 => "1011001010", 650 => "1011001011", 651 => "1011001100", 
    652 => "1011001101", 653 => "1011001110", 654 => "1011001111", 655 => "1011010000", 
    656 => "1011010001", 657 => "1011010010", 658 => "1011010011", 659 => "1011010101", 
    660 => "1011010110", 661 => "1011010111", 662 => "1011011000", 663 => "1011011001", 
    664 => "1011011010", 665 => "1011011011", 666 => "1011011100", 667 => "1011011101", 
    668 => "1011011110", 669 => "1011100000", 670 => "1011100001", 671 => "1011100010", 
    672 => "1011100011", 673 => "1011100100", 674 => "1011100101", 675 => "1011100110", 
    676 => "1011100111", 677 => "1011101000", 678 => "1011101001", 679 => "1011101011", 
    680 => "1011101100", 681 => "1011101101", 682 => "1011101110", 683 => "1011101111", 
    684 => "1011110000", 685 => "1011110001", 686 => "1011110010", 687 => "1011110011", 
    688 => "1011110100", 689 => "1011110110", 690 => "1011110111", 691 => "1011111000", 
    692 => "1011111001", 693 => "1011111010", 694 => "1011111011", 695 => "1011111100", 
    696 => "1011111101", 697 => "1011111110", 698 => "1011111111", 699 => "1100000001", 
    700 => "1100000010", 701 => "1100000011", 702 => "1100000100", 703 => "1100000101", 
    704 => "1100000110", 705 => "1100000111", 706 => "1100001000", 707 => "1100001001", 
    708 => "1100001010", 709 => "1100001100", 710 => "1100001101", 711 => "1100001110", 
    712 => "1100001111", 713 => "1100010000", 714 => "1100010001", 715 => "1100010010", 
    716 => "1100010011", 717 => "1100010100", 718 => "1100010101", 719 => "1100010111", 
    720 => "1100011000", 721 => "1100011001", 722 => "1100011010", 723 => "1100011011", 
    724 => "1100011100", 725 => "1100011101", 726 => "1100011110", 727 => "1100011111", 
    728 => "1100100000", 729 => "1100100010", 730 => "1100100011", 731 => "1100100100", 
    732 => "1100100101", 733 => "1100100110", 734 => "1100100111", 735 => "1100101000", 
    736 => "1100101001", 737 => "1100101010", 738 => "1100101011", 739 => "1100101101", 
    740 => "1100101110", 741 => "1100101111", 742 => "1100110000", 743 => "1100110001", 
    744 => "1100110010", 745 => "1100110011", 746 => "1100110100", 747 => "1100110101", 
    748 => "1100110110", 749 => "1100111000", 750 => "1100111001", 751 => "1100111010", 
    752 => "1100111011", 753 => "1100111100", 754 => "1100111101", 755 => "1100111110", 
    756 => "1100111111", 757 => "1101000000", 758 => "1101000001", 759 => "1101000011", 
    760 => "1101000100", 761 => "1101000101", 762 => "1101000110", 763 => "1101000111", 
    764 => "1101001000", 765 => "1101001001", 766 => "1101001010", 767 => "1101001011", 
    768 => "1101001100", 769 => "1101001110", 770 => "1101001111", 771 => "1101010000", 
    772 => "1101010001", 773 => "1101010010", 774 => "1101010011", 775 => "1101010100", 
    776 => "1101010101", 777 => "1101010110", 778 => "1101010111", 779 => "1101011001", 
    780 => "1101011010", 781 => "1101011011", 782 => "1101011100", 783 => "1101011101", 
    784 => "1101011110", 785 => "1101011111", 786 => "1101100000", 787 => "1101100001", 
    788 => "1101100010", 789 => "1101100100", 790 => "1101100101", 791 => "1101100110", 
    792 => "1101100111", 793 => "1101101000", 794 => "1101101001", 795 => "1101101010", 
    796 => "1101101011", 797 => "1101101100", 798 => "1101101101", 799 => "1101101111", 
    800 => "1101110000", 801 => "1101110001", 802 => "1101110010", 803 => "1101110011", 
    804 => "1101110100", 805 => "1101110101", 806 => "1101110110", 807 => "1101110111", 
    808 => "1101111000", 809 => "1101111010", 810 => "1101111011", 811 => "1101111100", 
    812 => "1101111101", 813 => "1101111110", 814 => "1101111111", 815 => "1110000000", 
    816 => "1110000001", 817 => "1110000010", 818 => "1110000011", 819 => "1110000101", 
    820 => "1110000110", 821 => "1110000111", 822 => "1110001000", 823 => "1110001001", 
    824 => "1110001010", 825 => "1110001011", 826 => "1110001100", 827 => "1110001101", 
    828 => "1110001110", 829 => "1110010000", 830 => "1110010001", 831 => "1110010010", 
    832 => "1110010011", 833 => "1110010100", 834 => "1110010101", 835 => "1110010110", 
    836 => "1110010111", 837 => "1110011000", 838 => "1110011001", 839 => "1110011011", 
    840 => "1110011100", 841 => "1110011101", 842 => "1110011110", 843 => "1110011111", 
    844 => "1110100000", 845 => "1110100001", 846 => "1110100010", 847 => "1110100011", 
    848 => "1110100100", 849 => "1110100110", 850 => "1110100111", 851 => "1110101000", 
    852 => "1110101001", 853 => "1110101010", 854 => "1110101011", 855 => "1110101100", 
    856 => "1110101101", 857 => "1110101110", 858 => "1110101111", 859 => "1110110001", 
    860 => "1110110010", 861 => "1110110011", 862 => "1110110100", 863 => "1110110101", 
    864 => "1110110110", 865 => "1110110111", 866 => "1110111000", 867 => "1110111001", 
    868 => "1110111010", 869 => "1110111100", 870 => "1110111101", 871 => "1110111110", 
    872 => "1110111111", 873 => "1111000000", 874 => "1111000001", 875 => "1111000010", 
    876 => "1111000011", 877 => "1111000100", 878 => "1111000101", 879 => "1111000111", 
    880 => "1111001000", 881 => "1111001001", 882 => "1111001010", 883 => "1111001011", 
    884 => "1111001100", 885 => "1111001101", 886 => "1111001110", 887 => "1111001111", 
    888 => "1111010000", 889 => "1111010010", 890 => "1111010011", 891 => "1111010100", 
    892 => "1111010101", 893 => "1111010110", 894 => "1111010111", 895 => "1111011000", 
    896 => "1111011001", 897 => "1111011010", 898 => "1111011011", 899 => "1111011101", 
    900 => "1111011110", 901 => "1111011111", 902 => "1111100000", 903 => "1111100001", 
    904 => "1111100010", 905 => "1111100011", 906 => "1111100100", 907 => "1111100101", 
    908 => "1111100110", 909 => "1111101000", 910 => "1111101001", 911 => "1111101010", 
    912 => "1111101011", 913 => "1111101100", 914 => "1111101101", 915 => "1111101110", 
    916 => "1111101111", 917 => "1111110000", 918 => "1111110001", 919 => "1111110011", 
    920 => "1111110100", 921 => "1111110101", 922 => "1111110110", 923 => "1111110111", 
    924 => "1111111000", 925 => "1111111001", 926 => "1111111010", 927 => "1111111011", 
    928 => "1111111100", 929 => "1111111110", 930 to 1023=> "1111111111" );


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

p_rom_access: process (clk)  
begin 
    if (clk'event and clk = '1') then
        if (ce0 = '1') then 
            q0 <= mem(CONV_INTEGER(addr0_tmp)); 
        end if;
    end if;
end process;

end rtl;


Library IEEE;
use IEEE.std_logic_1164.all;

entity Block_codeRepl846cud is
    generic (
        DataWidth : INTEGER := 10;
        AddressRange : INTEGER := 1024;
        AddressWidth : INTEGER := 10);
    port (
        reset : IN STD_LOGIC;
        clk : IN STD_LOGIC;
        address0 : IN STD_LOGIC_VECTOR(AddressWidth - 1 DOWNTO 0);
        ce0 : IN STD_LOGIC;
        q0 : OUT STD_LOGIC_VECTOR(DataWidth - 1 DOWNTO 0));
end entity;

architecture arch of Block_codeRepl846cud is
    component Block_codeRepl846cud_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    Block_codeRepl846cud_rom_U :  component Block_codeRepl846cud_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;


