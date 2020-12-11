#include <stdio.h>
#include <string.h>
int main()
{
    char name[20] = "Priyansh";
    char name1[10] = "Singh";
    int len;
    len = strlen(name);

    printf("\n%d", len);

    printf("\n\n%s", strrev(name));

    printf("\n\n%s", strrev(name));

    printf("\n\n%s", strlwr(name));

    printf("\n\n%s", strupr(name));

    printf("\n\n%s", strcpy(name, name1));

    printf("\n\n%d", strcmp(name, name1));

    return 0;
}