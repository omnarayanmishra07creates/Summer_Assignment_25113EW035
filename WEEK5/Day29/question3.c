#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    int choice;

    // Input string
    printf("Enter a string: ");
    scanf(" %[^\n]", str);

    // Menu
    printf("\n1. Find Length");
    printf("\n2. Reverse String");
    printf("\nEnter Choice: ");
    scanf("%d", &choice);

    switch(choice)
    {
        case 1:
            printf("Length = %d", strlen(str));
            break;

        case 2:
            strrev(str);
            printf("Reversed String = %s", str);
            break;

        default:
            printf("Invalid Choice!");
    }

    return 0;
}