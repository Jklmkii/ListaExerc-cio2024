#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
const int tam = 4;
int main() {
    int matriz[tam][tam];
    cout << "matriz original:\n";
    for (int i = 0; i < tam; ++i) {
        for (int j = 0; j < tam; ++j) {
            matriz[i][j] = rand() % 20 + 1;
            cout << matriz[i][j] << "\t";
        }
        cout << endl;
    }
    for (int i = 0; i < tam; ++i) {
        for (int j = i + 1; j < tam; ++j) {
            matriz[i][j] = 0;
        }
    }
    cout << "\nmatriz transformada em triangular inferior:\n";
    for (int i = 0; i < tam; ++i) {
        for (int j = 0; j < tam; ++j) {
            cout << matriz[i][j] << "\t";
        }
        cout << endl;
    }
    return 0;
}
