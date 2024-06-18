#include <iostream>
using namespace std;
int main() {
    const int tamanho = 5;
    int matriz[tamanho][tamanho];
    int x;
    bool encontrado = false;
    int linhaX, colunaX;
    for (int i = 0; i < tamanho; ++i) {
        for (int j = 0; j < tamanho; ++j) {
            cin >> matriz[i][j];
        }
    }
    cin >> x;
    for (int i = 0; i < tamanho && !encontrado; ++i) {
        for (int j = 0; j < tamanho && !encontrado; ++j) {
            if (matriz[i][j] == x) {
                encontrado = true;
                linhaX = i;
                colunaX = j;
            }
        }
    }
    if (encontrado) {
        cout << "pocisao: linha " << linhaX + 1 << ", coluna " << colunaX + 1 << endl;
    } else {
        cout << "nao encontrado" << endl;
    }
    return 0;
}
