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
    in(a, n);

    vi b(n); 
    in(b, n);

    unordered_map <int , int> mp1 , mp2;

    int i = 0 , j = 0;

    while(i < n && j < n){
       if(a[i]==a[j]){
           mp1[a[i]] = max(j-i+1 , mp1[a[i]]);
        j++;
        continue;
       }
        i = j;
    }

       i=0 , j=0;
        while(i < n && j < n){
       if(b[i]==b[j]){
           mp2[b[i]] = max(j-i+1 , mp2[b[i]]);
        j++;
        continue;
       }
        i = j;
    }
    int maxi = 0;

    for(int i=0; i<2*n+1; i++){
        maxi = max(maxi, mp1[i]+mp2[i]);
    }

    cout<<maxi<<endl;
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
