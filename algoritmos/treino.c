#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char str1[20];
    gets(str1);
    for(int i = strlen(str1)-1; i>=0; i--){
        printf("%c", str1[i]);
    }
    printf("\n");
}