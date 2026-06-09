#include<stdio.h>
int main ()
{
int i,j;
//outer loop for rows
for(i=5;i>=1;i--)
{
//print number from 1 to i
for(j=1;j<=i;j++)
{
    printf("%d", j);
}
printf("\n");
}
return 0;
}

