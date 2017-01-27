/*
    Michael Schumacher
    25 January 2017

    Up and Running with C
    Chapter 4, program 6
    working with characters and strings
 */

 #include <stdio.h>
 #include <string.h>

 int main()
 {
    char source[] = "I am looking for a string within a string";
    char sought[] = "within";

    if (strstr(source, sought) == NULL)
    {
        puts("String not found");
    }
    else
    {
        puts("Found it");
    }


    return 0;
 }
