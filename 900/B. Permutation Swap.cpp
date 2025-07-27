#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin >> t;
    
    while(t--){
        int n;
        cin >> n;
        
        vector<int> nums(n) , pos(n);
        
        for(int i = 0; i < n; i++){
            cin >> nums[i];
            pos[i] = abs(nums[i] - i - 1);
            
        }
        
        int ans = pos[0];
        
        for(int i = 1; i < n; i++){
            ans = __gcd(ans , pos[i]);
        }
        
        cout << ans << endl;
    }
}