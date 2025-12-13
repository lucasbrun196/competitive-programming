#include <bits/stdc++.h>

using namespace std;

string s;

int toNumber(int start, int end){
    string aux;
    for(int i = end; i >= start; i--) aux.push_back(s[i]);
    return stoi(aux);
}

int main(){
    int plus_p, equal_p, a, b, c;
    while(cin >> s){
        if(s == "0+0=0"){
            cout << "True\n";
            break;
        }
        plus_p = s.find('+');
        equal_p = s.find('=');
        if((toNumber(0, plus_p-1) + toNumber(plus_p+1, equal_p-1)) == toNumber(equal_p+1, s.size()-1)) cout << "True\n";
        else cout << "False\n";
        
    }
    return 0;
}