#include <iostream>
using namespace std;
const int tamanho = 3;
void calcularQuadradoMatriz(int A[tamanho][tamanho], int B[tamanho][tamanho]) {
    for (int i = 0; i < tamanho; ++i) {
        for (int j = 0; j < tamanho; ++j) {
            B[i][j] = 0;
            for (int k = 0; k < tamanho; ++k) {
                B[i][j] += A[i][k] * A[k][j];
            }
        }
    }
}
void imprimirMatriz(int matriz[tamanho][tamanho]) {
    for (int i = 0; i < tamanho; ++i) {
        for (int j = 0; j < tamanho; ++j) {
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }
}
int main() {
    int A[tamanho][tamanho], B[tamanho][tamanho];
    cout << "Digite os elementos da matriz A " << tamanho << "x" << tamanho << ":\n";
    for (int i = 0; i < tamanho; ++i) {
        for (int j = 0; j < tamanho; ++j) {
            cin >> A[i][j];
        }
    }
    calcularQuadradoMatriz(A, B);
    cout << "\nMatriz resultante B = A^2:\n";
    imprimirMatriz(B);
    return 0;
}
