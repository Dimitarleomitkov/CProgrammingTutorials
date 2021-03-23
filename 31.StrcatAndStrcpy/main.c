#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char a = 'a';
    char b = 'F';
    char c = '7';

    // Make the lower case to an upper case
    printf ("%c\n", toupper (a));
    // If it is not a lower case, toupper does nothing
    printf ("%c\n", toupper (b));
    // Same for a number
    printf ("%c\n", toupper (c));

    char stuff[100] = "Hey";

    // Concatinate the strings
    strcat (stuff, ", Joe!");
    // Print out the new string stuff
    printf ("%s\n", stuff);
    // Just make sure the original string is long enough
    strcat (stuff, " Do you like icecream?");
    printf ("%s\n", stuff);

    // Copy the string by putting the second one into the first one
    strcpy (stuff, "Joe, do you like ham?");
    // Replacing icecream with ham we get
    printf ("%s\n", stuff);

    return 0;
}
