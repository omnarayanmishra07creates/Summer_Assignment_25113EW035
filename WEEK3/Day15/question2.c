#include<stdio.h>

int main()
{
    int a[10], n, i, temp;

    // Input size of array
    printf("Enter number of elements: ");
    scanf("%d", &n);

    // Input elements
    for(i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }

    // Store first element
    temp = a[0];

    // Shift elements left
    for(i=0; i<n-1; i++)
    {
        a[i] = a[i+1];
    }

    a[n-1] = temp;

    printf("Array after left rotation:\n");

    for(i=0; i<n; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}