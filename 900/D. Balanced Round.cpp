#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    
    cin >> t;
    
    while(t--){
        long long int n , k;
        cin >> n >> k;
        
        vector<int> arr(n);
        map<int , int> freq;
        
        for(int i = 0; i < n; i++){
            cin >> arr[i];
            freq[arr[i]]++;
        }
        
   int back = -1, maxi = 0, temp = 0;

for (auto each : freq) {
    if (back == -1 || each.first - back <= k) {
        temp += each.second;
    } else {
        temp = each.second; 
    }
    back = each.first;
    maxi = max(maxi, temp);
}
        
        cout << n - maxi << endl;
    }
}