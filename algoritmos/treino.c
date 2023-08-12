#include <stdio.h>
#include <stdlib.h> 

int main(){
    int idade;
    char nome[10] = "Maria";
    double peso, altura;
    int casada;
    float grau_miopia[1];
    unsigned int tamanho_total;

    altura = 1.65;
    peso = 70; 
    casada = 0; //false
    grau_miopia[0] = 2.75; //olho esquerdo 
    grau_miopia[1] = 3; // olho direito

    tamanho_total = sizeof(nome) + sizeof(altura) + sizeof(peso) + sizeof(casada) + sizeof(grau_Miopia) \
    + sizeof(idade) + sizeof(tamanho_total);

    printf(tamanho_total);


}