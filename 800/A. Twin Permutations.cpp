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
        int max = 0;
        
        for(int i = 0; i < n; i++){
            cin >> arr[i];
            if(arr[i] > max){
                max = arr[i];
            }
        }
        
        max++;
        
        for(int i = 0; i < n; i++){
            cout << max - arr[i] << " ";
        }
        
        cout << endl;
        
        
    }
}