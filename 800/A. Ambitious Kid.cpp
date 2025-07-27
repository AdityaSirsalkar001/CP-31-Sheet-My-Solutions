#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int n;
    cin >> n;
    
    int arr[n];
    int ans = INT_MAX;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
        
        if(arr[i] < 0){
            arr[i] *= -1;
        }
        if(arr[i] < ans){
            ans = arr[i];
        }
    }
    
    cout << ans << endl;
}