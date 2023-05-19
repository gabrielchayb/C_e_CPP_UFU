#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i, j;
    int ehPalindromo = 1;

    printf("Digite uma palavra ou frase: ");
    gets(str);

    // Verificando se é um palíndromo
    for (i = 0, j = strlen(str) - 1; i < j; i++, j--) {
        if (str[i] != str[j]) {
            ehPalindromo = 0;
            break;
        }
    }

    if (ehPalindromo) {
        printf("%s é um palíndromo.\n", str);
    } else {
        printf("%s não é um palíndromo.\n", str);
    }

    return 0;
}