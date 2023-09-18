#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int M[3][3];
    int *p;

    for(int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            scanf("%f", &M[i][j]);
            p = &M[i][j];
            printf("%d", p);
        }
    }
}
