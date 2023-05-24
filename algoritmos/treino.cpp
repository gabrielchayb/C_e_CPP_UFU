#include <bits/stdc++.h>
using namespace std;
// Função para calcular o determinante de uma matriz
double calcularDeterminante(const vector<vector<double>>& matriz) {
    int n = matriz.size();
    // Caso base para matriz 1x1
    if (n == 1) {
        return matriz[0][0];
    }

    // Caso base para matriz 2x2
    if (n == 2) {
        return matriz[0][0] * matriz[1][1] - matriz[0][1] * matriz[1][0];
    }

    double determinante = 0.0;

    // Iterar sobre a primeira linha da matriz
    for (int j = 0; j < n; j++) {
        // Criar uma submatriz excluindo a primeira linha e a coluna j
        vector<vector<double>> submatriz(n - 1, vector<double>(n - 1));
        for (int i = 1; i < n; i++) {
            for (int k = 0; k < n; k++) {
                if (k < j) {
                    submatriz[i - 1][k] = matriz[i][k];
                } else if (k > j) {
                    submatriz[i - 1][k - 1] = matriz[i][k];
                }
            }
        }

        // Calcular o cofator e somar ao determinante
        double cofator = matriz[0][j] * calcularDeterminante(submatriz);
        determinante += (j % 2 == 0) ? cofator : -cofator;
    }

    return determinante;
}

int main() {
    int n;
    //cin >> n;
    n=3;
    // Criar a matriz
    vector<vector<double>> matriz(n, vector<double>(n));

    // Preencher a matriz
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> matriz[i][j];
        }
    }

    // Calcular e imprimir o determinante
    long long int determinante = calcularDeterminante(matriz);
    cout << determinante << endl;

    return 0;
}