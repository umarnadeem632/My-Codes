#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main() {
    int secret_number, guess;

    // Seed the random number generator with the current time
    srand(time(NULL));

    // Generate a random secret number between 0 and 9
    secret_number = rand() % 10;

    printf("Welcome to the Number Guessing Game!\n");

    do {
        printf("Guess a number between 0 and 9: ");
        scanf("%d", &guess);

        if (guess != secret_number) {
            printf("Sorry, wrong guess! Try again.\n");
        }

    } while (guess != secret_number);

    printf("Congratulations! You guessed the correct number %d!\n", secret_number);

    return 0;
}

