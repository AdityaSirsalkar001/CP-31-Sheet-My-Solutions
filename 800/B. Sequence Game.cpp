#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	
	while(t--){
    int n;
    cin >> n;
    
    int arr[n];
   
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    
    vector<int> ans;
    
    for(int i = 0; i<n; i++){
        if(i == 0 || arr[i] >= arr[i-1]){
            ans.push_back(arr[i]);
        }
        else {
           ans.push_back(1);
           ans.push_back(arr[i]);
                
            }
        }
    
    cout << ans.size() << endl;
    for(int i = 0; i < ans.size(); i++){
        cout << ans[i] << " ";
    }
    cout << endl;
	}
}