#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char str1[200];
    gets(str1);
    int i;
    int tam = strlen(str1);
    for(i=0;i<tam;i++){
        if(str1[i]>='a'&&str1[i]<='z'){
            str1[i] -= 32;
        }
    }
    printf("%s\n",str1);
}