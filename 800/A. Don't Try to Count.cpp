#include <bits/stdc++.h>
using namespace std;

bool fun(string word , string sub){
    
    if(word.find(sub) != string::npos){
        return true;
    }
    else return false;
}

int main() {

    int t;
    cin >> t;
    while(t--){
        int n , k;
        cin >> n >> k;
        
        string l;
        cin >> l;
        
        string word;
        cin >> word;
        
        string temp = l;
        int cnt = 0;
        while(!fun(l , word) && l.size() < (2*word.size()+temp.size())){
            l += l;
            cnt++;
        }
              if(fun(l, word)){
            cout << cnt << endl;
        } else {
            cout << -1 << endl;
        }
        
    }
}