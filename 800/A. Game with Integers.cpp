#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        if(n%3 == 0){
            cout << "Second\n";
        }
        else {
            cout << "First\n";
        }
    }
    return 0;
}