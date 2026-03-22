#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;
    vector<long long> nums(n);
    map<long long , vector<long long>> mp;
    for(int i = 0; i < n; i++){
        cin >> nums[i];
        mp[nums[i]].push_back(i);
    }
    vector<long long> copy = nums;
    sort(nums.begin() , nums.end());
   long long int sum = 0;
    long long int j = 1;
    int k = 0;
    for(int i = n-1; i >= 0 ; i--){
        if(k == 0){
            int size = mp[nums[i]].size();
            // ans[j] = mp[nums[i]][size - 1];
            
      
            copy[mp[nums[i]][size-1]] = j;
            mp[nums[i]].pop_back();
            sum += nums[i] *  j;
            k++;
        }
        else {
             int size = mp[nums[i]].size();
            // ans[-j] = mp[nums[i]][size - 1];
            // mp[nums[i]].pop_back();
           
            sum += nums[i]*j;
                copy[mp[nums[i]][size-1]] = -j;
                mp[nums[i]].pop_back();
            j++;
            k -= 1;
        }
    }

    cout << 2*sum << endl;
    cout << 0 << " ";
    for(int i = 0; i < n; i++){
        cout << copy[i] << " ";
    }
    cout << endl;
 
    
}
int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}
