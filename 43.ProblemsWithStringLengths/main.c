#include <stdio.h>
#include <stdlib.h>

int main()
{
    char movie[20];
    char *pMovie = movie;

    // If you try to put more than 20 symbols, it might overwrite your data
    fgets (movie, 20, stdin);
    puts (movie);

    return 0;
}
