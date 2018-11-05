
library IEEE;
use IEEE.std_logic_1164.all;
use IEEE.numeric_std.all;

entity TPG_mul_mul_7s_21cud_DSP48_1 is
port (
    a: in std_logic_vector(7 - 1 downto 0);
    b: in std_logic_vector(21 - 1 downto 0);
    p: out std_logic_vector(32 - 1 downto 0));

end entity;

architecture behav of TPG_mul_mul_7s_21cud_DSP48_1 is
    signal a_cvt: signed(7 - 1 downto 0);
    signal b_cvt: signed(21 - 1 downto 0);
    signal p_cvt: signed(32 - 1 downto 0);

begin

    a_cvt <= signed(a);
    b_cvt <= signed(b);
    p_cvt <= resize((signed (a_cvt) * signed (b_cvt)), 32);
    p <= std_logic_vector(p_cvt);

end architecture;

Library IEEE;
use IEEE.std_logic_1164.all;

entity TPG_mul_mul_7s_21cud is
    generic (
        ID : INTEGER;
        NUM_STAGE : INTEGER;
        din0_WIDTH : INTEGER;
        din1_WIDTH : INTEGER;
        dout_WIDTH : INTEGER);
    port (
        din0 : IN STD_LOGIC_VECTOR(din0_WIDTH - 1 DOWNTO 0);
        din1 : IN STD_LOGIC_VECTOR(din1_WIDTH - 1 DOWNTO 0);
        dout : OUT STD_LOGIC_VECTOR(dout_WIDTH - 1 DOWNTO 0));
end entity;

architecture arch of TPG_mul_mul_7s_21cud is
    component TPG_mul_mul_7s_21cud_DSP48_1 is
        port (
            a : IN STD_LOGIC_VECTOR;
            b : IN STD_LOGIC_VECTOR;
            p : OUT STD_LOGIC_VECTOR);
    end component;



begin
    TPG_mul_mul_7s_21cud_DSP48_1_U :  component TPG_mul_mul_7s_21cud_DSP48_1
    port map (
        a => din0,
        b => din1,
        p => dout);

end architecture;


