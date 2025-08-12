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
    int n , k , b , s;
    cin >> n >> k >> b >> s;

    int max_sum = (n)*(k-1) + (b*k);
    int mini_sum = (b*k);
    
    if(s > max_sum || s < mini_sum){
        cout << "-1" << endl;
        return;
    }

    int cnt = s;
    vector<int> ans(n , 0);
    ans[0] = (b*k);
    cnt -= b*k;

    if(cnt == 0){
        out(ans);
        return;
    }

      if(cnt >= k-1){
            ans[0] += k - 1;
            cnt -= k - 1;
        }
        else{
            ans[0] += cnt;
            cnt = 0;
        }

    int i = 1;
    while(cnt > 0){
        if(cnt >= k-1){
            ans[i] = k - 1;
            cnt -= k - 1;
            i++;
        }
        else{
            ans[i] = cnt;
            cnt = 0;
            i++;
        }
    }

    out(ans);
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