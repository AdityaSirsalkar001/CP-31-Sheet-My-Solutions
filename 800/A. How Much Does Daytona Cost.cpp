#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin >> t;
    while(t--){
        int n , k;
        cin >> n >> k;
        
        vector<int> arr(n);
        bool ans = false;
        for(int i = 0; i < n; i++){
            cin >> arr[i];
            if(arr[i] == k){
                ans = true;
            }
        }
        
        if(ans){
            cout << "YES\n";
        }
        else {
            cout << "NO\n";
        }
        
        
    }
}