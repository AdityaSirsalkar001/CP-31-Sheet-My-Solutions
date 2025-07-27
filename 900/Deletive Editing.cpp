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
    string s1 , s2;
    cin >> s1 >> s2;
    
    map <char , int> in_freq;
    
    for(auto c : s2){
        in_freq[c]++;
    }
    
    for(int i = s1.size() - 1; i >= 0; i--){
        if(in_freq[s1[i]] > 0){
            in_freq[s1[i]]--;
        }
        else s1[i] = '.';
    }
    
    string ans;
    
    for(int i = 0;  i < s1.size(); i++){
        if(s1[i] != '.'){
            ans += s1[i];        
        }
    }
    
    if(ans == s2){
        yes;
    }
    else no;
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
