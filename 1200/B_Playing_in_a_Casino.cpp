#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

#define int long long
#define vi vector<int>
#define fastio() ios_base::sync_with_stdio(false); cin.tie(NULL)
#define rep(i, a, b) for (int i = a; i < b; ++i)

void solve() {
    int n , m;
    cin >> n >> m;

    vector<vector<int>> a(n, vector<int>(m)); 
    rep(i, 0, n) {
        rep(j, 0, m) {
            cin >> a[i][j];
        }
    }

    int ans = 0;

 
    rep(col, 0, m) {
        vector<int> vals;
        rep(row, 0, n) vals.push_back(a[row][col]);

        sort(vals.begin(), vals.end());

        rep(i, 0, n) {
            ans += vals[i] * (2LL * i - (n - 1));
        }
    }

    cout << ans << "\n";
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
