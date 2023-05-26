#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//exercicio 10
struct data{
    int dia;
    int mes;
    int ano;
};

typedef struct data data;

int main(){
    int verifica;
    data d1,d2,aux;
    int meses[13] = {0,31,28,31,30,31,30,31,31,30,31,30,31};
    scanf("%d/%d/%d",&d1.dia,&d1.mes,&d1.ano); setbuf(stdin,NULL);
    scanf("%d/%d/%d",&d2.dia,&d2.mes,&d2.ano);
    //definir d1 como o menor possivel, caso n seja
    if(d1.dia + d1.mes*100 + d1.ano*10000 > d2.dia + d2.mes*100 + d2.ano*10000){
        aux = d1;
        d1 = d2;
        d2 = d1;
    }
    //enquanto d1 n chegar na data d2 (ou seja, d1!=d2), incrementa 1 dia e vai contando
    int total_dias=0;
    while(d1.dia + d1.mes*100 + d1.ano*10000!=d2.dia + d2.mes*100 + d2.ano*10000){
        total_dias++;
        if( (d1.ano%4==0 && d1.ano%100!=0) || (d1.ano%400==0) ){
            if(verifica==1){ //so pode passar uma vez para cada ano bissexto
                verifica=0; 
                total_dias++;
            }
        }
        if(d1.mes == 13){ //qnd ultrapassar limite meses 
            d1.mes = 1;
            d1.ano++;
            verifica=1;
        }
        if(d1.dia == meses[d1.mes]+1){ //qnd ultrapassar limite dias
            d1.dia = 1;
            d1.mes++;
        }
        d1.dia++;
    }
    printf("%d\n",total_dias);
}