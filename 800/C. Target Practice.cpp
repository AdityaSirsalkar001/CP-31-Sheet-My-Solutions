#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin >> t;
    while(t--){
        char arr[10][10];
        
          int score[10][10] = {
            { 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1},
            { 1 , 2 , 2 , 2 , 2 , 2 , 2 , 2 , 2 , 1},
            { 1 , 2 , 3 , 3 , 3 , 3 , 3 , 3 , 2 , 1},
            { 1 , 2 , 3 , 4 , 4 , 4 , 4 , 3 , 2 , 1},
            { 1 , 2 , 3 , 4 , 5 , 5 , 4 , 3 , 2 , 1},
            { 1 , 2 , 3 , 4 , 5 , 5 , 4 , 3 , 2 , 1},
            { 1 , 2 , 3 , 4 , 4 , 4 , 4 , 3 , 2 , 1},
            { 1 , 2 , 3 , 3 , 3 , 3 , 3 , 3 , 2 , 1},
            { 1 , 2 , 2 , 2 , 2 , 2 , 2 , 2 , 2 , 1},
            { 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1}
        };
        
        
        int cnt = 0;
        
        vector<pair<int , int>> points;
        
        for(int i = 0; i < 10; i++){
            for(int j = 0; j < 10; j++){
                cin >> arr[i][j];
                
                if(arr[i][j] == 'X'){
                  cnt += score[i][j];
                }
            }
        }
        
        cout << cnt << endl;
        
      
    }
}