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
    vi a(n);
    in(a , n);
    int cnt = 0;
    int slope = 1;
   

    if(a[0] <= a[1]){
        cnt = 0;
    }
    else{
        slope = -1;
    }

    int temp = a[0];
    int cnter = 0;
    for(int i = 0; i < n; i++){
        if(a[i] == temp){
            cnter++;
        }
    }
    if(cnter == n){
        cout << 1 << endl;
        return;
    }
    n = unique(a.begin(),a.end())-a.begin();
    for(int i = 0; i < a.size(); i++){
        if(i != 0 && i != a.size() -1){
            if(a[i] >= a[i-1] && a[i] <= a[i+1] && (slope == 1)){
                cnt++;
            }
            else if(a[i] <= a[i-1] && a[i] >= a[i+1] && (slope == -1)){
            cnt++;
            }
            else slope *= -1;
        }

        else if(i == 0){
            if(a[i] < a[i+1]){
                slope = 1;
            }
            else {
                slope = -1;
            }
        }
      
    }
    cout << n - cnt << endl;
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