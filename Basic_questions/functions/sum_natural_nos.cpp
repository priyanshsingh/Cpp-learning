#include <iostream>
using namespace std;

int sum(int n)
{
    int answer = 0;
    for (int i = 0; i <= n; i++)
    {
        answer += i;
    }
    return answer;
}

int sum1(int n)
{
    int answer = (n * (n + 1)) / 2;

    return answer;
}

int main()
{
    int n;
    cin >> n;

    cout << sum1(n) << endl;

    return 0;
}