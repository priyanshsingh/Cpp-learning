#include <bits/stdc++.h>
using namespace std;


int main(){
    map<int, string> m;
    m.insert({1, "abc"});
    m.insert({2, "abs"});
    m.insert({5, "ads"});
    m.insert({8, "xya"});
    m.insert({9, "xyb"});
    m.insert({7, "sad"});

    for(auto item : m)
    {
        cout << item.first << " -> " << item.second << endl;
    }

    return 0;
}