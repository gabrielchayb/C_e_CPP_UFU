#include <bits/stdc++.h>
using namespace std;

struct atleta{
    char nome[50], esporte[100];
    int idade;
    double peso, altura;
};

typedef struct atleta atleta;

int main (){
    double alto=-100;
    int velho=-100;
    atleta v[5];
    char maisalto[50], maisvelho[50];
    for(int i=0; i<5; i++){
        setbuf(stdin,NULL);
        gets(v[i].nome);
        setbuf(stdin,NULL);
        gets(v[i].esporte);
        scanf("%d %lf %lf", &v[i].idade, &v[i].peso, &v[i].altura);
        if(v[i].altura>alto){
            for(int j=0; j<50; j++){
                maisalto[j]='\0';
            }
            alto=v[i].altura;
            strcpy(maisalto,v[i].nome);
        }
        if(v[i].idade>velho){
            for(int j=0; j<50; j++){
                maisvelho[j]='\0';
            }
            velho=v[i].idade;
            strcpy(maisvelho,v[i].nome);
        }
    }
    for(int i=0; i<5; i++){
        printf("o atleta %s pratica o esporte %s e tem %d de idade, pesa %.3lf kg e tem %.2lf m de altura\n", v[i].nome, v[i].esporte, v[i].idade, v[i].peso, v[i].altura);
    }
    printf("o atleta mais velho eh %s\n", maisvelho);
    printf("o atleta mais alto eh %s\n", maisalto);
    
}