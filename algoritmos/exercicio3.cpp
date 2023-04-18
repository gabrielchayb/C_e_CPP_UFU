//gabriel ribeiro filice chayb. Nº Matrícula: 12221BSI233

#include<bits/stdc++.h>
using namespace std;

int main(){
  long long int chave [10] = {75319,69793,82591,29346,24727,18921,31697,13703, 43705,23607};
  long long int valor [10] ={504972482,280805241,138317011,769453428,553652369,268007600,866894720,672518802,424805540,663131399};
  long long int n=10, auxiliar;
  for(int i=0; i<n-1; i++){
    for(int j=i+1; j<n; j++){
        if(chave[j]<chave[i]){
            auxiliar = chave[i];
            chave[i]=chave[j];
            chave[j]=auxiliar;
            auxiliar=valor[i];
            valor[i]=valor[j];
            valor[j]=auxiliar;
        }
    }
  }
  for(int aux=0; aux<n; aux++){
    cout<<"<"<< chave[aux] << "," << valor[aux] << ">" << endl;
  }
}