#include <stdio.h>
#include <stdlib.h>

int main()
{
    int index = 0;

    // This will print the value of index 10 times
    for (index = 1; index <= 10; ++index) {
        printf ("index = %d\n", index);
    }

    printf ("\n");

    // This will print the value of index 5 times (steps of 2)
    for (index = 1; index <= 10; index += 2) {
        printf ("index = %d\n", index);
    }


    return 0;
}
