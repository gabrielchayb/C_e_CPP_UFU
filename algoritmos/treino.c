#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Nome: Leandro Silva Pina de Campos
//Matrícula: 12221bsi202
int main(){
    char str1[200],str2[200],str3[200];
    gets(str1); //casas i=2 j=1
    setbuf(stdin,NULL);
    gets(str2); //as
    setbuf(stdin,NULL);
    int tam1 = strlen(str1);
    int tam2 = strlen(str2);
    int i,qtd=0,j,k=0,w;
    for(i=tam2-1;i<tam1;i++){
        w=0;
        for(j=k;j<=i;j++){
            str3[w++] = str1[j];
        }
        k++;
        if(strcmp(str3,str2)==0) qtd++;
    }
    printf("%d\n",qtd);
}