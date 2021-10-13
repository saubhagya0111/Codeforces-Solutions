#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main()
{
    int t = 1;
    // cin >> t;
    while (t--)
    {
        int n, element;
        cin >> n;
        int c = 0;
        vector<int> v;
        cin >> element;
        v.push_back(element);
        for (int i = 1; i < n; i++)
        {
            cin >> element;
            if (element > *max_element(v.begin(), v.end()) || element < *min_element(v.begin(), v.end()))
            {
                c++;
            }
            v.push_back(element);
        }
        cout << c << endl;
    }

    return 0;
}
