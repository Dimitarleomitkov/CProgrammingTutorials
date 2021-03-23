#include <stdio.h>
#include <stdlib.h>

int main()
{
    char catName[50];
    char catFood[25];
    char sentence[75] = "";

    printf ("What is your cat's name?:");
    // Input for a string
    gets (catName);

    printf ("What does it eat?:");
    // Input for a string
    gets (catFood);

    // Merging every string in one
    strcat (sentence, catName);
    strcat (sentence, " loves to eat ");
    strcat (sentence, catFood);
    strcat (sentence, ".");

    // Print a string with \n at the end
    puts (sentence);

    return 0;
}
