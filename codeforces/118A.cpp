#include <bits/stdc++.h>

using namespace std;

const string vowels = "aoyeui";

int main(){
    string str, str_cp;
    int flag;
    cin >> str;
    for(int i = 0; i < str.size(); i++){
        flag = 0;
        str[i] = tolower(str[i]);
        for(int j = 0; j < vowels.size(); j++){
            if(str[i] == vowels[j]){
                flag = 1;
                break;
            }

        }
        if(!flag) str_cp.push_back(str[i]); 
    }
    for(int i = 0; i < str_cp.size(); i++) cout << "." << str_cp[i];    
    
}