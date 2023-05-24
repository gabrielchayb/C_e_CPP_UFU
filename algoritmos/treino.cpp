#include <bits/stdc++.h>
using namespace std;
int somal[3], somac[3], somad1=0, somad2=0;
int main(){
    int m[3][3];
    int i, j;
    bool verifica=true;
    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            cin>>m[i][j];
            somal[i]=somal[i]+m[i][j];
            somac[j]=somac[j]+m[i][j];
            if(i==j)somad1=somad1+m[i][j];
            if(i+j==2)somad2=somad2+m[i][j];
        }
    }
    for(i=0; i<2; i++){
        if(somal[i]!=somal[i+1])verifica=false;
        if(somal[i]!=somad1)verifica=false;
        if(somal[i]!=somad2)verifica=false;
        if(somal[i]!=somac[i])verifica=false;
        if(somac[i]!=somac[i+1])verifica=false;
    }
    if(verifica)cout<<"SIM"<<endl;
    else cout<<"NAO"<<endl;
    