#include<stdio.h>

//function to find sum 
int sum(int a,int b)
{
    return a+b;
}

int main()
{
    int num1, num2;
    printf("Enter two  number");
    scanf("%d%d", &num1, &num2);

    printf("Sum = %d", sum(num1, num2));
    return 0;
}
