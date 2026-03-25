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
// bool check(vi a){
//     int n = a.size();
//     rep(i , 0 , n-1){
//         if(a[i] != a[i+1]) return false;
//     }
//     return true;
// }

// int updateVector(vi & a , int idx){
//     int n = a.size();
//     int val = n - 1 - (2*idx);
//     int start = max(val , 0LL);
  
//     rep(i , start , n-1-idx){
//         a[i] = a[n-1];
//     }  
    
//     rep(i , 0 , n-1){
//          if(a[n-1-i] != a[n-2-i]){
//             idx = n-1-i;
//             break;
//         }  
//     }
//     return idx;
// }
void solve(){
    int n;
    cin >> n;
    vi a(n);
    in(a , n);
    int idx = n-1;
   while(idx >= 0 && a[idx] == a[n-1]){
    idx--;
   }

   if(idx == -1){
    cout << 0 << endl;
    return;
}
    int cnt = 0;

    while(idx >= 0){
        idx -= (n - 1- idx);
        while(idx >= 0 && a[idx] == a[n-1]){
            idx--;
        }
        cnt++;
    }
    cout << cnt << endl;
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












