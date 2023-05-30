#include <bits/stdc++.h>
using namespace std;

int main() {
    double e = 1.0;
    double termo = 1.0;
    int n = 1;

    while (termo > 1e-8) {
        termo /= n;
        e += termo;
        n++;
    }

    cout << "O número neperiano (e) é: " << e << std::endl;

    return 0;
}