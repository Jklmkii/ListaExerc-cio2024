#include <iostream>
#include <iomanip>

using namespace std;
const int linhas = 3;
const int colunas = 6;
int main() {
    float matriz[linhas][colunas];
    float soma_colunas_impares = 0.0;
    float media_colunas_2_e_4 = 0.0;
    float soma_coluna_1_2 = 0.0;
    cout << "Digite os elementos da matriz " << linhas << "x" << colunas << ":\n";
    for (int i = 0; i < linhas; ++i) {
        for (int j = 0; j < colunas; ++j) {
            cin >> matriz[i][j];
        }
    }
    for (int i = 0; i < linhas; ++i) {
        soma_colunas_impares += matriz[i][1] + matriz[i][3] + matriz[i][5];
    }
    for (int i = 0; i < linhas; ++i) {
        media_colunas_2_e_4 += matriz[i][1] + matriz[i][3];
    }
    media_colunas_2_e_4 /= linhas * 2;
    for (int i = 0; i < linhas; ++i) {
        soma_coluna_1_2 += matriz[i][0] + matriz[i][1];
    }
    for (int i = 0; i < linhas; ++i) {
        matriz[i][5] = soma_coluna_1_2;
    }
    cout << "\nMatriz modificada:\n";
    for (int i = 0; i < linhas; ++i) {
        for (int j = 0; j < colunas; ++j) {
            cout << setw(8) << fixed << setprecision(2) << matriz[i][j] << " ";
        }
        cout << endl;
    }
    cout << "\n(a) Soma dos elementos das colunas ímpares: " << soma_colunas_impares << endl;
    cout << "(b) Média aritmética dos elementos das colunas 2 e 4: " << media_colunas_2_e_4 << endl;
    return 0;
}
