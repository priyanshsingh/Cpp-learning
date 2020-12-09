#include <stdio.h>

int main()

{

    int h, b;

    printf("Enter height of rectangle in inches = ");
    scanf("%d", &h);

    printf("Enter breadth of rectangle in inches = ");
    scanf("%d", &b);

    int per = 2 * (h + b);
    int area = h * b;

    printf("\nPerimeter is = %d", per);
    printf("\nArea is = %d", area);

    return 0;
}