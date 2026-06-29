#include <stdio.h>

int main()
{
    char item[50];
    int quantity;
    float price;

    // Input item details
    printf("Enter Item Name: ");
    scanf(" %[^\n]", item);

    printf("Enter Quantity: ");
    scanf("%d", &quantity);

    printf("Enter Price per Item: ");
    scanf("%f", &price);

    // Display inventory details
    printf("\n--- Inventory Details ---\n");
    printf("Item Name : %s\n", item);
    printf("Quantity : %d\n", quantity);
    printf("Price : %.2f\n", price);
    printf("Total Value : %.2f\n", quantity * price);

    return 0;
}