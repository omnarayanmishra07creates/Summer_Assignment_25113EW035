#include <stdio.h>
int main ()
{
int num,temp,rem,i;
int fact,sum=0;

printf("Enter a number");
scanf("%d", &num);

temp=num;

while(temp>0)
{
    rem=temp%10;
    fact = 1;

    for(i=1;i<=rem;i++)
{
    fact=fact*i;
}
sum=sum+fact;
temp=temp/10;
}
if(sum==num)
{
    printf("Number is strong");
}
else
{
printf("Number is not strong");
}
return 0;
}