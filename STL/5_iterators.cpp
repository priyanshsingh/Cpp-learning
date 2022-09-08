// Iterators are just like pointers which point the elements of Containers
// and help us in accessing the elements.

// Iterator pointing the first element of the container is .begin() and 
// the one which points the last element is .end() -> points the position of next to last vector/container.

#include <bits/stdc++.h>
using namespace std;


int main(){
    vector<int> v = {1,2,3,4,5,6,7};
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << "    ";
    }
    
    // syntax of iterators is:

    vector<int> ::iterator it = v.begin();
    cout << endl << *it << endl;
    cout << *(it+1) << endl;
    cout << "Print using iterators: \n";

    // it++ -> next iterator
    // it+1 -> next location (incasse of vectors it+1 is same as it++ coz next locationi of the iterator is adjacent 
    // to the previous iterator, but in case of Maps, where the location of next element is somewhre around the memory
    // the it+1 command is an invalid operation).
    for (it = v.begin(); it != v.end(); ++it)
    {
        cout << *it << endl;
    }

    // Access pairs of vectors using iterators: 
    vector<pair<int, int>> vector_pair = {{1,2},{2,3},{3,4},{4,5}};
    vector<pair<int, int>> ::iterator it1;
    
    for(it1 = vector_pair.begin(); it1 != vector_pair.end(); ++it1){
        cout << (*it1).first << " " << (*it1).second << endl;
    }
    
    cout << "Printed using different syntax : \n";  
    for(it1 = vector_pair.begin(); it1 != vector_pair.end(); ++it1){
        cout << (it1->first) << " " << (it1->second) << endl;
    }
    

    return 0;
}