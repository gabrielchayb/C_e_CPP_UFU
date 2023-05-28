#include <bits/stdc++.h>
using namespace std;

struct data{
    int dia, mes, ano;
};


typedef struct data data;
int main(){
    int m[13]={0,31,28,31,30,31,30,31,31,30,31,30,31}, contd=0, contm=0, conta=0;
    data d1, d2, aux;
    printf("insira a primeira data no formato 00/00/0000: ");
    scanf("%d/%d/%d", &d1.dia, &d1.mes, &d1.ano);
    printf("insira a segunda data no formato 00/00/0000: ");
    scanf("%d/%d/%d", &d2.dia, &d2.mes, &d2.ano);
    if(d1.ano!=d2.ano){
        if(d1.ano>d2.ano){
            aux=d1;
            d1=d2;
            d2=aux;
        }
    }
    else{
        if(d1.mes!=d2.mes){
            if(d1.mes>d2.mes){
            aux=d1;
            d1=d2;
            d2=aux;
            }
        }
        else{
            if(d1.dia!=d2.dia){
                if(d1.dia>d2.dia){
                aux=d1;
                d1=d2;
                d2=aux;
                }
            }
        }
    }
    aux=d1;
    if(aux.dia==29 && aux.mes==2){
        aux.dia--;
        contd--;
    }
    if(d2.dia==29 && d2.mes==2){
        d2.dia--;
        contd++;
    }
    while(aux.dia!=d2.dia || aux.mes!=d2.mes || aux.ano!=d2.ano){
          aux.dia++;
          contd++;
          if(aux.dia==28 && aux.mes==2 && aux.ano%4==0 && aux.ano%100!=0)contd++;
          if(aux.dia>m[aux.mes]){
              aux.dia=1;
              aux.mes++;
          }
          if(aux.mes>12){
              aux.dia=1;
              aux.mes=1;
              aux.ano++;
          }
          if(aux.dia==d1.dia && aux.mes!=d1.mes)contm++;
          if(aux.dia==d1.dia && aux.mes==d1.mes && aux.ano!=d1.ano){
              conta++;
          }
          
    }
    printf("total de dias de diferenca entre as datas: %d\n", contd);
    printf("total de meses de diferenca entre as datas: %d\n", contm);
    printf("total de anos de diferenca entre as datas: %d\n", conta);
}