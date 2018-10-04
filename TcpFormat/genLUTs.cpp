#include <stdint.h>
#include <iostream>
#include <iomanip>
using namespace std;
#define Threshold 1024

int main(int argc, char** argv) {
  cout << "#ifndef LUTs_h" << endl;
  cout << "#define LUTs_h" << endl;
  cout << "#include <stdint.h>" << endl;
  cout << "// Rgn LUT" << endl;
  cout << "static const uint10_t lut[0x400] = {" << endl;
  for(int i = 0; i < 0x400; i++) {
    uint32_t value = rand() & 0x3FF; // For the heck of it
    if(value > 0x3FF) value = 0x3FF;
    cout << showbase << internal << setw(6) << setfill('0') << hex << value << ", ";
  }
  cout << endl << "};" << endl;
  cout << "#endif" << endl;
}
