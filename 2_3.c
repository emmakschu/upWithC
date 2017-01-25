/*
    Michael Schumacher
    18 January 2017

    Up and Running with C
    Chapter 2, program 3
    displaying values with printf
 */

 #include <stdio.h>

 int main ()
 {
    printf ("Here is a value: %d\n", 27);
    printf ("Here is a value: %d\n", 29);
    printf ("Here are the values: %d, %d, and %d\n", 51, 52, 53);

    printf ("Everyone knows that 2+2 = %d\n", 2+2);

    printf ("I am a %c %s\n", 'C', "programmer");

    printf ("3.2 of 7 days is %f %%\n", 3.2/7*100);

    return 0;
 }
