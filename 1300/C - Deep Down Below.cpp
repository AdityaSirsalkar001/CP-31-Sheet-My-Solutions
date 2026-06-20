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
    int n;
    cin >> n;
    vector<vector<int>> a;
    vector<pair<int , int>> minEntry(n);

    
    for(int i = 0; i < n; i++){
        int k;
        cin >> k;
        vector<int> vec(k);
        in(vec , k);


        int maxi = INT_MIN;
        int idx = 0;
        rep(j , 0 , k){
            int temp = maxi;
            maxi = max(maxi , vec[j] - j);

            if(maxi != temp) idx = j;
        }

        minEntry[i].first = maxi + 1;
        minEntry[i].second = i;        

        a.push_back(vec);
    }

    sort(all(minEntry));
    //for(int i = 0; i < n; i++) cout << minEntry[i].first << " ";
    //cout << endl;
    int curr = minEntry[0].first;
    int val = curr;
    curr += a[minEntry[0].second].size();
   // cout << curr << " " << val << endl;
    for(int i = 1; i < minEntry.size(); i++){
        
        int idx = minEntry[i].second;
        int c = minEntry[i].first;
        int size = a[minEntry[i].second].size();
        if(c <= curr) curr += size;
        else{
            int dif = abs(curr - c);
            curr = c + size;
            val += dif;
        }
    //cout << curr << " " << val << endl;


    }
    cout << val << endl;
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












