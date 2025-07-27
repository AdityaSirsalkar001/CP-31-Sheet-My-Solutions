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
    
        
        for(int i = 0; i < n; i++){
            cin >> arr[i];
        }
        
      sort(arr.begin() , arr.end() , greater<int>());
      queue<int> q;
      for(int i = 1; i < arr.size(); i++){
          if(arr[i] == arr[i-1]){
              q.push(arr[i]);
              arr.erase(arr.begin() + i);
              i--;
          }
      }
        if(arr.size() == 1){
            cout << "NO\n";
        }
        else {
            cout << "YES\n";
            while(!q.empty()){
                arr.push_back(q.front());
                q.pop();
            }
            
            for(int i = 0; i < arr.size(); i++){
                cout << arr[i] << " ";
            }
            cout << endl;
        }
    }
}