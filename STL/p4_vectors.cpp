#include <bits/stdc++.h>
using namespace std;

void printVec(vector<int> &vec)
{
    cout << "The vector is: \n";
    for (int i = 0; i < vec.size(); i++)
    {
        cout << vec[i] << " --- ";
    }
    
}

void sizeOfVec(vector<int> &vec)
{
    cout << "Size of vector is = " << vec.size() << endl;
}

void addElement(vector<int> &vec)
{
    int a;
    cout << "Enter element that is to be added to the vectors = ";
    cin >> a;
    vec.push_back(a);
}

int main(){
    vector<int> vec;
    int n;
    cout << "Enter size of vector = ";
    cin >> n;
    cout << "Enter values for the vector = ";

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        vec.push_back(x);
    }
    int choice;
    
    do
    {
        cout << "\n\n**************** Welcome to the VECTOR World ****************n\n";
        cout << "1. Print Vector\n";
        cout << "2. Size of Vector\n";
        cout << "3. Add element in vector\n";
        cout << "4. Clear Screen\n";
        cout << "0. Exit the program\n";
        cout << "Enter your choice from 0-1. Enter 0 to exit!\n";
        cin >> choice;
        
        switch (choice)
        {

        case 0:
            break;

        case 1:
            printVec(vec);
            break;
        
        case 2:
            sizeOfVec(vec);
            break;
        
        case 3:
            addElement(vec);
            break;
        
        case 4:
            system("cls");
            break;
        
        default:
            cout << "Enter choice correctly!\n";
            break;
        }

    } while (choice!=0);
    

    return 0;
}