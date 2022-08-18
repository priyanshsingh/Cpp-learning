#include "iostream"
using namespace std;

int main()
{
    int N;
    cin >> N;
    
    int arr[N];
    
    for(int i = 0; i<N; i++)
    {
        cin >> arr[i];
    }
    
    // UID = 20BCS5967

    int temp = 0;

    for(int i = 0; i<N; i++)
    {
        temp = temp + arr[i];
    }   
    cout << temp;
}