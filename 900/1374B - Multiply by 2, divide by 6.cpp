#include <bits/stdc++.h>
using namespace std;

 long long func(long long n , int k){
     if(n == 0 || k == 0 || k == 1){
         return 0;
     }
     
     long long cnt = 0;
     
     while(n%k == 0){
         n /= k;
         cnt++;
     }
     
     return cnt;
 }

int main() {
	// your code goes here
    int t;
    cin >> t;
    while(t--){
        long long n;
        cin >> n;
        
        long long pow3 = func(n , 3);
        long long pow2 = func(n , 2);
        
        if(pow3 < pow2){
            cout << -1 << endl;
        }
        else {
            long long ans = (2*pow3) - pow2;
            int temp = pow3 - pow2;
            
            while(temp--){
                n *= 2;
            }
            while(pow3--){
                n /= 6;
            }
            
            if(n == 1) cout << ans << endl;
            else cout << -1 << endl;
        }
       
    }
     return 0;
}
