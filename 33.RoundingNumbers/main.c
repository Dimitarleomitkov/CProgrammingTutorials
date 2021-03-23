#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float num1 = 9.65234;
    float num2 = 3.3;

    // Rounding down with floor()
    printf ("num1 is %.2f\n", floor(num1));
    printf ("num2 is %.2f\n", floor(num2));

    printf ("\n");

    // Rounding up with ceil()
    printf ("num1 is %.2f\n", ceil(num1));
    printf ("num2 is %.2f\n", ceil(num2));

    return 0;
}
