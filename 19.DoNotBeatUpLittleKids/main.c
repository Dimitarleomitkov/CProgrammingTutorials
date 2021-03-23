#include <stdio.h>
#include <stdlib.h>

int main()
{
    int hoursStudied = 60;
    int kidsBeatUp = 0;

    // The two conditions have to be true in order for the print to happen
    if (hoursStudied >= 10 && kidsBeatUp == 0) {
        printf ("You are a good student.\n");
    } else {
        printf ("You have to better yourself.\n");
    }

    return 0;
}
