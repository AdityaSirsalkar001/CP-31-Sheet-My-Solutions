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
#include<bitset>

using namespace std;

#define int long long
#define vi vector<int>
#define pii pair<int,int>
#define pb push_back
#define ff first
#define ss second
#define all(x) (x).begin(), (x).end()

#define fastio() ios_base::sync_with_stdio(false); cin.tie(NULL)

const int MOD = 1e9 + 7;

#define yes cout << "YES\n"
#define no cout << "NO\n"

#define rep(i,a,b) for(int i=a;i<b;i++)
#define rrep(i,a,b) for(int i=a;i>=b;i--)
#define each(x,a) for(auto &x:a)

#define in(a, n) rep(i, 0, n) cin >> a[i]
#define out(a)            \
    for (auto x : a)      \
        cout << x << " "; \
    cout << '\n'
    
int gcd(int a,int b){ return b==0?a:gcd(b,a%b); }
int lcm(int a,int b){ return (a/gcd(a,b))*b; }

int binpow(int a,int b){
    int res=1;
    while(b){
        if(b&1) res=(res*a)%MOD;
        a=(a*a)%MOD;
        b>>=1;
    }
    return res;
}

void dfs(int node, vector<vector<int>> &adj, vector<int> &vis){
    vis[node]=1;
    for(auto nxt: adj[node]){
        if(!vis[nxt]) dfs(nxt, adj, vis);
    }
}

void bfs(int start, vector<vector<int>> &adj, vector<int> &vis){
    queue<int> q;
    q.push(start);
    vis[start]=1;

    while(!q.empty()){
        int node=q.front();
        q.pop();

        for(auto nxt: adj[node]){
            if(!vis[nxt]){
                vis[nxt]=1;
                q.push(nxt);
            }
        }
    }
}

void solve(){
    int n;
    cin >> n;
    vi a(n);
    in(a , n);

    vector<string> bits;
    for(auto c : a){
        string s = bitset<31>(c).to_string();
        bits.push_back(s);
    }
    vector<int> bitCnt(32 , 0);
    int first = -1;
    for(int i = 0; i < 31; i++){
        for(int j = 0; j < n; j++){
            if(bits[j][i] == '1'){
                bitCnt[i]++;
                if(first == -1) first = i;
            }
        }
    }
    bitCnt[31] += n;
    if(first == -1) first = 31;
    if(first == 31){
        for(int i = 1; i <= n; i++){
            cout << i << " ";
        }   
        cout << endl;
        return;
    }
    int ans = bitCnt[first];
    for(int i = first+1; i < 31; i++){
        if(bitCnt[i] != 0){
            ans = gcd(ans , bitCnt[i]);
        }
    }
    // int maxi = 0;
    // if(ans > 1){
    //     for(int i = 1; i*i <= ans; i++){
    //         if(ans % i == 0){
    //             cout << i << " ";
    //             maxi = max(i , maxi);
    //         }
    //     }
    // }
    // if(first == 31){
    //     for(int i = maxi + 1; i < ans; i++) cout << i << " ";
    // }
    // cout << ans << " ";
    // cout << endl;

    vi factors;
    for(int i = 1; i*i <= ans; i++){
            if(ans % i == 0){
                factors.push_back(i);    
                if(i != ans/i) factors.push_back(ans/i);
           }
    }
    sort(all(factors));

    out(factors);
    return;
    
}

int32_t main(){
    fastio();

    int t=1;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}












