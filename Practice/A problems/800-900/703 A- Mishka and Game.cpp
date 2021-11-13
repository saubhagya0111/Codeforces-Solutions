#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a, b;
    int m = 0, c = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a >> b;
        if (a > b)
        {
            m++;
        }
        else if (b > a)
        {
            c++;
        }
    }
    if (m > c)
    {
        cout << "Mishka" << endl;
    }
    else if (m < c)
    {
        cout << "Chris" << endl;
        /* code */
    }
    else
    {
        cout << "Friendship is magic!^^" << endl;
    }
}
