#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//gabriel ribeiro filice chayb. nº matrícula: 1221BSI233


int main() {
    char str[200], pal[200];
    gets(str);
    setbuf(stdin, NULL);
    strcpy(pal, str);
    strrev(pal);
    if(strcmp(str,pal) == 0){
        printf("eh um palindromo");
    }
    else{
        printf("nao eh um palindromo");
    }
}
