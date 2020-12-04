#include <stdio.h>
int main()
{
    char string1[5] = {'a', 'b', 'c', 'd', '\0'};
    char string2[10] = {"Hello"};
    char string3[] = {"Hey"};

    printf("%s\t%s\t%s", string1, string2, string3);

    return 0;
}