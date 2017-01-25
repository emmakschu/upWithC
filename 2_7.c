/*
    Michael Schumacher
    18 January 2017

    Up and Running with C
    Chapter 2, program 7
    working with math
 */

 #include <stdio.h>

 int main ()
 {
    int td = 7;
    int a;

    printf ("How many touchdowns will the Packers score? ");
    scanf ("%d", &a);
    printf ("%d TDs times %d = %d points\n", a, td, a*td);


    float circumference;
    float pi = 3.14159;
    float diameter;

    printf ("Enter a circumference: ");
    scanf ("%f", &circumference);
    printf ("A circle with circ. %f has diameter %f\n", circumference,
            circumference / pi);

    // Increment or decrement: the long way
    int x = 1;

    printf ("x = %d\n", x);
    x = x + 1;
    printf ("Now x = %d\n", x);


    // Increment or decrement: the easy way
    int y = 2;
    printf ("y = %d\n", y);
    y--;
    printf ("Now y = %d\n", y);

    return 0;
 }
