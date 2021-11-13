#include <bits/stdc++.h>
using namespace std;
#define pb push_back
typedef vector<int> vi;
void _print(int a) { cerr << a << endl; }
void _print(long long a) { cerr << a << endl; }
void _print(bool a) { cerr << a << endl; }
void _print(char a) { cerr << a << endl; }
template <class T>
void _print(vector<T> v1)
{
    cerr << "[";
    for (T i : v1)
    {
        _print(i);
        cerr << " ";
        cerr << "]" << endl;
    }
}
template <class T>
void _print(set<T> s1)
{
    cerr << "[";
    for (T i : s1)
    {
        _print(i);
        cerr << " ";
        cerr << "]" << endl;
    }
}
#ifndef ONLINE_JUDGE
#define debug(x)       \
    cerr << #x << "="; \
    _print(x);         \
    cout << endl;
#else
#define debug(x)
#endif
int main()
{
    int n, m, a, b;
    cin >> n >> m >> a >> b;
    int cost_per_km = min((b / m), a);
    int cost1 = (b * (n / m)) + b;
    int cost1_addendum = (a * (n % m)) + (b * (n / m));
    int cost2 = (a * n);
    vi v;
    v.pb(cost1);
    v.pb(cost1_addendum);
    v.pb(cost2);
    // int cost3=
    //Handling the corner case when the cost per km of cost of travel on pass >/< the cost/km
    debug(cost1);
    debug(cost2);
    debug(cost1_addendum);
    int ans = *min_element(v.begin(), v.end());
    cout << ans << "\n";
}
