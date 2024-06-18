#include <iostream>
using namespace std;
int main() {
    const int tam = 3;
    int matriz[tam][tam];
    cout << "Digite os numeros da matriz " << tam << "x" << tam << ":" << endl;
    for (int i = 0; i < tam; ++i) {
        for (int j = 0; j < tam; ++j) {
            cin >> matriz[i][j];
        }
    }
    int somaDiagonalPrincipal = 0;
    for (int i = 0; i < tam; ++i) {
        somaDiagonalPrincipal += matriz[i][i];
    }
    cout << "matriz:" << endl;
    for (int i = 0; i < tam; ++i) {
        for (int j = 0; j < tam; ++j) {
            cout << matriz[i][j];
            if (j < tam - 1) {
                cout << " ";
            }
        }
        cout << endl;
    }
    cout << "soma dos elementos da diagonal principal: " << somaDiagonalPrincipal << endl;
    return 0;
}
