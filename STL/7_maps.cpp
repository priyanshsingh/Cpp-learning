// - Map is a data structure which stores data in the form of key value pairs.
// - Multi maps are not of much use in competitive coding
// - Ek data type hoda key ka, doosra hoga value ka
// - There is a mapping(link) in key and its value 
/*
    int string (unordered)   int string
    1   abc                  1   abc   
    5   cde                  3   asd
    3   asd                  5   cde

    - In an ordered map the values are sorted with respect to the key.(Eg. Red Back Trees)
    - In an unordered map the values aren't sorted
    - Map is not continous in nature, since the key value pairs are stored on random locations in th memory.
    - Hence we cannot use (it+1) in case of iterators
    - But, we can use (++it) instead.

*/

#include <bits/stdc++.h>
using namespace std;


int main(){
    map<int, string> m;
    m[1] = "abc";
    m[5] = "cde";
    m[3] = "asd";

    m.insert({4, "afg"});
    m.insert(make_pair(7, "xyz"));

    cout << "\nIterating throughout the map! \n\n";
    cout << "1. Traditional, iterator with loop method: \n\n";
    map<int , string> ::iterator it;
    for(it = m.begin(); it!=m.end(); ++it)
    {
        cout << (*it).first << " " << (*it).second << endl;
    }
    cout << "\n2. Using auto and the range loop: \n\n";
    for(auto &value : m)
    {
        cout << value.first << "  ->  " << value.second << endl;
    }
    

    return 0;
}