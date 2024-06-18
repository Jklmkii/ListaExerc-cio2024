#include <iostream>
using namespace std;
int main() {
    const int tamanho = 4;
    int matriz1[tamanho][tamanho];
    int matriz2[tamanho][tamanho];
    int matrizm[tamanho][tamanho];
    for (int i = 0; i < tamanho; ++i) {
        for (int j = 0; j < tamanho; ++j) {
            cin >> matriz1[i][j];
        }
    }
    for (int i = 0; i < tamanho; ++i) {
        for (int j = 0; j < tamanho; ++j) {
        cin >> matriz2[i][j];
        }
    }
    for (int i = 0; i < tamanho; ++i) {
    for (int j = 0; j < tamanho; ++j) {
       matrizm[i][j] = (matriz1[i][j] > matriz2[i][j]) ? matriz1[i][j] : matriz2[i][j];
        }
    }
    cout << "matriz com o maiore valor:" << endl;
    for (int i = 0; i < tamanho; ++i) {
        for (int j = 0; j < tamanho; ++j) {
            cout << matrizm[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
