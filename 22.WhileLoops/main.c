#include <stdio.h>
#include <stdlib.h>

int main()
{
    int index = 1;

    // This piece of code will execute over and over again until index becomes 5
    while (index <= 5) {
        printf ("The index is %d\n", index++);
    }

    // Let's write something useful with this
    int day = 1;
    float money = 0.01;

    // Should you take $1 000 000 or take a penny which doubles every day for a month?
    while (day <= 30) {
        printf ("Day %d - $%.2f\n", day, money);
        money *= 2;
        ++day;
    }
    printf ("Day %d - $%.2f\n", day, money);
    // Take the exponential growth!

    return 0;
}
