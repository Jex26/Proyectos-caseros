#include <10f200.h>

#fuses NOMCLR, NOWDT, NOPROTECT

#use delay(clock = 4MHz)
#use fixed_io(b_outputs = PIN_B0, PIN_B1, PIN_B2)

void main()
{

    signed int i=6;
    output_b(i);
    
    while(TRUE){
    
        if(input_state(pin_B3)==1){
            i--;
            if(i<0) i=6;
            output_b(i);
            delay_ms(300);
        }
    }

}
