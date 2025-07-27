#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin >> t;
    
    while(t--){
       long long int n;
        cin >> n;
        
        string arr;
        cin >> arr;
        
        
        
       long long int left = 0 , right = n-1;
      long long int cnt = n;
       
       while(left <= right){
           if(arr[left] != arr[right]){
               cnt -= 2;
           }
           else break;
           left++;
           right--;
       }
       
       cout << cnt << endl;
        
    }
}
