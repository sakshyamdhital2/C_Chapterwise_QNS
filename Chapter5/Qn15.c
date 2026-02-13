// Number Guessing Game

#include <stdio.h>

int main() {
    int number = 7, guess;

    printf("Guess the number (1 to 10): ");

    while (1) {
        scanf("%d", &guess);

        if (guess == number) {
            printf("Correct Guess!");
            break;
        }
        else {
            printf("Wrong guess, try again: ");
        }
    }

    return 0;
}
