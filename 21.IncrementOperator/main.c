#include <stdio.h>
#include <stdlib.h>

int main()
{
    int pumpkin = 20;

    // Adds 1 after it prints
    printf ("pumpking = %d\n", pumpkin++);
    // Adds 1 before it prints
    printf ("pumpking = %d\n", ++pumpkin);
    // Subtracts 1 before it prints
    printf ("pumpking = %d\n", --pumpkin);
    // Subtracts 1 after it prints
    printf ("pumpking = %d\n", pumpkin--);
    // Let's print the final value. Should be as we started
    printf ("Final value of pumpkin = %d", pumpkin);

    return 0;
}
