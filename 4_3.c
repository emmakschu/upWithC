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
    char string[] = "What is the length of this string?";
    int len;

    len = strlen(string);

    printf("The string: %s\n", string);
    printf("is %d characters long\n", len);


    char input[64];

    printf("Type a string: ");
    fgets(input, 64, stdin);
    len = strlen(input);
    printf("Your string,\n%swas %d characters\n", input, len);


    return 0;
 }
