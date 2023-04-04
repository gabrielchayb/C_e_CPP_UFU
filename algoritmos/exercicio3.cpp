//gabriel ribeiro filice chayb. Nº Matrícula: 12221BSI233

#include <bits/stdc++.h>
using namespace std;

int main(){
    int N,t=1; // n le a sequencia e t começa como true, mas pode representar true ou false (1 ou 0)
    cin >> N;
    if(N==1) {
        t=0; // se o num da sequencia for 1, nao tem primos
    }

    for(int i=2; i<sqrt(N); i++){ // indice começa no 2 e vai ate a raiz do numero da sequencia 
        if(N%i==0) t=0; // se o num da sequencia dividido pelo indice deixa resto 0, o num nao é primo
    }

    if(t==0) cout << "Nao eh primo" << endl; 
    else cout << "Eh primo" << endl;
}
