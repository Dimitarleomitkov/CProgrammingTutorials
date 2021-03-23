#include <stdio.h>
#include <stdlib.h>
// Include our custom header file
#include "Employee.h"

int main()
{
    struct Employee Sam;

    // Set the values for Sam
    Sam.EmployeeID = 1;
    // Set memory aside
    Sam.firstName = (char*) malloc (25 * sizeof(char));
    // Treating the char pointer as a string variable
    Sam.firstName = "Sam";
    Sam.lastName = (char*) malloc (25 * sizeof(char));
    Sam.lastName = "Roberts";
    Sam.age = 25;
    Sam.weight = 79.5;

    // Print out Sam's info
    printf ("%d. %s %s - Age: %d, weight: %.2fkg\n", Sam.EmployeeID, Sam.firstName, Sam.lastName, Sam.age, Sam.weight);

    return 0;
}
