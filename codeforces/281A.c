#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(){

    char *str = NULL, c;
    size_t str_size = 0;
    while(1){
        scanf("%c", &c);
        str = realloc(str, str_size+2);
        if(!str){
            free(str);
            return 1;
        }
        if(c == '\n'){  
            *(str+str_size) = '\0';
            break;
        }
        *(str+str_size++) = c;
    }
    *(str) = toupper(*(str));    
    printf("%s\n", str);
    free(str);
    return 0;
}