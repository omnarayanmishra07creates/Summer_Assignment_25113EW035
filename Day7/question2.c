#include<stdio.h>
//function to find nth Factorial term
int fib(int n)
{
    if(n==0)
{
    return 0;
}
else if(n==1)
{
    return 1;
}
else
{
return fib(n-1)+fib(n-2);

}
}
int main()
{
int n;

printf("Enter the value of n");
scanf("%d", &n);

printf("Fibonacci term = %d", fib(n));
return 0;
}
