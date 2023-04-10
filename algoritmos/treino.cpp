#include <iostream>
using namespace std;

const int MAXN = 20;

int dp[MAXN]; // dp[i] = i-ésimo termo da sequência de Fibonacci
// Inicialmente, todos os valores da dp são 0

int solve(int i)
{
	if (dp[i] != 0) // Primeiro passo
		return dp[i];

	if (i == 1 || i == 2) // Segundo passo
		return 1;

	dp[i] = solve(i - 1) + solve(i - 2); // Terceiro passo
	return dp[i];
}

int main()
{
	int n;

	cin >> n;

	cout << "N-ésimo termo de Fibonacci: " << solve(n) << endl;
}