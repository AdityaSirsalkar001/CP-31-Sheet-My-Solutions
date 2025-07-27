#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin >> t;
    
    while(t--){
        int n;
        cin >> n;
        
        int x = 0;
        
        vector<int> arr(n);
        
        for(int i = 0; i < n; i++){
            cin >> arr[i];
            
            x ^= arr[i];
        }
        
        if(n % 2 == 1){
            cout << x << endl;
        }
        else {
            if(x != 0 ){
                cout << -1 << endl;
            }
            
            else cout << 0 << endl;
        }
        
        
    }
}