#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char name[15], date[25], desig[10], dept[15];
int new_salary, days, salary, reduce;
long con_num, id;

void input_data()
{
    printf("Name of Employee: ");
    scanf("%s", &name);
    printf("Employee ID: ");
    scanf("%ld", &id);
    printf("Enter number of working days: ");
    scanf("%d", &days);
    printf("Date of Joining: ");
    scanf("%s", &date);
    printf("Initial salary: ");
    scanf("%d", &salary);
    printf("Contact Number: ");
    scanf("%ld", &con_num);
    printf("Designation: ");
    scanf("%s", &desig);
    printf("Department: ");
    scanf("%s", &dept);

    printf("\nName of Employee: %s", name);
    printf("\nEmployee ID: %ld", id);
    printf("\nWorking Days: %d", days);
    printf("\nDate of Joining: %s", date);
    printf("\nSalary: %d", salary);
    printf("\nEmployee Contact Number: %ld", con_num);
    printf("\nDesignation of Employee: %s", desig);
    printf("\nDepartment: %s", dept);
}

void calc_salary()
{
    new_salary = (salary / 30) * days;
    printf("%d", new_salary);
}

int main()
{
    printf("Enter Employee Details: ");
    printf("\n**********************************************\n");
    input_data();
    printf("\n\nCalculated Monthly Salary of the Employee: ");
    calc_salary();
    printf("\nEnter amount to be deducted from salary = ");
    scanf("%d", &reduce);
    printf("\nMontly salary of %s is %d", name, new_salary - reduce);

    return 0;
}