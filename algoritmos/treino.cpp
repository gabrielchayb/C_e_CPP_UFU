#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double var[10];
    double m,dp;

    for (int i = 0; i < 10; ++i) {
        cout << "Digite o valor " << i+1 << ": ";
        cin >> var[i];
        m += var[i];
    }

    m = m/10;

    for (int i = 0; i < 10; ++i) {
        dp+= pow(var[i] - m, 2);
    }
    dp= sqrt(dp / 10);

    cout << "A média é " << m << endl;
    cout << "O desvio padrão é " << dp<< endl;

    return 0;
}