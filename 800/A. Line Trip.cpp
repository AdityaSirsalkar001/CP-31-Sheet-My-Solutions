#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	
	while(t--){
	    int n , x;
	    cin >> n >> x;
	    
	    int arr[n];
	    for(int i = 0; i < n; i++){
	        cin >> arr[i];
	    }
	    
	    int maxi = arr[0];
	    
	    for(int i = 0; i < n-1; i++){
	        if(maxi < arr[i+1] - arr[i]){
	            maxi = arr[i+1] - arr[i];
	        }
	    }
	    
	    if(maxi < (2*(x - arr[n-1]))){
	        maxi = (2*(x - arr[n-1])); 
	    }
	    
	    cout << maxi << endl;
	}

}