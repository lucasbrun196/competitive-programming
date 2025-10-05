#include <bits/stdc++.h>

using namespace std;

string sumDigits(string x){
    int sum = 0;
    for(int i = 0; i < x.size(); i++) sum += x[i] - '0';
    return to_string(sum);

}

int main(){
    string x1, x2;
    int ans;
    while(true){
        cin >> x1 >> x2;
        if(x1 == "0" && x2 == "0") break;
        while(x1.size() > 1) x1 = sumDigits(x1);
        while(x2.size() > 1) x2 = sumDigits(x2);
        ans = 0;
        if(x1 > x2) ans = 1;
        else if(x2 > x1) ans = 2;
        cout << ans << endl;
    }
    return 0;
}