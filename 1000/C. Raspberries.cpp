#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	   
	    long long int n , k;
	    
	    cin >> n >> k;
	    
	    vector<long long int> arr(n);
	    
	    long long int even = 0;
	    long long int ans = INT_MAX;
	    
	    for(long long int i = 0; i < n; i++){
	        cin >> arr[i];
	      
	        
	        if(arr[i] % 2 == 0) even++;
	        
	        if(arr[i] % k == 0) ans = 0;
	        
	        ans = min(ans , k - arr[i] % k);
	    }
	    
	    if(k == 4){
	        if(even >= 2) ans = 0;
	        else if(even == 1) ans = min(ans , 1LL);
	        else if(even == 0) ans = min(ans , 2LL);
	    }
	    cout <<ans << endl;
	    
	}
	
	return 0;

}