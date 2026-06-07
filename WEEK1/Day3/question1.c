#include<stdio.h>
int main(){
int num,i,flag = 0;

printf("Enter a number");
scanf("%d", &num);

if(num<=1)
{
    flag = 1;
}
for(i=2;i<num;i++)
{
if(num%i==0)
{
    flag = 1;
    break;
}
}
if(flag==0)
{
printf("Number is prime");
}
else
{
printf("Number is not prime");
}
return 0;
}