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

    rep(i , 0 , n){
        a[i] = a[i] % k;

        if(a[i] == 0) a[i] = k;

        mp[a[i]].push_back(i);
    }

   
     for(auto it = mp.rbegin(); it != mp.rend(); ++it){
        for(int i = 0; i < it->second.size(); i++){
            cout << it->second[i]+1 << " ";
        }
    }
    


   

    cout << endl;
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