#include <bits/stdc++.h> 
using namespace std;

//passagem de referência

int f(int x){ // funcao fatorial
    if(x == 0){ // caso base
        return 1;
    }
    else{ // recursao
        return x * f(x-1);
    }
}

int main(){
    int N;

    cin >> N;

    cout << N << f(N) << endl;
}