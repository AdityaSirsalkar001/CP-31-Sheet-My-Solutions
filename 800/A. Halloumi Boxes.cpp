#include<bits/stdc++.h>
using namespace std;
int main(){
   int t;
   cin >> t;

   while(t--){
    int n , k;
    cin >> n >> k;

    vector<int> arr(n);
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    
     if(k > 1){
        cout << "YES" << endl;
        continue;
    }

   
    else {
         bool sort = true;
        for(int i = 0; i < n-1; i++){
            if(arr[i+1] < arr[i]){
            sort = false;
            break; 
        }
       
        }

        if(sort){
            cout << "YES" << endl;
        }
        else {
            cout << "NO" << endl;
        }
    }

}
    return 0;
}