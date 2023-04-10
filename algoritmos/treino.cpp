#include <iostream>
using namespace std;

const int MAXN = 20;

int main()
{
	int n;
	int dp[MAXN]; // dp[i] = i-ésimo termo da sequência de Fibonacci

	cin >> n;

	dp[1] = dp[2] = 1; // Casos base

	for (int i = 3; i <= n; i++)
		dp[i] = dp[i - 1] + dp[i - 2]; // Calculando dp[i]

	cout << "N-ésimo termo de Fibonacci: " << dp[n] << endl;
}
    
