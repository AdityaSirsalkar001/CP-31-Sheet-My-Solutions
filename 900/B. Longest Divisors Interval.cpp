#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    
    cin >> t;
    
    while(t--){
        long long int n;
        cin >> n;
        
        long long int i = 1;
        
        while(n % i == 0){
            i++;
        }
        
        cout << i-1 << endl;
    }
}