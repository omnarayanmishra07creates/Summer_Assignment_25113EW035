#include<stdio.h>

int main()
{
    int a[10], n, i, j, sum;
    int found = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    // Input array elements
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter required sum: ");
    scanf("%d", &sum);

    // Find pair having given sum
    for(i = 0; i < n; i++)
    {
        for(j = i + 1; j < n; j++)
        {
            if(a[i] + a[j] == sum)
            {
                printf("Pair found: %d and %d", a[i], a[j]);
                found = 1;
                break;
            }
        }

        if(found == 1)
        {
            break;
        }
    }

    if(found == 0)
    {
        printf("No pair found");
    }

    return 0;
}