#include <stdio.h>
#include <stdlib.h>

int main()
{
    int answer;

    printf ("Do you like bagels? (y/n): ");
    scanf (" %c", &answer);

    // Only one test needs to be true to enter the if. Else it goes to the else.
    if (answer == 'y' || answer == 'Y' || answer == 'n' || answer == 'N') {
        printf ("Thank you for voting.\n");
    } else {
        printf ("Keyboard warrior much?");
    }

    return 0;
}
