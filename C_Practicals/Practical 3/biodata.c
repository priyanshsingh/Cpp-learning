#include <stdio.h>

int main()
{
    char name[20];
    int age;
    long long cno;
    float per;

    printf("Enter Name = ");
    scanf("%[^\n]%*c", name);

    printf("Enter Age = ");
    scanf("%d", &age);

    printf("Enter Contact Number = ");
    scanf("%lld", &cno);

    printf("Enter Percentage = ");
    scanf("%f", &per);

    printf("\n************************");
    printf("Thank you. Your data is saved in our system.\n");
    printf("\nName : %s", name);
    printf("\nAge : %d", age);
    printf("\nContact No. : %lld", cno);
    printf("\nPercentage : %0.2f", per);
    printf("\n************************\n");

    return 0;
}
