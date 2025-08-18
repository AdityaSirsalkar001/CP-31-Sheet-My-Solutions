#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <set>
#include <unordered_map>
#include <unordered_set>
#include <queue>
#include <stack>
#include <cmath>
#include <climits>
#include <cstring>
using namespace std;
// #define int long long
#define vi vector<int>
#define pii pair<int, int>
#define pb push_back
#define ff first
#define ss second
#define all(x) (x).begin(), (x).end()
#define fastio()                      \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)
const int MOD = 1e9 + 7;
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define rep(i, a, b) for (int i = a; i < b; ++i)
#define rrep(i, a, b) for (int i = a; i >= b; --i)
#define each(x, a) for (auto &x : a)
#define in(a, n) rep(i, 0, n) cin >> a[i]
#define out(a)            \
    for (auto x : a)      \
        cout << x << " "; \
    cout << '\n'
void solve()
{
    int n , r , b;
    cin >> n >> r >> b;

    int Red_len = r/(b+1);
    int extra_Red = r % (b+1);

    string s;
  
    for(int i = 0; i < b; i++){
        for(int j = 0; j < Red_len; j++){
            s += 'R';
        }
        if(extra_Red > 0){
            s+= 'R';
            extra_Red--;
        }
        s += 'B';
    }
    for(int j = 0; j < Red_len; j++){
            s += 'R';
        }
        cout << s << endl;
}
int32_t main()
{
    fastio();
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}