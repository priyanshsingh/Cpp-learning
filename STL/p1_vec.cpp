#include <bits/stdc++.h>
using namespace std;

void vector_print(vector<int> &v){
    cout << "Size of Vector = " << v.size();
    for (int i = 0; i < v.size(); i++)
    {
        v.pop_back();
    }
    
}

int main(){
    vector<int> v;
    int n;
    cout << "Enter Size of Vector = ";
    cin >> n;    

    for (int i = 0; i < v.size(); i++)
    {
        int x;
        cout << "Enter Value to be stored in Vector = ";
        cin >> x;
        v.push_back(x);
    }
    
    vector_print(v);


    return 0;
}