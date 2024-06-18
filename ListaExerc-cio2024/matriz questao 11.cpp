#include <iostream>
using namespace std;
int main() {
    const int tam = 3;
    int matriz[tam][tam];
    int soma_diagonal_secundaria = 0;
    cout << "Digite os elementos da matriz 3x3:\n";
    for (int i = 0; i < tam; ++i) {
        for (int j = 0; j < tam; ++j) {
            cin >> matriz[i][j];
        }
    }
    for (int i = 0; i < tam; ++i) {
        soma_diagonal_secundaria += matriz[i][tam - 1 - i];
    }
    cout << "A soma dos elementos da diagonal secundária é: " << soma_diagonal_secundaria << endl;
    return 0;
}
