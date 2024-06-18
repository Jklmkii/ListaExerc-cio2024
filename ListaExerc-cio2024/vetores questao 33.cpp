#include <iostream>
using namespace std;

int main() {
    const int tamanho = 15;
    int vet[tamanho];

    cout << "Digite " << tamanho << " numeros inteiros:" << endl;
    for (int i = 0; i < tamanho; ++i) {
        cin >> vet[i];
    }

    int novoTamanho = 0;
    for (int i = 0; i < tamanho; ++i) {
        if (vet[i] != 0) {
            vet[novoTamanho++] = vet[i];
        }
    }

    cout << "Vet compactado : ";
    for (int i = 0; i < novoTamanho; ++i) {
        cout << vet[i] << " ";
    }
    cout << endl;

    return 0;
}
