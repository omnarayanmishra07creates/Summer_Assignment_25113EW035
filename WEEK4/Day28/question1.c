#include <stdio.h>

int main()
{
    char book[50];
    int id;

    // Input book details
    printf("Enter Book ID: ");
    scanf("%d", &id);

    printf("Enter Book Name: ");
    scanf(" %[^\n]", book);

    // Display details
    printf("\n--- Library Record ---\n");
    printf("Book ID : %d\n", id);
    printf("Book Name : %s\n", book);

    return 0;
}