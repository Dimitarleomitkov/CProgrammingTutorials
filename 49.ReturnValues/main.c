#include <stdio.h>
#include <stdlib.h>

float calculateBonus (int yearsWorked);

int main()
{
    // calculateBonus() will return a float which we will use to print on the screen
    printf ("Sam gets a bonus of $%.2f for his %d years worked at the company.\n", calculateBonus (5), 5);
    printf ("Natasha gets a bonus of $%.2f for her %d years worked at the company.\n", calculateBonus (11), 11);

    return 0;
}

// Return an integer from this function
float calculateBonus (int yearsWorked)
{
    float bonus = yearsWorked * 249.99;

    if (yearsWorked > 10) {
        bonus += 1000;
    }

    return bonus;
}
