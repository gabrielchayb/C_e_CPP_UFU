#include<bits/stdc++.h>
using namespace std;

int gcd(int a, int b) // função de mdc
{
	if (a > b) // se a for maior que b, troque a com b e prossiga 
		swap(a, b);

	if (a == 0) return b; //se a for 0, retorne b que será o mdc 
	return gcd(a, b - a); //formula do mdc recursivamente 
}

int main()
{
	int a, b;
	cin >> a >> b; 

	cout << "Maior divisor comum de " << a << " e " << b << ": " << gcd(a,b) << endl;
}