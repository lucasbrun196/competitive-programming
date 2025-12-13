#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
    char s1[101], s2[101], ans = 0;  
    scanf("%s %s", s1, s2);
    for(int i = 0; i < strlen(s1); i++){
        s1[i] = tolower(s1[i]);
        s2[i] = tolower(s2[i]);
    }
    int cmp = strcmp(s1, s2);
    if(cmp > 0) ans = 1;
    else if(cmp < 0) ans = -1;
    printf("%d\n", ans);
    return 0;
}