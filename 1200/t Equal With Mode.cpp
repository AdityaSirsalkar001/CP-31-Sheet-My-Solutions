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

        bool odd = false , even = false;
        rep(i , 0 , n){
            if(a[i] % 2 == 0){
                even = true;
            }
            else odd = true;
        }

        if(even && odd){
            cout << 2 << endl;
            return;
        }

        else{
            int cnt = 0;
            int ans = 4;
            while(cnt != 2){
      
                map<int , int> mp;
                rep(i , 0 , n){
                   
                    mp[a[i] % ans]++;
                }
                cnt = mp.size();
                if(cnt == 2){
                    break;
                }
                else ans *= 2;
                
            }
            cout << ans << endl;
        }
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