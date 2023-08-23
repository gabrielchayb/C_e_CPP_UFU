UTILIZANDO PONTEIROS PARA MODIFICAR O VALOR DAS VARIÁVEIS 
#include <bits/stdc++.h>
using namespace std;

int main(){
    int *p, *p2, *p3;
    int x=10, z;
    int y=18;
    p=&x;
    p2=p; //p2 vai apontar para o mesmo endereço de p, no caso endereço de x
    printf("endereço guardado em p %u\n", p);
    printf("endereço guardado em p2 %u\n", p2);
    p3=&y;//agora fiz p3 apontar para o endereço de y
    printf("endereço guardado em p3 %u\n", p3);
    int *p4=&z; //p4 apontar para z
    *p4=*p3+*p2; //z=y+x
    printf("endereço de z: %u\n", p4);
    printf("valor de z apos fazer a operacao: %d\n", z);
}


OPERAÇÕES COM PONTEIROS (DECREMENTAR E INCREMENTAR AS MEMÓRIAS)
#include <bits/stdc++.h>
using namespace std;

int main(){
    int *p;
    //p=p+i, se i for positivo incrementa, se i for negativo, decrementa
    printf("antes do incremento: %u\n", p);//0 pois não apontei para ninguém
    p++;
    printf("depois do incremento: %u\n", p);//4 pois incrementei, assim avança o número de bytes no tipo, no caso aqui é um int
    p++;
    printf("depois do incremento: %u\n", p);//8
    p--;
    printf("depois do decremento: %u\n", p);//4
    p=p+15;//4+15*4=64
    printf("depois do incremento em 15 posições: %u\n", p);//64
    p=p-16;
    printf("depois do decremento em 15 posições: %u\n", p);//volta para 0
    p--;
    printf("depois do decremento em 1 posição: %u\n", p);//4294967292
    p++;
    printf("depois do decremento em 15 posições: %u\n", p);//0
}


OPERAÇÕES COM PONTEIROS (PARA MODIFICAR OS VALORES DOS CONTEÚDOS)
#include <bits/stdc++.h>
using namespace std;

int main(){
    int *p;
    int x=10;
    p=&x;
    printf("valor de x antes de incrementar: %d\n", x);
    (*p)++; 
    /*
    tem que colocar entre parênteses, pois se não colocar
    vai primeiro avançar a posição de memória, para depois incrementar o contéudo
    *p++, portanto, está errado
    */
    printf("valor de x depois de incrementar: %d\n", x);
    (*p)--;
    printf("valor de x depois de decrementar: %d\n", x);
    (*p)=(*p)*15;
    printf("valor de x depois de multiplicar por 15: %d\n", x);
    (*p)=(*p)/2;
    printf("valor de x depois de dividir por 2: %d\n", x);
}


OBS: É POSSÍVEL USAR OPERADORES RELACIONAIS COM PONTEIROS 

PONTEIROS GENÉRICOS
#include <bits/stdc++.h>
using namespace std;

int main(){
    void *p; 
    /*
    PONTEIROS GENÉRICOS
    podem apontar para qualquer tipo
    incrementar e decrementar, só avança ou volta 1 posição
    */
    //para burlar isso basta o comando de conversão
    printf("endereço de memória atual: %u\n", p);// 0, pois não apontei para ninguém
    p++;
    printf("endereço de memória atual: %u\n", p);
    p=p+sizeof(int); //se quiser avançar como um int
    printf("endereço de memória atual: %u\n", p);//5, pois avancei como int
    int x=10;
    p=&x;
    printf("endereço de memória da variavel x: %u\n", p);
    printf("valor da variavel x usando o ponteiro generico: %d\n", *(int *)p); //se colocar só *p vai bugar, pois o ponteiro é generico
    (*(int *)p)++; //incrementando o valor de x
    printf("valor da variavel x usando o ponteiro generico: %d\n", *(int *)p);
    double y=1.95;
    p=&y;
    printf("endereço da variavel y: %u\n", p);
    printf("valor da variavel y usando o ponteiro generico: %.2lf\n", *(double *)p); //só trocar para double que funciona
}


PONTEIROS E ARRAYS
#include <bits/stdc++.h>
using namespace std;

int main(){
    /*
    PONTEIROS E ARRAYS POSSUEM UMA LIGAÇÃO FORTE;
    QUANDO CRIAMOS UM VETOR, ELE INFORMA AO COMPUTADOR UMA CERTA  QUANTIDADE DE MEMÓRIA QUE SERÁ USADA E NOS DEVOLVE UM PONTEIRO PARA O INICIO DESSA SEQUÊNCIA
    */
    int v[4];
    //o nome do array sem indice é o ponteiro do inicio dessa sequencia
    for(int i=0; i<4; i++) printf("endereço de v[%d]: %u\n", i, &v[i]);
    printf("endereço usando somente v: %u\n", v);// vai ser igual a v[0] pois é o inicio, não é necessário usar nem sequer &
    int *p=v;
    for(int i=0; i<4; i++){
    printf("endereço de v[%d] usando um ponteiro auxiliar: %u\n", i, (p+i)); //endereço v[i] é equivalente a (p+i)
    //se quiser ver o valor basta *(p+i)
    }
    int *k;
    k=v;
    for(int i=0; i<4; i++){
    printf("valor de v[%d] usando um ponteiro auxiliar k com colchete: %u\n", i, k[i]); //k[i] é equivalente a *(k+i)
    printf("endereço de v[%d] usando um ponteiro auxiliar k com colchete: %u\n", i, &k[i]);
    }
    printf("endereço de k: %u\n", &k);
}


PONTEIRO APONTANDO PARA OUTRO PONTEIRO 
#include <stdio.h>
#include <stdlib.h>
int main() {
    int x = 10;
    int *ptr1 = &x; // Ponteiro para x
    int **ptr2 = &ptr1; // Ponteiro para ptr1

    printf("Valor de x: %d\n", x);
    printf("Valor apontado por ptr1: %d\n", *ptr1);
    printf("Valor apontado por ptr2 (através de ptr1): %d\n", **ptr2); //usando dessa forma eu acesso o valor de ptr1, que é o endereço de x, após isso eu aponto para esse endereço e chego no valor de x
    printf("\n");
    printf("Endereço de x: %u\n", &x);
    printf("Endereço de ptr1: %u\n", &ptr1);
    printf("Endereço de ptr2: %u\n", &ptr2);
    printf("\n");
    printf("Endereço apontado por ptr1: %u\n", ptr1);
    printf("Endereço apontado por ptr2: %u\n", ptr2); //ptr2 guarda o endereço do outro ponteiro ptr1
    
    printf("Valor apontado por ptr2: %u\n", *ptr2); //justamente o endereço de x, que é o valor guardado em ptr1
}


PONTEIROS E STRUCTS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
    char nome[50]="João";
    int idade=44;
    double altura=2.00;
}Pessoa ;

int main() {
    Pessoa pessoa1[3];
    Pessoa *ptr1;
    ptr1=pessoa1;
    strcpy(ptr1[1].nome,"José");
    strcpy(ptr1[2].nome,"Maria");
    (*(ptr1+1)).idade=18;
    (*(ptr1+2)).idade=24;
    (ptr1+2)->altura=1.60;
    (ptr1+1)->altura=1.95;
    printf("Tamanho da struct Pessoa: %lu bytes\n", sizeof(Pessoa)); //tamanho, nem sempre vai ser a soma dos tipos, pois tem o padding
    //preenchimento para melhorar a eficiência, onde eles adequam jogando bytes para que um tipo esteja em um multiplo do sizeof do seu tipo
    printf("Tamanho do vetor struct Pessoa pessoa1: %lu bytes\n", sizeof(pessoa1));//3*64=192
    printf("Endereço de pessoa1: %u\n", ptr1);
    printf("\n");
    for(int i=0; i<3; i++){
    printf("Endereço de pessoa1[%d]: %u\n", i, (ptr1+i));
    printf("Valor do membro nome: %s\n", (ptr1+i)->nome); //EQUIVALENTES
    printf("Valor do membro idade: %d\n", (*(ptr1+i)).idade);
    printf("Valor do membro altura: %.2lf\n", ptr1[i].altura);
    }
    printf("\n");
    for(int i=0; i<3; i++){
    printf("Endereço de pessoa1[%d]: %u\n", i, (ptr1+i));
    printf("Endereço do membro nome: %u\n", &((ptr1+i)->nome)); //EQUIVALENTES
    printf("Endereço do membro idade: %u\n", &((*(ptr1+i)).idade));
    printf("Endereço do membro altura: %u\n", &(ptr1[i].altura));
    }
}