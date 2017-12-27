#include "include/screen.h"
#include "include/kb.h"
#include "include/string.h"

void kmain()
{	clearScreen();	
	scrinit();	
	print("\t\t\t\t\t PULSE V1.0\n\n\t\t****A Product From VERA Systems(:)>****\n");
	while (1)
       {
                print("\nPULSE(:>)  :=");
                
                string ch = readStr();
                if(streql(ch,"cmd"))
                {
                        print("\nYou are already in cmd\n");
                }
                else if(streql(ch,"clear"))
                {
                        clearScreen();
                }
                
                else
                {
                        print("\nCommand not found(:>(\n");
                }
                
                print("\n");        
       }
 
}

