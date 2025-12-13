#include <stdio.h>

int main(){
    int n, k, ans = 0;
    scanf("%d %d", &n, &k);
    int vet[n];
    for(int i = 0; i < n; i++) scanf("%d", &vet[i]);
    for(int i = 0; i < n; i++) if(vet[i] != 0 && vet[i] >= vet[k-1]) ans++;
    printf("%d\n", ans);
    return 0;
}