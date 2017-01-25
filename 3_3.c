/*
    Michael Schumacher
    23 January 2017

    Up and Running with C
    Chapter 3, program 3
    looping with while
 */

 #include <stdio.h>

 int main ()
 {
    int x;
    x = 1;

    while (x <= 20)
    {
        if (x % 2 == 0)
        {
            printf ("%d\n", x);
        }

        x++;
    }

    x = 10;

    while (x > 0)
    {
        printf ("%d\n", x);
        x--;
    }

    return 0;
 }
