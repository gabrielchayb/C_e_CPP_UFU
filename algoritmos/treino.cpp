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
    // Referência para o primeiro elemento do set, podemos usar o begin() para acessar o menor elemento do Set.
    auto ptr = st.begin();
	// O primeiro é o menor, logo será 1
	cout << *ptr << endl;





	return 0;

}