#include <iostream>
using namespace std;
const int tamanho = 3;
void multiplicarMatrizes(int A[tamanho][tamanho], int B[tamanho][tamanho], int C[tamanho][tamanho]) {
    for (int i = 0; i < tamanho; ++i) {
        for (int j = 0; j < tamanho; ++j) {
            C[i][j] = 0;
        }
    }
    for (int i = 0; i < tamanho; ++i) {
        for (int j = 0; j < tamanho; ++j) {
            for (int k = 0; k < tamanho; ++k) {
                C[i][j] += A[i][k] * B[k][j];
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
    int A[tamanho][tamanho], B[tamanho][tamanho], C[tamanho][tamanho];
    cout << "Digite os elementos da matriz A " << tamanho << "x" << tamanho << ":\n";
    for (int i = 0; i < tamanho; ++i) {
        for (int j = 0; j < tamanho; ++j) {
            cin >> A[i][j];
        }
    }
    cout << "Digite os elementos da matriz B " << tamanho << "x" << tamanho << ":\n";
    for (int i = 0; i < tamanho; ++i) {
        for (int j = 0; j < tamanho; ++j) {
            cin >> B[i][j];
        }
    }
    multiplicarMatrizes(A, B, C);
    cout << "\nMatriz resultante C = A * B:\n";
    imprimirMatriz(C);
    return 0;
}