/*
 * File:   main.c
 * Author: Gabriel Ruanes Melquiades 
 *
 * Created on 12 de Fevereiro de 2021, 16:01
 */

#include <xc.h>
#include "config.h"

void main(void) 
{
        TRISDbits.TRISD7 = 0;
        PORTDbits.RD7 = 0;
        
    while ( 1 )
    {
        PORTDbits.RD7 = 1;
        __delay_ms(500);
        PORTDbits.RD7 = 0;
        __delay_ms(500);
    }
}
