#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//gabriel ribeiro filice chayb. nº matrícula: 12221BSI233


int main() {
    int A[10][5], B[5][10];
    for(int i = 0; i < 10; i++){
        for(int j = 0; j < 5; j++){
            scanf("%d", &A[i][j]);
        }
    }

    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 10; j++){
            B[i][j] = A[j][i];
        }
    }

    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 10; j++){
            printf("%d", B[i][j]);
        }
    }

    
}