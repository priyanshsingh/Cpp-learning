#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter number of elements to be in array = ";
    cin >> n;
    int LA[n];
    cout << "Enter " << n << " elements in array:\n";
    for(int i = 0; i < n; i++)
    {
        cout << "Element number " << i+1 << " = ";
        cin >> LA[i];
    }

   for(int i = 0; i < n; i++)
   {
      cout << "LA[" << i << "] = " << LA[i] <<endl;
   }
   
   return 0;
}