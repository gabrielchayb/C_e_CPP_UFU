#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct ret{
    int x, y;
};

typedef struct ret ret;

int main (){
    pontos inf_dir, sup_dir, inf_esq, sup_esq;
    scanf("%d %d", &sup_esq.x, &sup_esq.y);
    scanf("%d %d", &inf_dir.x, &inf_dir.y);
    int DX = sup_esq.x - inf_dir.x;
    int DY = sup_esq.y - inf_dir.y;
    double diagonal = sqrt(DX*DX+DY*DY);
    printf("Comprimento diagonal: %lf", diagonal);
    int b,h;
    for(i=1, i<=diagonal, i++){
        for(j+1, j <=diagonal, j++){
            if(i*i + j*j = diagonal*diagonal){
                b = i;
                h = j;
                verifica = 1;
                break;
            }
        }
        if(verifica=1) break;
    }

    printf("Area %d:", b*h);
    printf("Perimetro %d:", b*2+h*2);
    printf("Diagonal %d:", diagonal;)
    

    
    


}