#include <stdio.h>
#include <stdlib.h>

int main()
{
    int howMany;
    int *points;
    float average = 0.0;

    printf ("How many number do you want to average?: ");
    scanf ("%d", &howMany);

    // Set aside memory for the pointer to hold the data in
    points = (int *) malloc (howMany * sizeof(int));

    int i;

    printf ("Enter your values:\n");
    for (i = 0; i < howMany; ++i) {
        scanf ("%d", (points + i));
    }

    int total = 0;

    for (i = 0; i < howMany; ++i) {
        total += points[i];
    }

    average = (float) total / howMany;
    printf ("The average is %f\n", average);

    // Free the memory when done with it
    free (points);


    return 0;
}
