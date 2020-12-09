#include <stdio.h>
using namespace std;

int main()
{
    int m, n;

    printf("Enter number of rows for matrix = ");
    scanf("%d", &m);
    printf("Enter number of columns for matrix = ");
    scanf("%d", &n);

    int matrix1[m][n];
    printf("Enter a matrix 1 of order %d and %d = ", m, n);

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &matrix1[i][j]);
        }
    }

    int matrix2[m][n];
    printf("Enter a matrix 1 of order %d and %d = ", m, n);

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &matrix2[i][j]);
        }
    }

    printf("Added Matrix: \n");

    int res[m][n];

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            {
                res[i][j] = matrix1[i][j] + matrix2[i][j];
            }

            for (int i = 0; i < m; i++)
            {
                for (int j = 0; j < n; j++)
                {
                    printf("%d ", res[i][j]);
                }
                printf("\n");
            }

            return 0;
        }
    }
}