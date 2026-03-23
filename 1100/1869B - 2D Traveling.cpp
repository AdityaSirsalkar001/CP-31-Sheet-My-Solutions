#include<bits/stdc++.h>
using namespace std;

unsigned long long Distance(vector<vector<unsigned long long>> &city , int i , int j){
    unsigned long long ans = llabs(city[i][0] - city[j][0]) + 
                    llabs(city[i][1] - city[j][1]);
    return ans;
}

void solve(){
   int n , k;
   int a , b;
   cin >> n >> k >> a >> b;
   a--;
   b--;
   
   vector<vector<unsigned long long>> city(n , vector<unsigned long long>(2));
   for(int i = 0; i < n; i++){
        cin >> city[i][0] >> city[i][1];
   }
  unsigned long long start = LLONG_MAX, end = LLONG_MAX;
   for(int i = 0; i < k; i++){
       unsigned long long StartDis = Distance(city , a , i);
       if(StartDis < start){
           start = StartDis;
       }
       
       unsigned long long EndDis = Distance(city , b , i);
       if(EndDis < end){
           end = EndDis;
       }
   }
   
   unsigned long long ans = Distance(city , a , b);
   ans = min(ans , start + end);
   cout << ans << endl;
   return;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}
