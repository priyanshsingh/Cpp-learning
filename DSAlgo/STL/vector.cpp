#include <iostream>
#include <vector>

using namespace std;

void Display(vector<int> &v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << "    ";
    }
    cout << endl;
}
int main(){
    vector<int> vec1;
    int element, size;

    cout << "Enter the size of vector = ";
    cin >> size;
    
    for (int i = 0; i < size; i++)
    {
        cout << "Enter an element to add in this vector = ";
        cin >> element;
        vec1.push_back(element);
    }
    Display(vec1); 


    return 0;
}