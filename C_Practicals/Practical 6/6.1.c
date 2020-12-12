// Sonali joined a social networking site to stay in touch with her friends. The signup page required her to input a name and a password.
// However, the password must be strong. The website considers a password to be strong if it satisfies the following criteria:

// Its length is at least 6.

// It contains at least one digit.

// It contains at least one lowercase English character.

// It contains at least one uppercase English character.

// It contains at least one special character. The special characters are: !@#$%^&*()-+

// She typed a random string of length n in the password field but wasnt sure if it was strong.
// Given the string she typed, can you find the minimum number of characters she must add to make her password strong?

#include <stdio.h>
#include <string.h>

int main()
{
    char password[15];
    printf("Enter a password: \n");
    gets(password);

    for (int i = 0; i < 15; i++)
    {
        if (password[i] == ' ')
        {
            printf("Remove spaces from the password!");
        }
    }

    int more_char;
    if (strlen(password) < 6)
    {
        more_char = 6 - strlen(password);
        printf("\nPassword is small, enter %d more characters!", more_char);
    }
    else if (strlen(password) == 6)
    {
        printf("\nPassword is just accurate in terms of length!", more_char);
    }
    else
    {
        printf("\nPassword length is strong!");
    }

    for (int i = 0; password[i] == ' '; i++)
    {
        printf("Remove spaces from the password!");
    }
    return 0;
}