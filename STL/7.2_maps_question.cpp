/*
    Given N strings, print the value of unique strings in lexiographical
    order with their frequency.
    N <= 10^5
    |S| <= 100

    input :

    8
    abc
    def
    abc
    ghj
    jkl
    ghj
    ghj
    abc
*/

#include <bits/stdc++.h>
using namespace std;


int main(){
    map<string, int> m; // string is key since it is input, int is freq that is to be printed
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i)
    {
        string s;
        cin >> s;
        m[s]++;
    }
    
    for(auto pr : m)
    {
        cout << pr.first << " " << pr.second << endl;
    }


    return 0;
}