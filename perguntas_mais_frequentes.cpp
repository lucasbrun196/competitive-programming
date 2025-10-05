#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, k, ni, ans;
    map<int, int> mp;
    while(true){
        cin >> n >> k;
        if(n == 0 && k == 0) break;
        ans = 0;
        for(int i = 0; i < n; i++){
            cin >> ni;
            if(mp.find(ni) == mp.end()) mp[ni] = 1;
            else mp[ni]++;
            
        };
        for(auto p : mp) if(p.second >= k) ans++;
        cout << ans << endl;
        mp.clear();

    }
    return 0;
}