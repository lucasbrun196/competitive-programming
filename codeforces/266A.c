#include <stdio.h>
#include <stdlib.h>

int main(){
    int n, i, ans = 0;
    scanf("%d", &n);
    char vet[n];
    scanf("%s", vet);
    for(i = 1; i < n; i++)
        if(vet[i] == vet[i-1]) ans++;
    printf("%d\n", ans);
    
    return 0;
}