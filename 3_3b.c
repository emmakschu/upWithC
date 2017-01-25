/*
    Michael Schumacher
    23 January 2017

    Up and Running with C
    Chapter 3, program 3b
    looping with while
 */

 #include <stdio.h>
 #include <math.h>

 int main ()
 {
    int x, r;

    srand ((unsigned)time(NULL));

    x = 10;

    while (x > 0)
    {
        r = rand ();
        printf ("%2d\n", r % 100);
        x--;
    }

    return 0;
 }
