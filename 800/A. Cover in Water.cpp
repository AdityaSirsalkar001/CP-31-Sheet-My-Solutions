#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        
        vector<char> word(n);
        
        int temp = 0 , maxi = 0 , cnt = 0;
        
        for(int i = 0; i < n; i++){
            cin >> word[i];
            
            if(word[i] == '.'){
                temp++;
                cnt++;
            }
            else{
                temp = 0;
            }
            
            if(maxi < temp){
                maxi = temp;
            }
        }
        
        if(maxi > 2){
            cout << 2 << endl;
        }
        
        else {
            cout << cnt << endl;
        }
        
    }
}