#include<stdio.h>

int main()
{
    int a[10], n, i;
    int largest, smallest;

    // Input size of array
    printf("Enter number of elements: ");
    scanf("%d", &n);

    // Input array elements
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    largest = a[0];
    smallest = a[0];

    // Find largest and smallest element
    for(i = 1; i < n; i++)
    {
        if(a[i] > largest)
        {
            largest = a[i];
        }

        if(a[i] < smallest)
        {
            smallest = a[i];
        }
    }

    printf("Largest element = %d\n", largest);
    printf("Smallest element = %d", smallest);

    return 0;
}