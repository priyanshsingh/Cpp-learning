#include <bits/stdc++.h>
using namespace std;

int main()
{
    pair<int, int> p[4];
    p[0] = make_pair(1, 2);
    p[1] = make_pair(3, 4);
    p[2] = make_pair(4, 5);
    p[3] = make_pair(6, 9);

    for (int i = 0; i < 4; i++)
    {
        cout << p[i].first << " " << p[i].second << endl;
    }

    return 0;
}