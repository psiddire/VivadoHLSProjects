#include <stdlib.h>
#include <stdint.h>
#include <string.h>
#include <stdio.h>

#include "MakeHT.h"

bool writeLinkMapHT(uint10_t rgnET[NCrts*NCrds*NRgns], uint10_t hfET[NCrts*NHFRgns], uint10_t HT[3]) {
  // This code is to write suitable mapping of inputs to signals in the CTP7_HLS project from Ales
  // Block 1 of User Code
  int iRgn, iHFRgn, link, loBit, hiBit;
  static FILE *f1;
  f1 = fopen("link_data_map.txt","w");
  for(iRgn = 0; iRgn < NCrts*NCrds*NRgns; iRgn++) {
    fprintf(f1, "rgnET_%d : IN STD_LOGIC_VECTOR (15 downto 0);\n", iRgn);
  }
  for(iHFRgn = 0; iHFRgn < NCrts * NHFRgns; iHFRgn++) {
    fprintf(f1, "hfET_%d : IN STD_LOGIC_VECTOR (15 downto 0);\n", iHFRgn);
  }
  fprintf(f1, "HT_0 : OUT STD_LOGIC_VECTOR (15 downto 0);\n");
  fprintf(f1, "HT_1 : OUT STD_LOGIC_VECTOR (15 downto 0);\n");
  fprintf(f1, "HT_2 : OUT STD_LOGIC_VECTOR (15 downto 0);\n\n\n");
  // Block 2
  for(iRgn = 0; iRgn < NCrts*NCrds*NRgns; iRgn++) {
    fprintf(f1, "signal rgnET_%d : STD_LOGIC_VECTOR(15 DOWNTO 0);\n", iRgn);
  }
  for(iHFRgn = 0; iHFRgn < NCrts * NHFRgns; iHFRgn++) {
    fprintf(f1, "signal hfET_%d : STD_LOGIC_VECTOR(15 DOWNTO 0);\n", iHFRgn);
  }
  fprintf(f1, "signal HT_0 : STD_LOGIC_VECTOR (15 downto 0);\n");
  fprintf(f1, "signal HT_1 : STD_LOGIC_VECTOR (15 downto 0);\n");
  fprintf(f1, "signal HT_2 : STD_LOGIC_VECTOR (15 downto 0);\n\n\n");
  // Block 3
  for(iRgn = 0; iRgn < NCrts*NCrds*NRgns; iRgn++) {
    fprintf(f1, "rgnET_%d => rgnET_%d,\n", iRgn, iRgn);
  }
  for(iHFRgn = 0; iHFRgn < NCrts * NHFRgns; iHFRgn++) {
    fprintf(f1, "hfET_%d => hfET_%d,\n", iHFRgn, iHFRgn);
  }
  fprintf(f1, "HT_0 => HT_0,\n");
  fprintf(f1, "HT_1 => HT_1,\n");
  fprintf(f1, "HT_2 => HT_2,\n\n\n");
  // Block 4
  for(iRgn = 0; iRgn < NCrts*NCrds*NRgns; iRgn++) {
    // Each link can carry 192-bits, or 12x16-bits of data
    // Each iRgn needs 16 bits
    link = (iRgn / 12);
    loBit = (iRgn % 12) * 16;
    hiBit = loBit + 15;
    fprintf(f1, "rgnET_%d <= s_INPUT_LINK_ARR( %d )(%d downto %d);\n", iRgn, link, hiBit, loBit);
  }
  for(iHFRgn = 0; iHFRgn < NCrts * NHFRgns; iHFRgn++) {
    // Each link can carry 192-bits, or 12x16-bits of data
    // Each iHFRgn needs 16 bits
    link = (iHFRgn / 12) + 21;
    loBit = (iHFRgn % 12) * 16;
    hiBit = loBit + 15;
    fprintf(f1, "hfET_%d <= s_INPUT_LINK_ARR( %d )(%d downto %d);\n", iHFRgn, link, hiBit, loBit);
  }
  fprintf(f1, "s_OUTPUT_LINK_ARR( 0 )(15 downto 0) <= HT_0;\n");
  fprintf(f1, "s_OUTPUT_LINK_ARR( 0 )(31 downto 16) <= HT_1;\n");
  fprintf(f1, "s_OUTPUT_LINK_ARR( 0 )(47 downto 32) <= HT_2;\n");
  return true;
}

bool writeInputFile(uint10_t rgnET[NCrts*NCrds*NRgns], uint10_t hfET[NCrts*NHFRgns], bool last = false) {
  static bool first = true;
  static int count = 0;
  static FILE *f1;
  int i,j;
  int iRgn, iHFRgn;
  uint10_t item0 = 0;
  uint10_t item1 = 0;
  if(first) {
    first = false;
    f1 = fopen("input_link_data.txt","w");
    if( f1 == NULL){
      fprintf(stderr, "\n Error opening input file");
      return false;
    }
    // Write header
    for (i=0; i < 945; i++)fprintf(f1,"=");
    fprintf(f1,"\nInput ");
    for (i=0; i < 67; i++) fprintf(f1,"       LINK_%02d",i);
    fprintf(f1,"\n");
    for (i=0; i < 945; i++) fprintf(f1,"=");
  }
  for(j = 0; j < 6 && count < 1024; j++, count++) {
    fprintf(f1,"\n0x%05X", count);
    for(i=0; i< 67; i++) {
      item0 = 0;
      item1 = 0;
      if(i < 21) {
	iRgn = i * 12 + j * 2;
	if(iRgn < NCrts * NCrds * NRgns) {
	  item0 = rgnET[iRgn];
	  item1 = rgnET[iRgn + 1];
	}
      }
      else if(i < 33) {
	iHFRgn = i * 12 + j * 2;
	if(iHFRgn < NCrts * NHFRgns) { //Won't be satisfied
	  item0 = hfET[iHFRgn];
	  item1 = hfET[iHFRgn + 1];
	}
      }
      fprintf(f1,"    0x%04X%04X", item1, item0);
    }
  }
  if(last || count > 1017) {
    for(; count < 1024; count++) {
      fprintf(f1,"\n0x%05X", count);
      for(i=0; i< 67; i++) {
	fprintf(f1,"    0x00000000");
      }
    }
  }
  return true;
}

bool writeOutputFile(uint10_t HT[3], bool last = false) {

  static bool first = true;
  static int count = 0;
  static FILE *f1;

  int i,j;

  if(first) {
    first = false;
    f1 = fopen("output_link_data.txt","w");
    if( f1 == NULL){
      fprintf(stderr, "\n Error opening output file");
      return false;
    }
    // Write header
    for (i=0; i < 679; i++) fprintf(f1,"=");
    fprintf(f1,"\nOutput ");
    for (i=0; i < 48; i++)  fprintf(f1,"       LINK_%02d",i);
    fprintf(f1,"\n");
    for (i=0; i < 679; i++) fprintf(f1,"=");
  }

  // Pack the three 16-bit outputs in link number 0 bits 0-15, 16-31 and 32-47
  for(j = 0; j < 6 && count < 1024; j++, count++) {
    fprintf(f1,"\n0x%05X", count);
    for(i=0; i< 48; i++)
      {
	if(j == 0 && i == 0)
	  fprintf(f1,"    0x%04X%04X", HT[1], HT[0]);
	if(j == 1 && i == 0)
	  fprintf(f1,"    0x%08X", HT[2]);
	else
	  fprintf(f1,"    0x00000000");
      }
  }

  // Fill in zeros for the rest, when last event is reached
  if(last || count > 1017) {
    for(; count < 1024; count++) {
      fprintf(f1,"\n0x%05X", count);
      for(i=0; i< 48; i++) {
	fprintf(f1,"    0x00000000");
      }
    }
  }

  return true;

}

bool makeTestData(int argc, char** argv, uint10_t rgnET[NCrts*NCrds*NRgns], uint10_t hfET[NCrts*NHFRgns]) {
  static FILE *f1;
  static bool first = true;
  uint32_t count;
  int i,j;
  int iRgn, iHFRgn;
  uint10_t item0 = 0;
  uint10_t item1 = 0;
  uint32_t value = 0;
  char junk[1024];
  char pattern[64];
  if(argc >= 2) {
    strncpy(pattern, argv[1], 64);
  }
  else {
    strcpy(pattern, "--default");
  }
  if(strncmp(pattern, "--random", strlen(pattern)) == 0) {
    for(iRgn = 0; iRgn < NCrts * NCrds * NRgns; iRgn++) {
      rgnET[iRgn] = rand() & 0x7F;
    }
    for(iHFRgn = 0; iHFRgn < NCrts * NHFRgns; iHFRgn++) {
      hfET[iHFRgn] = rand() & 0x7F;
    }
  }
  else if(strncmp(pattern, "--increasing", strlen(pattern)) == 0) {
    value = 0;
    for(iRgn = 0; iRgn < NCrts * NCrds * NRgns; iRgn++) {
      rgnET[iRgn] = value++;
    }
    value = 0;
    for(iHFRgn = 0; iHFRgn < NCrts * NHFRgns; iHFRgn++) {
      hfET[iHFRgn] = value++;
    }
  }
  else if(strncmp(pattern, "--decreasing", strlen(pattern)) == 0) {
    value = NCrts * NCrds * NRgns;
    for(iRgn = 0; iRgn < NCrts * NCrds * NRgns; iRgn++) {
      rgnET[iRgn] = value--;
    }
    value = NCrts * NHFRgns;
    for(iHFRgn = 0; iHFRgn < NCrts * NHFRgns; iHFRgn++) {
      hfET[iHFRgn] = value--;
    }
  }
  else if(strncmp(pattern, "--constant", strlen(pattern)) == 0) {
    value = 0;
    if(argc == 3) value = atoi(argv[2]);
    for(iRgn = 0; iRgn < NCrts * NCrds * NRgns; iRgn++) {
      rgnET[iRgn] = value;
    }
    for(iHFRgn = 0; iHFRgn < NCrts * NHFRgns; iHFRgn++) {
      hfET[iHFRgn] = value;
    }
  }
  else if(strncmp(pattern, "--fileinput", strlen(pattern)) == 0) {
    if(first) {
      first = false;
      // Open file
      if(argc == 3) f1 = fopen(argv[2], "r");
      else f1 = fopen("fileinput.txt", "r");
      // Skip three header lines
      for(i = 0; i < 3; i++) {
	if(fgets(junk, sizeof(junk), f1) == NULL) {
	  fprintf(stderr, "Aborting due to bad format of the input file header\n");
	  return false;
	}
      }
    }
    for(j = 0; j < 6; j++) {
      if(fscanf(f1, "%X", &count) == 1) {
	if(j != (count % 6)) {
	  fprintf(stderr, "Read error~?!\n");
	  return false;
	}
	for(i = 0; i < 67; i++) {
	  if(fscanf(f1, "%X", &value) == 1) {
	    item0 = value & 0xFFFF;
	    item1 = value >> 16;
	    if(i < 21) {
	      iRgn = i * 12 + j * 2;
	      if(iRgn < NCrts * NCrds * NRgns) {
		rgnET[iRgn] = item0;
		rgnET[iRgn + 1] = item1;
	      }
	    }
	    else if(i < 33) {
	      iHFRgn = i * 12 + j * 2;
	      if(iHFRgn < NCrts * NHFRgns) {//same problem here
		hfET[iHFRgn] = item0;
		hfET[iHFRgn + 1] = item1;
	      }
	    }
	  }
	  else {
	    fprintf(stderr, "Error reading value\n");
	    return false;
	  }
	}
      }
      else {
	fprintf(stderr, "Error reading count\n");
	return false;
      }
    }
  }
  else {
    // Default test data; Construct it using indices for the fun of it!
    for(iRgn = 0; iRgn < NCrts * NCrds * NRgns; iRgn++) {
      rgnET[iRgn] = iRgn / 2;
    }
    for(iHFRgn = 0; iHFRgn < NCrts * NHFRgns; iHFRgn++) {
      hfET[iHFRgn] = iHFRgn;
    }
  }
  return true;
}

int main(int argc, char **argv) {

  uint10_t rgnET[NCrts*NCrds*NRgns];
  uint10_t hfET[NCrts*NHFRgns];
  uint10_t et;
  uint10_t HT[3] = {0, 0, 0};
  uint10_t hlsHT[3] = {0, 0, 0};

  uint32_t rgnHT = 0;
  uint32_t hfHT = 0;
  uint32_t sum = 0;

  int iCrt;
  int iCrd;
  int iRgn;
  int i;
  int j;
  int iHFRgn;
  int event = 0;

  bool last = false;

#ifdef Vivado
  printf("Running in Vivado environment\n");
#else
  printf("Using: #define uint10_t uint16_t\n");
#endif

// Event loop - 170 events maximum can be written out

  for(event = 0; event < 170; event++) {
    
    // Mark last event
    if(event == 169) last = true;

    // Make test data

    if(!makeTestData(argc, argv, rgnET, hfET)) return 999;

    // Determine HT using software
    
    rgnHT = 0;
    for(iRgn = 0; iRgn < NCrts * NCrds * NRgns; iRgn++) {
      j = (iRgn % (NCrds*NRgns));
      et = rgnETLUT[rgnET[iRgn]][j];
      if(et > MinETCutForHT) rgnHT += et;
      if(rgnHT > 0xFFFF) rgnHT = 0xFFFF;
    }
    hfHT = 0;
    for(iHFRgn = 0; iHFRgn < NCrts * NHFRgns; iHFRgn++) {
      j = (iHFRgn % (NHFRgns));
      et = hfETLUT[hfET[iHFRgn]][j];
      if(et > MinHFETCutForHT) hfHT += et;
      if(hfHT > 0xFFFF) hfHT = 0xFFFF;
    }
    sum = rgnHT + hfHT;
    if(sum > 0xFFFF) sum = 0xFFFF;
    HT[0] = (uint10_t) sum;
    HT[1] = (uint10_t) rgnHT;
    HT[2] = (uint10_t) hfHT;
    
    // Determine HT using hardware simulation
    
    MakeHT(rgnET, hfET, hlsHT);
    
    // Compare
    
    if(HT[0] != hlsHT[0]) {
      fprintf(stderr, "C says: HT = %d; HLS says: HT = %d\n", HT[0], hlsHT[0]);
      fprintf(stderr, "C says: rgnHT = %d; HLS says: rgnHT = %d\n", HT[1], hlsHT[1]);
      fprintf(stderr, "C says: hfHT = %d; HLS says: hfHT = %d\n", HT[2], hlsHT[2]);
      fprintf(stderr, "Test failed\n");
      return 1;
    }

    // Save input and output
    if(!writeInputFile(rgnET, hfET, last)) return 2;
    if(!writeOutputFile(hlsHT, last)) return 3;

  }
    
  if(!writeLinkMapHT(rgnET, hfET, hlsHT)) return 4;
  
  printf("Test succeeded\n");
  return 0;

}
