// C program to find out the greater
// of the two integers using terenary conditional.

#include <stdio.h>

int main()
{
    int a, b, max;
    a = 100;
    b = 15;
    max = (a > b) ? a : b;
    printf("Larger Number amongst "
           "%d and %d is %d.",
           a, b, max);

    return 0;
}