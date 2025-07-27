#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int max = 0;
        int arr[n];
        
        for(int i = 0; i < n; i++){
            cin >> arr[i];
            
            max += arr[i];
        }
        
      if(max % 2 == 0){
          cout << "YES" << endl;
      }
      else {
          cout << "NO" << endl;
      }
        
    }
}