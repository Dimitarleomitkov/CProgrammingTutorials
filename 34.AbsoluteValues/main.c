#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    // abs makes the number positive or keeps it positive (absolute value)
    printf ("%d - %d = %d (absolute value).\n", 5, 7, abs (5 - 7));

    // calculate 5 to the third power
    printf ("%d^3 = %.2f\n", 5, pow (5,3));

    // sqrt takes the square root of a number
    printf ("sqrt(%d) = %.2f\n", 1274, sqrt (1274));

    return 0;
}
