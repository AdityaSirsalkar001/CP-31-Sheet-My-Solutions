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

    int n1 = n*(n-1)/2;
    vi a(n1);
    in(a , n1);

    sort(all(a));
    int maxi = a[n1 - 1];
    vi ans;
    map<int , int> mp;

    each(x , a){
        mp[x]++;
    }
 
    vector<pair<int , int>> dec;
    each(x , mp){
        while(x.second){
            ans.push_back(x.first);
            x.second -= n - dec.size() - 1;
            dec.push_back({x.first , 1});
        }
       
    }

   

    while(ans.size() < n-1){
        ans.push_back(ans[ans.size()-1]);
    }
  ans.push_back(maxi);
  out(ans);
  

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