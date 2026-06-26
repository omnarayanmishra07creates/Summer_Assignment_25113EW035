#include <stdio.h>

int main()
{
    int secret = 25, guess;

    printf("Guess the number (1-50): ");
    scanf("%d", &guess);

    if (guess == secret)
        printf("Congratulations! You guessed correctly.");
    else if (guess < secret)
        printf("Too Low!");
    else
        printf("Too High!");

    return 0;
}