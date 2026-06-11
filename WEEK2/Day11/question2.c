#include<stdio.h>
//function to find maximum number
int maximum(int a, int b)
{
if(a>b)
{
    return a;
}
else
{
    return b;
}
}
int main ()
{
    int num1,num2;
    printf("Enter two number");
    scanf("%d%d", &num1, &num2);

    printf("Maximum = %d", maximum(num1, num2));
    return 0;
    
}