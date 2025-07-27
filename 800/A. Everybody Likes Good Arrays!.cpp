#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
         int ans = 0;
        vector<int> arr(n);
        
        for(int i = 0; i < arr.size(); i++){
            cin >> arr[i];
            if(i > 0){
                if(arr[i] % 2 == arr[i-1] % 2){
                  
                    ans++;
                  
                }
            }
        }
        cout << ans << endl;
        
       
    }
}