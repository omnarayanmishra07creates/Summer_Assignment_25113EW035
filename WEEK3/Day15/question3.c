#include<stdio.h>

int main()
{
    int a[10], n, i, temp;

    // Input size of array
    printf("Enter number of elements: ");
    scanf("%d", &n);

    // Input array elements
    for(i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }

    // Store last element
    temp = a[n-1];

    // Shift elements right
    for(i=n-1; i>0; i--)
    {
        a[i] = a[i-1];
    }

    a[0] = temp;

    printf("Array after right rotation:\n");

    for(i=0; i<n; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}