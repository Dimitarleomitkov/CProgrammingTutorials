#include <stdio.h>
#include <stdlib.h>

int main()
{
    int pageViews = 0;

    // We can add 1 to a variable with the "++" operator
    ++pageViews;
    printf ("Page views: %d\n", pageViews);

    float balance = 1000.00;

    // balance = balance * 1.1 written in a better way
    balance *= 1.1;
    printf ("Balance after first year: %f\n", balance);
    balance *= 1.1;
    printf ("Balance after second year: %f\n", balance);
    balance *= 1.1;
    printf ("Balance after third year: %f\n", balance);

    return 0;
}
