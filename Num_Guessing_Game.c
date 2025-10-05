// Number Guessing Game!!

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(0));
    int randomNumber = (rand() % 100) + 1;
    int attempts = 0, guess;

    do {
        printf("Guess the number: ");
        scanf("%d", &guess);

        if (guess>randomNumber) {
            printf("Try! a \033[1;31mLower Number\033[0m.\n");
        }
        else {
            printf("Try! a \033[1;31mHigher Number\033[0m.\n");
        }
        attempts++;

    } while (guess!=randomNumber);

    printf("\033[1;32mCongratulations!\033[0m ");
    printf("\033[1;33mYou guessed the number\033[0m ");
    printf("\033[1;34min \033[1;35m%d\033[0m ", attempts);
    printf("\033[1;36mguesses!\033[0m\n");

    return 0;
}