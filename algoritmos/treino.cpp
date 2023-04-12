#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    vector<int> v = {9, 2, 7, 4, 6, 5, 3, 8, 1};

    // Encontra o maior elemento no range.
    auto it = min_element(v.begin(), v.end());
    int a=*it;
    cout << "O menor elemento é: " << a << std::endl;

    return 0;
}