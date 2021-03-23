#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int i;
    int diceRoll;
    int sum1 = 0;

    srand (time(0));

    for (i = 0; i < 3; ++i) {
        diceRoll = (rand () % 6) + 1;
        printf ("Dice %d: %d\n", i, diceRoll);
        sum1 += diceRoll;
    }

    char bet;

    printf ("The sum is %d. Would the next one be Higher (H), Lower (L) or the Same (S)?:", sum1);
    scanf ("%c", &bet);
    int sum2 = 0;

    for (i = 0; i < 3; ++i) {
        diceRoll = (rand () % 6) + 1;
        printf ("Dice %d: %d\n", i, diceRoll);
        sum2 += diceRoll;
    }

    bet = toupper (bet);
    printf ("The second sum is %d. ", sum2);

    if ((sum1 > sum2) && (bet == 'L')) {
        printf ("Spidey sense is on point!\n");
    } else if ((sum1 < sum2) && (bet == 'H')) {
        printf ("Spidey sense is on point!\n");
    } else if ((sum1 == sum2) && (bet == 'S')) {
        printf ("Spidey sense is on point!\n");
    } else {
        printf ("Better luck next time!\n");
    }

    return 0;
}
