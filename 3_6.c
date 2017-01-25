/*
    Michael Schumacher
    24 January 2017

    Up and Running with C
    Chapter 3, program 6
    working with functions
 */

 #include <stdio.h>

 void printHello ();

 int main ()
 {
    puts ("Now about to run the printHello function");

    printHello ();

    puts ("Now back to the main function");

    return 0;
 }

 void printHello ()
 {
    puts ("Hello, I am a function!");
 }
