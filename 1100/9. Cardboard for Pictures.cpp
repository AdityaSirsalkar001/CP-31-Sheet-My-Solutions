#include<bits/stdc++.h>
using namespace std;

unsigned long long area(vector<int>& s , unsigned long long val , unsigned long long c){
    unsigned long long ans = 0;
    for(int i = 0; i < s.size(); i++){
        unsigned long long a = (s[i] + (2*val))*(s[i] + (2*val));
        ans += a;
        if (ans > c) {
            return c + 1; 
        }
    }
    return ans;
}

void solve(){
    int n;
    unsigned long long c;
    cin >> n >> c;
    
    vector<int>s(n);
    for(int i = 0; i < n; i++){
        cin >> s[i];
    }
    
    unsigned long long low = 0;
    unsigned long long high = 1e9;
    int ans = 0;
    
    while(low <= high){
        unsigned long long mid = low +(high - low)/2;
        if(area(s , mid , c) > c){
            high = mid-1;
        }
        else if(area(s , mid , c) < c){
            low = mid + 1;
        }
        else{
            low = mid;
            break;
        }
    }
    cout << low << endl;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}
