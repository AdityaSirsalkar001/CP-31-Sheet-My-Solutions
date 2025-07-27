#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin >> t;
    while(t--){
        int n , k;
        cin >> n >> k;
        
        string s;
        cin >> s;
        
        map<char , int> freq;
        
        for(auto c : s){
            freq[c]++;
        }
        
        int odd = 0;
        
        for(auto each : freq){
            if(each.second % 2 == 1){
                odd++;
            }
        }
        
  
       
       if(odd > k + 1){
           cout << "NO\n";
       }
       else cout << "YES\n";
    }
}