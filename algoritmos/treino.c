#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(){
    while(1){
        char str[100];
        double valor;
        printf("Mercadoria: ");
        fgets(str,100, stdin); //string vai ficar com \n
        int tam = strlen(str);
        str[tam-1] = '\0';
        if(strcmp(str,"sair")==0) break;
        printf("Valor da Mercadoria: ");
        scanf("%lf",&valor);
        printf("Nome da Mercadoria: %s\nValor Total da Mercadoria: %.2lf R$\n",str,valor);
        printf("Valor do Desconto: %.2lf R$\n",valor*0.1);
        printf("Valor Pago a Vista: %.2lf R$\n",valor - valor*0.1);
        setbuf(stdin,NULL);
    }
}