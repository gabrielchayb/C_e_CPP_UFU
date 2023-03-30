#include<bits/stdc++.h>
using namespace std;


int main(){
	// Declarando uma Fila de Prioridade
	priority_queue <int, vector <int>, greater <int>> pq;
    // Inserindo elementos na Fila 
	pq.push(1);
	pq.push(4);
	pq.push(2);
    // O elemento no topo
	cout << pq.top() << endl;
	// Removendo o elemento do topo, nesse caso, o maior
	pq.pop();
    // A estrutura possui 3 elementos
	cout << pq.size() << endl;
    
	return 0;
}