#include <bits/stdc++.h>
using namespace std;

//Questao 1
struct pessoa{
    char nome[50], endereco[100];
    int idade;
};

typedef struct pessoa pessoa;

int main (){
    pessoa v[5];
    for(int i=0; i<5; i++){
        setbuf(stdin,NULL);
        gets(v[i].nome);
        setbuf(stdin,NULL);
        gets(v[i].endereco);
        scanf("%d", &v[i].idade);
    }
    for(int i=0; i<5; i++){
        printf("a pessoa %s mora no endereco %s e tem %d de idade\n", v[i].nome, v[i].endereco, v[i].idade);
    }
}