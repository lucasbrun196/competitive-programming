#include <stdio.h>

int main(){
    int x;
    scanf("%d", &x);
    x = (x/5)+(x%5!=0);
    printf("%d\n", x);
    return 0;
}