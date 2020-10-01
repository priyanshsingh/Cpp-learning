#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a;
    vector<int> v;
    cout << "Enter a Number = ";
    cin >> a;

    while (a >= 1)
    {
        v.push_back(a % 2);
        a = a / 2;
    }
    reverse(v.begin(), v.end());
    int size = v.size();
    for (int i = 0; i < size; i++)
    {
        cout << v[i];
    }

    return 0;
}