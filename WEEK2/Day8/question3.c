#include<stdio.h>
int main(){
int i,j;
//outer loop for rows
for(i=1;i<=5;i++)
{

    //print characters from A onwards
    for(j=0;j<i;j++)
    {
        printf("%c", 'A'+j);
    }
    printf("\n");
}
    return 0;
}