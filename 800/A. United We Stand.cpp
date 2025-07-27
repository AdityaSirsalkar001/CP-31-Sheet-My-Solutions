#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> b , c;
       map <int , int> cnt;
        int max = 0;
        for(int i = 0; i < n; i++){
            int temp;
            cin >> temp;
            cnt[temp]++;
            
            if(temp > max){
                max = temp;
            }
        }
        
        if(cnt.size() == 1){
            cout << "-1" << endl;
        }
        else{
            for(auto &entry : cnt){
                if(entry.first == max){
                    while(entry.second--){
                        c.push_back(entry.first);
                    }
                }
                else{
                    while(entry.second--){
                        b.push_back(entry.first);
                }
            }
            }
            cout << b.size() << " " << c.size() << endl;
            for(int i = 0; i < b.size(); i++){
                cout << b[i] << " ";
            }
            cout << endl;
             for(int i = 0; i < c.size(); i++){
                cout << c[i] << " ";
            }
            cout << endl;
        
     
    }
    
}

}