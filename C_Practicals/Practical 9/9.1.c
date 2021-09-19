#include <stdio.h>
#include <string.h>

struct patient
{
    int id;
    char name[20];
    char disease[20];
    long long number;
    char blood[10];
    int date;
} pt[20];

int main()
{
    int n;
    printf("Number of Patients = ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        printf("\n********************************");
        printf("\nEnter informantion of Patient %d\n", i + 1);
        printf("\nName = ");
        scanf("%s", &pt[i].name);
        printf("Patient ID = ");
        scanf("%d", &pt[i].id);
        printf("Blood Group = ");
        scanf("%s", &pt[i].blood);
        printf("Contact Number = ");
        scanf("%lld", &pt[i].number);
        printf("Name of Disease = ");
        scanf("%s", &pt[i].disease);
        printf("Date = ");
        scanf("%d", &pt[i].date);
    }

    for (int i = 0; i < n; i++)
    {
        printf("\n++++++++++++++++++++++++++++++++++++++\n");

        printf("Patient Infirmation: \n");
        printf("\nInformantion of Patient Number %d:\n", i + 1);
        printf("Name = %s\n", pt[i].name);
        printf("Patient ID = %d\n", pt[i].id);
        printf("Blood Group = %s\n", pt[i].blood);
        printf("Contact Number =%lld\n", pt[i].number);
        printf("Disease = %s\n", pt[i].disease);
        printf("Admission Date = %d\n", pt[i].date);
    }
}