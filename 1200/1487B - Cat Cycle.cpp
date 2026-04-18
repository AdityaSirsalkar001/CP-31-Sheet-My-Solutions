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
    int n , k;
    cin >> n >> k;
    k--;
    if(n % 2 == 0){
        // cout << "n is even" << endl;
        // cout << "k = " << k << endl;
        // cout << "n = " << n << endl;
        k = k % n;
        cout << k+1 << endl;
        // cout << endl;
        return;
    }
    // cout << "n is odd" << endl;
    // cout << "k = " << k << endl;
    // cout << "n = " << n << endl;
    //int l = k;
    int dis = n-1;
    // while(l--){
    //     dis -= 2;
    //     if(dis == 0) dis = n-1;
    // }

    int cycle = (n-1)/2;
    int rem = k % cycle;
    dis -= rem*2;
    
    //  cout <<"distance(left to main cat) = " <<  dis << endl;

    int curr = k % n;
    curr = n - 1 - curr;
   
    // cout << "curr pos of main cat =" << curr << endl;
    
    int ans = ((curr - dis + n) % n) + 1;
    cout <<  ans << endl;
  
}

int32_t main(){
    fastio();

    int t=1;
    cin>>t;
    while(t--){
        // cout << "test case : " << 6 - t << endl;
        solve();
        // cout << endl;
    }
    return 0;
}












