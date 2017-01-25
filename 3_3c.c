/*
    Michael Schumacher
    23 January 2017

    Up and Running with C
    Chapter 3, program 3c
    looping with do-while
 */

 #include <stdio.h>

 int main ()
 {
    char a;

    a = 'A';

    do
    {
        putchar (a);
        a++;
    }
    while (a <= 'Z');

    putchar ('\n');

    return 0;
 }
