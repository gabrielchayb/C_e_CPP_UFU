#include <iostream>

using namespace std;

 struct aluno{
        int num_aluno;
        float n1, n2, n3;
        float media;
 };

int main() {
    struct aluno a[10];
    for(int i = 0; i < 10; i++){
        cin >> a[i].num_aluno;
        cin >> a[i].n1;
        cin >> a[i].n2;
        cin >> a[i].n3;
        a[i].media = (a[i].n1 + a[i].n2 + a[i].n3) / 3.0;
        cout << a[i].media << endl;
    }
}