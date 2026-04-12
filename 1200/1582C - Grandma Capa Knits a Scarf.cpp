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

bool isPalindrome(string s){
    int left = 0;
    int n = s.size();
    int right = n-1;

    while(left < right){
        if(s[left] != s[right]) return false;
        left++;
        right--;
    }
    return true;
}
void solve(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    if(isPalindrome(s)){
        cout << 0 << endl;
        return;
    }
    unordered_map<char , int> mp;
    for(auto c : s){
        mp[c]++;
    }

    // vector<pair<char , string>> ans;
    // for(auto it : mp){
    //     char c = it.first;
    //     int curr = 0;
    //     int val = 0;
    //     string s1;
    //     for(auto c1 : s){
    //         if(c1 != c){
    //             s1 += c1;
    //         }
    //     }

    //     if(isPalindrome(s1)){
    //         ans.push_back({c , s1});
    //     }
    // }
    // if(ans.size() == 0){
    //     cout << -1 << endl;
    //     return;
    // }
    // for(int i = 0; i < ans.size(); i++){
        
    // }
    int fin = LLONG_MAX;
    for(auto it : mp){
        char c = it.first;
        int left = 0;
        int right = n-1;
        bool ans = true;
        int cnt = 0;
        while(left < right){
            if(s[left] == s[right]){
                left++;
                right--;
            }
            else{
                if(s[left] == c){
                    left++;
                    cnt++;
                }
                else if(s[right] == c){
                    right--;
                    cnt++;
                }
                else{
                    ans = false;
                    break;
                }
            }
        }
        if(ans){
            fin = min(fin , cnt);
        }
    }
    if(fin == LLONG_MAX) cout << -1 << endl;
    else cout << fin << endl;
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












