#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string s;
        cin >> s;
        
        int cnt = 0;
        int temp = 1;
        
        for(int i = 1; i < s.size(); i++){
            if(s[i] == s[i-1]){
                temp++;
            }
            else{
                cnt = max(temp , cnt);
                temp = 1;
            }
        }
         cnt = max(temp , cnt);
        cout << cnt + 1 << endl;
    }
}