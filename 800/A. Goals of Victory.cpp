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
        int cnt = 0;
        
        for(int i = 0; i < n-1; i++){
            cin >> arr[i];
            cnt += arr[i];
        }
        
       cout << (-1*cnt) << endl;
        
        
    }
}