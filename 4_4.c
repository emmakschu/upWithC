/*
    Michael Schumacher
    25 January 2017

    Up and Running with C
    Chapter 4, program 2
    working with characters and strings
 */

 #include <stdio.h>
 #include <string.h>

 int main()
 {
    char first[] = "This string should really ";
    char second[] = "be with the other one.\n";
    char storage[64];

    strcpy(storage, first);
    strcat(storage, second);

    printf("%s", storage);

    return 0;
 }
