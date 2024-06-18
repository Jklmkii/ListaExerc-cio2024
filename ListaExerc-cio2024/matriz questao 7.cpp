#include <iostream>
using namespace std;
int main() {
    const int tam = 10;
    int matriz[tam][tam];
    for (int i = 0; i < tam; ++i) {
        for (int j = 0; j < tam; ++j) {
        if (i < j) { 
        matriz[i][j] = 2 * i + 7 * j * j;         } else if (i == j) {                
        matriz[i][j] = 3 * i * i + 1;
            } else {
 matriz[i][j] = 4 * i * i * i + 5 * j * j + 1;
            }
        }
    }
    for (int i = 0; i < tam; ++i) {
        for (int j = 0; j < tam; ++j) {
        cout << matriz[i][j] << "\t";
        }
        cout << endl;
    }
    return 0;
}
