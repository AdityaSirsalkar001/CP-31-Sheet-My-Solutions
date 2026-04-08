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
    vi a(n);
    in(a , n);

    int sum = 0;
    rep(i , 0 , n){
        sum += a[i];
    }
  
    

    vector<vector<int>> q;
    int cnt = 0;
    rep(i , 0 , k){
        int b;
        cin >> b;
        vi vec;
        vec.push_back(b);
        if(b == 1){
            int c , d;
            cin >> c >> d;
            vec.push_back(c);
            vec.push_back(d); 
        }
        else{
            int c;
            cin >> c;
            vec.push_back(c);
            cnt++;
        }
        q.push_back(vec);
    }

      int curr = -1;
   
    int flag = 0;
    int pos;

    unordered_set<int> s;

    rep(i , 0 , k){
        int num = q[i][0];
        if(num == 1){
           int a1 = q[i][1] , b = q[i][2];
        
           a1--;
        //    if(mat[pos][a1]){
        //     sum += b - curr;
        //     a[a1] = b;
        //    }
        //    else{
        //     sum += b - a[a1];
        //     a[a1] = b; 
        //    }

        if(flag == 0){
            sum = sum - a[a1] + b;
            cout << sum << endl;
            a[a1] = b;
        }
        if(flag != 0){
            if(s.find(a1) != s.end()){
                sum = sum - a[a1] + b;
                cout << sum << endl;
                a[a1] = b;
            }
            else{
                sum = sum - flag + b;
                cout << sum << endl;
                s.insert(a1);
                a[a1] = b;
            }
        }
        
          
        }

        if(num == 2){
            int val = q[i][1];
            sum = n*val;
            cout << sum << endl;
            flag = val;
            // pos++;
            // curr = val;
            s.clear();
        }
    }
}

int32_t main(){
    fastio();

    int t=1;
    // cin>>t;
    while(t--){
        solve();
    }
    return 0;
}












