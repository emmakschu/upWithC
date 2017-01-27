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
    char password[9];
    int compare;

    printf("Enter password: ");
    scanf("%8s", password);
    compare = strcmp(password, "secret");

    if (compare == 0)
    {
        puts("Authenticated");
    }
    else
    {
        puts("Credentials failed");
    }


    return 0;
 }
