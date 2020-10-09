#include <stdio.h>
#include <ctype.h>

int main()

{

    int m, n, result;

    printf("Enter the postion of Sonu from top: ");

    scanf("%d", &m);

    printf("\n");

    printf("Enter the postion of Sonu from bottom: ");

    scanf(" %d", &n);

    result = m + n - 1;

    printf("How many students are there in the class : %d ", result);

    return 0;
}