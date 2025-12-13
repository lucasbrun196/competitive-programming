#include <stdio.h>
#include <string.h>

int value_exist(char *tb, char v){
    while(*tb != '\0'){
        if(v == *tb) return 1;
        tb++;
    }
    return 0;
}


int main(){

    char s[101], tb[101];
    int ans = 0, cont_aux = 0;
    tb[0] = '\0';
    scanf("%s", s);

    for(int i = 0; i < strlen(s); i++){
        if(value_exist(tb, s[i]) == 0){
            tb[cont_aux] = s[i];
            cont_aux++;
            tb[cont_aux] = '\0';
            ans++;
        }
    }
    printf("%s\n", ans%2==0 ? "CHAT WITH HER!" : "IGNORE HIM!");

    

    return 0;
}