#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Example for an if statement
    if (1 < 5) {
        printf ("1 is indeed less than 5.\n");
    }

    // the tests can be <, >, ==, <=, >= and !=
    if (1 < 5) {
        printf ("you tested if 1 is < 5\n");
    }

    if (1 > 5) {
        printf ("you tested if 1 is > 5\n");
    }

    if (1 <= 5) {
        printf ("you tested if 1 is <= 5\n");
    }

    if (1 >= 5) {
        printf ("you tested if 1 is >= 5\n");
    }

    if (1 == 5) {
        printf ("you tested if 1 is == 5\n");
    }

    if (1 != 5) {
        printf ("you tested if 1 is != 5\n");
    }

    int age;

    // Prompt the user for their age
    printf ("Enter your age: ");
    scanf ("%d", &age);

    // Check if they are old enough
    if (age < 18) {
        printf ("You are not allowed to enter.\n");
    }

    return 0;
}
