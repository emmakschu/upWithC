/*
    Michael Schumacher
    24 January 2017

    Up and Running with C
    Chapter 3, program 6b
    passing arguments to functions
 */

 #include <stdio.h>

 void repeat (int count);
 float mean (float a, float b, float c);

 int main ()
 {
    puts ("I will print the statement once:");
    repeat (1);
    puts ("");

    puts ("Now I will repeat it ten times!");
    repeat (10);

    puts ("");


    float a, b, c, av;

    puts ("Enter three values: ");
    scanf ("%f", &a);
    scanf ("%f", &b);
    scanf ("%f", &c);

    av = mean (a, b, c);

    printf ("The mean of %f, %f, and %f is %f\n", a, b, c, av);

    return 0;
 }

 void repeat (int count)
 {
    int x;

    for (x = 0; x < count; x++)
    {
        printf ("Hi\t");
    }
 }

 float mean (float a, float b, float c)
 {
    float mean;

    mean = (a + b + c) / 3;

    return mean;
 }
