/*
    Michael Schumacher
    23 January 2017

    Up and Running with C
    Chapter 3, program 2
    using the switch keyword
 */

 #include <stdio.h>

 int main ()
 {
    char a;
    char enter;

    printf ("Choose 1, 2, or 3: ");
    scanf ("%c", &a);
    scanf ("%c", &enter);

    switch (a)
    {
        case '1':
            puts ("One is the loneliest number!\n");
            break;

        case '2':
            puts ("Two makes for a good couple\n");
            break;

        case '3':
            puts ("Three\'s a crowd!\n");
            break;

        default:
            puts ("Not a valid choice....\n");
    }


    char choice;

    puts ("Options:");
    puts ("A - Next Match");
    puts ("B - Table");
    puts ("C - Last Match");

    scanf ("%c", &choice);

    switch (choice)
    {
        case 'A':
        case 'a':
            puts ("Wednesday v Southampton");
            break;

        case 'B':
        case 'b':
            printf ("Chelski\nArsenal\nSpurs\nLFC\n");
            break;

        case 'C':
        case 'c':
            puts ("LFC 2-3 Swans....");
            break;

        default:
            puts ("Not a valid choice, like");
    }

    return 0;
 }
