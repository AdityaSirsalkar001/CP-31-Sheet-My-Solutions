#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
       
       int cnt = 0;
       int temp = 1;
       int inc = 1;
       
       if(n == 1){
           cout << 1 << endl;
           continue;
       }
       while(n > temp){
           cnt++;
        
           if(temp % (10*inc) == 0){
               inc *= 10;
           }
           
              temp += inc;
              if(n == temp){
                  cnt++;
              }
       }
       
       cout << cnt << endl;
    }
}