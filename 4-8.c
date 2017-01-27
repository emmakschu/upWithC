/*
    Michael Schumacher
    26 January 2017

    Up and Running with C
    Chapter 4, program 8
    intro to arrays
 */

 #include <stdio.h>

 int main()
 {
    // Bad way with all separate floats
    /*float temp1, temp2, temp3, temp4;

    temp1 = 85.2;
    temp2 = 83.4;
    temp3 = 87.4;
    temp4 = 82.6; */

    // Right way: use an array of floats
    float temps[4] = {23.0, 25.2, 22.5, 23.4};

    printf("Local temperatures:\n");
    printf("Madison: %.1f\n", temps[0]);
    printf("Janesville: %.1f\n", temps[1]);
    printf("Baraboo: %.1f\n", temps[2]);
    printf("Dodgeville: %.1f\n", temps[3]);

    return 0;
 }
