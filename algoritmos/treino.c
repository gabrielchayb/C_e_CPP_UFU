#include <stdio.h>
#include <string.h>

int main() {
    char nome[] = "Joao Augusto";
    char *p = nome;

    int n = strlen(nome);

    for (int i = 0; i < n; i++) {
        printf("%c", *p);
        p++;
    }

    printf("\n");

    return 0;
}