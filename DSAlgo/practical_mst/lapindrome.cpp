#include <iostream>
#include <string.h>
using namespace std;

int main() {
    int T;
    cin >> T;

    while(T--)
    {
        string a;
        cin >> a;
        int size = a.length();
        int check = 0;

        if (size%2 == 0)
        {
            int size1 = size /2;
            char a1[size1];
            char a2[size1];
            for (int i = 0; i < size1; i++)
            {
                a1[i] = a[i];
            }
            for (int i = size; i >= size1; i--)
            {
                a2[i] = a[i];
            }
            for (int i = 0, j = size1; i < size1, j < size; i++, j++)
            {
                if (a1[i] == a2[j])
                {
                    check = 1;
                }
                else
                {
                    check = 0;
                }
            }
            if (check == 1)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
            
        }
        else 
        {
            int size1 = size/2;
            char a1[size1];
            char a2[size1];
            for (int i = 0; i < size1; i++)
            {
                a1[i] = a[i];
            }
            for (int i = size; i > size1; i--)
            {
                a2[i] = a[i];
            }
            for (int i = 0, j = size1+1; i < size1, j < size; i++, j++)
            {
                if (a1[i] == a2[j])
                {
                    check = 1;
                }
                else
                {
                    check = 0;
                }
            }
            
            if (check == 1)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
            
        }
        
    }
	return 0;
}
