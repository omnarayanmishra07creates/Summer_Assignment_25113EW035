#include<stdio.h>
int main (){
int i,j;

//outer loop for rows
for(i=1;i<=5;i++)
{

    //print same number i times 
    for(j=1;j<=i;j++)
    {
        printf("%d", i);
    }
    printf("\n");
}
return 0;
}