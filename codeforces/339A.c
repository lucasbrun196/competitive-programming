#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void bubble_sort(int *vet, int size){
    int i, j, aux, changed;
    for(i = 0; i < size-1; i++){
        changed = 0;
        for(j = 0; j < size-i-1; j++){
            if(*(vet+j) > *(vet+j+1)){
                aux = *(vet+j);
                *(vet+j) = *(vet+j+1);
                *(vet+j+1) = aux;
                changed = 1;
            }
        }
        if(changed == 0) return;
    }
}

int main(){
    char *str = NULL, *token = NULL, *end;
    char c;
    int *vet = NULL, cont_aux = 0, i;
    size_t str_size = 0, vet_size;
    while (1){
        scanf("%c", &c);
        str = (char*) realloc(str, str_size+2);
        if(!str){
            free(str);
            return 1;
        }
        if(c == '\n'){
            *(str+str_size) = '\0';
            break;
        }
        *(str+str_size) = c;
        str_size++;
    }
    vet_size = (str_size+1) / 2;
    vet = (int*) malloc(vet_size*sizeof(int));
    if(!vet){
        free(str);
        free(vet);
        return 2;
    }
    token = strtok(str, "+");
    do{
        *(vet+cont_aux) = (int) strtol(token, &end, 10); 
        cont_aux++;
    } while ((token = strtok(NULL, "+")));

    bubble_sort(vet, cont_aux);
    for(i = 0; i < cont_aux; i++){
        printf("%d", *(vet+i));
        if(i != cont_aux-1)
            printf("+");
    }
    printf("\n");
        
    free(vet);
    free(str);    
    return 0;
}