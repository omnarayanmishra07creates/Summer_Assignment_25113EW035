#include <stdio.h>

int main()
{
    char book[5][30];
    int i;

    // Input book names
    for(i = 0; i < 5; i++)
    {
        printf("Enter Book %d Name: ", i + 1);
        scanf(" %[^\n]", book[i]);
    }

    // Display books
    printf("\nAvailable Books:\n");

    for(i = 0; i < 5; i++)
    {
        printf("%d. %s\n", i + 1, book[i]);
    }

    return 0;
}