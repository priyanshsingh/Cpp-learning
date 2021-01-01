#include <iostream>
#include <cstdio>
using namespace std;

int max_of_four(int a, int b, int c, int d)
{
    int m1, m2;
    if (a > b)
    {
        m1 = a;
    }
    else
    {
        m1 = b;
    }
    if (c > d)
    {
        m2 = c;
    }
    else
    {
        m2 = d;
    }
    if (m1 > m2)
        return m1;
    else
        return m2;
}
int main()
{
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);

    return 0;
}