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
    int n , k , x;
    cin >> n >> k >> x;
    vi a(n);
    in(a , n);
    vi dif;
    sort(all(a));
    int cnt = 0;
    rep(i , 0 , n-1){
        if(a[i+1] - a[i] > x){
            //cout << i << " ";
            dif.push_back(a[i+1] - a[i]);
            cnt++;
        } 
    }
    //cout << k << endl;
    //cout << cnt << endl;
    sort(all(dif));
    
    for(auto c : dif){
        //cout << c << endl;
        if(c <= 2*x && k > 0){
            //cout << c << endl;
            cnt--;
            
            k--;
            //cout << k << endl;
        }
        else if(k > 0){
            int val = (c+x-1)/x;
            val--;
           // cout << val << " " << k << endl;
            //cout << k << endl;
            if(k >= val){
           // cout << cnt << endl;
                
                cnt--;
                k -= val;
            }
            else break;
        }
        else break;
        if(k == 0) break;
    }
    cout << cnt + 1 << endl;
}

int32_t main(){
    fastio();

    int t=1;
    //cin>>t;
    while(t--){
        solve();
    }
    return 0;
}












