#include <bits/stdc++.h>
using namespace std;

int min_ops(string value , string n){
    int check = value.size() - 1;
    int ops = 0;
    for(int i = n.size()-1; i > 0; i--){
        if(value[check] == n[i]){
            check--;
            if(check < 0){
                break;
            }
        }
        else ops++;
    }
    return ops;
}

int main() {
	// your code goes here
    
    int t;
    cin >> t;
    while(t--){
        string n;
        cin >> n;
      
      vector<string> values = {"00" , "25" , "50" , "75"};
      
      int ans = INT_MAX;
      
      for(auto value : values){
          ans = min(ans , min_ops(value , n));
      }
        cout << ans << endl;
    }
}
