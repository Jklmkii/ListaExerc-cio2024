#include <iostream>
using namespace std;
int main() {
    const int tamanho = 4;
    int matriz[tamanho][tamanho];
    int maiorValor;
    int linhaMaior = 0;
    int colunaMaior = 0;
    cin >> matriz[0][0];
    maiorValor = matriz[0][0];
    for (int i = 0; i < tamanho; ++i) {
        for (int j = (i == 0 ? 1 : 0); j < tamanho; ++j) {
            cin >> matriz[i][j];
            if (matriz[i][j] > maiorValor) {
                maiorValor = matriz[i][j];
                linhaMaior = i;
                colunaMaior = j;
            }
        }
    }
    cout << "Matriz:" << endl;
    for (int i = 0; i < tamanho; ++i) {
        for (int j = 0; j < tamanho; ++j) {
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }
    cout << "Maior valor: " << maiorValor << endl;
    cout << "Localizacao: Linha " << linhaMaior + 1 << ", Coluna " << colunaMaior + 1 << endl;
    return 0;
}
