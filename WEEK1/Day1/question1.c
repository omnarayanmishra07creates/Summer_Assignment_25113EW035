#include<stdio.h>
int main (){

    int n, sum;
    printf("enter a number");
    scanf("%d", &n);

    sum= n*(n + 1)/2;

printf("The sum of first %d natural numbers = %d\n", n, sum);
return 0;

}