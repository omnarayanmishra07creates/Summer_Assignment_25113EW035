#include <stdio.h>

int main()
{
    char str[100];
    int i = 0, count = 1;

    printf("Enter a sentence: ");
    gets(str);

    // Counting spaces
    while(str[i] != '\0')
    {
        if(str[i] == ' ')
        {
            count++;
        }

        i++;
    }

    printf("Number of words = %d", count);

    return 0;
}