#include <bits/stdc++.h>
using namespace std;
#define N 100000
typedef long long int ll;
ll a[N];

int search(int L, int R, int value) {
	int mid = (L + R) / 2; 	// Meio do intervalo
	
	if(L > R)				// Intervalo invalido
		return -1;			// Valor não encontrado
	
	if(a[mid] == value)		// O valor foi encontrado
		return mid;
	
	if(a[mid] > value) 		// Descarto o intervalo à esquerda
		return search( mid + 1, R, value);
	else					// Descarto o intervalo à direita
		return search( L, mid - 1, value);
}


int main() {
    ll n;
    cin>>n;
    for(ll i=0; i<n; i++){
        cin>>a[i];
    }
    sort(a, a+n, greater<int>()); //ordena senao estiver ordenado
    int x;
    cin>>x; //valor desejado
    int i=search(0, n-1, x);
    if(i!=-1)cout<<i<<endl; //vai printar indexado de 0 a n-1, se quiser de 1 a n, só somar +1
    else cout<<"N tem esse valor no vetor\n";
     
}