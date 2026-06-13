#include<stdio.h>

int main()
{
    int a[10], n, i;
    int even = 0, odd = 0;

    // Input size of array
    printf("Enter number of elements: ");
    scanf("%d", &n);

    // Input array elements
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    // Count even and odd elements
    for(i = 0; i < n; i++)
    {
        if(a[i] % 2 == 0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }

    printf("Number of even elements = %d\n", even);
    printf("Number of odd elements = %d", odd);

    return 0;
}