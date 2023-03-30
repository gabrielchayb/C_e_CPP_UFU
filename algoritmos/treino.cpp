#include<bits/stdc++.h>
using namespace std;


int main(){
	// Declarando um Mapa <char, elemento>
	map <char, int> mp;
    // Inserindo elementos no mapa
	mp.insert({'a', 1});
	mp.insert({'b', 2});
	mp.insert({'c', 3});
    // Número de elementos no mapa, neste caso: 3
    cout << mp.size() << endl;
    // Removendo o par <c, 3> basta apenas dizer a chave
	mp.erase('c');
	cout << mp.size() << endl;
    //apaga o mapa 
    mp.clear();
    // Checando se a chave c existe
	if(mp.find('c') != mp.end())
		cout << "Existe" << endl;
	else
		cout << "Não existe" << endl;
    // Acessando um elemento diretamente usando o 
    // Operador []
    cout << mp['a'] << endl;
    // Criando um elemento usando o operador []
    mp['d'] = 4;
    cout << mp['d'] << endl;
    // Modificando usando o operador []
    mp['a'] = 5;
    cout << mp['a'] << endl;


	return 0;
}