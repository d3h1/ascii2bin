/************************************/
/* Program Name: ascii2bin          */
/* Author: Deni Cabaravdic          */
/* Date: 03/04/2021                 */
/************************************/


#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <math.h>

int main (int argc, char * argv[], char ** envp)
{
        const char MAX_POWER = 32; 
        
        char count = 0; 
        char ascii_value = 0;
        char offset = 0x30;                 
        char digit = 0;
        int number = 0;  
        int retval = 0;
        
        retval = read(0, &ascii_value, 1); 
        
            while (retval == 1)
            {
                                                                    
                if(ascii_value == 0x30 || ascii_value == 0x31)      
                {                                                  
                    count++;                   
                    digit = ascii_value - offset;                  
                    number = (number << 1) + digit;                
                    retval = read(0, &ascii_value, 1);  
                }
                else                                               
                {                                                
                        retval = 0;                                 
                }                                                  
                                                                    
            }
            
    if((ascii_value == 0x30 || ascii_value == 0x31 || ascii_value == 0x0a) && MAX_POWER >= count) 
    {   
        printf("%u\n", number);                                 
        return 0;                                               
    }                                                           
    else                                        
    {                                           
        if(MAX_POWER < count)                                            
        {                                                               
            printf("Sorry, the number calculated exceeds 2^32. " 
            "Please enter a binary number that doesn't exceed 2^32. \n");
        }
        else                                                            
        {                                                               
            printf("A number that is not a 1 or 0 has been entered. " 
            "Please enter a number in binary with only 1s and 0s. \n");
        }
        return 1;                                           
    }
}
    printf("%d\n", number)
    return 0;
}
