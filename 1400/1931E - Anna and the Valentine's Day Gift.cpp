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
#include <numeric>
#include <bitset>
#include <chrono>
#include <random>
#include <string>
#include <iomanip>
#include <deque>
#include <cassert>
#include <functional>
#include <utility>

using namespace std;

#define int long long
#define pii pair<int,int>
#define vi vector<int>

#define pb push_back
#define eb emplace_back
#define pp pop_back
#define pf push_front
#define ppf pop_front
#define ins insert
#define clr clear()
#define emp empty()
#define bk back()
#define fr front()
#define tp top()
#define sz(x) ((int)(x).size())
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define lb lower_bound
#define ub upper_bound

#define ff first
#define ss second
#define mp make_pair

#define fastio() ios_base::sync_with_stdio(false); cin.tie(NULL)

#ifndef ONLINE_JUDGE
#define debug(x) cerr << #x << " = " << x << endl;
#else
#define debug(x)
#endif

const int MOD = 1e9 + 7;
const int INF = 1e18;
const int MAXN = 1e6 + 5;
const int MAXF = 2e5 + 5;

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

int dx[] = {-1, 1, 0, 0};
int dy[] = {0, 0, -1, 1};

struct custom_hash {
    static uint64_t splitmix64(uint64_t x) {
        x += 0x9e3779b97f4a7c15;
        x = (x ^ (x >> 30)) * 0xbf58476d1ce4e5b9;
        x = (x ^ (x >> 27)) * 0x94d049bb133111eb;
        return x ^ (x >> 31);
    }
    size_t operator()(uint64_t x) const {
        static const uint64_t FIXED_RANDOM = chrono::steady_clock::now().time_since_epoch().count();
        return splitmix64(x + FIXED_RANDOM);
    }
};

struct DSU {
    vector<int> parent, size;
    DSU(int n) {
        parent.resize(n);
        size.assign(n, 1);
        iota(all(parent), 0);
    }
    int find(int v) {
        if (v == parent[v]) return v;
        return parent[v] = find(parent[v]);
    }
    void unite(int a, int b) {
        a = find(a);
        b = find(b);
        if (a != b) {
            if (size[a] < size[b]) swap(a, b);
            parent[b] = a;
            size[a] += size[b];
        }
    }
};

struct SegTree {
    int n;
    vector<int> tree;
    SegTree(int n) {
        this->n = n;
        tree.assign(4 * n, 0);
    }
    void build(vector<int>& a, int node, int start, int end) {
        if (start == end) {
            tree[node] = a[start];
            return;
        }
        int mid = (start + end) / 2;
        build(a, 2 * node, start, mid);
        build(a, 2 * node + 1, mid + 1, end);
        tree[node] = tree[2 * node] + tree[2 * node + 1];
    }
    void update(int node, int start, int end, int idx, int val) {
        if (start == end) {
            tree[node] = val;
            return;
        }
        int mid = (start + end) / 2;
        if (idx <= mid) update(2 * node, start, mid, idx, val);
        else update(2 * node + 1, mid + 1, end, idx, val);
        tree[node] = tree[2 * node] + tree[2 * node + 1];
    }
    int query(int node, int start, int end, int l, int r) {
        if (r < start || end < l) return 0;
        if (l <= start && end <= r) return tree[node];
        int mid = (start + end) / 2;
        return query(2 * node, start, mid, l, r) + query(2 * node + 1, mid + 1, end, l, r);
    }
};

bool is_prime[MAXN];
vector<int> primes;
void sieve() {
    fill(is_prime, is_prime + MAXN, true);
    is_prime[0] = is_prime[1] = false;
    for (int i = 2; i * i < MAXN; i++) {
        if (is_prime[i]) {
            for (int j = i * i; j < MAXN; j += i)
                is_prime[j] = false;
        }
    }
    for (int i = 2; i < MAXN; i++) {
        if (is_prime[i]) primes.pb(i);
    }
}

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

int fact[MAXF], invFact[MAXF];
void precompute_factorials() {
    fact[0] = 1;
    invFact[0] = 1;
    for (int i = 1; i < MAXF; i++) {
        fact[i] = (fact[i - 1] * i) % MOD;
    }
    invFact[MAXF - 1] = binpow(fact[MAXF - 1], MOD - 2);
    for (int i = MAXF - 2; i >= 1; i--) {
        invFact[i] = (invFact[i + 1] * (i + 1)) % MOD;
    }
}

int nCr(int n, int r) {
    if (r < 0 || r > n) return 0;
    return fact[n] * invFact[r] % MOD * invFact[n - r] % MOD;
}

string to_binary(int n, int len) {
    string s = bitset<64>(n).to_string();
    return s.substr(64 - len);
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

    while(!q.emp){
        int node=q.fr;
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
    int n , m;
    cin >> n >> m;
    vi a(n);
    in(a , n);
    vi trailingZeros(n , 0);
    int total = 0;
    rep(i , 0 , n){
        int val = a[i];
        bool found = false;
        while(val){
            int num = val % 10;
            if(num != 0) found = true;
            else if(!found) trailingZeros[i]++;
            total++;
            val /= 10;            
        }
       
    }
    sort(rall(trailingZeros));
    for(int i = 0; i < n; i+= 2){
        total -= trailingZeros[i];
    }
   // cout << total << endl;
    if(total <= m) cout << "Anna" << endl;
    else cout << "Sasha" << endl;
}

int32_t main(){
    fastio();
    precompute_factorials();

    int t=1;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
