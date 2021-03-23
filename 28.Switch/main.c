#include <stdio.h>
#include <stdlib.h>

int main()
{
    char grade = 'C';

    // Acting like an if statement, the switch jumps straight to your case
    switch (grade) {
        case 'A':
            printf ("Sweet!\n");
            break;
        case 'B':
            printf ("Could have tried harder.\n");
            break;
        case 'C':
            printf ("I C you did not study.\n");
            break;
        case 'D':
            printf ("At least you did not fail.\n");
            break;
        case 'F':
            printf ("That is embarrassing.\n");
            break;
        // What about the rest of the cases? We use "default"
        default:
            printf ("What type of grade is this?\n");
            break;
    }

    return 0;
}
