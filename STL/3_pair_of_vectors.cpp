#include <bits/stdc++.h>
using namespace std;

void printVec(vector<pair<int, int>> &v)
{
    cout << "Size of vector = " << v.size() << endl << endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout << i+1 << " : " << v[i].first << " " << v[i].second << endl;
    }
}


int main(){
    vector<pair<int, int>> v;
    printVec(v);

    int n;
    cout << "Enter vector size = ";
    cin >> n;

    for (int i = 0; i < n; ++i)
    {
        int x,y;
        cin >> x >> y;
        v.push_back({x,y});
    }
    printVec(v);

    int a, b;
    cout << "Enter data for a new pair = ";
    cin >> a >> b;

    v.push_back({a,b});

    printVec(v);

    return 0;
}