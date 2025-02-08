#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(0));

    int no_of_guesses = 0, guessed, randomNumber = (rand() % 100) + 1;

    do
    {
        printf("Guess a number: ");
        scanf("%d", &guessed);

        if (guessed > randomNumber)
        {
            printf("Lower number please \n\n");
        }

        else if (guessed < randomNumber)
        {
            printf("Higher number please \n\n");
        }

        else
        {
            printf("Congrats!!\n");
        }
        no_of_guesses++;

    } while (guessed != randomNumber);

    printf("You guessed the number in %d guesses", no_of_guesses);

    return 0;
}
