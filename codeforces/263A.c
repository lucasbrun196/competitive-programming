#include <stdio.h>

int main(){

    int v, one_i, one_j, ans = 0;

    for(int i = 0; i < 5; i++)
        for(int j = 0; j < 5; j++){
            scanf("%d", &v);
            if(v==1){
                one_i = i; one_j = j;
            }
        }

    if(one_i>2)ans+=(one_i-2);
    else if(one_i < 2)ans+=(2-one_i);

    if(one_j>2)ans+=(one_j-2);
    else if(one_j<2)ans+=(2-one_j);
    printf("%d\n", ans);
    
        

    return 0;
}