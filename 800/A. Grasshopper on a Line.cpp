#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	
	int t;
	cin >> t;
	
	while(t--){
	   
	int n , x;
	cin >> n >> x;
	
	if(n%x == 0){
	    cout << 2 << endl << n - 1 << " " << 1 << endl;
	}
	
	else {
	    cout << 1 << endl << n << endl;
	}
	}

}