#include <iostream>

using namespace std;

int main() {
	int x, cont = 1, vetor[10];
	
	for (int i=0; i<10; i++) {
		cin >> vetor[i];
	}
	
	cin >> x;
	
	for (int i=0; i<10; i++) {
		if (vetor[i] == x) {
			cout << "SIM";
			cont = 0;
			break;
		}
	}
	
	if (cont == 1) {
		cout << "NAO";
	}
}