#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Initializing the variables
    int age1, age2, age3, age4, age5;
    float averageAge;

    // Setting the value of three variables on one line
    age1 = age2 = age3 = 45;
    // Setting the value of two variables on one line
    age4 = age5 = 27;
    // Averaging them out
    averageAge = (age1 + age2 + age3 + age4 + age5) / 5;
    // Print the result
    printf ("The average age is: %.2f\n", averageAge);

    return 0;
}
