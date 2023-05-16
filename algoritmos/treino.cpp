#include <iostream>

using namespace std;

int main() {
    // Array de soma com todas suas casas em '0'
    int s[3] = {0, 0, 0}, num;

    // For duplo para capturar os 9 valores, e acrescentando a soma de sua respectiva linha
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            cin >> num;
            s[i] += num;
        }
    }

    // Para cada linha, imprima sua soma
    for(int i = 0; i < 3; i++) {
        cout << "Linha " << i << ": " << s[i] << endl;
    }
}