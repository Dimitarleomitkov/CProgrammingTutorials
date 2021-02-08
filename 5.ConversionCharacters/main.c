#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Everything between "" is called a string
    printf("Hello world!\n");
    // Let's see how we can put a string inside the string with %s
    printf ("%s is the best person ever!\n", "Misho");
    // Let's see how we can put an integer inside the string with %d
    printf ("I ate %d waffles yesterday.\n", 5);
    // Let's see how we can put an float (2 digits after the decimal point) inside the string with %f
    printf ("I spent $%.2f on food last week.\n", 57.32);

    return 0;
}
