#include <bits/stdc++.h>
using namespace std;

int main()
{
    map<int, int> m;

    m.insert({1, 2});
    m.insert({2, 3});
    m.insert({3, 4});
    m.insert({4, 5});

    map<int, int>::iterator it;
    for (it = m.begin(); it != m.end(); ++it)
    {
        cout << (*it).first << " " << (*it).second << endl;
    }

    cout << "\n********* Using Auto *********\n";
    for (auto &value : m)
    {
        cout << value.first << " " << value.second << endl;
    }

    return 0;
}