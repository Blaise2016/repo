#include <stdio.h>


#include "include/guessgame.h"

int secret_number;
char command;


int main(void) {    
    printf("Guess the secret number between 1 and %d. \n\n", MAX_NUMBER);
    initialize_number_generator();
    do
    {
        choose_new_secret_number();
        printf("a new number has been choosen.\n");
        read_guesses();
        printf("Wanna play again ? (Y/N) ");
        scanf("%c", &command);
        printf("\n");
    }
    while (command=='y' || command=='Y');
}
