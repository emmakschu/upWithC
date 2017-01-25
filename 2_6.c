/*
    Michael Schumacher
    18 January 2017

    Up and Running with C
    Chapter 2, program 6
    working with strings, etc in I/O
 */

 #include <stdio.h>

 int main ()
 {
    char password[] = "spatula";

    printf ("The password is \"%s\"\n", password);


    float myFloat;

    printf ("Type a float: ");
    scanf ("%f", &myFloat);
    printf ("You entered: %f\n", myFloat);


    // Note that scanf STOPS reading string at first whitespace
    char name[15];

    printf ("Enter your name: ");
    scanf ("%s", name);
    printf ("Your name is %s\n", name);


    // To read in multiple words of input, use fgets
    char fullName[64];

    printf ("Enter your full name: ");
    fgets (fullName, 64, stdin);
    printf ("Your full name is: %s", fullName);


    return 0;
 }
