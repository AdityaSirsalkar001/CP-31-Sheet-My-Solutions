#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin >> t;
    while(t--){
        int n , a , b;
        cin >> n >> a >> b;
        if(n >= a+b+2 || (a==b && b==n)){
            cout << "YES" << endl;
        }
        else cout <<"NO\n" ;
    }
}