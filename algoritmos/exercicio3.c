#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//nome: gabriel ribeiro filice chayb Nº Matrícula: 12221BSI233

struct ponto{
    int x,y;
};
typedef struct ponto ponto;

struct poligono{
    ponto coor;
    ponto *proximo;
};
typedef struct poligono poligono;

int main(){
    poligono triangulo[3],retangulo[4],pentagono[5];
    triangulo[0].coor.x = 5;
    triangulo[0].coor.y = 3;
    triangulo[1].coor.x = 1;
    triangulo[1].coor.y = 1;
    triangulo[2].coor.x = 1;
    triangulo[2].coor.y = 5;
    
    retangulo[0].coor.x = 1;
    retangulo[0].coor.y = 1;
    retangulo[1].coor.x = 1;
    retangulo[1].coor.y = 3;
    retangulo[2].coor.x = 5;
    retangulo[2].coor.y = 1;
    retangulo[3].coor.x = 5;
    retangulo[3].coor.y = 3;

    pentagono[0].coor.x = 2;
    pentagono[0].coor.y = 1;
    pentagono[1].coor.x = 4;
    pentagono[1].coor.y = 1;
    pentagono[2].coor.x = 5;
    pentagono[2].coor.y = 3;
    pentagono[3].coor.x = 3;
    pentagono[3].coor.y = 5;
    pentagono[4].coor.x = 1;
    pentagono[4].coor.y = 3;
}