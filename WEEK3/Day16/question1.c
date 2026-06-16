#include<stdio.h>

int main()
{
    int a[10], n, i;
    int sum = 0, total, missing;

    // Input number of elements
    printf("Enter number of elements: ");
    scanf("%d", &n);

    // Input array elements
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        sum = sum + a[i];
    }

    // Sum of numbers from 1 to n+1
    total = (n + 1) * (n + 2) / 2;

    missing = total - sum;

    printf("Missing number = %d", missing);

    return 0;
}