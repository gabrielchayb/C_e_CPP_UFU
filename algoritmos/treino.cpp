#include<bits/stdc++.h>
using namespace std;


int main(){
	// Declarando um Mapa <char, elemento>
	map <char, int> mp;
    // Inserindo elementos no mapa
	mp.insert({'a', 1});
	mp.insert({'b', 2});
	mp.insert({'c', 3});
    // Ponteiro para o primeiro elemento do map (auto)
	// Considere que ptr igual à <chave, elemento>
	auto ptr = mp.begin();
    // Para acessar a chave usamos o first, e o elemento usamos o second
    cout << "Chave" << ptr->first << " Elemento: " << ptr->second << endl; 


	return 0;
}