//gabriel ribeiro filice chayb. Nº Matrícula: 12221BSI233

#include <bits/stdc++.h>
using namespace std;

int main(){
    int N,soma=2,t,i,j; //t =  variavel de verificação sim ou nao;
    cin >> N;
    if(N==1 || N==0) cout << "soma dos primos = 0" << endl;
    else if(N==2) cout << "soma dos primos = 2" << endl;
    else{
        for(i=3;i<=N;i++){
            t=1; //
            for(j=2;j<=sqrt(i);j++){
                if(i%j==0) t=0;
            }
            if(t==1) soma += i;
        }
        cout << soma << endl;
}}