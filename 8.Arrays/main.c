#include <stdio.h>
#include <stdlib.h>

int main()
{
    // We can initialize an array like so
    int myArray[3] = {9, 8, 77};

    // Let's access the 3rd element;
    printf ("The third element of the array is: %d\n", myArray[2]);

    // When initializing we can skip the length
    char name[] = "Ratatui";

    printf ("The third letter of Ratatui is \"%c\".\n", name[2]);
    // To change a string in an already existing variable you can use strcpy ()
    strcpy (name, "Ricardo Garsia");
    printf ("It is I, %s!\n", name);

    return 0;
}
