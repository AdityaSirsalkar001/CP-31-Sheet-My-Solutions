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
    // your solution code
   int n;
   cin >> n;
   vi arr(n);
   in(arr , n);
   
  int maxf = 0 , max = 0;
   map<int , int> freq;
   rep( i , 0 , n){
       freq[arr[i]]++;
       if(freq[arr[i]] > maxf){
           maxf = freq[arr[i]];
           max = arr[i];
       }
   }
   int ans = 0;
   
   int have = maxf;
   while(have < n){
       int take = min(have , n - have);
       ans += take + 1;
       have += take;
   }
   
   cout << ans << endl;
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
