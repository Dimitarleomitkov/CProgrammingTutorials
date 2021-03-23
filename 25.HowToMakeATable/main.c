#include <stdio.h>
#include <stdlib.h>

int main()
{
    int columns;
    int rows;

    // We can have loops in loops
    for (rows = 1; rows <= 6; ++rows) {
        printf ("|");
        for (columns = 1; columns <= 9; ++columns) {
            printf ("r%d;c%d|", rows, columns);
        }
        printf ("\n");
    }

    return 0;
}
