#include<iostream>
#include<vector>

using namespace std;

void solve(){
    int n;
    cin >> n;

    vector<int> vec(n);
    vector<pair<int , int>> ans;
    vector<int> vis(n , 0);

    for(int i = 0; i < n; i++){
        cin >> vec[i];
    }

    for(int i = 0; i < n; i++){
        
        for(int j = 0; j < n; j++){
            if(!vis[j] && (vec[i] != vec[j])){
                ans.push_back({i+1 , j+1});
                vis[i] = 1;
                vis[j] = 1;
            }
        }
        if(ans.size() == n-1) break;
    }

    if(ans.size() != n-1){
        cout << "NO" << endl;
        for(int i = 0; i < ans.size(); i++){
            cout << ans[i].first << " " << ans[i].second << endl;
        }
    }
    else{
        cout << "YES" << endl;
        for(int i = 0; i < n-1; i++){
            cout << ans[i].first << " " << ans[i].second << endl;
        }
    }

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
