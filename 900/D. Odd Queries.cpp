#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin >> t;
    
    while(t--){
       int n , q;
       cin >> n >> q;
       vector<long long int> nums(n + 1) , prefix(n + 1 , 0);
       long long int sum = 0;
       
       for(int i = 1; i < n+1; i++){
           cin >> nums[i];
           prefix[i] = nums[i] + prefix[i-1];
       }
       
       long long total = prefix[n];
       
       while(q--){
           int l , r;
           long long k;
           cin >> l >> r >> k;
           
           long long sum = total - prefix[r] + prefix[l-1] + (r - l + 1)*k; 
           
           if(sum % 2 == 1){
               cout << "YES\n";
           }
           else cout << "NO\n";
       }
    }
}