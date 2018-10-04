bool writeLinkMapHT(uint16_t data_input[NXtls * NStrips * NTowers], uint32_t lincoeff[NXtls * NStrips * NTowers][3], uint32_t trigger_data_output[NXtls * NStrips * NTowers]) {
  // Block 1
  int iXtl, link, loBit, hiBit, iLin, iOut;
  static FILE *f1;
  f1 = fopen("link_data_map.txt","w");
  for(iXtl = 0; iXtl < NXtls * NStrips * NTowers; iXtl++) {
    fprintf(f1, "data_input_%d : IN STD_LOGIC_VECTOR (15 downto 0);\n", iXtl);
  }
  for(iLin = 0; iLin < NXtls * NStrips * NTowers * 3; iLin++) {
    fprintf(f1, "lincoeff_%d : IN STD_LOGIC_VECTOR (23 downto 0);\n", iLin);
  }
  for(iOut = 0; iOut < NXtls * NStrips * NTowers; iOut++) {
    if (iOut == (NXtls * NStrips * NTowers) - 1){
      fprintf(f1, "trigger_data_output_%d : IN STD_LOGIC_VECTOR (17 downto 0);\n\n\n", iOut);
    }
    else{
    fprintf(f1, "trigger_data_output_%d : IN STD_LOGIC_VECTOR (17 downto 0);\n", iOut);
    }
  }

  // Block 2
  for(iXtl = 0; iXtl < NXtls * NStrips * NTowers; iXtl++) {
    fprintf(f1, "signal data_input_%d : IN STD_LOGIC_VECTOR (15 downto 0);\n", iXtl);
  }
  for(iLin = 0; iLin < NXtls * NStrips * NTowers * 3; iLin++) {
    fprintf(f1, "signal lincoeff_%d : IN STD_LOGIC_VECTOR (23 downto 0);\n", iLin);
  }
  for(iOut = 0; iOut < NXtls * NStrips * NTowers; iOut++) {
    if (iOut == (NXtls * NStrips * NTowers)-1){
      fprintf(f1, "signal trigger_data_output_%d : IN STD_LOGIC_VECTOR (17 downto 0);\n\n\n", iOut);
    }
    else{
      fprintf(f1, "signal trigger_data_output_%d : IN STD_LOGIC_VECTOR (17 downto 0);\n", iOut);
    }
  }

  // Block 3
  for(iXtl = 0; iXtl < NXtls * NStrips * NTowers; iXtl++) {
    fprintf(f1, "data_input_%d => data_input_%d,\n", iXtl);
  }
  for(iLin = 0; iLin < NXtls * NStrips * NTowers * 3; iLin++) {
    fprintf(f1, "lincoeff_%d => lincoeff_%d,\n", iLin);
  }
  for(iOut = 0; iOut < NXtls * NStrips * NTowers; iOut++) {
    if (iOut == (NXtls * NStrips * NTowers) - 1){
      fprintf(f1, "trigger_data_output_%d => trigger_data_output_%d,\n\n\n", iOut);
    }
    else{
      fprintf(f1, "trigger_data_output_%d => trigger_data_output_%d,\n", iOut);
    }
  }

  // Block 4
  for(iXtl = 0; iXtl < NXtls * NStrips * NTowers; iXtl++) {
    link = (iXtl / 12);
    loBit = (iXtl % 12) * 16;
    hiBit = loBit + 15;
    fprintf(f1, "data_input_%d <= s_INPUT_LINK_ARR( %d )(%d downto %d);\n", iXtl, link, hiBit, loBit);
  }
  for(iLin = 0; iLin < NXtls * NStrips * NTowers * 3; iLin++) {
    link = (iLin / 8) + 25;
    loBit = (iLin % 8) * 24;
    hiBit = loBit + 23;
    fprintf(f1, "lincoeff_%d <= s_INPUT_LINK_ARR( %d )(%d downto %d);\n", iLin, link, hiBit, loBit);
  }
  for(iOut = 0; iOut < NXtls * NStrips * NTowers; iOut++) {
    link = (iOut / 12);
    loBit = (iOut % 12) * 16;
    hiBit = loBit + 15;
    fprintf(f1, "s_INPUT_LINK_ARR( %d )(%d downto %d) <= trigger_data_output_%d;\n", link, hiBit, loBit, iOut);
  }
  return true;
}
