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
    int n, k;
    cin >> n >> k;

    vi a(n);
    in(a, n);

    map<int, vector<int>> mp;

    // Store positions of each value
    for (int i = 0; i < n; i++) {
        mp[a[i]].push_back(i);
    }

    int ans = INT_MAX;

    for (auto &it : mp) {
        auto &v = it.second;
        sort(v.begin(), v.end()); // Ensure positions are sorted

        if (v.size() < 2) continue; // No gap to compare

        int diff = INT_MIN;
        int change = -1;

        for (int i = 1; i < v.size(); i++) {
            if (diff < v[i] - v[i - 1] - 1) {
                diff = v[i] - v[i - 1] - 1;
                change = (v[i] + v[i - 1]) / 2;
            }
        }

        if (change != -1) {
            v.push_back(change);
            sort(v.begin(), v.end());

            diff = INT_MIN;
            for (int i = 1; i < v.size(); i++) {
                diff = max(diff, v[i] - v[i - 1] - 1);
            }
            ans = min(ans, diff);
        }
    }

    cout << ans << "\n";
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