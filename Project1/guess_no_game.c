#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{

    int guess_no, no_of_guess=1;

    int number;
    srand(time(0));

    // number generate functoin
    number = rand() % 100 + 1; // generate a random number between 1 to 100
    //printf("The number is:%d", number);

    do
    {
        printf("Guess the number between 1 to 100: ");
        scanf("%d", &guess_no);

        if (guess_no > number)
        {
            printf("Lower Number Please!\n");
        }
        else if (guess_no < number)
        {
            printf("Higher Number Please!\n");
        }
        else
        {
            printf("You gussed it in %d attempts\n", no_of_guess);
        }
        no_of_guess++;

    } while (guess_no != number);

    return 0;
}