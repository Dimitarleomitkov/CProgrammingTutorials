#include <stdio.h>
#include <stdlib.h>
// stdbool.h must be included to use boolean variables
#include <stdbool.h>

int main()
{
    // Creating an integer variable
    int myVariable;
    // We can initialize a variable with a value while we create it
    int myVariable2 = 50;
    // There is a variable type char - used for characters
    char aCharacter;
    // There is a variable type float - used for fraction numbers
    float floatVariable = 3.14;
    // There is a variable type double - used for fraction numbers with greater precision
    double doubleVariable = 7.2375932598938254;
    // There is a variable type bool - used for indicating "true" or "false"
    bool flag = true;

    // We can give a variable a value at any point
    myVariable = 27;
    // Let's print it out
    printf ("I am %d years old.\n", myVariable);

    // We can store the result of a calculation in a variable
    myVariable2 = 2021 - 1945;
    printf ("It has been %d years since WW2.\n", myVariable2);

    // This looks ugly though, let's try to tidy it up
    int yearsPassed;
    int currentYear;
    int ww2Year;

    currentYear = 2021;
    ww2Year = 1945;
    yearsPassed = currentYear - ww2Year;
    printf ("It has been %d years since WW2.\n", yearsPassed);

    return 0;
}
