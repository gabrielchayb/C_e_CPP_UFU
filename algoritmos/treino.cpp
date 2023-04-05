#include <bits/stdc++.h>

using namespace std;

int main()
{
    int N, x, verificar, soma=0, pos;
    cin >> N; //le a lista inteira
    bool verificar = true; //verifica se a conidção é true

    for (int i =0; i<=N; i++){
        cin >> x; //le o valor
        soma += x; //coloca o valor na soma e vai somando automatico
        if (soma >= 1000000 && verificar){ //se a soma ultrapassar o premio 
            pos = i; // guarde o indice desse momento em uma var pos 
            verificar = false; 
        }
    }

    cout << pos << endl; //printe o indice do momento em que a soma ultrapassou o premio
    
}

