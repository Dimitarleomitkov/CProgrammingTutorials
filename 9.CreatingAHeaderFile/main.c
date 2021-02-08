#include <stdio.h>
// <> when it is in a folder. "" when it is in the same folder as this file
#include <stdlib.h>
// Include our new header file
#include "newheader.h"

int main()
{
    // PI is known from newheader.h
    printf ("For this tutorial pi is %.4f.\n", PI);

    // Don't mind the arithmetic. It is needed for this example
    int girlAge = (AGE / 2) + 7;

    // AGE is from newheader.h
    printf ("If you are %d, then you can date girls who are %d or older.", AGE, girlAge);

    return 0;
}
