#include <bits/stdc++.h>
using namespace std;
 
int main() {
	// your code goes here
    int t;
    cin >> t;
    while(t--){
     long long a , b , n;
     cin >> a >> b >> n;
     vector<int> arr(n);
     
     long long int mini = b;
     long long int maxi = 0;
     for(int i = 0; i < n; i++){
         cin >> arr[i];
         
         if(arr[i] >= a){
             maxi += a-1;
         }
         else{
             mini += arr[i];
         }
     }
     
     maxi += mini; 
     
     cout << maxi<< endl;
    }
}