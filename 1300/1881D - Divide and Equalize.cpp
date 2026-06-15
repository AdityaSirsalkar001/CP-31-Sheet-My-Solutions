#include<bits/stdc++.h>
using namespace std;

void solve(){
	int n;
	cin >> n;
	vector<int> a(n);
	for(int i = 0; i < n; i++) cin >> a[i];
	
	map<int , int> mp;
	
	for(auto val : a){
		
		for(int i = 2; i*i <= val; i++){
			
			while(val % i == 0){
				mp[i]++;
				val /= i;
			}
			
		}
	
		if(val > 1) mp[val]++;
		
	}

	for(auto it : mp){
		if(it.second % n != 0){
			cout << "NO" << endl;
			return;
		}
	}

	cout << "YES" << endl;
	return;
}

int main(){
	int t;
	cin >> t;
	
	for(int i = 0; i < t; i++) solve();

	return 0;
}
