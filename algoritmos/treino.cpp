#include <bits/stdc++.h> 
using namespace std; 

int main(){

    int A,B,R,P,S; 
    R = 1;
    P = 2; 
    S = 3; 
    cout << "Jogador 1 (digite 1 para R, 2 para P e 3 para S): ";
    cin >> A; 
    cout << "Jogador 2 (digite 1 para R, 2 para P e 3 para S): "; 
    cin >> B; 
    if(A == 1 && B==2){
        cout << "jogador 2 venceu" << endl;
    }
    else if(A == 1 && B==3){
        cout << "jogador 1 venceu" << endl;
    }
    else if( A == 1 && B==1){
        cout << "jogo empatado" << endl;
    }
    else if(A == 2 && B == 1){
        cout << "Jogador 1 ganhou" << endl;
    }
    else if(A == 2 && B == 2){
        cout << "Jogo empatado" << endl;
    }
    else if(A == 2 && B == 3){
        cout << "Jogador 2 venceu" << endl;
    }
    else if(A == 3 && B == 3){
        cout << "Jogao empatado" << endl;
    }

}