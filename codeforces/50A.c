#include <stdio.h>


int main(){

    int n, m, ans = 0, b, l;
    scanf("%d %d", &n, &m);
    if(n > m){
        b = n;
        l = m;
    }else{
        b = m;
        l = n;
    }

    if(b%2==0){
        ans = (b / 2) * l;
    }else{
        b--;
        ans = (b / 2) * l;
        if(l%2==0) {
            ans+= l/2;
        }else{
            l--;
            ans+= l/2;
        }
    }
    


    printf("%d\n", ans);
    return 0;
}