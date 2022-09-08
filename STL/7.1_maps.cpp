#include <bits/stdc++.h>
using namespace std;

// Time complexity of accessing the elements from a map is also O(log(n))
void printMap(map<int, string> &m)
{
    cout << "Size = " << m.size() << endl << endl;
    for(auto &item : m)
    {
        cout << item.first << " ===> " << item.second << endl;
    }
}

int main(){

    // If the size of keys is variable the time complexity of insertion in maps increases.
    // Example for the same : 
    // maps<string, string> m1;
    // m1["abcd"] = "abcdef";
    // The time complexity becomes => s.size()*log(n)

    map<int , string> m;
    m.insert({1, "a"});
    m.insert({10, "j"});
    m.insert({3, "c"});
    m.insert({2, "b"});
    m.insert({26, "z"});
    m[26] = "avb";

    // The insertion in a map take the time complexity of O(log(n))
    // If no value is passed to the map, i.e. we just declare the key and not the value, this also takes log(n) time
    // No key can be repeated, which means all the keys are uniques, i.e. each key value pair in the map is unique

    printMap(m);

    // The find function of the maps, is used to check whether the key of any element matches with the passed parameter
    // This function returns an iterator, with the help of auto keyword we can initialise an iterator and store th value of 
    // the returned key value pair in that iterator's pointer.
    // Time complexity of th find function is also O(log(n))
    
    cout << "\nUsing the find() function of Maps: \n";

    auto it = m.find(10);
    if(it == m.end())
        cout << "No value found";
    else
        cout << (*it).first << " ---> " << (*it).second << endl;

    // The erase function of the maps container is used to erase a key of an iterator pointing to any key.
    // Time complexity of this function is also O(log(n))
    cout << "\nUsing the erase() function of Maps: \n";
    m.erase(2);
    printMap(m);

    // clear() function of the maps is used to clear out the whole container.

    m.clear();
    printMap(m);

    return 0;
}