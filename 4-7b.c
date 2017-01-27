/*
    Michael Schumacher
    26 January 2017

    Up and Running with C
    Chapter 4, program 7b
    constants and placeholders
 */

 #include <stdio.h>

 #define INPUT_MAX 64

 int main()
 {
    char input[INPUT_MAX];

    printf("Enter input: ");
    fgets(input, INPUT_MAX, stdin);
    puts("You entered:");
    puts(input);

    return 0;
 }
