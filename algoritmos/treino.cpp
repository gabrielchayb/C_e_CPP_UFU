#include <bits/stdc++.h>
using namespace std;


long long int fastMultiplication(long long int x, long long int y)
{
	if (x == 0)
		return 0;

	long long int answer = fastMultiplication(x/2, y); 
	answer = (2*answer); 

	if (x%2 == 0) 
		return answer;

	return (answer + y);
}

long long int fastExponentiation(long long int b, long long int e)
{
	if (e == 0)
		return 1;

	long long int answer = fastExponentiation(b, e/2); 
	answer = fastMultiplication(answer, answer); 

	if (e%2 == 0) 
		return answer;

	return fastMultiplication(answer, b); 
}

    
