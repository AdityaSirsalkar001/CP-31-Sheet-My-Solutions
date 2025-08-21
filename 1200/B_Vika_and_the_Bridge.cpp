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
    int n , k;
    cin >> n >> k;

    vi a(n);
    in(a , n);

    map<int , vector<int>> mp;
       for(int i = 1; i <= k; i++){
        mp[i].push_back(0);
    }


    for(int i = 0; i < n; i++){
        mp[a[i]].push_back(i+1);
    }

       for(int i = 1; i <= k; i++){
        mp[i].push_back(n+1);
    }

    int ans = INT_MAX;
    for(int i = 1; i <= k; i++){
       vector<int> gaps;
       for(int j = 1; j < mp[i].size(); j++){
            gaps.push_back(mp[i][j] - mp[i][j-1]);
       }
       sort(gaps.begin() , gaps.end());
       int maxi = gaps[gaps.size() - 1];
       int temp = (maxi+1)/2;
       if(gaps.size() > 1){
         temp = max(gaps[gaps.size()-2] , (maxi+1)/2);
       }
       ans = min(ans , temp);
    }
    cout << ans-1 << endl;

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