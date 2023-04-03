#include <bits/stdc++.h>

using namespace std;

int main(void)
{
	// variáveis da entrada
	int A, B, C;

	cin >> A >> B >> C;

	if (A != B and A != C) // checamos se A ganhou
		cout << "A\n";
	else if (B != A and B != C) // checamos se B ganhou
		cout << "B\n";
	else if (C != A and C != B) // checamos se C ganhou
		cout << "C\n";
	else // ninguém ganhou
		cout << "*\n";
}