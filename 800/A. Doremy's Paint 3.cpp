#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        vector<int> a(n);
        map<int , int> distinct;

        for (int i = 0; i < n; ++i) {
            cin >> a[i];
            distinct[a[i]]++;
        }

        if (distinct.size() < 2) {
            cout << "Yes\n";
        } else if(distinct.size() == 2){
            int a = distinct.begin()->second;
            int b = distinct.rbegin()->second;
            
            if(a == b){
                cout << "Yes\n";
            }
            else if(abs(a-b) == 1){
                cout << "Yes\n";
            }
            else {
                cout << "No\n";
            }
        }
        
        else {
            cout << "No\n";
        }
    }
    return 0;
}