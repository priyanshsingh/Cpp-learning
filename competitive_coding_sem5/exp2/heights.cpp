#include <iostream>
#include <stack>

using namespace std;

int main()
{
    int sum1 = 0;
    int sum2 = 0;

    stack<int> s1;
    stack<int> s2;
    s1.push(1);
    s1.push(1);
    s1.push(2);
    s1.push(1);


    s2.push(1);
    s2.push(2);
    s2.push(1);

    int arr1[s1.size()];
    int arr2[s2.size()];

    for (int i = (s1.size() - 1); i >= 0; i--)
    {
        
    }
    cout << "Height of Stack 1 = " << sum1 << endl;

    for (int i = (s2.size() - 1); i >= 0; i--)
    {
        sum2 = sum2 + s2.top();
        s2.pop();
    }
    cout << "Height of Stack 2 = " << sum2 << endl;
    

    int temp = 0;
    // if (sum1 > sum2)
    // {
    //     temp = sum1;
    //     cout << "Height of Stack 1 is Greater!";
    //     for (int i = (s1.size() - 1); i >= 0; i--)
    //     {
    //         while (sum1!=sum2)
    //         {
    //             s1.pop();
    //         }
    //     }
        
    // }
    // else if (sum1 < sum2)
    // {
    //     temp = sum2;
    //     cout << "Height of Stack 2 is Greater!";
    // }
    // else
    // {
    //     cout << "Heights are already same!";
    // }

    return 0;
}