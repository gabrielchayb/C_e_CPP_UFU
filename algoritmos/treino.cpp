#include <bits/stdc++.h> 
using namespace std;

int main(){
    int x = 5; //crio uma var e coloco um numero
    int *ptr = &x; //crio um ponteiro e atribuo o valor de memoria de x

    cout << *ptr << endl; //printo o ponteiro - acessando a variável x indiretamente 
}