#include "systemc.h"
#include <stdio.h> 


int sc_main(int , char*[])
{
 //sc_clock clock("CLOCK", 10, SC_NS, 0.5, 0.0, SC_NS);

 printf("Hello SystemC world");
 sc_start();
 return 0;

}
