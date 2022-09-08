#include <bits/stdc++.h>
using namespace std;


int main(){
    vector<int> v = {1,2,3,4,5,6,7};
    cout << "Print the vector using for loop(simple way) : \n"; 
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << endl;
    }
    
    cout << "Print the vector using iterators: \n"; 
    vector<int> ::iterator it = v.begin();
    for(it = v.begin(); it!=v.end(); ++it)
    {
        cout << (*it) << endl;
    }
    
    cout << "Print the vector range based loop: \n";
    // This method copies the container's elements and then prints them. No pass by reference is followed! 
    for(int value : v)
    {
        cout << value << endl;
    }

    cout << "Print the vector range based loop but now, reference is passed: \n";
    // When referencing is done the actual elements of the container's get changed 
    
    for(int &value : v)
    {
        value++;
    }
    
    for(int &value : v)
    {
        cout << value << endl;
    }

    // Creating a vector pair and printing it!

    vector<pair<int, int>> vec = {{1,2},{3,4}};

    cout << "Vector of pairs using traditional loops: \n";
    for (int i = 0; i < vec.size(); i++)
    {
        cout << vec[i].first << " " << vec[i].second << endl;
    }
    
    cout << "Vector of pairs using range loops: \n";
    for(pair<int, int> &value : vec)
    {
        value.first++;
        value.second++;
    }
    for(pair<int, int> &value : vec)
    {
        cout << value.first << " " << value.second << endl;
    }

    // Using the auto keyword for prining the containers 
    // Auto keyword automatically/dynamically recognizes the data type of the value initialized using it.
    // Eg. auto a = 1 -> a is int; auto b = 1.0 -> b is float
    // auto it = vector.begin() -> determines that it is a variable that is being used as an iterator.

    for(auto iter = v.begin(); iter != v.end(); ++iter)
    {
        cout << (*iter) << " ";
    } 
    cout << endl;
    for(auto &item : vec)
    {
        cout << item.first << " ---- " << item.second << endl;
    }

    return 0;
}