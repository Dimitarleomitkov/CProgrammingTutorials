#include <stdio.h>
#include <stdlib.h>

int main()
{
    int weight = 70;

    // Let's add 5 to this and print it
    printf ("If I eat a watermelon I will weigh %d.\n", weight + 5);

    // Let's make a list of everything and print the results
    int num1, num2;
    int result;

    printf ("\n");
    // Set our numbers
    num1 = 13;
    num2 = 7;
    // Add them and store the result in result
    result = num1 + num2;
    printf ("num1 + num2 = %d\n", result);
    // Subtract them and store the result in result
    result = num1 - num2;
    printf ("num1 - num2 = %d\n", result);
    // Multiply them and store the result in result
    result = num1 * num2;
    printf ("num1 * num2 = %d\n", result);
    // Divide them and store the result in result
    result = num1 / num2;
    printf ("num1 / num2 = %d\n", result);
    // Division with a remainder. Take the remainder and store the result in result
    result = num1 % num2;
    // To print a % we need to put "%%" in printf
    printf ("num1 %% num2 = %d\n", result);

    printf ("\n");

    // Let's check out the same with floats
    float num3, num4, resultFloat;

    num3 = 86.0;
    num4 = 21.0;

    // Add them and store the result in resultFloat
    resultFloat = num3 + num4;
    printf ("num3 + num4 = %f\n", resultFloat);
    // Subtract them and store the result in resultFloat
    resultFloat = num3 - num4;
    printf ("num3 - num4 = %f\n", resultFloat);
    // Multiply them and store the result in resultFloat
    resultFloat = num3 * num4;
    printf ("num3 * num4 = %f\n", resultFloat);
    // Divide them and store the result in resultFloat
    resultFloat = num3 / num4;
    printf ("num3 / num4 = %f\n", resultFloat);
    // Division with a remainder is invalid for floats

    return 0;
}
