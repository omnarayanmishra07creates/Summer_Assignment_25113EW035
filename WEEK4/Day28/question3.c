#include <stdio.h>

int main()
{
    char name[50];
    int tickets;
    float price = 250;

    // Input passenger details
    printf("Enter Passenger Name: ");
    scanf(" %[^\n]", name);

    printf("Enter Number of Tickets: ");
    scanf("%d", &tickets);

    // Display booking details
    printf("\n--- Ticket Details ---\n");
    printf("Passenger : %s\n", name);
    printf("Tickets : %d\n", tickets);
    printf("Total Fare = %.2f\n", tickets * price);

    return 0;
}