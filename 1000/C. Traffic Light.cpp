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

   char c;
   string s;
   cin >> c;
   cin >> s;

   if(c == 'g'){
    cout << 0 << endl;
    return;
   }
   vi a;
   int first = INT_MAX;
   rep(i , 0 , n){
        if(s[i] == 'g'){
        first = min(first , i);
    }
    if(s[i] == c){
        a.push_back(i);
    }
   }
   int k = a.size();
   vi b(k);
   

   int cnt = 0;
   rep(i , 0 , n){
   
    if(s[i] == 'g'){
        while(a[cnt] < i && cnt < k){
            b[cnt] = i;
       
            cnt++;
           
        }
    }       
   }
//    cout << "First : "<< first<< endl;
//    rep(i , 0 , k){
//     cout << a[i] << " ";
//    }
//    cout << endl;
//       rep(i , 0 , k){
//     cout << b[i] << " ";
//    }
// cout << endl;
   rep(i , 0 , k){
        if(b[i] == 0){
            b[i] = first;
        }
        if(b[i] > a[i]){
            b[i] = b[i] - a[i];
        }
        else b[i] = n - a[i] + b[i];
     
   }

//      rep(i , 0 , k){
//     cout << b[i] << " ";
//    }
// cout << endl;

   int ans = *max_element(b.begin() , b.end());
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