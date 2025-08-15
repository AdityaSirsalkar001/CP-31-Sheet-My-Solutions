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
void solve()
{
    int n;
    cin >> n;

    vi a(n);
    in(a , n);

    map<int , int> mp;

    for(auto x : a){
        mp[x]++;
    }

    for(auto it = mp.begin(); it != mp.end(); it++){
        if(it->second == 1){
            cout << -1 << endl;
            return;
        }    
    }

    map<int , vector<int>> mp1;
    for(int i = 0; i < n; i++){
        mp1[a[i]].push_back(i);
    }

    for(auto it = mp1.begin(); it != mp1.end(); it++){
       
        int temp = it->second[0];
        for(int i = 0; i < it->second.size() - 1; i++){
            it->second[i] = it->second[i+1];
        }

        it->second[it->second.size()-1] = temp;

    }
    vector<int> ans;
    for(int i = 0; i < n; i++){
        ans.push_back(mp1[a[i]][0]+1);
        mp1[a[i]].erase(mp1[a[i]].begin());
    }

    out(ans);

}
int32_t main()
{
    fastio();
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}