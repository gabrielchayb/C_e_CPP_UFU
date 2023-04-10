#include<bits/stdc++.h>
using namespace std;

int v[NMAX];
int aux[NMAX];

void MERGE_SORT(int L, int R){

	if(L == R) return;
	int meio = (L + R)/2; //arredonda pra baixo
	MERGE_SORT(L, meio);
	MERGE_SORT(meio + 1, R);
	int a;
	int pos1 = L;
	int pos2 = meio + 1;
	for(a=L;a<=R;a++){
	        //caso a pos1 ultrapasse o limite do primeiro
	        //o aux vira o v de pos2, sendo o aux oq vai ordenar td
	        if(pos1 == meio+1){
	                aux[a] = v[pos2];
	                pos2++;
	        }
		else if(pos2 == R+1){
			aux[a] = v[pos1];
			pos1++;}
		//os dois if de baixo é a parte da ord em si
		else if(v[pos1] <= v[pos2]){
			aux[a] = v[pos1];
			pos1++;}
		else{
			aux[a] = v[pos2];
			pos2++;}
	}
	for(a=L;a<=R;a++){
		v[a] = aux[a];
	}
}

    
