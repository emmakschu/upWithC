/*
    Michael Schumacher
    25 January 2017

    Up and Running with C
    Chapter 4, program 2
    working with characters and strings
 */

 #include <stdio.h>
 #include <ctype.h>

 int main()
 {
    int acter;

    do
    {
        acter = getchar();
        if (isupper(acter) || isdigit(acter) || acter == '.')
        {
            putchar(acter);
        }
    }
    while (acter != '\n');

    return 0;
 }
