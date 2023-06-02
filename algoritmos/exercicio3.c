#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// nome: gabriel ribeiro filice chayb nº matrícula: 12221BSI233

struct ponto{
    int x,y;
};
typedef struct ponto ponto;

struct poligono{
    ponto VERTICES[100];
    int QTDE;
};
typedef struct poligono poligono;

int main(){
    poligono triangulo,retangulo,pentagono;
    int i;
    triangulo.QTDE=0; retangulo.QTDE=0; pentagono.QTDE=0;
    printf("Insira as coordenadas do Triangulo:\n");
    for(i=0;i<3;i++){ 
        scanf("%d %d",&triangulo.VERTICES[i].x,&triangulo.VERTICES[i].y);
        triangulo.QTDE += 1;
    }
    printf("Insira as coordenadas do Retangulo:\n");
    for(i=0;i<4;i++){ 
        scanf("%d %d",&retangulo.VERTICES[i].x,&retangulo.VERTICES[i].y);
        retangulo.QTDE += 1;
    }
    printf("Insira as coordenadas do Pentagono:\n");
    for(i=0;i<5;i++){ 
        scanf("%d %d",&pentagono.VERTICES[i].x,&pentagono.VERTICES[i].y);
        pentagono.QTDE += 1;
    }
    printf("O numero de pontos efetivamente presentes no triangulo sao %d.",triangulo.QTDE);
    printf("\nCoordenadas Triangulo: ");
    for(i=0;i<3;i++){
        printf("{%d,%d} ",triangulo.VERTICES[i].x,triangulo.VERTICES[i].y);
    }
    printf("\nO numero de pontos efetivamente presentes no retangulo sao %d.",retangulo.QTDE);
    printf("\nCoordenadas Retangulo: ");
    for(i=0;i<4;i++){
        printf("{%d,%d} ",retangulo.VERTICES[i].x,retangulo.VERTICES[i].y);
    }
    printf("\nO numero de pontos efetivamente presentes no pentagono sao %d.",pentagono.QTDE);
    printf("\nCoordenadas Pentagono: ");
    for(i=0;i<5;i++){
        printf("{%d,%d} ",pentagono.VERTICES[i].x,pentagono.VERTICES[i].y);
    }
    
}