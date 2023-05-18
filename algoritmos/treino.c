#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct pontos{
    int x, y, z;
};

typedef struct pontos pontos;

int main (){
    pontos v;
    scanf("%d %d %d", &v.x, &v.y, &v.z);
    printf("Distancia: %lf\n", sqrt(v.x*v.x + v.y*v.y + v.z*v.z));

}