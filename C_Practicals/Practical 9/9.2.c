#include <stdio.h>
#include <string.h>

struct mother
{
    char name[20];
    int age;
    char work_status[20];
    int height;
} mo[20];

struct father
{
    char name[20];
    int age;
    char work_status[20];
    int height;
} fa[20];

int main()
{
    int n;
    printf("Number of Students in class = ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        printf("\n******************************************************************");
        printf("\nEnter informantion of Student %d Parents: \n", i + 1);
        printf("\nMOTHER: ");
        printf("\nName = ");
        scanf("%s", &mo[i].name);
        printf("Mother's Age = ");
        scanf("%d", &mo[i].age);
        printf("Work Status(Y/N) = ");
        scanf("%s", &mo[i].work_status);
        printf("Mother's Height(in inches) = ");
        scanf("%d", &mo[i].height);

        printf("\nFATHER: ");
        printf("\nName = ");
        scanf("%s", &fa[i].name);
        printf("Father's Age = ");
        scanf("%d", &fa[i].age);
        printf("Work Status(Y/N) = ");
        scanf("%s", &fa[i].work_status);
        printf("Father's Height(in inches) = ");
        scanf("%d", &fa[i].height);
    }

    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (*mo[i].work_status == 'y' || *mo[i].work_status == 'Y')
            count++;
        else if (*mo[i].work_status == 'n' || *mo[i].work_status == 'N')
            count = count;
        else
            printf("Enter work status as Y or N only");
    }

    printf("\n%d mother out of %d work to earn money.", count, n);

    int per_mother = (count / n) * 100;
    if (per_mother > 70)
        printf("\nWomen are job oriented !!!");
    else
        printf("\nWomen are NOT job oriented !!!");

    for (int i = 0; i < n; i++)
    {
        if (((fa[i].height) - (mo[i].height)) > 10)
            printf("\n\n%s mishmaches %s!!!", fa[i].name, mo[i].name);
    }

    int diff;

    for (int i = 0; i < n; i++)
    {
        diff = fa[i].age - mo[i].age;
    }
    float avg_diff = diff / n;
    printf("\n\n3. Average of difference in ages of Mother and Father is = %0.2f", avg_diff);
}