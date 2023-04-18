//gabriel ribeiro filice chayb. Nº Matrícula: 12221BSI233

#include<bits/stdc++.h>
using namespace std;

int main(){
    int v[10], N, cont=0, ver; 
	while(cont < 10){
		cin >> N;
		ver = 1; 
		for (int i = 0; i < cont; i++){
			if(v[i] == N){
				ver = 0;
			}
		}
		if (ver){
			v[cont] = N;
			cont++;
		}

	}
	for (int i = 0; i < cont; i++){
		cout << v[i] << "";
	}
}