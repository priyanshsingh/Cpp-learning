#include<iostream>
using namespace std;

void Element_at_end(int a[], int p_size, int c_size, int value){
    a[c_size] = value;
}

void Display(int a[], int size){
    for(int i = 0; i<size; i++){
        cout<< "Element " << i+1 << " = "<< a[i]<<endl;
    }
    cout<<"\n";
}


int main(){
    int a[200] = {0};
    int size, choice;
    cout<<"Enter size of array(<200): \n";
    cin>>size;
    
    if(size>199){
        return 0;
    }

    cout << "\nEnter elements in the array: \n";
    for (int i = 0; i < size; i++)
    {
        cout << "Element " << i+1 << " = ";
        cin >> a[i];
    }
    do
    {
        cout<<"\nWhat operation do you want to perform? Select option number. Enter 0 to exit."<<endl;
        cout << "1. Insert_at_end()"<<endl;
        cout << "2. Display()"<<endl;
        cin >> choice;
        switch (choice)
        {
        case 0:
            break;

        case 1:
            cout << "Insert the value of to be inserted = ";
            int value;
            cin>>value;
            Element_at_end(a, 200, size, value);
            size++;
        
        case 2:
            
            cout<<"Array after inserting element at the end of the array\n";
            Display(a, size);

        default:
            cout <<"Enter a valid choice!!!";

        }
    }while (choice != 0);

    return 0;
    
}

