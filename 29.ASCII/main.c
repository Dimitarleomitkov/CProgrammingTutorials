#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Let's set a number to a letter.
    int stuff = 'a';

    // We can use them interchangably
    printf ("%c is the number %d\n", stuff, stuff);

    // Let's check if the variable is a number or a character
    if (isalpha (stuff)) {
        printf ("%c is a letter.\n", stuff);
    }

    // Checking if a character is a number
    if (isdigit (stuff)) {
        printf ("%c is a number.\n", stuff);
    }

    // Checking if a letter is upper case
    if (isupper (stuff)) {
        printf ("%c is an upper case letter.\n", stuff);
    } else {
        printf ("%c is a lower case letter.\n", stuff);
    }

    return 0;
}
