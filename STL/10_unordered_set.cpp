#include <bits/stdc++.h>
using namespace std;


int main(){
    unordered_set<string> s;
    s.insert("abc");            // Time complexity is of O(1), since the implementation is done using the hash functions.
    s.insert("xyz");
    s.insert("aas");
    s.insert("lmn");
    
    unordered_set<string> ::iterator iter;
    iter=s.begin();

    cout << "\n\nPrint using iterator\n";
    for(iter = s.begin(); iter!=s.end();++iter)
    {
        cout << *iter << endl;
    }
    cout << "\n\nPrint using auto\n";

    for(auto &value : s){
        cout << value << endl;
    }

    auto it = s.find("abc");
    cout << "Finding \"abc\" in the unordered set: \n\n";


    return 0;
}