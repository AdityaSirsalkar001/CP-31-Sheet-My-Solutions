#include <bits/stdc++.h>
using namespace std;
 
int main() {
	// your code goes here
    int t;
    cin >> t;
    while(t--){
        long long n , k;
        cin >> n >> k;
        
        if((n-k)%2 == 0 || n%2 == 0) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}