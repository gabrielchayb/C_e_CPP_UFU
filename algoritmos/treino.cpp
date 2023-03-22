#include <bits/stdc++.h>

using namespace std;

int main(){
    int saldo = 100;
    int aposta, d1, d2;
    int ganhou = 0;
    int perdeu = 0;
    while (saldo >= 0 && aposta >= 0){
        cout << "Digite o valor do dado 1: " << endl;
        cin >> d1;
        cout << "Digite o valor do dado 2: " << endl;
        cin >> d2;
        cout << "Digite o valor da aposta: " << endl;
        cin >> aposta;
        if ( d1 + d2 == 7 || d1 + d2 == 11){
            saldo = saldo - aposta + aposta*2; //saldo = saldo (que vale 100) + aposta lida dobrada
            ganhou++; //ganhou = ganhou( vale 0) + 1;
        }
        else{
            saldo -= aposta; //saldo = saldo - aposta lida
            perdeu++; //perdeu = perdeu + 1;
        }
        if ( saldo <= 0 || aposta <= 0){
            cout << "VC ZEROU SUA BANCA" << endl;
            break;
        }
        int continuar;
        cout << "digite 1 se deseja continuar ou digite 2 se deseja parar: " << endl;
        cin >> continuar;
        if (continuar == 1){
            continue;
        }
        else if (continuar == 2){
            cout << "fim do jogo" << endl;
            break;
        }
        else{
            cout << "este não é um valor válido. vc repetira o jogo." << endl;
            continue;
        }
    }

    cout << "Saldo Total: " << saldo << endl;
    cout << "O jogador ganhou um total de: " << ganhou << " vezes" << endl;
    cout << "O jogador perdeu um total de: " << perdeu << " vezes" << endl;







}