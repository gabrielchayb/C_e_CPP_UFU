#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct ret{
    int x, y;
};

typedef struct ret ret;

int main (){
    pontos inf_dir, novo, sup_esq;
    scanf("%d %d", &sup_esq.x, &sup_esq.y);
    scanf("%d %d", &inf_dir.x, &inf_dir.y);
    scanf("%d %d", &novo.x, &novo.y);
    if(novo.x > sup_esq.x && novo.x < inf_dir.x && novo.y >= inf_dif.y && novo.y <= sup_esq.y){
        printf("esta dentro");
    }
    else(){
        printf("esta fora");
    }

    
    

    
    


}