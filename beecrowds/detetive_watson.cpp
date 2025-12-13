#include <bits/stdc++.h>

using namespace std;

int main(){

    int n, ni, m, sm, ans, im;
    int vet[1000];
    while(true){
        cin >> n;
        if(n == 0) break;
        m = sm = 0;
        for(int i = 0; i < n; i++){
            cin >> ni;
            vet[i] = ni;
        }
        if(vet[0] > vet[1]){
            im = 0;
            m = vet[0];
            sm = vet[1];
            ans = 1;
        }else{
            im = 1;
            m = vet[1];
            sm = vet[0];
            ans = 0;
        }
        for(int i = 2; i < n; i++){
            if(vet[i] > m){
                sm = m;
                m = vet[i];
                ans = im;
                im = i;
            }else if(vet[i] > sm){
                sm = vet[i];
                ans = i;
                
            }
        }

        cout << ans+1 << endl;


        

    }

    return 0;
}