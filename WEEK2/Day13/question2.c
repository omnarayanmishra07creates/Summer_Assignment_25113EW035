#include<stdio.h>

int main()
{
    int a[10], n, i, sum = 0;
    float avg;

    // Input size of array
    printf("Enter number of elements: ");
    scanf("%d", &n);

    // Input elements
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        sum = sum + a[i];
    }

    // Calculate average
    avg = (float)sum / n;

    printf("Sum = %d\n", sum);
    printf("Average = %.2f", avg);

    return 0;
}