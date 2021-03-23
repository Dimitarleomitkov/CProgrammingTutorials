#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int i;
    int diceRoll;

    // For a true random, we can seed the rand function with the millisecond of the day
    srand (time (0));

    for (i = 0; i < 20; ++i) {
        // rand generates a random integer between 0 and 32 787
        printf ("%d\n", (rand () % 6) + 1);
    }

    return 0;
}
