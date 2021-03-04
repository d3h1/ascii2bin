/************************************/
/* Program Name: ascii2bin          */
/* Author: Deni Cabaravdic          */
/* Date: 03/04/2021                 */
/************************************/


offset = 1;
number = 0;
    
retval = read(0, &ascii_value, 1);
while (retval == 1)
    digit = ascii_value - offset;
    number = (number << 1) + digit;  
    retval = read(0, &ascii_value, 1);
        
printf("%u\n", number);
return 0;
