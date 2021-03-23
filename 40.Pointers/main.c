#include <stdio.h>
#include <stdlib.h>

int main()
{
    int stuff = 19;

    // Print out the memory address of the variable
    printf ("Name\tValue\tAddress\n");
    // A structure would be great to hold all this data in itself
    printf ("%s\t%d\t%p\n", "stuff", stuff, &stuff);

    // We can create a variable to point to an address like this
    int *pointerToStuff;
    // Assign the address
    pointerToStuff = &stuff;

    // The value of the pointer
    printf ("The pointer has the address in it - %p.\n", pointerToStuff);
    // The address of the pointer
    printf ("The pointer also has an address of its own - %p.\n", &pointerToStuff);
    // The dereferenced pointer
    printf ("But we can also extract what is in the address the pointer points to - %d\n", *pointerToStuff);
    // So we can change the value of stuff through the pointer like so
    *pointerToStuff = 31;
    // Let's print out stuff and see that it changed
    printf ("stuff = %d\n", stuff);

    return 0;
}
