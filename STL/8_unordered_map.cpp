#include <bits/stdc++.h>
using namespace std;

void printUnordered_Map(unordered_map <int, string> &m){
    cout << "Size of unordered map is = " << m.size() << endl;
    for(auto &value : m){
        cout << value.first << " " << value.second << endl;
    }
}

void printMap(map <int, string> &m1){
    cout << "Size of map is = " << m1.size() << endl;
    for(auto &value : m1){
        cout << value.first << " " << value.second << endl;
    }
}

int main(){

    // 1. Inbuilt Implementation : Unordered maps are implemented using inbuild hash tables unlike maps which used red-blakc trees for
    //    their implementation

    // 2. Time Complexity : As we know that the time comlexity of insertion and accessing in maps is O(log(n)), but in case of unordered
    //    maps the time complexity for the same processes if O(1)(this is the average time complexity, if in the hash tables the number of
    //    collisions increase, the time complexity will also increase).
    //    The time complexiy of find and erase functions in case of unordered maps is O(1)


    // 3. Valid key data types : Various data types cannot be used in case of unordered maps. This is due to the inbuild implementation
    //    unordered maps is done using hash table. The hash function of various data types is not defined for example, pairs etc.
    //    So you cannot make an unordered map of <pait<int, int>, string> data type, this will give you compile time error.
    //    All the prmitive data types allow you to make unordered maps for eg. int, char, string, long long, etc.
    //    Only those data type which can be compared during the time of inbuild implementation, can be used in unordered maps 
    cout << "\n********** UNORDERED MAP **********\n\n";
    unordered_map<int , string> m;
    m[8] = {"abc"};
    m[2] = {"xyz"};
    m[4] = {"lmn"};
    m[3] = {"pqr"};
    m[1] = {"stu"};
    printUnordered_Map(m);

    cout << "Find function in Unordered maps (time complexity: O(1))" << endl;
    auto it = m.find(4);
    cout << (*it).first << " " << (*it).second << endl;

    if(it!=m.end())
        m.erase(it);

    cout << "\nAfter erasing the found value the modified map is printed below: \n";
    printUnordered_Map(m);
    

    cout << "\n********** ORDERED MAP **********\n\n";
    map<int , string> m1;
    m1[8] = {"abc"};
    m1[2] = {"xyz"};
    m1[4] = {"lmn"};
    m1[3] = {"pqr"};
    m1[1] = {"stu"};

    printMap(m1);

    return 0;
}