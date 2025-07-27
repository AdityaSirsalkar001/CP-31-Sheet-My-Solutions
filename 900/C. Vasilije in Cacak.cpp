#include <bits/stdc++.h>
using namespace std;
 
int main() {
	// your code goes here
    int t;
    cin >> t;
    while(t--){
        long long int n , k , x;
        cin >> n >> k >> x;
        
      long long mini = 1LL * k * (k + 1) / 2;
long long maxi = 1LL * k * (2 * n - k + 1) / 2;

        
        if(x >= mini && x <= maxi){
            cout << "YES\n";
        }
        else cout << "NO\n";
    }
}