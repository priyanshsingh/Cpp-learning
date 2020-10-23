/*1. Write a C program to input

1. 1.  input marks of five subjects Physics, Chemistry, Biology, Mathematics and Computer. Calculate percentage and grade according to following:
Percentage >= 90% : Grade A
Percentage >= 80% : Grade B
Percentage >= 70% : Grade C
Percentage >= 60% : Grade D
Percentage >= 40% : Grade E
Percentage < 40% : Grade F

2. input basic salary of an employee and calculate its Gross salary according to following:
Basic Salary <= 10000 : HRA = 20%, DA = 80%
Basic Salary <= 20000 : HRA = 25%, DA = 90%
Basic Salary > 20000 : HRA = 30%, DA = 95%

3. input electricity unit charges and calculate total electricity bill according to the given condition:
For first 50 units Rs. 0.50/unit
For next 100 units Rs. 0.75/unit
For next 100 units Rs. 1.20/unit
For unit above 250 Rs. 1.50/unit
An additional surcharge of 20% is added to the bill*/

#include <stdio.h>
int main()
{
    float a, b, c, d, e;
    printf("Enter marks of subjects = ");
    scanf("%f %f %f %f %f", &a, &b, &c, &d, &e);

    float total;
    printf("Enter maximum marks in total = ");
    scanf("%f", &total);

    float per;

    per = ((a + b + c + d + e) / total) * 100.00;

    printf("Percentage is = %0.2f%", per);
    printf("\n");

    if (per >= 90)
    {
        printf("Grade A");
    }

    else if (per >= 80)
    {
        printf("Grade B");
    }

    else if (per >= 70)
    {
        printf("Grade C");
    }

    else if (per >= 60)
    {
        printf("Grade D");
    }

    else if (per >= 40)
    {
        printf("Grade E");
    }

    else
    {
        printf("Grade F");
    }

    return 0;
}