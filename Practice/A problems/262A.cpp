#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main()
{
    int n, t, c = 0, number, in = 0;
    cin >> n;
    int k;
    cin >> k;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        c = 0;
        cin >> number;
        while (number > 0)
        {
            int rem = number % 10;
            if (rem == 4 || rem == 7)
            {
                c++;
            }
            number /= 10;
        }
        if (c <= k)
        {
            in++;
        }
    }
    cout << in << endl;
    return 0;
}
