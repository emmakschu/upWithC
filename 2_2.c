/*
    Michael Schumacher
    18 January 2017

    Up and Running with C
    Chapter 2, program 2
    using the printf function
*/

#include <stdio.h>

int main ()
{
    // printf will not make new line
    printf ("This is the first call.");
    printf ("This is the second.");

    puts ("Now trying with escape character");

    // use escape char to move to new line
    printf ("This is the first line.\n");
    printf ("This is the second line.\n");

    // More on escape characters!
    printf ("Behold!\nI am a new line of text\n");
    printf ("I think I'll \t tab over here a bit\n");
    printf ("He said, \"Don't you love me anymore?\"\n");
    printf ("'Doesn\'t it work with single quotes too?'\n");
    printf ("The \\ character is important in typing LaTeX\n");

    printf ("Hello\nMy name is \"Blorf.\"\n");

    return 0;
}
