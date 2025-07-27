#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin >> t;
    while(t--){
        long long a , b , c , d;
        cin >> a >> b >> c >> d;
        
        if(c - a > d - b || d - b < 0){
            cout << -1 << endl;
        }
        
        else {
            cout << 2*(d - b) + a - c << endl; 
        }
    }
}