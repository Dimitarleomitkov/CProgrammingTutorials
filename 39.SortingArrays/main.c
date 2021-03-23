#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int i;
    int length = 20;
    int goals[length];

    srand (time(0));
    printf ("Original array:\n");
    // Populate the array with random numbers
    for (i = 0; i < length; ++i) {
        goals[i] = (rand () % 25) + 1;
        // Printing the random number for sanity's sake
        printf ("%d,", goals[i]);
    }
    printf ("\n");

    // Sort the array
    int j, temp;

    // Go through the whole array without the last one
    for (i = 0; i < length - 1; ++i) {
        // Go through the rest of the elements starting from i
        for (j = i + 1 ; j < length; ++j) {
            // check if the current element i is bigger than the current element j
            if (goals[i] > goals[j]) {
                // put the value of the current element j in temp
                temp = goals[j];
                // put the value of the current element i in the current element j
                goals[j] = goals[i];
                // put the value of temp in the current element i
                goals[i] = temp;
            }
        }
    }

    // Print out the sorted array
    printf ("Sorted array:\n");
    for (i = 0; i < length; ++i) {
        printf ("%d,", goals[i]);
    }

    return 0;
}
