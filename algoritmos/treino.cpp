#include<bits/stdc++.h>
using namespace std;
//busca gulosa

int main(){
    int V, N;

    // Leia o número de moedas e o valor que queremos representar, respectivamente
    cin >> N >> V;

    int S[N];

    // Ler todas as moedas
    for (int i = 0; i < N; i++)
    {
        cin >> S[i];
    }

    // Estratégia Gulosa
    int moedas = 0;
    for (int i = N - 1; i >= 0; i--) //percorro meu conjunto 
    {
        while (V >= S[i]) //enquanto meu valor for maior que as posições do meu conjunto
        {
            moedas += 1; //adicione mais um nas moedas
            V -= S[i]; // e v = v - s[i]
        }
    }

    cout << moedas << endl;
}

    
