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
#define int long long
#define vi vector<int>
#define pii pair<int, int>
#define pb push_back
#define ff first
#define ss second
#define all(x) (x).begin(), (x).end()
#define fastio() ios_base::sync_with_stdio(false); cin.tie(NULL)
const int MOD = 1e9 + 7;
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define rep(i, a, b) for (int i = a; i < b; ++i)
#define rrep(i, a, b) for (int i = a; i >= b; --i)
#define each(x, a) for (auto &x : a)
#define in(a, n) rep(i, 0, n) cin >> a[i]
#define out(a) for (auto x : a) cout << x << " "; cout << '\n'

void solve() {
    int n;
    cin >> n;
    vi a(n) , b(n);
    in(a , n);
    in(b , n);

    sort(b.begin() , b.end());
    sort(a.begin() , a.end());

    for(int i = 0; i < n; i++){
        if(a[i] <= b[i]){
            cout << 0 << endl;
            return;
        }
    }

    vi range(n);

    int flag = 0;
    for(int i = 0; i < n; i++){
        while(b[flag] < a[i] && flag < n){
            flag++;
        }
        range[i] = flag;
    }

    int filled = 0;
    int ans = 1;
    for(int i = 0; i < n; i++){
        ans *= range[i] - filled;
         ans %= MOD;
        filled++;
    }
   
    cout << ans << endl;
}
int32_t main() {
    fastio();
    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}