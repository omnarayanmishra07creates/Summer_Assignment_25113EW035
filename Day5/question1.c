#include <stdio.h>
int main ()
{
int num,i,sum =0;

printf("Enter a number");
scanf("%d", &num);

for(i=1;i<num;i++)
{
    if(num%i==0)
    {
        sum=sum+i;
    }
}
if(sum==num)
{
    printf("Number is perfect");
}
else
{
    printf("Number is not perfect");
}
return 0;
}