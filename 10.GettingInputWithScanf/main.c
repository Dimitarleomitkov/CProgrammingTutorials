#include <stdio.h>
#include <stdlib.h>

int main()
{
    char firstName[20];
    char crush[20];
    int numberOfBabies;

    printf ("Your name: ");
    // scanf takes the type of data and the variable it will store it in
    scanf ("%s", firstName);

    // Do the same for the crush
    printf ("Your crush name: ");
    scanf ("%s", crush);

    printf ("Enter how many kids you would like to have: ");
    // We need to pass the address of the variable for this (the "&" sign)
    scanf ("%d", &numberOfBabies);

    // Let's print out the love story
    printf ("%s and %s are in love and will have %d babies. How lovely! We wish them good luck and happiness!", firstName, crush, numberOfBabies);

    return 0;
}
