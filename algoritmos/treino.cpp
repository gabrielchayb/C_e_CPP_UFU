#include<bits/stdc++.h>
using namespace std;


int main(){
	// Declarando um set de inteiros
	set <int> st;
    //Inserindo elementos no set
    st.insert(1);
    st.insert(10);
    st.insert(4);
    st.insert(6);
    st.insert(1);
    // Removendo elementos do set, caso ele exista
    st.erase(1);
    st.erase(101010);
    // Apagando o set
	st.clear();
	// Como ele está vazio, seu tamanho, é zero
	cout << st.size() << endl;
    // Checando se o elemento 10 está no set
    if(st.find(10) != st.end())
        cout << "Existe" << endl;
	else
		cout << "Não existe" << endl;
	return 0;






	return 0;

}