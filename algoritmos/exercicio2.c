#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define INF 999999999

//nome: gabriel ribeiro filice chayb Nº Matrícula: 12221BSI233

struct aviao{
    char aeronave[200];
    int pot;
    int np;
    int carga;
};

typedef struct aviao aviao;

int main(){
    aviao v[10];
    aviao aux;
    int i,j;
    char nome[200];
    for(i=0;i<10;i++){
        gets(v[i].aeronave);
        setbuf(stdin,NULL);
        scanf("%d %d %d",&v[i].pot, &v[i].np, &v[i].carga);
        setbuf(stdin,NULL);
    }
    for(i=0;i<9;i++){
        for(j=1;j<10;j++){
            if(v[j].carga < v[i].carga){
                aux = v[i];
                v[i] = v[j];
                v[j] = aux;
            }
        }
    }
    int menor = INF;
    for(i=0;i<10;i++){
        if(v[i].np < menor){
            menor = v[i].np;
            strcpy(nome,v[i].aeronave);
        }
    }
    printf("%s\n",nome);
}