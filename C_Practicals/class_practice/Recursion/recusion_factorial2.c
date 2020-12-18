#include <stdio.h>

int fact(int);

int main()

{

    int n, ans;

    printf("enter n");

    scanf("%d", &n);

    ans = fact(n);

    printf("%d", ans);
}

int fact(int n)

{

    if (n == 1)

        return 1;

    else

        return (n * fact(n - 1));
}