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
        
        int cnt1 = 0 , cnt0 = 0;
        
        for(int i = 0; i < n; i++){
            
            if(s[i] == '1') cnt1++;
            else cnt0++;
        }
        
        int cnt = min(cnt1 , cnt0);
        if(cnt % 2) cout << "DA" << endl;
        
        else cout << "NET" << endl;
    }
}
