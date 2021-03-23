#include <stdio.h>
#include <stdlib.h>

void passByValue (int i);
void passByAddress (int *i);

int main()
{
    int stuff = 20;

    passByValue (stuff);
    printf ("main, passByValue(): stuff = %d\n", stuff);

    passByAddress (&stuff);
    printf ("main, passByAddress(): stuff = %d\n", stuff);

    return 0;
}

// The num variable is a copy of stuff so stuff will be untouched
void passByValue (int num)
{
    num = 99;
    printf ("passByValue num = %d\n", num);
    return;
}

// The num variable plays with the value at the address of stuff so stuff will be changed
void passByAddress (int *num)
{
    *num = 64;
    printf ("passByAddress num = %d\n", *num);
    return;
}
