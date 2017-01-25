/*
    Michael Schumacher
    19 January 2017

    Up and Running with C
    Chapter 2, program 8
    using basic math functions in the C standard library
 */

 #include <stdio.h>
 #include <math.h>
 #include <stdlib.h>

 int main ()
 {
    float root;
    float input;

    printf ("Enter a real number: ");
    scanf ("%f", &input);

    root = sqrt(input);

    printf ("The square root of %f is %f\n", input, root);


    float cube;

    printf ("Enter a real number: ");
    scanf ("%f", &input);
    cube = pow(input, 3);
    printf ("%f to the 3rd power is %f\n", input, cube);


    // Generating random numbers
    int random;
    srand((unsigned)time(NULL));
    random = rand();
    printf ("%d is my random number\n", random);


    return 0;

 }
