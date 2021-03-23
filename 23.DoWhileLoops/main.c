#include <stdio.h>
#include <stdlib.h>

int main()
{
    float grade = 0;
    float scoreEntered = 0;
    int numberOfTests = 0;
    float average = 0;

    printf ("Press -1 when done.\n");

    // Executes at least ones, then checks
    do {
        printf ("Tests:%d | Average:%.2f\n", numberOfTests, average);
        printf ("Enter test score:");
        scanf ("%f", &scoreEntered);
        grade += scoreEntered;
        ++numberOfTests;
        average = grade / numberOfTests;
    } while (scoreEntered != -1);

    return 0;
}
