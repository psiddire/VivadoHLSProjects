// ==============================================================
// File generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2016.4
// Copyright (C) 1986-2016 Xilinx, Inc. All Rights Reserved.
// 
// ==============================================================

#ifndef __MakeHT_rgnETLUT_7_H__
#define __MakeHT_rgnETLUT_7_H__


#include <systemc>
using namespace sc_core;
using namespace sc_dt;




#include <iostream>
#include <fstream>

struct MakeHT_rgnETLUT_7_ram : public sc_core::sc_module {

  static const unsigned DataWidth = 10;
  static const unsigned AddressRange = 1024;
  static const unsigned AddressWidth = 10;

//latency = 1
//input_reg = 1
//output_reg = 0
sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in <sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in <sc_lv<AddressWidth> > address1;
sc_core::sc_in <sc_logic> ce1;
sc_core::sc_out <sc_lv<DataWidth> > q1;
sc_core::sc_in <sc_lv<AddressWidth> > address2;
sc_core::sc_in <sc_logic> ce2;
sc_core::sc_out <sc_lv<DataWidth> > q2;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


sc_lv<DataWidth> ram[AddressRange];


   SC_CTOR(MakeHT_rgnETLUT_7_ram) {
        ram[0] = "0b0000000000";
        ram[1] = "0b0000000010";
        ram[2] = "0b0000000100";
        ram[3] = "0b0000000101";
        ram[4] = "0b0000000111";
        ram[5] = "0b0000001001";
        ram[6] = "0b0000001010";
        ram[7] = "0b0000001100";
        ram[8] = "0b0000001110";
        ram[9] = "0b0000010000";
        ram[10] = "0b0000010001";
        ram[11] = "0b0000010011";
        ram[12] = "0b0000010101";
        ram[13] = "0b0000010110";
        ram[14] = "0b0000011000";
        ram[15] = "0b0000011010";
        ram[16] = "0b0000011011";
        ram[17] = "0b0000011101";
        ram[18] = "0b0000011111";
        ram[19] = "0b0000100001";
        ram[20] = "0b0000100010";
        ram[21] = "0b0000100100";
        ram[22] = "0b0000100110";
        ram[23] = "0b0000100111";
        ram[24] = "0b0000101001";
        ram[25] = "0b0000101011";
        ram[26] = "0b0000101100";
        ram[27] = "0b0000101110";
        ram[28] = "0b0000110000";
        ram[29] = "0b0000110010";
        ram[30] = "0b0000110011";
        ram[31] = "0b0000110101";
        ram[32] = "0b0000110111";
        ram[33] = "0b0000111000";
        ram[34] = "0b0000111010";
        ram[35] = "0b0000111100";
        ram[36] = "0b0000111101";
        ram[37] = "0b0000111111";
        ram[38] = "0b0001000001";
        ram[39] = "0b0001000011";
        ram[40] = "0b0001000100";
        ram[41] = "0b0001000110";
        ram[42] = "0b0001001000";
        ram[43] = "0b0001001001";
        ram[44] = "0b0001001011";
        ram[45] = "0b0001001101";
        ram[46] = "0b0001001110";
        ram[47] = "0b0001010000";
        ram[48] = "0b0001010010";
        ram[49] = "0b0001010100";
        ram[50] = "0b0001010101";
        ram[51] = "0b0001010111";
        ram[52] = "0b0001011001";
        ram[53] = "0b0001011010";
        ram[54] = "0b0001011100";
        ram[55] = "0b0001011110";
        ram[56] = "0b0001011111";
        ram[57] = "0b0001100001";
        ram[58] = "0b0001100011";
        ram[59] = "0b0001100101";
        ram[60] = "0b0001100110";
        ram[61] = "0b0001101000";
        ram[62] = "0b0001101010";
        ram[63] = "0b0001101011";
        ram[64] = "0b0001101101";
        ram[65] = "0b0001101111";
        ram[66] = "0b0001110000";
        ram[67] = "0b0001110010";
        ram[68] = "0b0001110100";
        ram[69] = "0b0001110110";
        ram[70] = "0b0001110111";
        ram[71] = "0b0001111001";
        ram[72] = "0b0001111011";
        ram[73] = "0b0001111100";
        ram[74] = "0b0001111110";
        ram[75] = "0b0010000000";
        ram[76] = "0b0010000001";
        ram[77] = "0b0010000011";
        ram[78] = "0b0010000101";
        ram[79] = "0b0010000111";
        ram[80] = "0b0010001000";
        ram[81] = "0b0010001010";
        ram[82] = "0b0010001100";
        ram[83] = "0b0010001101";
        ram[84] = "0b0010001111";
        ram[85] = "0b0010010001";
        ram[86] = "0b0010010010";
        ram[87] = "0b0010010100";
        ram[88] = "0b0010010110";
        ram[89] = "0b0010011000";
        ram[90] = "0b0010011001";
        ram[91] = "0b0010011011";
        ram[92] = "0b0010011101";
        ram[93] = "0b0010011110";
        ram[94] = "0b0010100000";
        ram[95] = "0b0010100010";
        ram[96] = "0b0010100011";
        ram[97] = "0b0010100101";
        ram[98] = "0b0010100111";
        ram[99] = "0b0010101001";
        ram[100] = "0b0010101010";
        ram[101] = "0b0010101100";
        ram[102] = "0b0010101110";
        ram[103] = "0b0010101111";
        ram[104] = "0b0010110001";
        ram[105] = "0b0010110011";
        ram[106] = "0b0010110100";
        ram[107] = "0b0010110110";
        ram[108] = "0b0010111000";
        ram[109] = "0b0010111010";
        ram[110] = "0b0010111011";
        ram[111] = "0b0010111101";
        ram[112] = "0b0010111111";
        ram[113] = "0b0011000000";
        ram[114] = "0b0011000010";
        ram[115] = "0b0011000100";
        ram[116] = "0b0011000101";
        ram[117] = "0b0011000111";
        ram[118] = "0b0011001001";
        ram[119] = "0b0011001011";
        ram[120] = "0b0011001100";
        ram[121] = "0b0011001110";
        ram[122] = "0b0011010000";
        ram[123] = "0b0011010001";
        ram[124] = "0b0011010011";
        ram[125] = "0b0011010101";
        ram[126] = "0b0011010110";
        ram[127] = "0b0011011000";
        ram[128] = "0b0011011010";
        ram[129] = "0b0011011100";
        ram[130] = "0b0011011101";
        ram[131] = "0b0011011111";
        ram[132] = "0b0011100001";
        ram[133] = "0b0011100010";
        ram[134] = "0b0011100100";
        ram[135] = "0b0011100110";
        ram[136] = "0b0011100111";
        ram[137] = "0b0011101001";
        ram[138] = "0b0011101011";
        ram[139] = "0b0011101101";
        ram[140] = "0b0011101110";
        ram[141] = "0b0011110000";
        ram[142] = "0b0011110010";
        ram[143] = "0b0011110011";
        ram[144] = "0b0011110101";
        ram[145] = "0b0011110111";
        ram[146] = "0b0011111000";
        ram[147] = "0b0011111010";
        ram[148] = "0b0011111100";
        ram[149] = "0b0011111110";
        ram[150] = "0b0011111111";
        ram[151] = "0b0100000001";
        ram[152] = "0b0100000011";
        ram[153] = "0b0100000100";
        ram[154] = "0b0100000110";
        ram[155] = "0b0100001000";
        ram[156] = "0b0100001001";
        ram[157] = "0b0100001011";
        ram[158] = "0b0100001101";
        ram[159] = "0b0100001111";
        ram[160] = "0b0100010000";
        ram[161] = "0b0100010010";
        ram[162] = "0b0100010100";
        ram[163] = "0b0100010101";
        ram[164] = "0b0100010111";
        ram[165] = "0b0100011001";
        ram[166] = "0b0100011010";
        ram[167] = "0b0100011100";
        ram[168] = "0b0100011110";
        ram[169] = "0b0100100000";
        ram[170] = "0b0100100001";
        ram[171] = "0b0100100011";
        ram[172] = "0b0100100101";
        ram[173] = "0b0100100110";
        ram[174] = "0b0100101000";
        ram[175] = "0b0100101010";
        ram[176] = "0b0100101011";
        ram[177] = "0b0100101101";
        ram[178] = "0b0100101111";
        ram[179] = "0b0100110001";
        ram[180] = "0b0100110010";
        ram[181] = "0b0100110100";
        ram[182] = "0b0100110110";
        ram[183] = "0b0100110111";
        ram[184] = "0b0100111001";
        ram[185] = "0b0100111011";
        ram[186] = "0b0100111100";
        ram[187] = "0b0100111110";
        ram[188] = "0b0101000000";
        ram[189] = "0b0101000010";
        ram[190] = "0b0101000011";
        ram[191] = "0b0101000101";
        ram[192] = "0b0101000111";
        ram[193] = "0b0101001000";
        ram[194] = "0b0101001010";
        ram[195] = "0b0101001100";
        ram[196] = "0b0101001101";
        ram[197] = "0b0101001111";
        ram[198] = "0b0101010001";
        ram[199] = "0b0101010011";
        ram[200] = "0b0101010100";
        ram[201] = "0b0101010110";
        ram[202] = "0b0101011000";
        ram[203] = "0b0101011001";
        ram[204] = "0b0101011011";
        ram[205] = "0b0101011101";
        ram[206] = "0b0101011110";
        ram[207] = "0b0101100000";
        ram[208] = "0b0101100010";
        ram[209] = "0b0101100100";
        ram[210] = "0b0101100101";
        ram[211] = "0b0101100111";
        ram[212] = "0b0101101001";
        ram[213] = "0b0101101010";
        ram[214] = "0b0101101100";
        ram[215] = "0b0101101110";
        ram[216] = "0b0101101111";
        ram[217] = "0b0101110001";
        ram[218] = "0b0101110011";
        ram[219] = "0b0101110101";
        ram[220] = "0b0101110110";
        ram[221] = "0b0101111000";
        ram[222] = "0b0101111010";
        ram[223] = "0b0101111011";
        ram[224] = "0b0101111101";
        ram[225] = "0b0101111111";
        ram[226] = "0b0110000000";
        ram[227] = "0b0110000010";
        ram[228] = "0b0110000100";
        ram[229] = "0b0110000110";
        ram[230] = "0b0110000111";
        ram[231] = "0b0110001001";
        ram[232] = "0b0110001011";
        ram[233] = "0b0110001100";
        ram[234] = "0b0110001110";
        ram[235] = "0b0110010000";
        ram[236] = "0b0110010001";
        ram[237] = "0b0110010011";
        ram[238] = "0b0110010101";
        ram[239] = "0b0110010111";
        ram[240] = "0b0110011000";
        ram[241] = "0b0110011010";
        ram[242] = "0b0110011100";
        ram[243] = "0b0110011101";
        ram[244] = "0b0110011111";
        ram[245] = "0b0110100001";
        ram[246] = "0b0110100010";
        ram[247] = "0b0110100100";
        ram[248] = "0b0110100110";
        ram[249] = "0b0110101000";
        ram[250] = "0b0110101001";
        ram[251] = "0b0110101011";
        ram[252] = "0b0110101101";
        ram[253] = "0b0110101110";
        ram[254] = "0b0110110000";
        ram[255] = "0b0110110010";
        ram[256] = "0b0110110011";
        ram[257] = "0b0110110101";
        ram[258] = "0b0110110111";
        ram[259] = "0b0110111001";
        ram[260] = "0b0110111010";
        ram[261] = "0b0110111100";
        ram[262] = "0b0110111110";
        ram[263] = "0b0110111111";
        ram[264] = "0b0111000001";
        ram[265] = "0b0111000011";
        ram[266] = "0b0111000100";
        ram[267] = "0b0111000110";
        ram[268] = "0b0111001000";
        ram[269] = "0b0111001010";
        ram[270] = "0b0111001011";
        ram[271] = "0b0111001101";
        ram[272] = "0b0111001111";
        ram[273] = "0b0111010000";
        ram[274] = "0b0111010010";
        ram[275] = "0b0111010100";
        ram[276] = "0b0111010101";
        ram[277] = "0b0111010111";
        ram[278] = "0b0111011001";
        ram[279] = "0b0111011011";
        ram[280] = "0b0111011100";
        ram[281] = "0b0111011110";
        ram[282] = "0b0111100000";
        ram[283] = "0b0111100001";
        ram[284] = "0b0111100011";
        ram[285] = "0b0111100101";
        ram[286] = "0b0111100110";
        ram[287] = "0b0111101000";
        ram[288] = "0b0111101010";
        ram[289] = "0b0111101100";
        ram[290] = "0b0111101101";
        ram[291] = "0b0111101111";
        ram[292] = "0b0111110001";
        ram[293] = "0b0111110010";
        ram[294] = "0b0111110100";
        ram[295] = "0b0111110110";
        ram[296] = "0b0111110111";
        ram[297] = "0b0111111001";
        ram[298] = "0b0111111011";
        ram[299] = "0b0111111101";
        ram[300] = "0b0111111110";
        ram[301] = "0b1000000000";
        ram[302] = "0b1000000010";
        ram[303] = "0b1000000011";
        ram[304] = "0b1000000101";
        ram[305] = "0b1000000111";
        ram[306] = "0b1000001000";
        ram[307] = "0b1000001010";
        ram[308] = "0b1000001100";
        ram[309] = "0b1000001110";
        ram[310] = "0b1000001111";
        ram[311] = "0b1000010001";
        ram[312] = "0b1000010011";
        ram[313] = "0b1000010100";
        ram[314] = "0b1000010110";
        ram[315] = "0b1000011000";
        ram[316] = "0b1000011001";
        ram[317] = "0b1000011011";
        ram[318] = "0b1000011101";
        ram[319] = "0b1000011111";
        ram[320] = "0b1000100000";
        ram[321] = "0b1000100010";
        ram[322] = "0b1000100100";
        ram[323] = "0b1000100101";
        ram[324] = "0b1000100111";
        ram[325] = "0b1000101001";
        ram[326] = "0b1000101010";
        ram[327] = "0b1000101100";
        ram[328] = "0b1000101110";
        ram[329] = "0b1000110000";
        ram[330] = "0b1000110001";
        ram[331] = "0b1000110011";
        ram[332] = "0b1000110101";
        ram[333] = "0b1000110110";
        ram[334] = "0b1000111000";
        ram[335] = "0b1000111010";
        ram[336] = "0b1000111011";
        ram[337] = "0b1000111101";
        ram[338] = "0b1000111111";
        ram[339] = "0b1001000001";
        ram[340] = "0b1001000010";
        ram[341] = "0b1001000100";
        ram[342] = "0b1001000110";
        ram[343] = "0b1001000111";
        ram[344] = "0b1001001001";
        ram[345] = "0b1001001011";
        ram[346] = "0b1001001100";
        ram[347] = "0b1001001110";
        ram[348] = "0b1001010000";
        ram[349] = "0b1001010010";
        ram[350] = "0b1001010011";
        ram[351] = "0b1001010101";
        ram[352] = "0b1001010111";
        ram[353] = "0b1001011000";
        ram[354] = "0b1001011010";
        ram[355] = "0b1001011100";
        ram[356] = "0b1001011101";
        ram[357] = "0b1001011111";
        ram[358] = "0b1001100001";
        ram[359] = "0b1001100011";
        ram[360] = "0b1001100100";
        ram[361] = "0b1001100110";
        ram[362] = "0b1001101000";
        ram[363] = "0b1001101001";
        ram[364] = "0b1001101011";
        ram[365] = "0b1001101101";
        ram[366] = "0b1001101110";
        ram[367] = "0b1001110000";
        ram[368] = "0b1001110010";
        ram[369] = "0b1001110100";
        ram[370] = "0b1001110101";
        ram[371] = "0b1001110111";
        ram[372] = "0b1001111001";
        ram[373] = "0b1001111010";
        ram[374] = "0b1001111100";
        ram[375] = "0b1001111110";
        ram[376] = "0b1001111111";
        ram[377] = "0b1010000001";
        ram[378] = "0b1010000011";
        ram[379] = "0b1010000101";
        ram[380] = "0b1010000110";
        ram[381] = "0b1010001000";
        ram[382] = "0b1010001010";
        ram[383] = "0b1010001011";
        ram[384] = "0b1010001101";
        ram[385] = "0b1010001111";
        ram[386] = "0b1010010000";
        ram[387] = "0b1010010010";
        ram[388] = "0b1010010100";
        ram[389] = "0b1010010110";
        ram[390] = "0b1010010111";
        ram[391] = "0b1010011001";
        ram[392] = "0b1010011011";
        ram[393] = "0b1010011100";
        ram[394] = "0b1010011110";
        ram[395] = "0b1010100000";
        ram[396] = "0b1010100001";
        ram[397] = "0b1010100011";
        ram[398] = "0b1010100101";
        ram[399] = "0b1010100111";
        ram[400] = "0b1010101000";
        ram[401] = "0b1010101010";
        ram[402] = "0b1010101100";
        ram[403] = "0b1010101101";
        ram[404] = "0b1010101111";
        ram[405] = "0b1010110001";
        ram[406] = "0b1010110010";
        ram[407] = "0b1010110100";
        ram[408] = "0b1010110110";
        ram[409] = "0b1010111000";
        ram[410] = "0b1010111001";
        ram[411] = "0b1010111011";
        ram[412] = "0b1010111101";
        ram[413] = "0b1010111110";
        ram[414] = "0b1011000000";
        ram[415] = "0b1011000010";
        ram[416] = "0b1011000011";
        ram[417] = "0b1011000101";
        ram[418] = "0b1011000111";
        ram[419] = "0b1011001001";
        ram[420] = "0b1011001010";
        ram[421] = "0b1011001100";
        ram[422] = "0b1011001110";
        ram[423] = "0b1011001111";
        ram[424] = "0b1011010001";
        ram[425] = "0b1011010011";
        ram[426] = "0b1011010100";
        ram[427] = "0b1011010110";
        ram[428] = "0b1011011000";
        ram[429] = "0b1011011010";
        ram[430] = "0b1011011011";
        ram[431] = "0b1011011101";
        ram[432] = "0b1011011111";
        ram[433] = "0b1011100000";
        ram[434] = "0b1011100010";
        ram[435] = "0b1011100100";
        ram[436] = "0b1011100101";
        ram[437] = "0b1011100111";
        ram[438] = "0b1011101001";
        ram[439] = "0b1011101011";
        ram[440] = "0b1011101100";
        ram[441] = "0b1011101110";
        ram[442] = "0b1011110000";
        ram[443] = "0b1011110001";
        ram[444] = "0b1011110011";
        ram[445] = "0b1011110101";
        ram[446] = "0b1011110110";
        ram[447] = "0b1011111000";
        ram[448] = "0b1011111010";
        ram[449] = "0b1011111100";
        ram[450] = "0b1011111101";
        ram[451] = "0b1011111111";
        ram[452] = "0b1100000001";
        ram[453] = "0b1100000010";
        ram[454] = "0b1100000100";
        ram[455] = "0b1100000110";
        ram[456] = "0b1100000111";
        ram[457] = "0b1100001001";
        ram[458] = "0b1100001011";
        ram[459] = "0b1100001101";
        ram[460] = "0b1100001110";
        ram[461] = "0b1100010000";
        ram[462] = "0b1100010010";
        ram[463] = "0b1100010011";
        ram[464] = "0b1100010101";
        ram[465] = "0b1100010111";
        ram[466] = "0b1100011000";
        ram[467] = "0b1100011010";
        ram[468] = "0b1100011100";
        ram[469] = "0b1100011110";
        ram[470] = "0b1100011111";
        ram[471] = "0b1100100001";
        ram[472] = "0b1100100011";
        ram[473] = "0b1100100100";
        ram[474] = "0b1100100110";
        ram[475] = "0b1100101000";
        ram[476] = "0b1100101001";
        ram[477] = "0b1100101011";
        ram[478] = "0b1100101101";
        ram[479] = "0b1100101111";
        ram[480] = "0b1100110000";
        ram[481] = "0b1100110010";
        ram[482] = "0b1100110100";
        ram[483] = "0b1100110101";
        ram[484] = "0b1100110111";
        ram[485] = "0b1100111001";
        ram[486] = "0b1100111010";
        ram[487] = "0b1100111100";
        ram[488] = "0b1100111110";
        ram[489] = "0b1101000000";
        ram[490] = "0b1101000001";
        ram[491] = "0b1101000011";
        ram[492] = "0b1101000101";
        ram[493] = "0b1101000110";
        ram[494] = "0b1101001000";
        ram[495] = "0b1101001010";
        ram[496] = "0b1101001011";
        ram[497] = "0b1101001101";
        ram[498] = "0b1101001111";
        ram[499] = "0b1101010001";
        ram[500] = "0b1101010010";
        ram[501] = "0b1101010100";
        ram[502] = "0b1101010110";
        ram[503] = "0b1101010111";
        ram[504] = "0b1101011001";
        ram[505] = "0b1101011011";
        ram[506] = "0b1101011100";
        ram[507] = "0b1101011110";
        ram[508] = "0b1101100000";
        ram[509] = "0b1101100010";
        ram[510] = "0b1101100011";
        ram[511] = "0b1101100101";
        ram[512] = "0b1101100111";
        ram[513] = "0b1101101000";
        ram[514] = "0b1101101010";
        ram[515] = "0b1101101100";
        ram[516] = "0b1101101101";
        ram[517] = "0b1101101111";
        ram[518] = "0b1101110001";
        ram[519] = "0b1101110011";
        ram[520] = "0b1101110100";
        ram[521] = "0b1101110110";
        ram[522] = "0b1101111000";
        ram[523] = "0b1101111001";
        ram[524] = "0b1101111011";
        ram[525] = "0b1101111101";
        ram[526] = "0b1101111110";
        ram[527] = "0b1110000000";
        ram[528] = "0b1110000010";
        ram[529] = "0b1110000100";
        ram[530] = "0b1110000101";
        ram[531] = "0b1110000111";
        ram[532] = "0b1110001001";
        ram[533] = "0b1110001010";
        ram[534] = "0b1110001100";
        ram[535] = "0b1110001110";
        ram[536] = "0b1110001111";
        ram[537] = "0b1110010001";
        ram[538] = "0b1110010011";
        ram[539] = "0b1110010101";
        ram[540] = "0b1110010110";
        ram[541] = "0b1110011000";
        ram[542] = "0b1110011010";
        ram[543] = "0b1110011011";
        ram[544] = "0b1110011101";
        ram[545] = "0b1110011111";
        ram[546] = "0b1110100000";
        ram[547] = "0b1110100010";
        ram[548] = "0b1110100100";
        ram[549] = "0b1110100110";
        ram[550] = "0b1110100111";
        ram[551] = "0b1110101001";
        ram[552] = "0b1110101011";
        ram[553] = "0b1110101100";
        ram[554] = "0b1110101110";
        ram[555] = "0b1110110000";
        ram[556] = "0b1110110001";
        ram[557] = "0b1110110011";
        ram[558] = "0b1110110101";
        ram[559] = "0b1110110111";
        ram[560] = "0b1110111000";
        ram[561] = "0b1110111010";
        ram[562] = "0b1110111100";
        ram[563] = "0b1110111101";
        ram[564] = "0b1110111111";
        ram[565] = "0b1111000001";
        ram[566] = "0b1111000010";
        ram[567] = "0b1111000100";
        ram[568] = "0b1111000110";
        ram[569] = "0b1111001000";
        ram[570] = "0b1111001001";
        ram[571] = "0b1111001011";
        ram[572] = "0b1111001101";
        ram[573] = "0b1111001110";
        ram[574] = "0b1111010000";
        ram[575] = "0b1111010010";
        ram[576] = "0b1111010011";
        ram[577] = "0b1111010101";
        ram[578] = "0b1111010111";
        ram[579] = "0b1111011001";
        ram[580] = "0b1111011010";
        ram[581] = "0b1111011100";
        ram[582] = "0b1111011110";
        ram[583] = "0b1111011111";
        ram[584] = "0b1111100001";
        ram[585] = "0b1111100011";
        ram[586] = "0b1111100100";
        ram[587] = "0b1111100110";
        ram[588] = "0b1111101000";
        ram[589] = "0b1111101010";
        ram[590] = "0b1111101011";
        ram[591] = "0b1111101101";
        ram[592] = "0b1111101111";
        ram[593] = "0b1111110000";
        ram[594] = "0b1111110010";
        ram[595] = "0b1111110100";
        ram[596] = "0b1111110101";
        ram[597] = "0b1111110111";
        ram[598] = "0b1111111001";
        ram[599] = "0b1111111011";
        ram[600] = "0b1111111100";
        ram[601] = "0b1111111110";
        for (unsigned i = 602; i < 1024 ; i = i + 1) {
            ram[i] = "0b1111111111";
        }


SC_METHOD(prc_write_0);
  sensitive<<clk.pos();


SC_METHOD(prc_write_1);
  sensitive<<clk.pos();


SC_METHOD(prc_write_2);
  sensitive<<clk.pos();
   }


void prc_write_0()
{
    if (ce0.read() == sc_dt::Log_1) 
    {
            if(address0.read().is_01() && address0.read().to_uint()<AddressRange)
              q0 = ram[address0.read().to_uint()];
            else
              q0 = sc_lv<DataWidth>();
    }
}


void prc_write_1()
{
    if (ce1.read() == sc_dt::Log_1) 
    {
            if(address1.read().is_01() && address1.read().to_uint()<AddressRange)
              q1 = ram[address1.read().to_uint()];
            else
              q1 = sc_lv<DataWidth>();
    }
}


void prc_write_2()
{
    if (ce2.read() == sc_dt::Log_1) 
    {
            if(address2.read().is_01() && address2.read().to_uint()<AddressRange)
              q2 = ram[address2.read().to_uint()];
            else
              q2 = sc_lv<DataWidth>();
    }
}


}; //endmodule


SC_MODULE(MakeHT_rgnETLUT_7) {


static const unsigned DataWidth = 10;
static const unsigned AddressRange = 1024;
static const unsigned AddressWidth = 10;

sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in<sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in <sc_lv<AddressWidth> > address1;
sc_core::sc_in<sc_logic> ce1;
sc_core::sc_out <sc_lv<DataWidth> > q1;
sc_core::sc_in <sc_lv<AddressWidth> > address2;
sc_core::sc_in<sc_logic> ce2;
sc_core::sc_out <sc_lv<DataWidth> > q2;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


MakeHT_rgnETLUT_7_ram* meminst;


SC_CTOR(MakeHT_rgnETLUT_7) {
meminst = new MakeHT_rgnETLUT_7_ram("MakeHT_rgnETLUT_7_ram");
meminst->address0(address0);
meminst->ce0(ce0);
meminst->q0(q0);

meminst->address1(address1);
meminst->ce1(ce1);
meminst->q1(q1);

meminst->address2(address2);
meminst->ce2(ce2);
meminst->q2(q2);

meminst->reset(reset);
meminst->clk(clk);
}
~MakeHT_rgnETLUT_7() {
    delete meminst;
}


};//endmodule
#endif