#include <bits/stdc++.h>
using namespace std;

/*
Given n strings and Q queries.
In each query you are given a string
Print the frequency of that string.

N <= 10^6
|S| <= 100
Q <= 10^6
*/

int main(){
    unordered_map <string, int> m;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        m[s]++;
    }

    int q;
    cin >> q;
    while(q--){
        string s;
        cin >> s;
        cout << m[s] << endl;
    }
    return 0;
}