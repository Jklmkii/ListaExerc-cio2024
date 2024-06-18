#include <iostream>
using namespace std;
int main() {
    const int tamanho = 5;
    int matriz[tamanho][tamanho];
    for (int i = 0; i < tamanho; ++i) {
        for (int j = 0; j < tamanho; ++j) {
            matriz[i][j] = i * j;
        }
    }
    for (int i = 0; i < tamanho; ++i) {
        for (int j = 0; j < tamanho; ++j) {
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}

