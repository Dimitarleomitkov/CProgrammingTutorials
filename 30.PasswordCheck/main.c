#include <stdio.h>
#include <stdlib.h>

int main()
{
    char password[30];

    printf ("Enter your password (max 30 symbols):");
    scanf ("%s", &password);

    int i = 0;
    char upperCaseFlag = 0;
    char dollarFlag = 0;
    char digitFlag = 0;

    do {
        if (isupper (password[i])) {
            ++upperCaseFlag;
        }
        if (password[i] == '$') {
            ++dollarFlag;
        }
        if (isdigit (password[i])) {
            ++digitFlag;
        }
        ++i;
    } while (password[i] != '\0');

    if (upperCaseFlag && dollarFlag && digitFlag) {
        printf ("Your password \"%s\" is good enough.\n", password);
    } else {
        printf ("Your password \"%s\" is stupid.\n", password);
    }

    return 0;
}
