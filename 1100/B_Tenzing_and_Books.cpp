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
    int n , x;
    cin >> n >> x;
    vi a(n) , b(n) , c(n);
    in(a , n);
    in(b , n);
    in(c , n);
    vector<int> pre[3];
    
    int s = 0;
    pre[0].push_back(s);
    rep(i , 0 , n){
        if((s|a[i]) != s){
            s = s|a[i];
            pre[0].push_back(s);
        }
    }
    s = 0;
    pre[1].push_back(s);
    rep(i , 0 , n){
        if((s|b[i]) != s){
            s = s|b[i];
            pre[1].push_back(s);
        }
    }
    s = 0;
    pre[2].push_back(s);
    rep(i , 0 , n){
        if((s|c[i]) != s){
            s = s|c[i];
            pre[2].push_back(s);
        }
    }

    int s1 = pre[0].size();
    int s2 = pre[1].size();
    int s3 = pre[2].size();

    bool ans = false;
    rep(i , 0 , s1){
        rep(j , 0 , s2){
            rep(k , 0 , s3){
                if((pre[0][i] | pre[1][j] | pre[2][k]) == x) ans = true;
            }
        }
    }
    if(ans) yes;
    else no;
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












