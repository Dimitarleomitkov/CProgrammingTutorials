#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    int intArr[5] = {7, 9, 43, 21, 3};

    // Print the array element, its address and the value it holds
    for (i = 0; i < 5; ++i) {
        printf ("intArr[%d] at %p = %d\n", i, &intArr[i], intArr[i]);
    }

    // Print the address of the array
    printf ("\nintArr is at %p.\n", intArr);
    /* If this is the address to the first element,
       then dereferencing it will give us the value of the first element */
    printf ("*intArr = %d\n", *intArr);
    // What about dereferencing intArr + 2?
    printf ("*(intArr + 2) is at address %p =  %d\n", intArr + 2, *(intArr + 2));

    return 0;
}
