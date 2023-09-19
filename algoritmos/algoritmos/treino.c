#include <stdio.h>
#include <stdlib.h>

int main() {
    int N; 
    printf("dimensao LIN e COL das matrizes X e Y: ");
    scanf("%d", &N);
    double **m1;
    double **m2;
    double **r;

    m1 = (double **)malloc(N * sizeof(double *));
    for (int i = 0; i < N; i++) {
        m1[i] = (double *)malloc(N * sizeof(double));
    }

    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            scanf("%lf", &m1[i][j]); // Usar %lf para double
        }
    }

    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            printf("%lf\n", m1[i][j]); // Usar %lf para double
        }
    }

    m2 = (double **)malloc(N * sizeof(double *));
    for (int i = 0; i < N; i++) {
        m2[i] = (double *)malloc(N * sizeof(double));
    }

    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            scanf("%lf", &m2[i][j]); // Usar %lf para double
        }
    }

    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            printf("%lf\n", m2[i][j]); // Usar %lf para double
        }
    }

    r = (double **)malloc(N * sizeof(double *));
    for (int i = 0; i < N; i++) {
        r[i] = (double *)malloc(N * sizeof(double));
    }

    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            r[i][j] = m1[i][j] + m2[i][j];
        }
    }

    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            printf("%lf\n", r[i][j]);
        }
    }

    // Libere a memória alocada
    for (int i = 0; i < N; i++) {
        free(m1[i]);
    }
    free(m1);

    for (int i = 0; i < N; i++) {
        free(m2[i]);
    }
    free(m2);

    for (int i = 0; i < N; i++) {
        free(r[i]);
    }
    free(r);

    return 0;
}