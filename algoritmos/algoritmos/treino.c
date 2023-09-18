#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int N; 
    printf("digite o tamanho do vetor:");
    scanf("%d", &N);
    int *v;
    v = (int *) malloc(N*sizeof(int));
    for(int i = 0; i < N; i++){
        scanf("%d", &v[i]);
    }
    for(int i = 0; i < N; i++){
        printf("%d", v[i]);
    }

    free(v);
    
}
