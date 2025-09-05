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
    int l , w;
    cin >> l >> w;
    vector<vector<int>> a(4);
    vector<int> b;
    for(int i = 0; i < 4; i++){
        int temp;
        cin >> temp;
        int mini = INT_MAX;
        int maxi = INT_MIN;
        for(int j = 0; j < temp; j++){
            int temp1;
            cin >> temp1;
            a[i].push_back(temp1);
            maxi = max(maxi , temp1);
            mini = min(mini , temp1);
        }

        b.push_back(maxi - mini);
    }

    int ans = 0;
    for(int i = 0; i < 4; i++){
        if(i > 1){
            ans = max(ans, b[i]*l);
        }
        else {
            ans = max(ans , b[i]*w);
        }
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