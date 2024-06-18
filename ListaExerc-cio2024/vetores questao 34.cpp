#include <iostream>
using namespace std;
int main() {
    const int tamanho = 10;
    int vet[tamanho];
    int contador = 0;
    cout << "Digite 10 numeros diferentes:" << endl;
    while (contador < tamanho) {
        int numero;
        bool numeroRepetido = false;
        cout << "Digite o " << contador + 1 << "o numero: ";
        cin >> numero;
        for (int i = 0; i < contador; ++i) {
            if (vet[i] == numero) {
                numeroRepetido = true;
                break;
            }
        }
        if (numeroRepetido) {
            cout << "Numero repetido! Digite outro numero." << endl;
        } else {
            vet[contador] = numero;
            contador++;
        }
    }
    cout << "Vetor final digitado:" << endl;
    for (int i = 0; i < tamanho; ++i) {
        cout << vet[i] << " ";
    }
    cout << endl;
    return 0;
}
