#include <iostream>
using namespace std;
int main() {
    const int tamanho = 3;
    int matriz[tamanho][tamanho];
    cout << "Digite os elementos da matriz " << tamanho << "x" << tamanho << ":" << endl;
    for (int i = 0; i < tamanho; ++i) {
        for (int j = 0; j < tamanho; ++j) {
            cin >> matriz[i][j];
        }
    }
    int somaAbaixoDiagonal = 0;
    for (int i = 1; i < tamanho; ++i) {
        for (int j = 0; j < i; ++j) {
            somaAbaixoDiagonal += matriz[i][j];
        }
    }
    cout << "Matriz:" << endl;
    for (int i = 0; i < tamanho; ++i) {
        for (int j = 0; j < tamanho; ++j) {
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }
    cout << "Soma dos elementos abaixo da diagonal principal: " << somaAbaixoDiagonal << endl;

    return 0;
}
