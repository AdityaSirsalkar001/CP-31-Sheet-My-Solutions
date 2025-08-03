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
   int n , d , t;
   cin >> n >> d >> t;

   vi a(n);
   in(a, n);

   map <int , int> mp;
   int cnt = 0;

   for(int i = 0; i < n; i++){
    if(a[i] <= t){
        mp[cnt]++;
    }
    else if(a[i] > t && mp[cnt] != 0){
        cnt++;
    }
   }

   map<int , int> mp1;
   int cnt1 = 0;
   for(auto it = mp.begin(); it != mp.end(); it++){
    if(it->second >= d){
        mp1[cnt1] = it->second;
        cnt1++;
    }
   }

   int ans = 0;

   for(auto it = mp1.begin(); it != mp1.end(); it++){
    int temp = it->second;

    ans += (temp - d+1) * (temp - d + 2)/2;

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