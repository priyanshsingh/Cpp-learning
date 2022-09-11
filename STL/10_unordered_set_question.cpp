/*
    Given N strings and Q queries, in each query you are given a string.
    Print yes if string is present else print no.

    N <= 10^6
    Q <= 10^6
    |S| <= 100
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    unordered_set<string> s;
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i)
    {
        string str;
        cin >> str;
        s.insert(str);
    }
    int q;
    cin >> q;
    while (q--)
    {
        string str;
        cin >> str;
        if (s.find(str) == s.end())
            cout << "\nno";
        else
            cout << "\nyes";
    }

    return 0;
}