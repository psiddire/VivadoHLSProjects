// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2016.4
// Copyright (C) 1986-2016 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

`timescale 1 ns / 1 ps 

(* CORE_GENERATION_INFO="TPG,hls_ip_2016_4,{HLS_INPUT_TYPE=cxx,HLS_INPUT_FLOAT=0,HLS_INPUT_FIXED=0,HLS_INPUT_PART=xc7vx690tffg1927-2,HLS_INPUT_CLOCK=6.250000,HLS_INPUT_ARCH=others,HLS_SYN_CLOCK=5.420000,HLS_SYN_LAT=4,HLS_SYN_TPT=none,HLS_SYN_MEM=0,HLS_SYN_DSP=2,HLS_SYN_FF=307,HLS_SYN_LUT=408}" *)

module TPG (
        ap_clk,
        ap_rst,
        ap_start,
        ap_done,
        ap_idle,
        ap_ready,
        in_0_data_input,
        in_0_lincoeff,
        out_0_filOut,
        out_0_filOut_ap_vld,
        out_0_peakOut,
        out_0_peakOut_ap_vld,
        out_0_peakAmp,
        out_0_peakAmp_ap_vld
);

parameter    ap_ST_fsm_state1 = 5'b1;
parameter    ap_ST_fsm_state2 = 5'b10;
parameter    ap_ST_fsm_state3 = 5'b100;
parameter    ap_ST_fsm_state4 = 5'b1000;
parameter    ap_ST_fsm_state5 = 5'b10000;
parameter    ap_const_lv32_0 = 32'b00000000000000000000000000000000;
parameter    ap_const_lv32_1 = 32'b1;
parameter    ap_const_lv32_2 = 32'b10;
parameter    ap_const_lv32_3 = 32'b11;
parameter    ap_const_lv32_4 = 32'b100;
parameter    ap_const_lv32_10 = 32'b10000;
parameter    ap_const_lv32_17 = 32'b10111;
parameter    ap_const_lv8_0 = 8'b00000000;
parameter    ap_const_lv24_0 = 24'b000000000000000000000000;
parameter    ap_const_lv32_C = 32'b1100;
parameter    ap_const_lv32_F = 32'b1111;
parameter    ap_const_lv5_2 = 5'b10;
parameter    ap_const_lv32_5 = 32'b101;
parameter    ap_const_lv32_6 = 32'b110;
parameter    ap_const_lv32_1F = 32'b11111;
parameter    ap_const_lv5_0 = 5'b00000;
parameter    ap_const_lv3_0 = 3'b000;
parameter    ap_const_lv32_18 = 32'b11000;
parameter    ap_const_lv32_14 = 32'b10100;
parameter    ap_const_lv32_1A = 32'b11010;
parameter    ap_const_lv32_1C = 32'b11100;
parameter    ap_const_lv28_0 = 28'b0000000000000000000000000000;
parameter    ap_const_lv32_12 = 32'b10010;
parameter    ap_const_lv32_1B = 32'b11011;
parameter    ap_const_lv10_0 = 10'b0000000000;
parameter    ap_const_lv18_3FFFF = 18'b111111111111111111;
parameter    ap_const_lv32_11 = 32'b10001;
parameter    ap_const_lv6_0 = 6'b000000;
parameter    ap_const_lv16_3FF = 16'b1111111111;
parameter    ap_const_lv32_A = 32'b1010;
parameter    ap_const_lv10_3FF = 10'b1111111111;
parameter    ap_const_lv32_FFFFFFDD = 32'b11111111111111111111111111011101;

input   ap_clk;
input   ap_rst;
input   ap_start;
output   ap_done;
output   ap_idle;
output   ap_ready;
input  [15:0] in_0_data_input;
input  [31:0] in_0_lincoeff;
output  [31:0] out_0_filOut;
output   out_0_filOut_ap_vld;
output   out_0_peakOut;
output   out_0_peakOut_ap_vld;
output  [15:0] out_0_peakAmp;
output   out_0_peakAmp_ap_vld;

reg ap_done;
reg ap_idle;
reg ap_ready;
reg out_0_filOut_ap_vld;
reg out_0_peakOut_ap_vld;
reg out_0_peakAmp_ap_vld;

(* fsm_encoding = "none" *) reg   [4:0] ap_CS_fsm;
wire   [0:0] ap_CS_fsm_state1;
reg   [31:0] reg_shift_reg_0_3;
reg  signed [20:0] reg_shift_reg_0_2;
reg   [20:0] reg_shift_reg_0_1;
reg   [20:0] reg_shift_reg_0_0;
reg   [17:0] reg_peak_reg_0_0;
reg   [17:0] reg_peak_reg_0_1;
wire   [11:0] base_fu_195_p1;
reg   [11:0] base_reg_654;
reg   [3:0] shiftlin_reg_659;
reg   [7:0] mult_reg_664;
wire  signed [20:0] grp_fu_640_p3;
reg  signed [20:0] prod_reg_669;
wire   [0:0] ap_CS_fsm_state2;
wire   [20:0] linearizerOutput_fu_246_p2;
reg   [20:0] linearizerOutput_reg_674;
wire   [0:0] ap_CS_fsm_state3;
reg   [25:0] tmp_13_i_reg_679;
wire  signed [31:0] pro_1_i_fu_648_p2;
reg  signed [31:0] pro_1_i_reg_684;
reg   [18:0] tmp_5_reg_689;
wire   [17:0] tmp_15_fu_503_p1;
reg   [17:0] tmp_15_reg_694;
wire   [0:0] ap_CS_fsm_state4;
reg   [9:0] tmp_16_reg_699;
wire  signed [31:0] extLd9_fu_259_p1;
wire   [17:0] o_filOut_fu_522_p3;
wire   [0:0] ap_CS_fsm_state5;
wire   [7:0] tmp_fu_171_p4;
wire   [0:0] icmp_fu_181_p2;
wire   [23:0] tmp_2_fu_167_p1;
wire   [23:0] tmp_1_fu_187_p3;
wire   [11:0] uncorrectedADC_fu_219_p1;
wire   [4:0] tmp_6_i_cast_fu_233_p1;
wire   [4:0] tmp_8_i_fu_236_p2;
wire   [20:0] tmp_8_i_cast_fu_242_p1;
wire   [31:0] tmp_7_fu_269_p2;
wire   [31:0] p_neg_i_fu_275_p2;
wire   [31:0] tmp_9_fu_281_p2;
wire   [31:0] pro_fu_287_p2;
wire   [18:0] tmp_13_fu_303_p1;
wire   [23:0] p_shl8_i_fu_307_p3;
wire   [21:0] p_shl9_i_fu_319_p3;
wire  signed [24:0] p_shl8_i_cast_fu_315_p1;
wire  signed [24:0] p_shl9_i_cast_fu_327_p1;
wire   [24:0] pro_1_3_i_fu_331_p2;
wire   [25:0] tmp_15_i_fu_379_p4;
wire   [18:0] tmp_11_fu_392_p4;
wire   [25:0] tmp_3_fu_406_p3;
wire  signed [26:0] p_shl1_i_cast_fu_414_p1;
wire  signed [26:0] extLd_cast_fu_361_p1;
wire   [26:0] pro_1_2_i_fu_418_p2;
wire   [20:0] tmp_12_fu_424_p4;
wire  signed [26:0] mul_i_cast_43_fu_434_p1;
wire  signed [26:0] mul_1_i_cast_fu_402_p1;
wire   [26:0] tmp2_fu_441_p2;
wire  signed [26:0] mul_3_i_cast_fu_438_p1;
wire  signed [26:0] mul_i_cast_fu_388_p1;
wire   [26:0] tmp4_fu_451_p2;
wire  signed [27:0] mul_cast_fu_376_p1;
wire  signed [27:0] tmp4_cast_fu_457_p1;
wire   [27:0] tmp3_fu_461_p2;
wire  signed [28:0] tmp2_cast_fu_447_p1;
wire  signed [28:0] tmp3_cast_fu_467_p1;
wire  signed [27:0] tmp_6_fu_471_p1;
wire   [28:0] acc_1_3_i_fu_475_p2;
wire   [0:0] tmp_14_fu_487_p3;
wire   [27:0] acc_1_3_i_cast_fu_481_p2;
wire   [27:0] p_acc_i_fu_495_p3;
wire   [0:0] icmp1_fu_517_p2;
wire   [0:0] tmp_19_i_fu_538_p2;
wire   [0:0] tmp_20_i_fu_548_p2;
wire   [5:0] tmp_17_fu_561_p4;
wire   [0:0] icmp2_fu_571_p2;
wire   [15:0] tmp_8_fu_577_p4;
wire   [15:0] tmpPeak_fu_587_p3;
wire   [5:0] tmp_19_fu_599_p4;
wire   [0:0] icmp3_fu_609_p2;
wire   [9:0] tmp_18_fu_595_p1;
wire   [9:0] tmpPeak_2_fu_615_p3;
wire   [11:0] grp_fu_640_p0;
wire   [11:0] grp_fu_640_p1;
wire   [7:0] grp_fu_640_p2;
wire  signed [6:0] pro_1_i_fu_648_p0;
reg   [4:0] ap_NS_fsm;
wire   [12:0] grp_fu_640_p00;
wire   [12:0] grp_fu_640_p10;
wire   [20:0] grp_fu_640_p20;

// power-on initialization
initial begin
#0 ap_CS_fsm = 5'b1;
#0 reg_shift_reg_0_3 = 32'b00000000000000000000000000000000;
#0 reg_shift_reg_0_2 = 21'b000000000000000000000;
#0 reg_shift_reg_0_1 = 21'b000000000000000000000;
#0 reg_shift_reg_0_0 = 21'b000000000000000000000;
#0 reg_peak_reg_0_0 = 18'b000000000000000000;
#0 reg_peak_reg_0_1 = 18'b000000000000000000;
end

TPG_am_submul_12nbkb #(
    .ID( 1 ),
    .NUM_STAGE( 1 ),
    .din0_WIDTH( 12 ),
    .din1_WIDTH( 12 ),
    .din2_WIDTH( 8 ),
    .dout_WIDTH( 21 ))
TPG_am_submul_12nbkb_U1(
    .din0(grp_fu_640_p0),
    .din1(grp_fu_640_p1),
    .din2(grp_fu_640_p2),
    .dout(grp_fu_640_p3)
);

TPG_mul_mul_7s_21cud #(
    .ID( 1 ),
    .NUM_STAGE( 1 ),
    .din0_WIDTH( 7 ),
    .din1_WIDTH( 21 ),
    .dout_WIDTH( 32 ))
TPG_mul_mul_7s_21cud_U2(
    .din0(pro_1_i_fu_648_p0),
    .din1(reg_shift_reg_0_2),
    .dout(pro_1_i_fu_648_p2)
);

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_CS_fsm <= ap_ST_fsm_state1;
    end else begin
        ap_CS_fsm <= ap_NS_fsm;
    end
end

always @ (posedge ap_clk) begin
    if (((ap_CS_fsm_state1 == 1'b1) & ~(ap_start == 1'b0))) begin
        base_reg_654 <= base_fu_195_p1;
        mult_reg_664 <= {{tmp_1_fu_187_p3[ap_const_lv32_17 : ap_const_lv32_10]}};
        shiftlin_reg_659 <= {{tmp_1_fu_187_p3[ap_const_lv32_F : ap_const_lv32_C]}};
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state3)) begin
        linearizerOutput_reg_674 <= linearizerOutput_fu_246_p2;
        pro_1_i_reg_684 <= pro_1_i_fu_648_p2;
        reg_shift_reg_0_3 <= extLd9_fu_259_p1;
        tmp_13_i_reg_679 <= {{pro_fu_287_p2[ap_const_lv32_1F : ap_const_lv32_6]}};
        tmp_5_reg_689 <= {{pro_1_3_i_fu_331_p2[ap_const_lv32_18 : ap_const_lv32_6]}};
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state2)) begin
        prod_reg_669 <= grp_fu_640_p3;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state5)) begin
        reg_peak_reg_0_0 <= o_filOut_fu_522_p3;
        reg_peak_reg_0_1 <= reg_peak_reg_0_0;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state4)) begin
        reg_shift_reg_0_0 <= linearizerOutput_reg_674;
        reg_shift_reg_0_1 <= reg_shift_reg_0_0;
        reg_shift_reg_0_2 <= reg_shift_reg_0_1;
        tmp_15_reg_694 <= tmp_15_fu_503_p1;
        tmp_16_reg_699 <= {{p_acc_i_fu_495_p3[ap_const_lv32_1B : ap_const_lv32_12]}};
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state5)) begin
        ap_done = 1'b1;
    end else begin
        ap_done = 1'b0;
    end
end

always @ (*) begin
    if (((1'b0 == ap_start) & (ap_CS_fsm_state1 == 1'b1))) begin
        ap_idle = 1'b1;
    end else begin
        ap_idle = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state5)) begin
        ap_ready = 1'b1;
    end else begin
        ap_ready = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state5)) begin
        out_0_filOut_ap_vld = 1'b1;
    end else begin
        out_0_filOut_ap_vld = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state5)) begin
        out_0_peakAmp_ap_vld = 1'b1;
    end else begin
        out_0_peakAmp_ap_vld = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state5)) begin
        out_0_peakOut_ap_vld = 1'b1;
    end else begin
        out_0_peakOut_ap_vld = 1'b0;
    end
end

always @ (*) begin
    case (ap_CS_fsm)
        ap_ST_fsm_state1 : begin
            if (~(ap_start == 1'b0)) begin
                ap_NS_fsm = ap_ST_fsm_state2;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state1;
            end
        end
        ap_ST_fsm_state2 : begin
            ap_NS_fsm = ap_ST_fsm_state3;
        end
        ap_ST_fsm_state3 : begin
            ap_NS_fsm = ap_ST_fsm_state4;
        end
        ap_ST_fsm_state4 : begin
            ap_NS_fsm = ap_ST_fsm_state5;
        end
        ap_ST_fsm_state5 : begin
            ap_NS_fsm = ap_ST_fsm_state1;
        end
        default : begin
            ap_NS_fsm = 'bx;
        end
    endcase
end

assign acc_1_3_i_cast_fu_481_p2 = ($signed(tmp3_fu_461_p2) + $signed(tmp_6_fu_471_p1));

assign acc_1_3_i_fu_475_p2 = ($signed(tmp2_cast_fu_447_p1) + $signed(tmp3_cast_fu_467_p1));

assign ap_CS_fsm_state1 = ap_CS_fsm[ap_const_lv32_0];

assign ap_CS_fsm_state2 = ap_CS_fsm[ap_const_lv32_1];

assign ap_CS_fsm_state3 = ap_CS_fsm[ap_const_lv32_2];

assign ap_CS_fsm_state4 = ap_CS_fsm[ap_const_lv32_3];

assign ap_CS_fsm_state5 = ap_CS_fsm[ap_const_lv32_4];

assign base_fu_195_p1 = tmp_1_fu_187_p3[11:0];

assign extLd9_fu_259_p1 = reg_shift_reg_0_2;

assign extLd_cast_fu_361_p1 = $signed(reg_shift_reg_0_0);

assign grp_fu_640_p0 = grp_fu_640_p00;

assign grp_fu_640_p00 = uncorrectedADC_fu_219_p1;

assign grp_fu_640_p1 = grp_fu_640_p10;

assign grp_fu_640_p10 = base_reg_654;

assign grp_fu_640_p2 = grp_fu_640_p20;

assign grp_fu_640_p20 = mult_reg_664;

assign icmp1_fu_517_p2 = ((tmp_16_reg_699 != ap_const_lv10_0) ? 1'b1 : 1'b0);

assign icmp2_fu_571_p2 = ((tmp_17_fu_561_p4 != ap_const_lv6_0) ? 1'b1 : 1'b0);

assign icmp3_fu_609_p2 = ((tmp_19_fu_599_p4 != ap_const_lv6_0) ? 1'b1 : 1'b0);

assign icmp_fu_181_p2 = ((tmp_fu_171_p4 == ap_const_lv8_0) ? 1'b1 : 1'b0);

assign linearizerOutput_fu_246_p2 = $signed(prod_reg_669) >>> tmp_8_i_cast_fu_242_p1;

assign mul_1_i_cast_fu_402_p1 = $signed(tmp_11_fu_392_p4);

assign mul_3_i_cast_fu_438_p1 = $signed(tmp_5_reg_689);

assign mul_cast_fu_376_p1 = $signed(tmp_13_i_reg_679);

assign mul_i_cast_43_fu_434_p1 = $signed(tmp_12_fu_424_p4);

assign mul_i_cast_fu_388_p1 = $signed(tmp_15_i_fu_379_p4);

assign o_filOut_fu_522_p3 = ((icmp1_fu_517_p2[0:0] === 1'b1) ? ap_const_lv18_3FFFF : tmp_15_reg_694);

assign out_0_filOut = o_filOut_fu_522_p3;

assign out_0_peakAmp = tmpPeak_2_fu_615_p3;

assign out_0_peakOut = (tmp_19_i_fu_538_p2 & tmp_20_i_fu_548_p2);

assign p_acc_i_fu_495_p3 = ((tmp_14_fu_487_p3[0:0] === 1'b1) ? ap_const_lv28_0 : acc_1_3_i_cast_fu_481_p2);

assign p_neg_i_fu_275_p2 = (ap_const_lv32_0 - tmp_7_fu_269_p2);

assign p_shl1_i_cast_fu_414_p1 = $signed(tmp_3_fu_406_p3);

assign p_shl8_i_cast_fu_315_p1 = $signed(p_shl8_i_fu_307_p3);

assign p_shl8_i_fu_307_p3 = {{tmp_13_fu_303_p1}, {ap_const_lv5_0}};

assign p_shl9_i_cast_fu_327_p1 = $signed(p_shl9_i_fu_319_p3);

assign p_shl9_i_fu_319_p3 = {{tmp_13_fu_303_p1}, {ap_const_lv3_0}};

assign pro_1_2_i_fu_418_p2 = ($signed(p_shl1_i_cast_fu_414_p1) - $signed(extLd_cast_fu_361_p1));

assign pro_1_3_i_fu_331_p2 = ($signed(p_shl8_i_cast_fu_315_p1) - $signed(p_shl9_i_cast_fu_327_p1));

assign pro_1_i_fu_648_p0 = ap_const_lv32_FFFFFFDD;

assign pro_fu_287_p2 = (p_neg_i_fu_275_p2 - tmp_9_fu_281_p2);

assign tmp2_cast_fu_447_p1 = $signed(tmp2_fu_441_p2);

assign tmp2_fu_441_p2 = ($signed(mul_i_cast_43_fu_434_p1) + $signed(mul_1_i_cast_fu_402_p1));

assign tmp3_cast_fu_467_p1 = $signed(tmp3_fu_461_p2);

assign tmp3_fu_461_p2 = ($signed(mul_cast_fu_376_p1) + $signed(tmp4_cast_fu_457_p1));

assign tmp4_cast_fu_457_p1 = $signed(tmp4_fu_451_p2);

assign tmp4_fu_451_p2 = ($signed(mul_3_i_cast_fu_438_p1) + $signed(mul_i_cast_fu_388_p1));

assign tmpPeak_2_fu_615_p3 = ((icmp3_fu_609_p2[0:0] === 1'b1) ? ap_const_lv10_3FF : tmp_18_fu_595_p1);

assign tmpPeak_fu_587_p3 = ((icmp2_fu_571_p2[0:0] === 1'b1) ? ap_const_lv16_3FF : tmp_8_fu_577_p4);

assign tmp_11_fu_392_p4 = {{reg_shift_reg_0_1[ap_const_lv32_14 : ap_const_lv32_2]}};

assign tmp_12_fu_424_p4 = {{pro_1_2_i_fu_418_p2[ap_const_lv32_1A : ap_const_lv32_6]}};

assign tmp_13_fu_303_p1 = linearizerOutput_fu_246_p2[18:0];

assign tmp_14_fu_487_p3 = acc_1_3_i_fu_475_p2[ap_const_lv32_1C];

assign tmp_15_fu_503_p1 = p_acc_i_fu_495_p3[17:0];

assign tmp_15_i_fu_379_p4 = {{pro_1_i_reg_684[ap_const_lv32_1F : ap_const_lv32_6]}};

assign tmp_17_fu_561_p4 = {{reg_peak_reg_0_0[ap_const_lv32_11 : ap_const_lv32_C]}};

assign tmp_18_fu_595_p1 = tmpPeak_fu_587_p3[9:0];

assign tmp_19_fu_599_p4 = {{tmpPeak_fu_587_p3[ap_const_lv32_F : ap_const_lv32_A]}};

assign tmp_19_i_fu_538_p2 = ((reg_peak_reg_0_0 > o_filOut_fu_522_p3) ? 1'b1 : 1'b0);

assign tmp_1_fu_187_p3 = ((icmp_fu_181_p2[0:0] === 1'b1) ? ap_const_lv24_0 : tmp_2_fu_167_p1);

assign tmp_20_i_fu_548_p2 = ((reg_peak_reg_0_0 > reg_peak_reg_0_1) ? 1'b1 : 1'b0);

assign tmp_2_fu_167_p1 = in_0_lincoeff[23:0];

assign tmp_3_fu_406_p3 = {{reg_shift_reg_0_0}, {ap_const_lv5_0}};

assign tmp_6_fu_471_p1 = $signed(tmp2_fu_441_p2);

assign tmp_6_i_cast_fu_233_p1 = shiftlin_reg_659;

assign tmp_7_fu_269_p2 = reg_shift_reg_0_3 << ap_const_lv32_5;

assign tmp_8_fu_577_p4 = {{reg_peak_reg_0_0[ap_const_lv32_11 : ap_const_lv32_2]}};

assign tmp_8_i_cast_fu_242_p1 = tmp_8_i_fu_236_p2;

assign tmp_8_i_fu_236_p2 = (ap_const_lv5_2 + tmp_6_i_cast_fu_233_p1);

assign tmp_9_fu_281_p2 = reg_shift_reg_0_3 << ap_const_lv32_2;

assign tmp_fu_171_p4 = {{in_0_lincoeff[ap_const_lv32_17 : ap_const_lv32_10]}};

assign uncorrectedADC_fu_219_p1 = in_0_data_input[11:0];

endmodule //TPG
