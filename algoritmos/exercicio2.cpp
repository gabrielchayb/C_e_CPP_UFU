//gabriel ribeiro filice chayb. Nº Matrícula: 12221BSI233

#include <bits/stdc++.h>
using namespace std;

int main(){
    int N,m= -1, aux=0; //n = tamanho da sequencia, m é o maior valor, aux é a var contadora
    
    cin >> N;

    int v[N]; // preenche meu vetor com o tamanho da sequencia

    for(int i=0; i<N; i++){
        cin >> v[i];
        if(v[i] > m) m = v[i]; //acho a maior valor em uma posição do meu vetor e guardo na var maior
    }

    for(int i=0;i<N;i++){
        if(v[i]== m) aux++; //cada vez que uma posição bater com m, adicione 1 na var contadora
    }
    cout << m << endl;
    cout << aux << endl;
}