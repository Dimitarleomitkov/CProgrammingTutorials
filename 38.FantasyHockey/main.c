#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    // Linking these parallel arrays can be done with a structure or some other better data type
    int player[5] = {58, 66, 68, 71, 87};
    int goals[5] = {26, 39, 25, 29, 31};
    int gamesPlayed[5] = {30, 30, 28, 30, 26};

    float pointsPerGame[5];
    float bestPointsPerGame = 0.0;
    int bestPlayer;

    for (i = 0; i < 5; ++i) {
        pointsPerGame[i] = (float) goals[i] / (float) gamesPlayed[i];
        printf ("%d:\t%d\t%d\t%.2f\n", player[i], goals[i], gamesPlayed[i], pointsPerGame[i]);

        // Find the best player
        if (pointsPerGame[i] > bestPointsPerGame) {
            bestPointsPerGame = pointsPerGame[i];
            bestPlayer = i;
        }
    }

    printf ("The best player is %d:\t%d\t%d\t%.2f\n", player[bestPlayer], goals[bestPlayer], gamesPlayed[bestPlayer], pointsPerGame[bestPlayer]);

    return 0;
}
