#include <bits/stdc++.h> 
using namespace std;


int main(){
	// Declarando uma fila de inteiros
	queue <int> q;	
    // PUSH = Inserindo elementos no FINAL da fila
	q.push(1);
	q.push(2);
    // O front retorna o primeiro elemento (o mais antigo) da fila, nesse caso 1
	cout << q.front() << endl;
    // Removendo o elemento mais antigo, ou seja, o primeiro inserido na fila
	q.pop();
    // Imprimindo o tamanho da fila, neste caso será 2
	cout << q.size() << endl;
	return 0;
}
