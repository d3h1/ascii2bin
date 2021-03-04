/************************************/
/* Program Name: ascii2bin          */
/* Author: Deni Cabaravdic          */
/* Date: 03/04/2021                 */
/************************************/


#include <stdio.h>
#include <unistd.h>

int main()
{

	char ascii_value;
	int offset = 48; 
	int number = 0;
	

int retval = read(0, &ascii_value, 1);

while ((retval == 1) && (ascii_value != '\n')) 
    {
        int digit = ascii_value - offset;

        if ((digit == 1) || (digit == 0))
            number = (number << 1) + digit;  
                
        retval = read(0, &ascii_value, 1);
    }

printf("%d\n", number);
return 0;
}