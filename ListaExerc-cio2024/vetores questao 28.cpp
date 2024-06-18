#include <iostream>
using namespace std;
int main() {
    const int tamanho = 10;
    int v[tamanho];
    int v1[tamanho];
    int v2[tamanho];
    int v1_count = 0;
    int v2_count = 0;
    cout << "Digite 10 numeros inteiros:" << endl;
    for (int i = 0; i < tamanho; ++i) {
        cin >> v[i];
    }

    for (int i = 0; i < tamanho; ++i) {
        if (v[i] % 2 == 0) {
            v2[v2_count++] = v[i];
        } else {
            v1[v1_count++] = v[i];
        }
    }

    cout << "numeros utilizados de v1 impares: ";
    for (int i = 0; i < v1_count; ++i) {
        cout << v1[i] << " ";
    }
    cout << endl;

    cout << "numeros utilizados de v2 pares: ";
    for (int i = 0; i < v2_count; ++i) {
        cout << v2[i] << " ";
    }
    cout << endl;
    return 0;
}
