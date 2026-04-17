#include<bits/stdc++.h>
using namespace std;

void solve(){
	int n;
	cin >> n;
	string s1 , s2;
	cin >> s1 >> s2;

	vector<int> v1(n , 0);
	vector<int> v2(n , 0);

	if(s1[0] == '0'){
		v1[0] = 1;
	}
	if(s2[0] == '0'){
		v2[0] = 1;
	}
	for(int i = 1; i < n; i++){
		if(s1[i] == '0'){
			v1[i] = v1[i-1] + 1;
		}
		else v1[i] = v1[i-1];

		if(s2[i] == '0'){
			v2[i] = v2[i-1] + 1;
		}
		else v2[i] = v2[i-1];
	}
	bool curr = true;
	bool ans = true;
	for(int i = n-1; i >= 0; i--){
		if(curr){
			if(s1[i] != s2[i] &&
			 2*v1[i] == i+1){
				curr = false;
			}
			else if(s1[i] != s2[i]){
				ans = false;
                break;
			}
		}
		else{
			if(s1[i] == s2[i] &&
			2*v1[i] == i+1){
				curr = true;
			}
			else if(s1[i] == s2[i]){
		   		ans = false;
                break;
			}
		}
	}

	if(ans) cout << "YES" << endl;
	else cout << "NO" << endl;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		solve();
	}
	return 0;
}
