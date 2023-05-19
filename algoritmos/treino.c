#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct ponto{
    int x,y;
};
typedef struct ponto ponto;

struct poligono{
    ponto v[100];
    int qtd; //contar quantos pontos o poligono utiliza
};

typedef struct poligono poligono;



int main(){
    poligono triangulo,retangulo;
    printf("Leitura Coordenadas Triangulo: ");
    int i;
    for(i=0;i<3;i++){ //leitura coordenadas: //{5,3} {1,1} {1,5} 
        scanf("%d %d",&triangulo.v[i].x,&triangulo.v[i].y);
    }
    printf("\nLeitura Coordenadas Retangulo: ");
    for(i=0;i<4;i++){ //leitura coordenadas: //{1,1} {1,3} {5,1} {5,3}
        scanf("%d %d",&retangulo.v[i].x,&retangulo.v[i].y);
    }
    printf("Coordenadas Triangulo: ");
    for(i=0;i<3;i++){
        printf("{%d,%d} ",triangulo.v[i].x,triangulo.v[i].y);
    }
    printf("\nCoordenadas Retangulo: ");
    for(i=0;i<4;i++){
        printf("{%d,%d} ",retangulo.v[i].x,retangulo.v[i].y);
    }
    
    printf("\n");
}