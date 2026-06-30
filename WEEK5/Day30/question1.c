#include <stdio.h>

int main()
{
    int roll[5], i;
    char name[5][30];
    float marks[5];

    // Input details of 5 students
    for(i = 0; i < 5; i++)
    {
        printf("\nEnter Roll No: ");
        scanf("%d", &roll[i]);

        printf("Enter Name: ");
        scanf(" %[^\n]", name[i]);

        printf("Enter Marks: ");
        scanf("%f", &marks[i]);
    }

    // Display all records
    printf("\n\nStudent Records\n");
    printf("Roll\tName\t\tMarks\n");

    for(i = 0; i < 5; i++)
    {
        printf("%d\t%s\t\t%.2f\n", roll[i], name[i], marks[i]);
    }

    return 0;
}