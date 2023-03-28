#include <bits/stdc++.h> 
using namespace std;

int main(){
    int x = 5; //crio uma var e coloco um numero
    int *ptr = &x; //crio um ponteiro e atribuo o valor de memoria de x

    *ptr = 768; //alterando a posição do ponteiro dentro de uma variável 

    cout << x << endl; // printando a nova POSIÇÃO do ponteiro na variável 

}