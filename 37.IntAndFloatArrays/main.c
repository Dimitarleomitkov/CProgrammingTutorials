#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    int pushUps[7];
    float average = 0;

    // Populate the array
    for (i = 0; i < 7; ++i) {
        printf ("How many push ups did you do on day %d?:", i + 1);
        scanf ("%d", &pushUps[i]);
    }

    // Sum up every element
    for (i = 0; i < 7; ++i) {
        average += pushUps[i];
    }
    // take the average
    average /= 7;

    printf ("On average you do %.2f push ups a day.\n", average);

    return 0;
}
