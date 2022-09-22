//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
// User function template for C++
class Solution
{
public:
    bool fascinating(int num)
    {
        int freq[10] = {0};
        string val = "" + to_string(num) + to_string(num * 2) + to_string(num * 3);
        for (int i = 0; i < val.length(); i++)
        {
            int digit = val[i] - '0';
            if (freq[digit] and digit != 0 > 0)
                return false;
            else
                freq[digit]++;
        }
        for (int i = 1; i < 10; i++)
        {
            if (freq[i] == 0)
                return false;
        }
        return true;
    }
};
//{ Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        Solution ob;
        auto ans = ob.fascinating(n);
        if (ans)
        {
            cout << "Fascinating\n";
        }
        else
        {
            cout << "Not Fascinating\n";
        }
    }
    return 0;
}
// } Driver Code Ends