#include <iostream>
using namespace std;
int main() {
    const int tamanho = 4;
    int matriz[tamanho][tamanho];
    int contador = 0;
    for (int i = 0; i < tamanho; ++i) {
        for (int j = 0; j < tamanho; ++j) {
            cin >> matriz[i][j];
            if (matriz[i][j] > 10) {
                contador++;
            }
        }
    }
    cout << "quantidade de valores maiores que 10: " << contador << endl;

    return 0;
}
