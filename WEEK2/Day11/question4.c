#include<stdio.h>

//function to find factorial
long int fact(int n)
{
    int i;
    long int f = 1;

    for(i=1;i<=n;i++)
    {
        f=f*i;
    }
    return f;
}
int main()
    {
        int num;

        printf("Enter a number");
        scanf("%d", &num);

        printf("Factorial = %ld", fact(num));

        return 0;
    }


