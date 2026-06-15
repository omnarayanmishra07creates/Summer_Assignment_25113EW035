#include<stdio.h>

int main()
{
    int a[10], n, i;

    // Input size of array
    printf("Enter number of elements: ");
    scanf("%d", &n);

    // Input array elements
    for(i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }

    // Print array in reverse order
    printf("Reversed array is:\n");

    for(i=n-1; i>=0; i--)
    {
        printf("%d ", a[i]);
    }

    return 0;
}