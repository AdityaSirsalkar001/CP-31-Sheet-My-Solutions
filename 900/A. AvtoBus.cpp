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
    int n;
    cin >> n;
   int mini = 0 , maxi = 0;
   bool ans = true;
    if(n % 2 == 1 || (n % 4 != 0 && n % 6 != 0 && n < 9)){
        ans = false;
    }
   if(ans == false){
       cout << "-1 "<<endl;
       return;
   } 
    maxi += n/4;
    int i = n/4;
    if(n % 4 != 0){
        while((n - (4*i)) % 6 != 0){
            maxi--;
            i--;
        }
        maxi += (n-(4*i))/6;
    }
    
    mini += n/6;
    int j = n/6;
    if(n % 6 != 0){
        while((n - (6*j)) % 4 != 0){
            mini--;
            j--;
        }
        mini += (n - (6*j))/4;
    }
    
    cout << mini << " " << maxi << endl;
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
