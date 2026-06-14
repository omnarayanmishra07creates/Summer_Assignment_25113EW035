#include<stdio.h>

int main()
{
    int a[10], n, i, item, count = 0;

    // Input size of array
    printf("Enter number of elements: ");
    scanf("%d", &n);

    // Input array elements
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    // Input element whose frequency is to be found
    printf("Enter element: ");
    scanf("%d", &item);

    // Count frequency
    for(i = 0; i < n; i++)
    {
        if(a[i] == item)
        {
            count++;
        }
    }

    printf("Frequency of %d = %d", item, count);

    return 0;
}