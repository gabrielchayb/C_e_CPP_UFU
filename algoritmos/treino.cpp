#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    vector<int> v = {1, 2, 2, 4, 4, 4, 7, 8, 9, 9, 9};

    // Encontra o primeiro elemento maior do que 5.
    int n;
    cin>>n;
    auto it = upper_bound(v.begin(), v.end(), n);

    if (it != v.end()) {
        cout << "O primeiro elemento maior do que " <<n <<" eh "<< *it << endl;
    } else {
        cout << "Não há elementos maiores do que "<< n  << endl;
    }

    return 0;
}