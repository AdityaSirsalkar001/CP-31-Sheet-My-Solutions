#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin >> t;
    
    while(t--){
        int n;
        cin >> n;
        
        vector<int> arr(n);
        int cnt2 = 0;
        int ans = 0;
        
        for(int i = 0; i < n; i++){
            cin >> arr[i];
            
            if(arr[i] == 2){
                cnt2++;
            }
            
        }
        
        if(cnt2 % 2 == 1){
            cout << -1 << endl;
        }
        
        else if(cnt2 == 0){
            cout << 1  << endl;
        }
        else {
           
            int temp = 0 , i = 0;
            while(temp != cnt2/2){
                if(arr[i] == 2){
                    temp++;
                }
                i++;
            }
            
            ans = i;
            
            cout << ans << endl;
        }
    }
}