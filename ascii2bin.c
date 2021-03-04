/************************************/
/* Program Name: ascii2bin          */
/* Author: Deni Cabaravdic          */
/* Date: 03/04/2021                 */
/************************************/


#include "stdio.h"
#include "stdlib.h"
#include <unistd.h>
#include <sys/types.h>

#define max_int (255)
#define byte unsigned char

int main (int argc, char * argv[], char ** envp)
{
    int offset = 0x30; // 0x38 = 48
    byte ascii_value;
    int number = 0;
    int digit;
    int retval
        
    if(retval != 0 || retval != 1)
    {
        fprintf(stderr, "Mistake found, look at it again\n"); 
        return 1;
    }
    
    retval = read(0, &ascii_value, 1);
    while (retval == 1)
        digit = ascii_value - offset;
        number = (number << 1) + digit;  
        retval = read(0, &ascii_value, 1);
        
    printf("%u\n", number);
    return 0;

}
