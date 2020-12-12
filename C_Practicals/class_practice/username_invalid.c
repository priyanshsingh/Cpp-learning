#include <stdio.h>

#include <string.h>

int main()

{

    char name[5][20] = {"param", "yash", "harsh", "naman", "anmol"};

    char user[20];

    int i, flag = 0;

    int n, fact = 1;

    printf("enter user name:");

    gets(user); //HARSH

    for (i = 0; i <= 4; i++)

    {

        if (stricmp(user, name[i]) == 0)

        {

            flag = 1;

            break;
        }
    }

    if (flag == 1)

    {

        printf("\n You are an admin\nYou can access the code\n");

        printf("Enter number to calculate factorial:");

        scanf("%d", &n);

        for (i = n; i > 0; i--)

        {

            fact = fact * i;
        }

        printf("Factorial result:%d\nThank you!!!!!", fact);
    }

    if (flag == 0)

        printf("SORRY!!! YOU CAN NOT ACCESS THE CODE\nTRY NEXT TIME");
}