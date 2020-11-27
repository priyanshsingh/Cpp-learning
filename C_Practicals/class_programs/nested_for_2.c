#include <stdio.h>
int main()
{
    int i, t, n, m;
    printf("Enter the range to diaplay table:");
    scanf("%d%d", &m, &n);   //5 10
    for (t = m; t <= n; t++) //table number
    {
        for (i = 1; i <= 10; i++) //multiplication
        {
            printf("%d*%d=%d\n", t, i, t * i);
        }
        printf("\n\n");
    }
}