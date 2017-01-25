/*
    Michael Schumacher
    18 January 2017

    Up and Running with C
    Chapter 2, program 4
    intro to variables
 */

 #include <stdio.h>

 int main ()
 {
    // Declare variable
    int age;

    // Assign value
    age = 2017 - 1972;

    // Use variable
    printf ("The C language is %d years old!\n", age);

    // Change value of the variable
    age = 28;

    printf ("I am %d years old\n", age);
    printf ("That's %d months!\n", age*12);

    // Can declare multiple vars of same type on one line
    char x,y,z;

    x = 'A';
    y = 'B';
    z = 'C';

    printf ("This is as easy as %c%c%c\n", x, y, z);

    // Can do math with chars
    x = 'D';
    y = x + 1;
    z = y + 1;

    printf ("Next comes %c%c%c\n", x, y, z);


    // Declare a float
    float pi;

    pi = 22.0 / 7.0;
    printf ("Ancient mathematicians estimated PI as %f\n", pi);


    return 0;
 }
