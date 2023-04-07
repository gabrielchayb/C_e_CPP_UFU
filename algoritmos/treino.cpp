#include <bits/stdc++.h>
using namespace std;

long long int fastMultiplication(long long int x, long long int y)
{
	if (x == 0) // Caso base
		return 0;

	long long int answer = fastMultiplication(x/2, y); // Acha a resposta do nosso subproblema
	answer = (2*answer); // Multiplica a nossa resposta por 2 e tira módulo m

	if (x%2 == 0) // Checa se x é par
		return answer;

	return (answer + y);
}

int main()
{
	long long int b, e;
	cin >> b >> e;

	cout << fastMultiplication(b, e) << endl;
}

    
