#include <stdio.h>
#include <stdlib.h>

int main()
{
    int age;
    char gender;

    printf ("Enter your age: ");
    scanf (" %d", &age);

    printf ("Enter your gender F/M: ");
    scanf (" %c", &gender);

    // This is the last program.
    if (age >= 18) {
        printf ("You may enter, ");

        // Let's tidy it up a bit with if/else statements
        if (gender == 'M') {
            printf ("dude.\n");
        } else if (gender == 'm') {
            printf ("dude.\n");
        } else if (gender == 'F') {
            printf ("lady.\n");
        } else if (gender == 'f') {
            printf ("lady.\n");
        }
    } else {
        printf ("Nothing to see here, ");

        if (gender == 'M') {
            printf ("dude.\n");
        } else if (gender == 'm') {
            printf ("dude.\n");
        } else if (gender == 'F') {
            printf ("lady.\n");
        } else if (gender == 'f') {
            printf ("lady.\n");
        }
    }

    printf ("%d", 14*6);


    return 0;
}
