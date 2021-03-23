#include <stdio.h>
#include <stdlib.h>

void printSomething ();

// Global variable can be used by every function
int stuff = 1;
int stuff2 = 2;

int main()
{
    // Local variable stuff used by main() only. Also preferred over globals
    int stuff = 3;

    printf ("main: stuff = %d, stuff2 = %d\n", stuff, stuff2);
    printSomething ();

    return 0;
}

void printSomething ()
{
    printf ("printfSomething: stuff = %d\n", stuff);
}
