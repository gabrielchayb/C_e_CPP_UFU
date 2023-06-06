#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(){
    int v[6] = {2,4,6,8,10,12};
    int qtd=0,encontrou=0,valor,meio;
    scanf("%d",&valor);
    int L = 0;
    int R = 5;
    while(L<=R){
        meio = (L+R)/2;
        if(v[meio]==valor){
            printf("Encontrou %d na posicao %d\n",valor,meio);
            encontrou = 1;
            break;
        }
        else if(v[meio]<valor) L = meio+1;
        else R = meio-1;
        qtd++;
    }
    printf("Numero de iteracoes: %d\n",qtd);
    if(!encontrou){
        printf("Valor nao foi encontrado\n");
    }
}