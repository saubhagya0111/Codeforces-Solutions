#include <bits/stdc++.h>
using namespace std;
bool is_odd(int n)
{
    if (n % 2 == 0)
    {
        return false;
    }
    return true;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n, flag = 0;
        cin >> n;
        if (is_odd(n) == true)
        {
            cout << "YES" << endl;
        }
        else if (n == 2 or n == 1)
        {
            cout << "NO" << endl;
        }
        else
        {
            while (n > 2)
            {
                n /= 2;
                if (is_odd(n) == true)
                {
                    cout << "YES" << endl;
                    flag = 1;
                    break;
                }
            }
            if (flag == 0)
            {
                cout << "NO" << endl;
            }
        }
    }
}
