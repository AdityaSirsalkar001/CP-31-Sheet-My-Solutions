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
#define vi vector<long long>
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
    // your solution code
    int n;
    cin >> n;
    
    vi arr(n);
    in(arr , n);
    
   int ans = arr[n-1] - arr[0];
   
   rep(i , 0 , n-1){
       ans = max(ans , arr[i] - arr[i+1]);
   }
   
   int maxi = *max_element(all(arr));
   int mini = *min_element(all(arr));
   
   ans = max (ans , arr[n-1] - mini);
   ans = max (ans , maxi - arr[0]);
   
   cout << ans << '\n';
   return;
    
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
