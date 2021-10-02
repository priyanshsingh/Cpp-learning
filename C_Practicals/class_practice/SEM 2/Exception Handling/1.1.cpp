#include <iostream>
#include <exception>

using namespace std;

int main()
{
    int x = 10, y = 0, z;
    
    try{
    	if(y==0)
    		throw "Divide by zero not possible";
	    z = x/y;
    	cout << z;
	}
	catch(const char *e){
		cout << "Exception handling done..." << endl << e;
	}
    return 0;
}

