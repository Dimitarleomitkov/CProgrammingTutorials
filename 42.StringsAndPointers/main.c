#include <stdio.h>
#include <stdlib.h>

int main()
{
    // The address of the first element is a constant
    char movie1[] = "The Matrix";
    // Not a constant
    char* movie2 = "Ghost in the Shell";

    // We can treat movie2 as a string
    puts (movie2);
    // We can change movie2 like it is a variable
    movie2 = "The Expanse";
    // Print out the string movie2
    puts (movie2);

    return 0;
}
