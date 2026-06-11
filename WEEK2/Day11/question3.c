#include<stdio.h>

//function to check prime
int prime(int n)
{
    int i;

    for(i=2;i<n;i++)
    {
        if(n%i==0)
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    int num;

    printf("Enter a number");
    scanf("%d", &num);

    if (prime(num))
    {
        printf("Number is prime");
    }
    else{
        printf("Number is not prime");

    }
    return 0;
}

