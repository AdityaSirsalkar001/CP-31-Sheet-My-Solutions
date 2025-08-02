#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    string s;
	    cin >> s;
	    
	    int n = s.size();
	    
	    int cnt0 = 0 , cnt1 = 0;
	    
	    for(char c : s){
	        if(c == '1') cnt1++;
	        else cnt0++;
	    }
	    
	    int ans = 0;
	    
	    for(char c : s){
	        if(c == '0' && cnt1 > 0){
	            cnt1--;
	            ans++;
	        }
	        
	        else if(c == '1' && cnt0 > 0){
	            cnt0--;
	            ans++;
	        }
	        else break;
	    }
	    
	    cout << n - ans << endl;
	}
	
	return 0;

}