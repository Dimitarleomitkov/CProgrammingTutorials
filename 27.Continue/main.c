#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num = 1;

    do {
        if (num == 6 || num == 8) {
            ++num;
            // Continue the loop from the start/Go to the check and continue with the loop
            continue;
        }

        printf ("%d is available\n", num);
        ++num;
    } while (num <= 10);

    return 0;
}
