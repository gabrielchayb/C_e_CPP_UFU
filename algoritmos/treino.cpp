#include <bits/stdc++.h>
using namespace std;

long long int fastMultiplication(long long int x, long long int y, long long m)
{
	if (x == 0) // Caso base
		return 0;

	long long int answer = fastMultiplication(x/2, y, m); // Acha a resposta do nosso subproblema
	answer = (2*answer)%m; // Multiplica a nossa resposta por 2 e tira módulo m

	if (x%2 == 0) // Checa se x é par
		return answer;

	return (answer + y)%m;
}

int main()
{
	long long int b, e, m;
	cin >> b >> e >> m;

	cout << fastMultiplication(b, e, m) << endl;
}
    
