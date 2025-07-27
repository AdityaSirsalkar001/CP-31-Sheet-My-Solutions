#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int sum = 0;
        int ans = 0;
        int mul = 1;
        vector<int> arr(n);
        
        for(int i = 0; i < n; i++){
            cin >> arr[i];
            sum += arr[i];
            
            mul *= arr[i];
        }
        
        if( sum < 0 ){
            ans = ((-1*sum)+1)/2;
            
            if(ans % 2 == 1){
                mul *= -1;
            }
        }
        
        if(mul == -1){
            ans += 1;
        }
        
        cout << ans << endl;
    }
}