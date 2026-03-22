#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>
#include <cmath>

using namespace std;

using ll = long long;
using ld = long double;
using vi = vector<int>;
using vl = vector<ll>;
using pii = pair<int,int>;
using pll = pair<ll,ll>;

#define pb push_back
#define ppb pop_back
#define ff first
#define ss second
#define all(x) (x).begin(), (x).end()
#define sz(x) ((int)(x).size())
#define endl '\n'
#define rep(i,a,b) for(int i = (a); i < (b); i++)
#define yes cout << "YES\n"
#define no cout << "NO\n"

const ll MOD = 1e9 + 7;

ll gcdll(ll a, ll b) { while (b) a %= b, swap(a, b); return a; }
ll lcmll(ll a, ll b) { return a / gcdll(a, b) * b; }
int setbitsll(ll n) { return __builtin_popcountll(n); }
int msb_pos(ll n) { return n ? 63 - __builtin_clzll(n) : -1; }
int lsb_pos(ll n) { return n ? __builtin_ctzll(n) : -1; }

ll addmod(ll a, ll b, ll m = MOD) { a %= m; b %= m; a += b; if (a >= m) a -= m; return a; }
ll submod(ll a, ll b, ll m = MOD) { a %= m; b %= m; a -= b; if (a < 0) a += m; return a; }
ll mulmod(ll a, ll b, ll m = MOD) { return (a * b) % m; }

ll binexp(ll a, ll e, ll m = MOD) {
    ll r = 1 % m; a %= m;
    while (e) {
        if (e & 1) r = mulmod(r, a, m);
        a = mulmod(a, a, m);
        e >>= 1;
    }
    return r;
}

ll modinv(ll a, ll m = MOD) { return binexp(a, m - 2); }

template<typename T>
void cin_v(vector<T> &v) { for (auto &x : v) cin >> x; }

template<typename T>
void cout_v(const vector<T> &v) { for (auto &x : v) cout << x << " "; cout << endl; }

int xor_sum_upto(int n) {
    if (n < 0) return 0; 
    switch (n % 4) {
        case 0: return n;
        case 1: return 1;
        case 2: return n + 1;
        case 3: return 0;
    }
    return 0; 
}

void solve() {
    int a , b;
    cin >> a >> b;
    int x = xor_sum_upto(a - 1);

    if (x == b) {
        cout << a << endl;
        return;
    }
    
    int c = x ^ b; 

    if (c == a) {
        cout << a + 2 << endl;
    } else {
        cout << a + 1 << endl;
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;cin>>t;
    while(t--)solve();
}
