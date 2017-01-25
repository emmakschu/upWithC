/*
    Michael Schumacher
    23 January 2017

    Up and Running with C
    Chapter 3, program 1
    using the IF keyword
 */

 #include <stdio.h>

 int main ()
 {
    int x;

    printf ("Enter an integer: ");
    scanf ("%d", &x);
    printf ("You entered: %d\n", x);

    if (x > 0)
    {
        printf ("You entered a positive integer!\n");
    }

    else if (x == 0)
    {
        printf ("You entered zero!\n");
    }

    else
    {
        printf ("You entered a negative integer!\n");
    }

    return 0;
 }

