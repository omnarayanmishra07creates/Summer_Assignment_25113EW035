#include <stdio.h>

int main()
{
    char name[50];
    int accNo;
    float balance, deposit, withdraw;

    // Input account details
    printf("Enter Account Number: ");
    scanf("%d", &accNo);

    printf("Enter Name: ");
    scanf(" %[^\n]", name);

    printf("Enter Initial Balance: ");
    scanf("%f", &balance);

    // Deposit money
    printf("Enter Deposit Amount: ");
    scanf("%f", &deposit);
    balance += deposit;

    // Withdraw money
    printf("Enter Withdraw Amount: ");
    scanf("%f", &withdraw);

    if(withdraw <= balance)
        balance -= withdraw;
    else
        printf("Insufficient Balance!\n");

    // Display final balance
    printf("\nFinal Balance = %.2f", balance);

    return 0;
}