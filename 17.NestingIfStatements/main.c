#include <stdio.h>
#include <stdlib.h>

int main()
{
    int age;
    char gender;

    printf ("Enter your age: ");
    scanf ("%d", &age);

    printf ("Enter your gender F/M: ");
    scanf ("%c", &gender);

    if (age >= 18) {
        printf ("You may enter, ");

        if (gender == 'M') {
            printf ("dude.\n");
        }
        if (gender == 'm') {
            printf ("dude.\n");
        }
        if (gender == 'F') {
            printf ("lady.\n");
        }
        if (gender == 'f') {
            printf ("lady.\n");
        }
    }

    if (age < 18) {
        printf ("Nothing to see here, ");

        if (gender == 'M') {
            printf ("dude.\n");
        }
        if (gender == 'm') {
            printf ("dude.\n");
        }
        if (gender == 'F') {
            printf ("lady.\n");
        }
        if (gender == 'f') {
            printf ("lady.\n");
        }
    }

    return 0;
}
