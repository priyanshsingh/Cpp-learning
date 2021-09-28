#include <iostream>
using namespace std;

int main() {
    int N, a, b, c, temp;
    cin >> N;
    while(N--){
        cin >> a;
        cin >> b;
        cin >> c;
        if(a >= b && a >= c)
        {
            if(b >= c)
            {
                cout << b <<endl;
            }
            else
            {
                cout << c <<endl;
            }
        }
        else if(b >= a && b >= c)
        {
            if(a >= c)
            {
                cout << a <<endl;
            }
            else
            {
                cout << c <<endl;
            }
        }
    
        else if(a >= b)
        {
                cout << a <<endl;
        }        
        else
        {
                cout << b <<endl;
        }

    }
	return 0;
}
