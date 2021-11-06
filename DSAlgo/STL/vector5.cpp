#include <iostream>
#include <vector>
using namespace std;

template <class T>
void display_Vector(vector<T> &v)
{
    cout << "Displaying this vector: \n";
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << "    ";
    }
    cout << endl;
}

int main(){
    vector<int> vec1;
    vector<char> vec2(5);
    vector<char> vec3(vec2);
    vector<int> v(6, 3);

    vec2.push_back('a');
    vec2.push_back('s');
    vec2.push_back('x');
    vec2.push_back('c');

    display_Vector(vec2);


    return 0;
}