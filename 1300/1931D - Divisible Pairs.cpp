#include<bits/stdc++.h>
using namespace std;



void solve(){
	int n;
	long long x , y;
	cin >> n >> x >> y;
	
	vector<int> a(n);
	for(int i = 0; i < n; i++) cin >> a[i];
	
	long long cnt = 0;

	map<long long , vector<long long>> mp;
	
	for(auto c : a){
		mp[c%y].push_back(c);
	}
	
	for(auto it : mp){
		map<long long , long long> mp1;
		vector<long long> vec = it.second;
		for(auto c : vec){
			mp1[c%x]++;
			
		}
			
// 		for(int i = 0; i <= x/2; i++){
// 			if( i == 0 || (i == x/2 && x % 2 == 0)){
// int val = mp1[i];
// cnt += ((val-1)*val)/2;				
// 			}
// 			else{
// 				int val1 = mp1[i];
// 				int val2 = mp1[x - i];
// 				cnt += val1*val2;
// }

// }
	for(auto it : mp1){
		long long int i = it.first;
		long long int val = it.second;
		if(i == 0 || (i == x/2 && x % 2 == 0)){
			cnt += (val *(val - 1))/2;
			it.second = 0;
		}
		else{
			long long int val2 = mp1[x - i];
			cnt += val*val2;
			mp1[x-i] = 0;
		}
	}
}
	cout << cnt << endl;
return;
}

int main(){
	int t;
	cin >> t;
	while(t--) solve();
	return 0;
}
