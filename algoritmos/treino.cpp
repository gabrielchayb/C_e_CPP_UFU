#include<bits/stdc++.h>
using namespace std;


int main()
{
	int p;
	cin >> p;

	bool isPrime = true;

	for (int i = 2; i < p; i++)
		if (p%i == 0) 
			isPrime = false;

	if (isPrime) cout << p << " é um número primo" << endl;
	else cout << p << " não é um número primo" << endl;
}