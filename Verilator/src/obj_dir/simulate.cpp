#include <verilated.h>
#include <iostream>
#include "Voc8051_tb.h"

Voc8051_tb *top;
vluint64_t main_time = 0;

double sc_time_stamp() { return main_time; }

int main() {
  top  = new Voc8051_tb;

  while(! Verilated::gotFinish()) {

      std::cout << "calling eval " << std::endl;
      //      top->eval();
      std::cout << "main time : " << main_time << std::endl;
      main_time++;
    }
  
    delete top;
    }
