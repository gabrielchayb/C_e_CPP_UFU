#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char str[200],str2[200];
    fgets(str,200,stdin);
    int tam = strlen(str);
    str[tam-1] = '\0';
    int i,j,a,qtd=0;
    scanf("%d %d", &i, &j);
    if(i>=j){
        for(a=i;a>=j;a--) str2[qtd++] = str[a];
    }
    else{
        for(a=i;a<=j;a++) str2[qtd++] = str[a];
    }
    printf("%s\n",str2);
}