#include <stdio.h>

int main()
{
    int id[3], i;
    char name[3][30];
    float salary[3];

    // Input employee details
    for(i = 0; i < 3; i++)
    {
        printf("\nEnter Employee ID: ");
        scanf("%d", &id[i]);

        printf("Enter Employee Name: ");
        scanf(" %[^\n]", name[i]);

        printf("Enter Salary: ");
        scanf("%f", &salary[i]);
    }

    // Display employee details
    printf("\nEmployee Details\n");

    for(i = 0; i < 3; i++)
    {
        printf("\nID : %d", id[i]);
        printf("\nName : %s", name[i]);
        printf("\nSalary : %.2f\n", salary[i]);
    }

    return 0;
}