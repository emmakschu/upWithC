/*
    Michael Schumacher
    18 January 2017

    Up and Running with C
    Chapter 2, program 5
    working with character I/O
 */

 #include <stdio.h>

 int main ()
 {
    // In the second section, the ENTER (or RETURN) press will be interpreted
    // as being variable 'a' later unless I throw it away in another getchar()
    int myChar, throwaway;

    printf ("Type a letter: ");
    myChar = getchar();
    throwaway = getchar();
    printf ("You typed '");
    putchar (myChar);
    printf ("'.\n");

    int a, b;

    printf ("Type TWO letters: ");
    a = getchar();
    b = getchar();
    printf ("You typed '");
    putchar (a);
    printf ("' and '");
    putchar (b);
    printf("'.\n");

    return 0;
 }
