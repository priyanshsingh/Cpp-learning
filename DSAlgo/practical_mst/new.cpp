#include <iostream>
using namespace std;

int main() {
    int T, x, y, z, d;
    cin >> T;
    while(T--)
    {
        cin >> x >> y >> z;
        int d = y-x;
        if(d<0)
        {
            cout << "no";
        }
        else if(d=0)
        {
            cout << "yes";
        }
        else if(d>0)
        {
            if((z*2) > d)
            {
                cout << "yes";
            }
            else if((z*1) > d)
            {
                cout << "yes";
            }
            else
            {
                cout << "no";
            }
            
        }
    }
	return 0;
}
