#include <stdio.h>

int main(){
    int k, n, w, aux = 0;
    scanf("%d %d %d", &k, &n, &w);
    while (w >= 1) aux += k*w--;
    printf("%d\n", aux <= n ? 0 : (aux - n));
    return 0;
}