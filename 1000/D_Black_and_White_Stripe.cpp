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
void solve() {
  int n , k;
  cin >> n >> k;

  string s;
  cin >> s;

   vi prefix(n+1 , 0);
    for(int i = 0; i < n; i++){
        prefix[i+1] = prefix[i] + (s[i] == 'W');
    }
    int ans = INT_MAX;

    for(int i = 0; i <= n-k; i++){
        int diff = prefix[i+k] - prefix[i];
        ans = min(diff , ans);
    }

    cout << ans << endl;

}

int32_t main(){
    fastio();
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}