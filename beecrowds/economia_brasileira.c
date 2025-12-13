#include <stdio.h>

int main(){
    int q, qi,contN = 0;
    scanf("%d", &q);
    for(int i = 0; i < q; i++){
        scanf("%d", &qi);
        if(qi == 0) contN++;
    }
    if(contN > (q/2)) printf("%c\n", 'Y');
    else printf("%c\n", 'N');
    
    return 0;
}