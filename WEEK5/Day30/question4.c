#include <stdio.h>

void addStudent(int roll[], char name[][30], float marks[], int n)
{
    int i;

    for(i = 0; i < n; i++)
    {
        printf("\nEnter Roll No: ");
        scanf("%d", &roll[i]);

        printf("Enter Name: ");
        scanf(" %[^\n]", name[i]);

        printf("Enter Marks: ");
        scanf("%f", &marks[i]);
    }
}

void displayStudent(int roll[], char name[][30], float marks[], int n)
{
    int i;

    printf("\nStudent Records\n");
    printf("Roll\tName\t\tMarks\n");

    for(i = 0; i < n; i++)
    {
        printf("%d\t%s\t\t%.2f\n", roll[i], name[i], marks[i]);
    }
}

int main()
{
    int roll[5], n;
    char name[5][30];
    float marks[5];

    printf("Enter Number of Students: ");
    scanf("%d", &n);

    // Function call to add students
    addStudent(roll, name, marks, n);

    // Function call to display students
    displayStudent(roll, name, marks, n);

    return 0;
}