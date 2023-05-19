#include <stdio.h>
#include <string.h>

int main() {
    char M[20][30];
    char menor[] = {"zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz"};
    for(int i = 0; i < 5; i++){
        gets(M[i]);
    }

    for(int i = 0; i < 5; i++){
        if(strcmp(M[i],menor)< 0){
            strcpy(menor, M[i]);        }

    }

    printf("%s", menor);
}