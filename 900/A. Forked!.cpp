#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin >> t;
    
    while(t--){
        int a , b , x1 , y1 , x2 , y2;
        cin >> a >> b >> x1 >> y1 >> x2 >> y2;
        
       set<pair<int , int>> king , queen;
       int dx[4] = {1 , -1 , -1 , 1};
       int dy[4] = {1 , 1 , -1 , -1};
       for(int j = 0; j < 4; j++){
           king.insert({x1 + a*dx[j] , y1 + b*dy[j]});
           king.insert({x1 + b*dx[j] , y1 + a*dy[j]});
           
           queen.insert({x2 + a*dx[j] , y2 + b*dy[j]});
           queen.insert({x2 + b*dx[j] , y2 + a*dy[j]});
           
       }
       
       int ans = 0;
       
       for(auto pos : king){
           if(queen.find(pos) != queen.end()){
               ans++;
           }
       }
       
       cout << ans << endl;
    }
}