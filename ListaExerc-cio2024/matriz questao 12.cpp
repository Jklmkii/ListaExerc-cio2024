#include <iostream>
using namespace std;
const int tam = 3;
int main() {
    int matriz[tam][tam];
    int transposta[tam][tam];
    cout << "Digite os elementos da matriz 3x3:\n";
    for (int i = 0; i < tam; ++i) {
        for (int j = 0; j < tam; ++j) {
            cin >> matriz[i][j];
        }
    }
    for (int i = 0; i < tam; ++i) {
        for (int j = 0; j < tam; ++j) {
            transposta[j][i] = matriz[i][j];
        }
    }
    cout << "\nMatriz transposta:\n";
    for (int i = 0; i < tam; ++i) {
        for (int j = 0; j < tam; ++j) {
        cout << transposta[i][j] << " ";
       }
        cout << endl;
    }
    return 0;
}
