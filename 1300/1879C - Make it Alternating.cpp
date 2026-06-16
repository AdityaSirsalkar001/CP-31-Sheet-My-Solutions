#include<bits/stdc++.h>
using namespace std;

void solve(){
	
	string s;
	cin >> s;
	
	long long int n = s.size();
	long long int ans = 0;
vector<long long int> changes;
long long int cnt = 0;	
long long int mul = 1;
	for(int i = 0; i < n; i++){
		if(i != 0 && s[i] != s[i-1]){
			changes.push_back(cnt);
			ans += cnt - 1;
			mul = (mul * cnt) %  (998244353);
			cnt = 0;
}
		cnt++;
	}
	
	if(cnt){
		changes.push_back(cnt);
		ans += cnt - 1;
		mul = (mul * cnt) % (998244353);
	}
	
	long long ways = mul;
	
	long long int temp = ans;
	while(temp){
		
		ways = (ways * temp) % (998244353);
		
		temp -= 1;
	}


	cout << ans << " " << ways % (998244353)<< endl;
	
	return;
}

int main(){
	
	int t;
	cin >> t;
	for(int i = 0; i < t; i++) solve();

return 0;

} 
