// ==============================================================
// File generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2016.4
// Copyright (C) 1986-2016 Xilinx, Inc. All Rights Reserved.
// 
// ==============================================================

#ifndef __MakeHT_rgnETLUT_11_H__
#define __MakeHT_rgnETLUT_11_H__


#include <systemc>
using namespace sc_core;
using namespace sc_dt;




#include <iostream>
#include <fstream>

struct MakeHT_rgnETLUT_11_ram : public sc_core::sc_module {

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


   SC_CTOR(MakeHT_rgnETLUT_11_ram) {
        ram[0] = "0b0000000001";
        ram[1] = "0b0000000011";
        ram[2] = "0b0000000101";
        ram[3] = "0b0000000111";
        ram[4] = "0b0000001001";
        ram[5] = "0b0000001011";
        ram[6] = "0b0000001101";
        ram[7] = "0b0000001111";
        ram[8] = "0b0000010001";
        ram[9] = "0b0000010100";
        ram[10] = "0b0000010110";
        ram[11] = "0b0000011000";
        ram[12] = "0b0000011010";
        ram[13] = "0b0000011100";
        ram[14] = "0b0000011110";
        ram[15] = "0b0000100000";
        ram[16] = "0b0000100010";
        ram[17] = "0b0000100100";
        ram[18] = "0b0000100110";
        ram[19] = "0b0000101001";
        ram[20] = "0b0000101011";
        ram[21] = "0b0000101101";
        ram[22] = "0b0000101111";
        ram[23] = "0b0000110001";
        ram[24] = "0b0000110011";
        ram[25] = "0b0000110101";
        ram[26] = "0b0000110111";
        ram[27] = "0b0000111001";
        ram[28] = "0b0000111011";
        ram[29] = "0b0000111110";
        ram[30] = "0b0001000000";
        ram[31] = "0b0001000010";
        ram[32] = "0b0001000100";
        ram[33] = "0b0001000110";
        ram[34] = "0b0001001000";
        ram[35] = "0b0001001010";
        ram[36] = "0b0001001100";
        ram[37] = "0b0001001110";
        ram[38] = "0b0001010000";
        ram[39] = "0b0001010011";
        ram[40] = "0b0001010101";
        ram[41] = "0b0001010111";
        ram[42] = "0b0001011001";
        ram[43] = "0b0001011011";
        ram[44] = "0b0001011101";
        ram[45] = "0b0001011111";
        ram[46] = "0b0001100001";
        ram[47] = "0b0001100011";
        ram[48] = "0b0001100101";
        ram[49] = "0b0001101000";
        ram[50] = "0b0001101010";
        ram[51] = "0b0001101100";
        ram[52] = "0b0001101110";
        ram[53] = "0b0001110000";
        ram[54] = "0b0001110010";
        ram[55] = "0b0001110100";
        ram[56] = "0b0001110110";
        ram[57] = "0b0001111000";
        ram[58] = "0b0001111010";
        ram[59] = "0b0001111101";
        ram[60] = "0b0001111111";
        ram[61] = "0b0010000001";
        ram[62] = "0b0010000011";
        ram[63] = "0b0010000101";
        ram[64] = "0b0010000111";
        ram[65] = "0b0010001001";
        ram[66] = "0b0010001011";
        ram[67] = "0b0010001101";
        ram[68] = "0b0010001111";
        ram[69] = "0b0010010010";
        ram[70] = "0b0010010100";
        ram[71] = "0b0010010110";
        ram[72] = "0b0010011000";
        ram[73] = "0b0010011010";
        ram[74] = "0b0010011100";
        ram[75] = "0b0010011110";
        ram[76] = "0b0010100000";
        ram[77] = "0b0010100010";
        ram[78] = "0b0010100100";
        ram[79] = "0b0010100111";
        ram[80] = "0b0010101001";
        ram[81] = "0b0010101011";
        ram[82] = "0b0010101101";
        ram[83] = "0b0010101111";
        ram[84] = "0b0010110001";
        ram[85] = "0b0010110011";
        ram[86] = "0b0010110101";
        ram[87] = "0b0010110111";
        ram[88] = "0b0010111001";
        ram[89] = "0b0010111100";
        ram[90] = "0b0010111110";
        ram[91] = "0b0011000000";
        ram[92] = "0b0011000010";
        ram[93] = "0b0011000100";
        ram[94] = "0b0011000110";
        ram[95] = "0b0011001000";
        ram[96] = "0b0011001010";
        ram[97] = "0b0011001100";
        ram[98] = "0b0011001110";
        ram[99] = "0b0011010001";
        ram[100] = "0b0011010011";
        ram[101] = "0b0011010101";
        ram[102] = "0b0011010111";
        ram[103] = "0b0011011001";
        ram[104] = "0b0011011011";
        ram[105] = "0b0011011101";
        ram[106] = "0b0011011111";
        ram[107] = "0b0011100001";
        ram[108] = "0b0011100011";
        ram[109] = "0b0011100110";
        ram[110] = "0b0011101000";
        ram[111] = "0b0011101010";
        ram[112] = "0b0011101100";
        ram[113] = "0b0011101110";
        ram[114] = "0b0011110000";
        ram[115] = "0b0011110010";
        ram[116] = "0b0011110100";
        ram[117] = "0b0011110110";
        ram[118] = "0b0011111000";
        ram[119] = "0b0011111011";
        ram[120] = "0b0011111101";
        ram[121] = "0b0011111111";
        ram[122] = "0b0100000001";
        ram[123] = "0b0100000011";
        ram[124] = "0b0100000101";
        ram[125] = "0b0100000111";
        ram[126] = "0b0100001001";
        ram[127] = "0b0100001011";
        ram[128] = "0b0100001101";
        ram[129] = "0b0100010000";
        ram[130] = "0b0100010010";
        ram[131] = "0b0100010100";
        ram[132] = "0b0100010110";
        ram[133] = "0b0100011000";
        ram[134] = "0b0100011010";
        ram[135] = "0b0100011100";
        ram[136] = "0b0100011110";
        ram[137] = "0b0100100000";
        ram[138] = "0b0100100010";
        ram[139] = "0b0100100101";
        ram[140] = "0b0100100111";
        ram[141] = "0b0100101001";
        ram[142] = "0b0100101011";
        ram[143] = "0b0100101101";
        ram[144] = "0b0100101111";
        ram[145] = "0b0100110001";
        ram[146] = "0b0100110011";
        ram[147] = "0b0100110101";
        ram[148] = "0b0100110111";
        ram[149] = "0b0100111010";
        ram[150] = "0b0100111100";
        ram[151] = "0b0100111110";
        ram[152] = "0b0101000000";
        ram[153] = "0b0101000010";
        ram[154] = "0b0101000100";
        ram[155] = "0b0101000110";
        ram[156] = "0b0101001000";
        ram[157] = "0b0101001010";
        ram[158] = "0b0101001100";
        ram[159] = "0b0101001111";
        ram[160] = "0b0101010001";
        ram[161] = "0b0101010011";
        ram[162] = "0b0101010101";
        ram[163] = "0b0101010111";
        ram[164] = "0b0101011001";
        ram[165] = "0b0101011011";
        ram[166] = "0b0101011101";
        ram[167] = "0b0101011111";
        ram[168] = "0b0101100001";
        ram[169] = "0b0101100100";
        ram[170] = "0b0101100110";
        ram[171] = "0b0101101000";
        ram[172] = "0b0101101010";
        ram[173] = "0b0101101100";
        ram[174] = "0b0101101110";
        ram[175] = "0b0101110000";
        ram[176] = "0b0101110010";
        ram[177] = "0b0101110100";
        ram[178] = "0b0101110110";
        ram[179] = "0b0101111001";
        ram[180] = "0b0101111011";
        ram[181] = "0b0101111101";
        ram[182] = "0b0101111111";
        ram[183] = "0b0110000001";
        ram[184] = "0b0110000011";
        ram[185] = "0b0110000101";
        ram[186] = "0b0110000111";
        ram[187] = "0b0110001001";
        ram[188] = "0b0110001011";
        ram[189] = "0b0110001110";
        ram[190] = "0b0110010000";
        ram[191] = "0b0110010010";
        ram[192] = "0b0110010100";
        ram[193] = "0b0110010110";
        ram[194] = "0b0110011000";
        ram[195] = "0b0110011010";
        ram[196] = "0b0110011100";
        ram[197] = "0b0110011110";
        ram[198] = "0b0110100000";
        ram[199] = "0b0110100011";
        ram[200] = "0b0110100101";
        ram[201] = "0b0110100111";
        ram[202] = "0b0110101001";
        ram[203] = "0b0110101011";
        ram[204] = "0b0110101101";
        ram[205] = "0b0110101111";
        ram[206] = "0b0110110001";
        ram[207] = "0b0110110011";
        ram[208] = "0b0110110101";
        ram[209] = "0b0110111000";
        ram[210] = "0b0110111010";
        ram[211] = "0b0110111100";
        ram[212] = "0b0110111110";
        ram[213] = "0b0111000000";
        ram[214] = "0b0111000010";
        ram[215] = "0b0111000100";
        ram[216] = "0b0111000110";
        ram[217] = "0b0111001000";
        ram[218] = "0b0111001010";
        ram[219] = "0b0111001101";
        ram[220] = "0b0111001111";
        ram[221] = "0b0111010001";
        ram[222] = "0b0111010011";
        ram[223] = "0b0111010101";
        ram[224] = "0b0111010111";
        ram[225] = "0b0111011001";
        ram[226] = "0b0111011011";
        ram[227] = "0b0111011101";
        ram[228] = "0b0111011111";
        ram[229] = "0b0111100010";
        ram[230] = "0b0111100100";
        ram[231] = "0b0111100110";
        ram[232] = "0b0111101000";
        ram[233] = "0b0111101010";
        ram[234] = "0b0111101100";
        ram[235] = "0b0111101110";
        ram[236] = "0b0111110000";
        ram[237] = "0b0111110010";
        ram[238] = "0b0111110100";
        ram[239] = "0b0111110111";
        ram[240] = "0b0111111001";
        ram[241] = "0b0111111011";
        ram[242] = "0b0111111101";
        ram[243] = "0b0111111111";
        ram[244] = "0b1000000001";
        ram[245] = "0b1000000011";
        ram[246] = "0b1000000101";
        ram[247] = "0b1000000111";
        ram[248] = "0b1000001001";
        ram[249] = "0b1000001100";
        ram[250] = "0b1000001110";
        ram[251] = "0b1000010000";
        ram[252] = "0b1000010010";
        ram[253] = "0b1000010100";
        ram[254] = "0b1000010110";
        ram[255] = "0b1000011000";
        ram[256] = "0b1000011010";
        ram[257] = "0b1000011100";
        ram[258] = "0b1000011110";
        ram[259] = "0b1000100001";
        ram[260] = "0b1000100011";
        ram[261] = "0b1000100101";
        ram[262] = "0b1000100111";
        ram[263] = "0b1000101001";
        ram[264] = "0b1000101011";
        ram[265] = "0b1000101101";
        ram[266] = "0b1000101111";
        ram[267] = "0b1000110001";
        ram[268] = "0b1000110011";
        ram[269] = "0b1000110110";
        ram[270] = "0b1000111000";
        ram[271] = "0b1000111010";
        ram[272] = "0b1000111100";
        ram[273] = "0b1000111110";
        ram[274] = "0b1001000000";
        ram[275] = "0b1001000010";
        ram[276] = "0b1001000100";
        ram[277] = "0b1001000110";
        ram[278] = "0b1001001000";
        ram[279] = "0b1001001011";
        ram[280] = "0b1001001101";
        ram[281] = "0b1001001111";
        ram[282] = "0b1001010001";
        ram[283] = "0b1001010011";
        ram[284] = "0b1001010101";
        ram[285] = "0b1001010111";
        ram[286] = "0b1001011001";
        ram[287] = "0b1001011011";
        ram[288] = "0b1001011101";
        ram[289] = "0b1001100000";
        ram[290] = "0b1001100010";
        ram[291] = "0b1001100100";
        ram[292] = "0b1001100110";
        ram[293] = "0b1001101000";
        ram[294] = "0b1001101010";
        ram[295] = "0b1001101100";
        ram[296] = "0b1001101110";
        ram[297] = "0b1001110000";
        ram[298] = "0b1001110010";
        ram[299] = "0b1001110101";
        ram[300] = "0b1001110111";
        ram[301] = "0b1001111001";
        ram[302] = "0b1001111011";
        ram[303] = "0b1001111101";
        ram[304] = "0b1001111111";
        ram[305] = "0b1010000001";
        ram[306] = "0b1010000011";
        ram[307] = "0b1010000101";
        ram[308] = "0b1010000111";
        ram[309] = "0b1010001010";
        ram[310] = "0b1010001100";
        ram[311] = "0b1010001110";
        ram[312] = "0b1010010000";
        ram[313] = "0b1010010010";
        ram[314] = "0b1010010100";
        ram[315] = "0b1010010110";
        ram[316] = "0b1010011000";
        ram[317] = "0b1010011010";
        ram[318] = "0b1010011100";
        ram[319] = "0b1010011111";
        ram[320] = "0b1010100001";
        ram[321] = "0b1010100011";
        ram[322] = "0b1010100101";
        ram[323] = "0b1010100111";
        ram[324] = "0b1010101001";
        ram[325] = "0b1010101011";
        ram[326] = "0b1010101101";
        ram[327] = "0b1010101111";
        ram[328] = "0b1010110001";
        ram[329] = "0b1010110100";
        ram[330] = "0b1010110110";
        ram[331] = "0b1010111000";
        ram[332] = "0b1010111010";
        ram[333] = "0b1010111100";
        ram[334] = "0b1010111110";
        ram[335] = "0b1011000000";
        ram[336] = "0b1011000010";
        ram[337] = "0b1011000100";
        ram[338] = "0b1011000110";
        ram[339] = "0b1011001001";
        ram[340] = "0b1011001011";
        ram[341] = "0b1011001101";
        ram[342] = "0b1011001111";
        ram[343] = "0b1011010001";
        ram[344] = "0b1011010011";
        ram[345] = "0b1011010101";
        ram[346] = "0b1011010111";
        ram[347] = "0b1011011001";
        ram[348] = "0b1011011011";
        ram[349] = "0b1011011110";
        ram[350] = "0b1011100000";
        ram[351] = "0b1011100010";
        ram[352] = "0b1011100100";
        ram[353] = "0b1011100110";
        ram[354] = "0b1011101000";
        ram[355] = "0b1011101010";
        ram[356] = "0b1011101100";
        ram[357] = "0b1011101110";
        ram[358] = "0b1011110000";
        ram[359] = "0b1011110011";
        ram[360] = "0b1011110101";
        ram[361] = "0b1011110111";
        ram[362] = "0b1011111001";
        ram[363] = "0b1011111011";
        ram[364] = "0b1011111101";
        ram[365] = "0b1011111111";
        ram[366] = "0b1100000001";
        ram[367] = "0b1100000011";
        ram[368] = "0b1100000101";
        ram[369] = "0b1100001000";
        ram[370] = "0b1100001010";
        ram[371] = "0b1100001100";
        ram[372] = "0b1100001110";
        ram[373] = "0b1100010000";
        ram[374] = "0b1100010010";
        ram[375] = "0b1100010100";
        ram[376] = "0b1100010110";
        ram[377] = "0b1100011000";
        ram[378] = "0b1100011010";
        ram[379] = "0b1100011101";
        ram[380] = "0b1100011111";
        ram[381] = "0b1100100001";
        ram[382] = "0b1100100011";
        ram[383] = "0b1100100101";
        ram[384] = "0b1100100111";
        ram[385] = "0b1100101001";
        ram[386] = "0b1100101011";
        ram[387] = "0b1100101101";
        ram[388] = "0b1100101111";
        ram[389] = "0b1100110010";
        ram[390] = "0b1100110100";
        ram[391] = "0b1100110110";
        ram[392] = "0b1100111000";
        ram[393] = "0b1100111010";
        ram[394] = "0b1100111100";
        ram[395] = "0b1100111110";
        ram[396] = "0b1101000000";
        ram[397] = "0b1101000010";
        ram[398] = "0b1101000100";
        ram[399] = "0b1101000111";
        ram[400] = "0b1101001001";
        ram[401] = "0b1101001011";
        ram[402] = "0b1101001101";
        ram[403] = "0b1101001111";
        ram[404] = "0b1101010001";
        ram[405] = "0b1101010011";
        ram[406] = "0b1101010101";
        ram[407] = "0b1101010111";
        ram[408] = "0b1101011001";
        ram[409] = "0b1101011100";
        ram[410] = "0b1101011110";
        ram[411] = "0b1101100000";
        ram[412] = "0b1101100010";
        ram[413] = "0b1101100100";
        ram[414] = "0b1101100110";
        ram[415] = "0b1101101000";
        ram[416] = "0b1101101010";
        ram[417] = "0b1101101100";
        ram[418] = "0b1101101110";
        ram[419] = "0b1101110001";
        ram[420] = "0b1101110011";
        ram[421] = "0b1101110101";
        ram[422] = "0b1101110111";
        ram[423] = "0b1101111001";
        ram[424] = "0b1101111011";
        ram[425] = "0b1101111101";
        ram[426] = "0b1101111111";
        ram[427] = "0b1110000001";
        ram[428] = "0b1110000011";
        ram[429] = "0b1110000110";
        ram[430] = "0b1110001000";
        ram[431] = "0b1110001010";
        ram[432] = "0b1110001100";
        ram[433] = "0b1110001110";
        ram[434] = "0b1110010000";
        ram[435] = "0b1110010010";
        ram[436] = "0b1110010100";
        ram[437] = "0b1110010110";
        ram[438] = "0b1110011000";
        ram[439] = "0b1110011011";
        ram[440] = "0b1110011101";
        ram[441] = "0b1110011111";
        ram[442] = "0b1110100001";
        ram[443] = "0b1110100011";
        ram[444] = "0b1110100101";
        ram[445] = "0b1110100111";
        ram[446] = "0b1110101001";
        ram[447] = "0b1110101011";
        ram[448] = "0b1110101101";
        ram[449] = "0b1110110000";
        ram[450] = "0b1110110010";
        ram[451] = "0b1110110100";
        ram[452] = "0b1110110110";
        ram[453] = "0b1110111000";
        ram[454] = "0b1110111010";
        ram[455] = "0b1110111100";
        ram[456] = "0b1110111110";
        ram[457] = "0b1111000000";
        ram[458] = "0b1111000010";
        ram[459] = "0b1111000101";
        ram[460] = "0b1111000111";
        ram[461] = "0b1111001001";
        ram[462] = "0b1111001011";
        ram[463] = "0b1111001101";
        ram[464] = "0b1111001111";
        ram[465] = "0b1111010001";
        ram[466] = "0b1111010011";
        ram[467] = "0b1111010101";
        ram[468] = "0b1111010111";
        ram[469] = "0b1111011010";
        ram[470] = "0b1111011100";
        ram[471] = "0b1111011110";
        ram[472] = "0b1111100000";
        ram[473] = "0b1111100010";
        ram[474] = "0b1111100100";
        ram[475] = "0b1111100110";
        ram[476] = "0b1111101000";
        ram[477] = "0b1111101010";
        ram[478] = "0b1111101100";
        ram[479] = "0b1111101111";
        ram[480] = "0b1111110001";
        ram[481] = "0b1111110011";
        ram[482] = "0b1111110101";
        ram[483] = "0b1111110111";
        ram[484] = "0b1111111001";
        ram[485] = "0b1111111011";
        ram[486] = "0b1111111101";
        for (unsigned i = 487; i < 1024 ; i = i + 1) {
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


SC_MODULE(MakeHT_rgnETLUT_11) {


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


MakeHT_rgnETLUT_11_ram* meminst;


SC_CTOR(MakeHT_rgnETLUT_11) {
meminst = new MakeHT_rgnETLUT_11_ram("MakeHT_rgnETLUT_11_ram");
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
~MakeHT_rgnETLUT_11() {
    delete meminst;
}


};//endmodule
#endif
