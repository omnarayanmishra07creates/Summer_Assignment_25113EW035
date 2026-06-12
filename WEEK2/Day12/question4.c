#include<stdio.h>

// Function to check perfect number
int perfect(int n)
{
    int i, sum = 0;

    for(i = 1; i < n; i++)
    {
        if(n % i == 0)
        {
            sum = sum + i;
        }
    }

    if(sum == n)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if(perfect(num))
    {
        printf("Number is Perfect");
    }
    else
    {
        printf("Number is not Perfect");
    }

    return 0;
}