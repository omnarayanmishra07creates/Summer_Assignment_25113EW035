#include<stdio.h>
int main()
{
int n,temp,r,rev = 0;

printf("Enter a number");
scanf("%d", &n);

temp = n;
while(n!=0)
{
r = n%10;
rev=rev*10+r;
n = n/10;
}

if(temp == rev)
printf("Pallindrome number");
else
printf("NOT Pallindrome number");
return 0;

}