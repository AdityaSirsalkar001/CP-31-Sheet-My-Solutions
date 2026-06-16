#include<bits/stdc++.h>
using namespace std;

void solve(){
	int n;
	cin >> n;
	
	vector<int> a(n) , b(n);
	for(int i = 0; i < n; i++) cin >> a[i];
	for(int i = 0; i < n; i++) cin >> b[i];
	
	// vector<int> ans;
	// for(int i = 0; i < n; i++){
	// 	bool found = true;
	// 	for(int j = 0; j < n; j++){
	// 		if(i == j) continue;
	// 		if((a[i] - a[j]) >= (b[i] - b[j])) found = true;
    //         else{
    //             found = false;
    //             break;
    //         }
	// 	}
		
	// 	if(found) ans.push_back(i+1);
	// }

	// cout << ans.size() << endl;
	
	// for(int i = 0; i < ans.size(); i++) cout <<  ans[i] << " ";
    // cout << endl;
	
    vector<pair<int , int>> pairs(n);
    vector<int> sum(n , 0);
    for(int i = 0; i < n; i++){
        sum[i] = a[i] - b[i];
        pairs[i] = {sum[i] , i};
    }

    sort(pairs.begin() , pairs.end());

     int cnt = 1;
    for(int i = n-2; i >= 0; i--){
        if(pairs[i].first == pairs[i+1].first) cnt++;
        else break;
    }
    cout << cnt << endl;
    for(int i = 0; i < cnt; i++){
        cout << pairs[n-cnt + i].second + 1 << " ";
    }
    cout << endl;

	return;
}

int main(){

	int t;
	cin >> t;
	for(int i = 0; i < t; i++) solve();
	return 0;
}
