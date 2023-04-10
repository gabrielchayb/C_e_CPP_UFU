#include <iostream>
using namespace std;

void backtrack(int a[], int k, int n) {
    if (k == n) {  // solução encontrada
        for (int i = 0; i < n; i++) {
            cout << a[i] << " ";
        }
        cout << endl;
    } else {
        for (int i = k; i < n; i++) {  // explorar as opções restantes
            swap(a[k], a[i]);
            backtrack(a, k + 1, n);
            swap(a[k], a[i]);
        }
    }
}

int main() {
    int a[] = {1, 2, 3};
    int n = 3;
    backtrack(a, 0, n);
    return 0;
}

/*

Backtracking é uma técnica de busca exaustiva usada para resolver problemas de decisão. O objetivo é encontrar todas as soluções possíveis para um problema, testando todas as opções disponíveis e retrocedendo quando uma opção não leva a uma solução viável. A ideia por trás do backtracking é "tentar todas as opções" até encontrar a solução correta.

O processo de backtracking geralmente envolve a recursão, com cada chamada recursiva explorando uma opção diferente. O algoritmo verifica se a opção atual leva a uma solução viável e, se não, retorna para a chamada anterior e tenta outra opção.

Neste exemplo, a função backtrack recebe um array a, o índice atual k e o tamanho total do array n. A função verifica se a solução foi encontrada (isto é, se k == n) e, se sim, imprime a solução atual. Caso contrário, a função usa um loop for para explorar todas as opções restantes, trocando o elemento atual com cada um dos elementos restantes e chamando a função recursivamente. A chamada recursiva avança para o próximo índice (k + 1) e continua explorando as opções restantes.

Neste exemplo, o backtracking é usado para gerar todas as permutações possíveis dos números 1, 2 e 3. O algoritmo tenta todas as opções possíveis e retrocede quando uma opção não leva a uma solução viável.
*/




