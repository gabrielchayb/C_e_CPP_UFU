#include <stdio.h>
#include <string.h>

int main() {
    char M[20] = "Joao Paulo";
    char N[20] = "Bento";
    char R[20] = "Francisco";

    if(strcmp(M,N) == 1 && strcmp(M,R)== -1){
         printf("%s %s %s", N, R, M);
    }
    

}