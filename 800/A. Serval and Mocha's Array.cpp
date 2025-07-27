#include <bits/stdc++.h>
using namespace std;

int gcd(int a , int b){
    
   return __gcd(a,b);
}

int main() {
	// your code goes here
	
	int t;
	cin >> t;
	
	while(t--){
	    int n;
	    cin >> n;
	    vector<int> arr(n);
	    
	    for(int i = 0; i < n; i++){
	        cin >> arr[i];
	    }
	    
	    int temp = n;
	    
	    int mini = INT_MAX;
	    
	    while(temp-1){
	        for(int i = n-temp; i < n; i++){
	          mini = min(mini , gcd(arr[n - temp] , arr[i]));
	        }
	        
	        temp--;
	      
	    }
	    
	    if(mini < 3){
	        cout << "YES\n";
	    }
	    else cout << "NO\n";
	}

}