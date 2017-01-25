/*
    Michael Schumacher
    24 January 2017

    Up and Running with C
    Chapter 3, program 4
    looping with for
 */

 #include <stdio.h>

 int main ()
 {
    int x;

    // Display numbers 1-10
    for (x = 0; x < 10; x++)
    {
        printf ("%2d\n", x+1);
    }

    puts ("");

    // Display numbers 1-20
    for (x = 0; x < 20; x++)
    {
        printf ("%2d\n", x+1);
    }

    puts ("");

    // Display only even numbers 1-20
    for (x = 0; x < 20; x++)
    {
        if (x % 2 == 1)
        {
            printf ("%2d\n", x+1);
        }
    }

    puts ("");

    // Display countdown 10-1
    for (x = 10; x > 0; x--)
    {
        printf ("%2d\n", x);
    }

    return 0;
 }
