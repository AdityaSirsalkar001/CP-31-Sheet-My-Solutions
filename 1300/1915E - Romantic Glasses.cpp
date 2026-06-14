#include<bits/stdc++.h>
using namespace std;
void solve(){
	int n;
	cin >> n;
	vector<int> a(n);
	for(int i = 0; i < n; i++) cin >> a[i];
	
	vector<long long> prefix(n+1 , 0);
	for(int i = 1; i <= n; i++){
		if(i % 2) prefix[i] = prefix[i-1] - a[i-1];
		else prefix[i] = prefix[i-1] + a[i-1];
}  
map<long long , int> mp;
for(auto c : prefix){
	mp[c]++;
	if(mp[c] > 1){
		cout << "YES" << endl;
		return;
	}
} 
cout << "NO" << endl;
return;
}

int main(){
	int t;
	cin >> t;
	for(int i = 0; i < t; i++) solve();
	
	return 0;
}
