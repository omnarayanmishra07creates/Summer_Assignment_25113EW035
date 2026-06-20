#include<stdio.h>

int main()
{
    int a[10], n, i, item;
    int low, high, mid, found = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    // Input sorted array
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter element to search: ");
    scanf("%d", &item);

    low = 0;
    high = n - 1;

    // Binary search
    while(low <= high)
    {
        mid = (low + high) / 2;

        if(a[mid] == item)
        {
            found = 1;
            break;
        }
        else if(item < a[mid])
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }

    if(found == 1)
    {
        printf("Element found at position %d", mid + 1);
    }
    else
    {
        printf("Element not found");
    }

    return 0;
}