#include <stdio.h>
#include <stdlib.h>

// Function prototype
void helloWorld ();
void convertEUtoUSD (float euro);

int main()
{
    // Use a function to print something on the screen
    helloWorld ();
    // We can also pass arguments to a function
    convertEUtoUSD (50.50);

    return 0;
}

// The implementation of a function
void helloWorld ()
{
    printf ("Hello world, from our custom function.\n");

    return;
}

// return void but take the amount of money to convert
void convertEUtoUSD (float euro)
{
    printf ("%.2f euros = %.2f USD\n", euro, euro * 1.37);
    return;
}
