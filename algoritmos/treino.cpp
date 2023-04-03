#include <bits/stdc++.h>

using namespace std;

int v[10010];

int main()
{
	int x; //le o numero de numeros totais da sequencia que leremos
    cin >> x; 
    for (int i = 0; i < x; i++){ // i começa no zero, i fica igual a x 
        cin >> v[i]; // preenche meu vetor na posição indice (i)
    }

    int aux = 0; //aux = variavel contadora 

    for (int i = 0; i < x - 2; i++){ // i começa no zero, i será a sequencia menos 2 ( entao tres ultimos numeros)
        if(v[i]== 1 && v[i+1]== 0 && v[i+2] && 0){ // se a posicao i for 1, a sucessora 0 e a sucessora 0, adicione 1 na var contadora
            aux++;
        }
    }

    cout << aux << endl;


}