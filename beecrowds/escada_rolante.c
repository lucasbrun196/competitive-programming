#include <stdio.h>


int main(){
    
    int n, c, p, dif, ans;
    while(1){
        scanf("%d", &n);
        if(n == 0) break;
        ans = 0;
        for(int i = 0; i < n; i++){
            if(i == 0) scanf("%d", &p);
            else{
                scanf("%d", &c);
                dif = c - p;
                if(dif >= 10) ans+=10;
                else ans+=dif;
                p = c;
            }
        }
        printf("%d\n", (ans + 10));
    }
    return 0;
}