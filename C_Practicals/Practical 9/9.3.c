#include <stdio.h>
#include <string.h>

struct student
{
    char name[20];
    int mst1;
    int mst2;
    int attended;
    int delivered;

} st[20];

int main()
{
    int n;
    printf("Number of Students in class = ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        printf("\n******************************************************************");
        printf("\nEnter informantion of Student Number %d:", i + 1);
        printf("\n");
        printf("\nName = ");
        scanf("%s", &st[i].name);
        printf("Percentage in MST 1 = ");
        scanf("%d", &st[i].mst1);
        printf("Percentage in MST 2 = ");
        scanf("%d", &st[i].mst2);
        printf("Lecture Delivered = ");
        scanf("%d", &st[i].delivered);
        printf("Lecture Attended = ");
        scanf("%d", &st[i].attended);
    }

    printf("\n******************************************************************");
    printf("\nNames of DETAINED students:\n");

    for (int i = 0; i < n; i++)
    {
        int avg = (st[i].mst1 + st[i].mst2) / 2;
        float att = ((float)st[i].attended / (float)st[i].delivered) * 100;

        if (avg < 80)
        {
            if (att < 75)
                printf("%s", st[i].name);
        }
    }
}
