/*
    Michael Schumacher
    26 January 2017

    Up and Running with C
    Chapter 4, program 7c
    constants and placeholders
 */

 #include <stdio.h>

 int main()
 {
    float a;
    float b = 5.0;

    printf("Enter a number: ");
    scanf("%f", &a);

    printf("%.1f / %.1f = %.3f\n", a, b, a/b);

    return 0;
 }
