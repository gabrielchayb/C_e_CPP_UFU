#include <bits/stdc++.h>
using namespace std;

struct atleta{
    char nome[50], esporte[100];
    int idade;
    double peso, altura;
};

typedef struct atleta atleta;

int main (){
    atleta v[5];
    atleta aux;

    for(int i=0; i<5; i++){
        setbuf(stdin,NULL);
        gets(v[i].nome);
        setbuf(stdin,NULL);
        gets(v[i].esporte);
        scanf("%d %lf %lf", &v[i].idade, &v[i].peso, &v[i].altura);
    }

    for(int i = 0; i < 4; i++){
        for(int j = i+1; j < 5; j++){
            if(v[i].altura > v[j].altura){
                aux = v[i];
                v[i] = v[j];
                v[j] = aux;
            }
        }
    }

    for(int i = 0; i < 5; i++){
        printf("%d", &v[i].altura)
    }
}