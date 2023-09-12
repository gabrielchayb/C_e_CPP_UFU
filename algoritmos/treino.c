#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define LARGURA 20
#define COMPRIMENTO 20

//caçadores de mitos OBI
int main(){
    int x,y,dia,mes,ano,intensidade;
    int raios=0; //quantos raios cairam
    int total=400; //quadrantes que nao foram atingidos por raios
    char *tempo; tempo = (char *) malloc(50); // ponteiro tipo char (1 byte) com 50 espaços na memória alocados
    int **m; // ponteiro que representa a matriz 
    m = (int **) malloc(LARGURA*sizeof(int *)); // criou o m como int e alocou 20*qtd de bytes que int ocupa (size of(int *))
    // int ** significa que é uma array bidimensional, ou seja, **
    for(int i=0;i<LARGURA;i++){
        m[i] = (int *) malloc(COMPRIMENTO*sizeof(int)); //posicao i da matriz (ou seja, a largura, linha i) recebe int * (uma dimensao) e aloca 20*qtd de bytes que int ocupa
        for(int j=0;j<COMPRIMENTO;j++) m[i][j]= 0; // percorremos a posicao j da matriz , e zera o ponteiro que representa a posicao da matriz;
    }
    while(1){
        printf("Coordenadas: ");    
        scanf("%d %d",&x,&y);
        printf("Data: ");
        scanf("%d/%d/%d",&dia,&mes,&ano);
        printf("Intensidade: ");
        scanf("%d",&intensidade); setbuf(stdin,NULL);
        printf("Condicoes do Tempo: ");
        fgets(tempo,50,stdin); setbuf(stdin,NULL);
        int tam = strlen(tempo);
        tempo[tam-1] = '\0';
        if(m[x][y]==1){
            printf("Um raio caiu duas vezes no mesmo lugar.\n");
            break;
        } 
        else m[x][y] = 1;
        raios++; total--;
        printf("Numero de raios que ja cairam na cidade: %d\n",raios);
        printf("Numero de regioes que nao foram afetadas por raio: %d\n",total);
        for(int i=0;i<LARGURA;i++){
            for(int j=0;j<COMPRIMENTO;j++){
                if(m[i][j]==0) printf("0");
                else printf("X");
            }
            printf("\n");
        } printf("\n");
}
}