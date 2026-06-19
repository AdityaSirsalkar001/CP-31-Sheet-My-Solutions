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

pair<int , int> dfs(vector<vector<int>> &adj, vector<int> &vis , int& cnt , string s , int node){
    int white = 0;
    int black = 0;
    for(auto nxt: adj[node]){
         pair<int , int> p = dfs(adj , vis , cnt , s , nxt);
         white += p.first;
         black += p.second;

        //  if(p.first == p.second){
        //     cnt++;
        //  }
    }
    
    if(s[node] == 'W') white++;
    else black++;

    if(white == black && white != 0){
        cnt++;
        //cout << node << endl;
    }
    
    return {white , black};
}

void solve(){
    int n;
    cin >> n;
    vector<int> parent(n-1);
    string s;

    in(parent, n-1);
    cin >> s;

    int cnt = 0;
    
    vector<vector<int>> adj(n);
    for(int i = 0; i < n-1; i++){
        adj[parent[i] - 1].push_back(i+1);
    }

    vector<int> vis(n , 0);
    //cout << "this" << endl;
    dfs(adj , vis , cnt , s , 0);
    //cout << "this" << endl;

    cout << cnt << endl;
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












