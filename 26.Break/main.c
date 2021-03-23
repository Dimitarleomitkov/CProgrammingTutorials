#include <stdio.h>
#include <stdlib.h>

int main()
{
    int index;
    int howMany;
    int maxAmount = 10;

    printf ("How many times do you want this loop to loop? (up to 10):");
    scanf ("%d", &howMany);

    for (index = 1; index <= maxAmount; ++index) {
        printf ("%d\n", index);
        // Break ends a loop early
        if (index == howMany) {
            break;
        }
    }

    return 0;
}
