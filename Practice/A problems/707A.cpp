#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main()
{
    int m, n;
    cin >> m >> n;
    ll counter = 0;
    char a[m][n];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (a[i][j] == 'B' || a[i][j] == 'W' || a[i][j] == 'G')
            {
                counter++;
            }
        }
    }
    if (counter == (m * n))
    {
        cout << "#Black&White\n";
    }
    else
    {
        cout << "#Color\n";
    }

    return 0;
}
