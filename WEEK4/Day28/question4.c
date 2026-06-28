#include <stdio.h>

int main()
{
    char name[50];
    char phone[15];

    // Input contact details
    printf("Enter Name: ");
    scanf(" %[^\n]", name);

    printf("Enter Phone Number: ");
    scanf("%s", phone);

    // Display contact
    printf("\n--- Contact Details ---\n");
    printf("Name : %s\n", name);
    printf("Phone : %s\n", phone);

    return 0;
}