#include <stdio.h>

void addten(int[], int);

int main()

{

    int a[5], i, s;

    printf("enter array elements:");

    for (i = 0; i < 5; i++)

        scanf("%d", &a[i]); // 1 2 3 4 5

    addten(a, 5);

    printf("after function call:");

    for (i = 0; i < 5; i++)

        printf("%d\t", a[i]);
}

void addten(int p[], int n)

{

    int i;

    for (i = 0; i < n; i++)

    {

        p[i] = p[i] + 10; //11 12 13 14 15
    }
}