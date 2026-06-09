#include<stdio.h>
int main()
{
int i,j;
//outer loop for rows
for(i=1;i<=5;i++)
{
    //print the same character i times
    for(j=1;j<=i;j++){
        printf("%c", 'A'+i-1);
    }
    printf("\n");
}
return 0;
}