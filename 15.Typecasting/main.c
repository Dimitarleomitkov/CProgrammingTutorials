#include <stdio.h>
#include <stdlib.h>

int main()
{
    float averageProfit;
    int priceOfPumpkin = 10;
    int sales = 59;
    int daysWorked = 7;

    // This calculation will fail because of the integers
    averageProfit = (priceOfPumpkin * sales) / daysWorked;
    printf ("Average daily profit: $%.2f\n", averageProfit);
    // Let's fix it by telling C to use floats for this calculation
    averageProfit = (float)(priceOfPumpkin * sales) / daysWorked;
    printf ("Average daily profit: $%.2f\n", averageProfit);

    return 0;
}
