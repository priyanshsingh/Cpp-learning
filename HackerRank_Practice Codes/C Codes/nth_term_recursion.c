#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#define size 10000
long long dp[size];

long long find_nth_term(int n, int a, int b, int c)
{
    printf("Recursive call n = %d\n", n);
    //Base Condition
    if (dp[n] != -1)
    {
        return dp[n];
    }

    if (n == 3)
        return c;
    if (n == 2)
        return b;
    if (n == 1)
        return a;

    //Induction Step
    return dp[n] = (find_nth_term(n - 1, a, b, c) +
                    find_nth_term(n - 2, a, b, c) +
                    find_nth_term(n - 3, a, b, c));
}

/*

n --> to be made smaller in recursive calls

ret_type Fn_name(int n, ... args)
{
    // base_condition or stopping condn
    if(n == 0)
        return 0 // do something

    //induction_step / recursive_step
    return Fn_name(n - 1)
}


*/

int main()
{
    int n, a, b, c;
    memset(dp, -1, sizeof(dp));
    scanf("%d %d %d %d", &n, &a, &b, &c);
    long long ans = find_nth_term(n, a, b, c);

    printf("%lld", ans);
    return 0;
}