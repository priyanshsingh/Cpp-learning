#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x;
    cin >> x;
    int a, b;
    if (x / 100 >= 1)
    {
        cout << "3 or more digit\n";
        a = x * 2;
        b = x * 3;
        string num1 = to_string(a);
        string num2 = to_string(b);
        string num = to_string(x);
        string res = num + num1 + num2;

        int res_num = stoi(res);
        cout << res_num;

        bool found = true;
        for (char c = '1'; c <= '9'; c++)
        {
            int count = 0;
            for (int i = 0; i < res.size(); i++)
            {
                char ch = res.at(i);
                if (ch == c)
                    count++;
            }
            if (count > 1 || count == 0)
            {
                found = false;
                break;
            }
        }
        if (found)
            cout << "True";
            // return true;
        else
            cout << "False";
            // return false;
    }
    else
        cout << "less than 3 digit";
    return 0;
}