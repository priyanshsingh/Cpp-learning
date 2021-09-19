// C++ program to print the
// spiral pattern
#include <stdio.h>

// Function to print the pattern
void pattern(int value)
{
    // Declare a square matrix
    int row = 2 * value - 1;
    int column = 2 * value - 1;
    int arr[row][column];

    int i, j, k;

    for (k = 0; k < value; k++)
    {

        // store the first row
        // from 1st column to last column
        j = k;
        while (j < column - k)
        {
            arr[k][j] = value - k;
            j++;
        }

        // store the last column
        // from top to bottom
        i = k + 1;
        while (i < row - k)
        {
            arr[i][row - 1 - k] = value - k;
            i++;
        }

        // store the last row
        // from last column to 1st column
        j = column - k - 2;
        while (j >= k)
        {
            arr[column - k - 1][j] = value - k;
            j--;
        }

        // store the first column
        // from bottom to top
        i = row - k - 2;
        while (i > k)
        {
            arr[i][k] = value - k;
            i--;
        }
    }

    // print the pattern
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < column; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}

// Driver code
int main()
{
    int n;
    scanf("%d", &n);
    pattern(n);

    return 0;
}
