#include<stdio.h>
int main (){

int i,j;

//outer loop for rows
for(i=5;i>=1;i--)
{
//inner loop for printing stars
for(j=1;j<=i;j++)
{
    printf("*");

}
printf("\n");
}
return 0;
}