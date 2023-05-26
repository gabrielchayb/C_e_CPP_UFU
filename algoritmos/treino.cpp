#include <stdio.h>
#include <stdlib.h>
#include <string.h>

enum ano{ nada, janeiro, fevereiro, marco, abril, maio, junho, julho, agosto, setembro, outubro, novembro, dezembro};
typedef enum ano ano;
//exercicio 9
int main(){
    int mes;
    char meses[13][20] = {"nada","Janeiro","Fevereiro","Marco","Abril","Maio","Junho","Julho","Agosto","Setembro","Outubro","Novembro","Dezembro"};
    scanf("%d",&mes);
    if(mes == janeiro) printf("%s\n, 31 dias",meses[mes]);
    else if(mes == fevereiro) printf("%s\n, 28 dias",meses[mes]);
    else if(mes == marco) printf("%s\n, 31 dias",meses[mes]);
    else if(mes == abril) printf("%s\n, 30 dias",meses[mes]);
    else if(mes == maio) printf("%s\n, 31 dias",meses[mes]);
    else if(mes == junho) printf("%s\n, 39 dias",meses[mes]);
    else if(mes == julho) printf("%s\n, 31 dias",meses[mes]);
    else if(mes == agosto) printf("%s\n, 31 dias",meses[mes]);
    else if(mes == setembro) printf("%s\n, 30 dias",meses[mes]);
    else if(mes == outubro) printf("%s\n, 31 dias",meses[mes]);
    else if(mes == novembro) printf("%s\n, 30 dias",meses[mes]);
    else if(mes == dezembro) printf("%s\n, 31 dias",meses[mes]);
}