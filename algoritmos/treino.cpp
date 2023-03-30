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
    // Referência para o final do set
    auto ptr = st.end();
    // Movendo o ponteiro para acessar o maior elemento no set
    ptr--;
	cout << *ptr << endl;





	return 0;

}