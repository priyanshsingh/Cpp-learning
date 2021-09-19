#include <stdio.h>

int main()

{

    int a[3][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}};

    // pointer ptr pointing at array a

    int *ptr = a; // or *ptr=&a[0][0];

    // other variables

    int i, j;

    // print the elements of the array num via pointer ptr

    for (i = 0; i < 3; i++)

    {

        for (j = 0; j < 4; j++)

        {

            printf("%d ", *(*(a + i) + j));
        }
    }
}
