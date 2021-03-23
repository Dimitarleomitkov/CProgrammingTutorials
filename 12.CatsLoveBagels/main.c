#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Order of operations are valid in programming.
    int a = 4 + 2 * 6;

    printf ("Result: %d\n", a);
    // Also brackets matter
    a = (4 + 2) * 6;
    printf ("Cats love bagels - %d\n", a);

    return 0;
}
