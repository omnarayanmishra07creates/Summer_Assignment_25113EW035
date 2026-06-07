#include <stdio.h>
int main ()
{
int num,temp,rem,sum = 0;

printf("Enter a number");
scanf("%d", &num);

temp = num;

while(temp>0)
{
    rem = temp%10;
    sum = sum+(rem*rem*rem);
    temp = temp/10;
}
if(sum==num)
    {
        printf("Number is Armstong");
    }
    else
    {
        printf("Number is not Armstrong");
    }
    return 0;
}