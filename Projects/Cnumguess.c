#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(){

    printf("\nWelcome to the number guessing game.");
    printf("\nGuess the number: ");

    srand(time(0));
    int number = (rand() % 100) + 1;
    int guesscount = 0;
    int guess;

    do
    {
        scanf("%d",&guess);
        guesscount +=1;
        if(guess > number)
        {
            printf("Too high, guess again: ");
        }
        else if(guess < number){
            printf("Too low, guess again: ");
        }
    } while (guess != number);

    printf("\nYou've guessed the number!");
    printf("\nThe number: %d",number);
    printf("\nYour guess count: %d",guesscount);


    return 0;

}