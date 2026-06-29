#include <stdio.h>

int main()
{
    int arr[100], n, i, choice, sum = 0;

    // Input array
    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    // Menu
    printf("\n1. Display Array");
    printf("\n2. Sum of Array");
    printf("\nEnter choice: ");
    scanf("%d", &choice);

    switch(choice)
    {
        case 1:
            printf("Array: ");
            for(i = 0; i < n; i++)
                printf("%d ", arr[i]);
            break;

        case 2:
            for(i = 0; i < n; i++)
                sum += arr[i];
            printf("Sum = %d", sum);
            break;

        default:
            printf("Invalid Choice!");
    }

    return 0;
}