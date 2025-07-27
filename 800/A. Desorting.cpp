#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
      int mini = INT_MAX;
        int arr[n];
        bool ans = true;
        
        for(int i = 0; i < n; i++){
            cin >> arr[i];
           if( i > 0 ){
               
                if(arr[i] < arr[i-1]){
                ans = false;
                }
                
              mini = min( mini , arr[i] - arr[i-1]); 
           }
        }
        
        if(ans){
            cout << (mini%2?((mini+1)/2):(mini/2)+1) << endl;
        }
        else{
            cout << "0" << endl;
        }
        
     
    }
}