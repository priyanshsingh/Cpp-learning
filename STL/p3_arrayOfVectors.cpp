#include <bits/stdc++.h>
using namespace std;

void printVector(vector<int> &v)
{
    cout << v.size() << endl
         << endl;
    for (int j = 0; j < v.size(); j++)
    {
        cout << v[j] << endl;
    }
}

int main()
{
    int N;
    cin >> N;
    vector<int> v[N];
    for (int i = 0; i < N; i++)
    {
        int n;
        cout << "Enter size of Vector = ";
        cin >> n;

        for (int j = 0; j < n; j++)
        {
            int x;
            cout << "Enter Value of Vector = ";
            cin >> x;
            v[i].push_back(x);
        }
    }

    for (int i = 0; i < N; i++)
    {
        printVector(v[i]);
    }
    return 0;
}