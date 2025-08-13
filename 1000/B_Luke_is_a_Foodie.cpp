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
   int n , k;
   cin >> n >> k;

   vi a(n);
   in(a, n);
   
    int mini = a[0];
    int maxi = a[0];

    int cnt = 0;
   
    for(int i = 1; i < n; i++){
        
        mini = min(mini , a[i]);
        maxi = max(maxi , a[i]);

        if(maxi - mini > 2*k){
            cnt++;
            maxi = a[i];
            mini = a[i];
        }
    }
    cout << cnt << endl;
   
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