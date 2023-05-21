#include <bits/stdc++.h>
using namespace std;

int main() {
    // Definir as matrizes A e B
    int A[3][2];
    int B[2][4];

    // Ler a matriz A
    std::cout << "Digite os elementos da matriz A (3x2):" << std::endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 2; j++) {
            std::cout << "A[" << i << "][" << j << "]: ";
            std::cin >> A[i][j];
        }
    }

    // Ler a matriz B
    std::cout << "Digite os elementos da matriz B (2x4):" << std::endl;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 4; j++) {
            std::cout << "B[" << i << "][" << j << "]: ";
            std::cin >> B[i][j];
        }
    }

    // Verificar se as matrizes podem ser multiplicadas
    if (2 != 2) {
        std::cout << "As matrizes fornecidas não podem ser multiplicadas." << std::endl;
        return 0;
    }

    // Definir a matriz resultado C
    int C[3][4] = {0};

    // Multiplicar as matrizes A e B
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            for (int k = 0; k < 2; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    // Imprimir a matriz resultado C
    cout << "A multiplicacao das matrizes A e B resulta na matriz C (3x4):" << std::endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            cout << C[i][j] << " ";
        }
        cout << std::endl;
    }

    return 0;
}