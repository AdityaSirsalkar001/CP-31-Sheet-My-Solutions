#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin >> t;
    while(t--){
      long long int n;
       cin >> n;
       while(n % 2 == 0 && n > 1){
           n /= 2;
       }
       
       if(n > 1){
           cout << "YES" << endl;
       }
       else cout << "NO" << endl;
    }
}
