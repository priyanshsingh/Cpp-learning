#include <stdio.h>
#include <ctype.h>

int main()
{
    char ch, ch1;
    printf("Input an alphabet in uppercase = ");
    scanf("%c", &ch);

    ch1 = tolower(ch);
    printf("\nLower case of %c is %c", ch, ch1);
    return 0;
}