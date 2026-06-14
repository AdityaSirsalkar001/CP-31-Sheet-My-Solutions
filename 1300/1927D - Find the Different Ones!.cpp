#include<bits/stdc++.h>
using namespace std;

void solve(){
	int n;
	cin >> n;
	vector<int> a(n);

	for(int i = 0; i < n; i++) cin >> a[i];

vector<int> lastDif(n , -1);

for(int i = 1; i < n; i++){
    if(a[i] != a[i-1]){
        lastDif[i] = i-1;
    }
    else lastDif[i] = lastDif[i-1];
}


int k;
cin >> k;
for(int i = 0; i < k; i++){
	int l , r;
	cin >> l >> r;
	if(lastDif[r-1] >= l-1){
		cout << lastDif[r-1] + 1 << " " << r << endl;
	}
	else cout << -1 << " " << -1 << endl;
}
cout << endl;
return;
}

int main(){
	int t;
	cin >> t;
	for(int i = 0; i < t; i++){
		solve();
	}
}
