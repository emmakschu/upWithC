/*
    Michael Schumacher
    25 January 2017

    Up and Running with C
    Chapter 4, program 1
    working with characters and strings
 */

 #include <stdio.h>
 #include <ctype.h>

 int main ()
 {
    int ch = 'a';

    printf("Big %c\n", toupper(ch));
    printf("Little %c\n", tolower(ch));
    printf("Original variable: %c\n", ch);


    // With a string

    int c;

    do
    {
        c = getchar();
        c = toupper(c);
        putchar(c);
    }
    while (c != '\n');

    return 0;
 }
