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

    int n , p;
    cin >> n >> p;

    vector<pair<int , int>> v(n);
    vi a(n) , b(n);

    in(a , n);
    in(b , n);

    rep(i , 0 , n){
        v[i] = {b[i] , a[i]};
    }

    sort(v.begin() , v.end());

    int mini = p;
    int cnt = 1;

    for(auto it : v){
        int can = it.second;
        int cost = it.first;

        if(cost >= p){
            break;
        }
        if(cnt + can > n){
            mini += (n-cnt)*cost;
            cnt = n;
        } 

        else {
            mini += can*cost;
            cnt += can;
        }
    }

    mini += (n - cnt)*p;
    cout << mini << endl;
   
    

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