#include <iostream>
#include <vector>
using namespace std;

void display_Vector(vector<int> &v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << "    ";
    }
    cout << endl;
}

int main(){
    vector<int> myVector;
    int size, element;
    cout << "Enter the size of your vector = ";
    cin >> size;

    for (int i = 0; i < size; i++)
    {
        cout << "Enter the value of element " << i+1 << " for your vector = ";
        cin >> element;
        myVector.push_back(element);
    }
    
    display_Vector(myVector);
    vector<int> :: iterator iter = myVector.begin();
    myVector.insert(iter+1, 56);
    display_Vector(myVector);


    return 0;
}