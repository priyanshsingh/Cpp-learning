#include <bits/stdc++.h>
using namespace std;


int main(){
    // Declaring the pair and using make_pair function to store a value in it.
    pair<int, string> p;
    p = make_pair(1, "abc");
    cout << p.first << endl << p.second << endl << endl;

    // Copying the Pair and its values (passing the value of the pair, not its reference)
    pair<int, string> p1 = p;
    p1.first = 3;
    cout << p.first << endl << p.second << endl << endl;
    
    // Copying the Pair and its values (passing the refernece of the pair)
    pair<int, string> &p2 = p;
    p2.first = 3;
    cout << p.first << endl << p.second << endl << endl;
    
    // Making a pair of two arrays and comparing its elements corresponding to each other
    pair<int, int> p_array[3];
    p_array[0]={1,2};
    p_array[1]={2,3};
    p_array[2]={3,4};
    
    swap(p_array[0], p_array[2]);

    for (int i = 0; i < 3; i++)
    {
        cout << p_array[i].first << " " << p_array[i].second << endl;
    }


    

    return 0;
}