#include <stdio.h>
#include <stdlib.h>

int main()
{
    /* Every string has '\0' at the end.
       This special character is at the end of "Hello world!" too.
       It is really "Hello world!\n\0"
       This is because every string is an array of characters. */
    printf ("Hello world!\n");

    // An array of characters looks like this
    char name[6] = "Misho";

    // We used 6 because we need to set aside space for \0
    printf ("My name is %s.", name);

    return 0;
}
