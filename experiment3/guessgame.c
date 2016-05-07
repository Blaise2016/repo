#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "include/guessgame.h"

int secret_number;
void initialize_number_generator(void) {
    srand((unsigned) time(NULL));
}

void choose_new_secret_number(void) {
    secret_number=rand()%MAX_NUMBER+1;
}


void read_guesses(void) {
    int guess, num_guesses=0;
    
    for (;;)
    {
        num_guesses++;
        printf("Enter guess: ");
        scanf("%d", &guess);
        if (guess==secret_number) {
            printf("Congratulations! You won in %d guesses!\n\n", num_guesses);
            return ;

        }
        else if (guess<secret_number)
            printf("Too low, try again.\n");
        else printf("Too high, try again.\n");
    }
}

