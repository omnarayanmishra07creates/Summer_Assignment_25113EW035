#include<stdio.h>

int main()
{
    int a[10], n, i, j;
    int count, maxCount = 0, element;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    // Input array elements
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    // Find element having maximum frequency
    for(i = 0; i < n; i++)
    {
        count = 1;

        for(j = i + 1; j < n; j++)
        {
            if(a[i] == a[j])
            {
                count++;
            }
        }

        if(count > maxCount)
        {
            maxCount = count;
            element = a[i];
        }
    }

    printf("Element with maximum frequency = %d", element);

    return 0;
}