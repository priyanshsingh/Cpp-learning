#include <stdio.h>

int main()
{
    int l, m, p, q;
    printf("Enter number of Rows of Matrix 1 = ");
    scanf("%d", &l);
    printf("Enter number of Columns of Matrix 1 = ");
    scanf("%d", &m);
    printf("Enter number of Rows of Matrix 2 = ");
    scanf("%d", &p);
    printf("Enter number of Columns of Matrix 2 = ");
    scanf("%d", &q);

    int matrix1[l][m], matrix2[p][q], mult[l][q];

    printf("\nEnter %d values for a %d x %d matrix 1 = ", l * m, l, m);
    for (int i = 0; i < l; i++)

        for (int j = 0; j < m; j++)

            scanf("%d", &matrix1[i][j]);
    printf("\nEnter %d values for a %d x %d matrix 2 = ", p * q, p, q);
    for (int i = 0; i < p; i++)

        for (int j = 0; j < q; j++)

            scanf("%d", &matrix2[i][j]);

    int option;

    printf("\n1. Addition\n2. Subtraction\n3. Multiplication\n4. Transpose\n\nWhat is your option = ");

    scanf("%d", &option);

    switch (option)
    {
    case 1:
        if (l != p || m != q)

        {
            printf("Addition is not possible, since order is not same!!!");
            break;
        }

        for (int i = 0; i < l; i++)

            for (int j = 0; j < m; j++)

                matrix1[i][j] = matrix1[i][j] + matrix2[i][j];

        printf("Addition of matrix 1 and matrix 2 = \n");

        for (int i = 0; i < l; i++)

        {

            for (int j = 0; j < m; j++)

                printf("%d\t", matrix1[i][j]);

            printf("\n\n");
        }

        break;
    case 2:
        if (l != p || m != q)

        {
            printf("Subtraction is not possible, since order is not same!!!");
            break;
        }

        for (int i = 0; i < l; i++)
            for (int j = 0; j < m; j++)
                matrix1[i][j] = matrix1[i][j] - matrix2[i][j];

        printf("Subtraction of matrix 1 and matrix 2 = \n");

        for (int i = 0; i < l; i++)

        {

            for (int j = 0; j < m; j++)
            {
                printf("%d\t", matrix1[i][j]);
            }
            printf("\n\n");
        }

        break;

    case 3:
        if (m != p)
        {
            printf("Multiplication is not possible, since columns of matrix 1 are not equal to rows of matrix 2!!!");
            break;
        }
        for (int i = 0; i < l; i++)
        {
            for (int j = 0; j < q; j++)
            {
                mult[i][j] = 0;
                for (int k = 0; k < m; k++)
                {
                    mult[i][j] += matrix1[i][k] * matrix2[k][j];
                }
            }
        }
        printf("Multiplication of matrix  and matrix 2 = \n");
        for (int i = 0; i < l; i++)
        {
            for (int j = 0; j < q; j++)
            {
                printf("%d\t", mult[i][j]);
            }
            printf("\n\n");
        }

        break;
    }
    return 0;
}