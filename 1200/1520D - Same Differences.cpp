#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

void solve(){
    long long n;
    cin >> n;
    vector<long long> vec(n);

    for(int i = 0; i < n; i++){
        cin >> vec[i];
    }

    long long ans = 0;
    vector<long long> presum(n , 0);
    
    for(int i = 0; i < n; i++){
        presum[i] = vec[i] - i;
    }

    // for(int i = 0; i < n; i++){
    //     for(int j = i+1; j < n; j++){
    //         if(vec[j] - vec[i] == j - i){
    //             ans++;
    //         }
    //     }
    // }

    // for(int i = 0; i < n-1; i++){
    //     int left = i+1;
    //     int right = n-1;

    //     while(left < right){
    //         int mid = (left + right)/2;
    //         int target = vec[i] + (mid - i);

    //         if(target == vec[mid]){
    //             ans++;
    //         }
    //         else if(target < vec[mid]){
    //             right = mid;
    //         }
    //         else left = mid;
    //     }
    // }

    unordered_map <long long , long long> mp;
    for(auto val : presum){
        mp[val]++;
    }

    for(auto it : mp){
        long long freq = it.second;

        long long pairs = (freq * (freq-1))/2;
        ans +=  pairs;
    }


    cout << ans << endl;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}
