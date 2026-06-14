#include<stdio.h>

int main()
{
    int a[10], n, i, item, found = 0;

    // Input size of array
    printf("Enter number of elements: ");
    scanf("%d", &n);

    // Input array elements
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    // Input element to search
    printf("Enter element to search: ");
    scanf("%d", &item);

    // Perform linear search
    for(i = 0; i < n; i++)
    {
        if(a[i] == item)
        {
            found = 1;
            break;
        }
    }

    if(found == 1)
    {
        printf("Element found at position %d", i + 1);
    }
    else
    {
        printf("Element not found");
    }

    return 0;
}