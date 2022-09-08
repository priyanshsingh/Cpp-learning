#include <bits/stdc++.h>
using namespace std;

void printVec(vector<pair<int, int>> &v){
    cout << v.size() << endl << endl;
    for (int j = 0; j < v.size(); j++)
    {
        cout << v[j].first << " " << v[j].second << endl;
    }
}

int main(){
    int n;
    cin >> n;
    vector<pair<int, int>> v;
    for (int i = 0; i < n; i++)
    {
        int x, y;
        cin >> x >> y;
        v.push_back({x, y});
    }

    printVec(v);
    return 0;
}