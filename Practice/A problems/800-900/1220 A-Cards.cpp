#include <bits/stdc++.h>
using namespace std;

//Problem Code/Link:
//Codechef profile: @saubhagya0111
//Codeforces profile: @saubhagya011
#define fio ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define endl "\n"
#define incr_loop(a, n) for (i = a; i < n; ++i)
#define decr_loop(a, b) for (i = a; i > b; --i)
#define nested_incr_loop(a, b) for (int j = a; j < b; ++j)
#define nested_decr_loop(a, b) for (int j = b; j > a; --j)
typedef long long ll;
#define pb push_back
#define ppb pop_back
#define MP make_pair
#define sort_all(v) sort(all(v));
#define PI 3.141592653589793238462
#define space cout << ' ';
#define gcd(a, b) __gcd(a, b);
#define all(x) x.begin(), x.end()
#define in(x) cin >> x;
#define in2(x, y) cin >> x >> y;
#define in3(x, y, z) cin >> x >> y >> z;
#define out(x) cout << x;
#define out2(x, y) cout << x << ' ' << y;
#define out3(x, y, z) cout << x << ' ' << y << ' ' << z;
#define line cout << endl;
#define string_in(x) getline(cin, x)
#define f first
#define s second
typedef vector<int> vi;
typedef vector<char> vc;
typedef set<int> si;
typedef set<char> scr;
typedef set<string> sst;
typedef vector<ll> vll;
typedef vector<string> vs;
typedef map<int, int> mii;
typedef pair<int, int> pii;
mt19937_64 rang(chrono::high_resolution_clock::now().time_since_epoch().count());
const int mod = 1'000'000'007;
const int N = 3e5, M = N;
/**************Debugger*************/
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
/************************************/
void solution()
{
    int i, j, n, m, element, a, b, flag = 0;
    in(n);
    string s;
    in(s);
    int z = 0, e = 0, r = 0, o = 0, n1 = 0;
    int zero = 0;
    incr_loop(0, s.length())
    {
        if (s[i] == 'z')
        {
            z++;
        }
        else if (s[i] == 'e')
        {
            e++;
        }
        else if (s[i] == 'r')
        {
            r++;
        }
        else if (s[i] == 'o')
        {
            o++;
        }
        else if (s[i] == 'n')
        {
            n1++;
        }
    }
    vi number_of_zeroes;
    number_of_zeroes.pb(z);
    number_of_zeroes.pb(e);
    number_of_zeroes.pb(r);
    number_of_zeroes.pb(o);
    int noz = *min_element(all(number_of_zeroes));
    o -= noz;
    e -= noz;
    vi number_of_ones;
    number_of_ones.pb(o);
    number_of_ones.pb(n1);
    number_of_ones.pb(e);
    int noo = *min_element(all(number_of_ones));
    while (noo--)
    {
        out(1);
        space;
    }
    while (noz--)
    {
        out(0);
        space;
    }
}
/************************************/
int main()
{
    // #ifndef ONLINE_JUDGE
    //     freopen("Error.txt", "w", stderr);
    // #endif
    fio;
    srand(chrono::high_resolution_clock::now().time_since_epoch().count());

    int tt = 1;
    // in(tt);1

    while (tt--)
    {

        solution();
    }

    return 0;
}
