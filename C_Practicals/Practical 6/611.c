#include <stdio.h>
#include <string.h>

int main()
{
    char password[10];
    printf("Enter a password: ");
    gets(password);

    int n = strlen(password);

    int i, flag = 0;
    for (i = 0; i < n; ++i)
        if (password[i] == '!' || password[i] == '@' || password[i] == '#' || password[i] == '$' || password[i] == '%' || password[i] == '^' || password[i] == '&' || password[i] == '*' || password[i] == '(' || password[i] == ')' || password[i] == '-' || password[i] == '{' || password[i] == '}' || password[i] == '[' || password[i] == ']' || password[i] == ':' || password[i] == ';' || password[i] == '"' || password[i] == '\'' || password[i] == '<' || password[i] == '>' || password[i] == '.' || password[i] == '/' || password[i] == '?' || password[i] == '~' || password[i] == '`')
        {
            printf("Password is allowed!\n");
            flag = 1;
            break;
        }
    if (flag == 0)
    {
        printf("Password is not allowed!\n");
    }

    return 0;
}