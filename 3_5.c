/*
    Michael Schumacher
    24 January 2017

    Up and Running with C
    Chapter 3, program 5
    nested loops
 */

 #include <stdio.h>
 #include <stdlib.h>
 #include <time.h>

 int main ()
 {
    int column, row, r;

    srand ((unsigned)time(NULL));

    for (row = 0; row < 10; row++)
    {
        for (column = 0; column < 10; column++)
        {
            r = rand();
            printf ("%2d\t", r % 100);
        }

        putchar ('\n');
    }

    puts ("");

    char rows;
    int cols;

    for (rows = 'A'; rows < 'K'; rows++)
    {
        for (cols = 0; cols < 10; cols++)
        {
            printf ("%c%d\t", rows, cols);
        }

        putchar ('\n');
    }

    return 0;
 }
