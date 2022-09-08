#include <bits/stdc++.h>
using namespace std;

void printVector(vector<int> v){

    // v.size() function has the time complexity of O(1), so this function can be used for better time constrained questions
    cout << "Size of vector = " << v.size() << endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
}

void printStringVector(vector<string> v_string){

    // v.size() function has the time complexity of O(1), so this function can be used for better time constrained questions
    cout << "Size of vector = " << v_string.size() << endl;
    for (int i = 0; i < v_string.size(); i++)
    {
        cout<<v_string[i]<<" ";
    }
    cout<<endl;
}

int main(){
    // vector<pair<int, string>> v1;  -- Declaring a vector(dynamic array) of a pair containing int and string together

    vector<int> v;
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
        // The following line of code shows that the vector is dynamic in nature
        printVector(v);
    }
    cout<<endl;
    // declaring a vector of a fixed size...(,5 means that the vector is initialized with all the vales as 5)
    vector<int> v1(10, 5);
    v1.push_back(100);

    // pop_back function of the vector sequential container of the STL is of O(1) time complexity!!!
    v1.pop_back();

    // Copying a vector from one to another, this cannot be done using array!
    // The time complexity of copyingone vector to another is O(n), don't get confused by the = sign!!!
    vector<int> v2 = v1;
    v2.push_back(99);

    // Declaring a string data type vector!
    vector<string> v_string;
    int n1;
    cin >> n1;

    for (int i = 0; i < n1; i++)
    {
        string y;
        cin>>y;
        v_string.push_back(y);
    }
    

    printVector(v);
    printVector(v1);
    printVector(v2);
    printStringVector(v_string);




    return 0;
}