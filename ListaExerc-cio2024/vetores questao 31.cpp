#include <iostream>
using namespace std;
bool existe(int vetor[], int tamanho, int valor) {
    for (int i = 0; i < tamanho; ++i) {
        if (vetor[i] == valor) {
            return true;
        }
    }
    return false;
}
int main() {
    const int tamanho = 10;
    int vetor1[tamanho], vetor2[tamanho], uniao[2 * tamanho];
    int tamanhoUniao = 0;
    cout << "Digite 10 numeros :" << endl;
    for (int i = 0; i < tamanho; ++i) {
        cin >> vetor1[i];
        if (!existe(uniao, tamanhoUniao, vetor1[i])) {
            uniao[tamanhoUniao++] = vetor1[i];
        }
    }
    cout << "Digite 10 numeros :" << endl;
    for (int i = 0; i < tamanho; ++i) {
        cin >> vetor2[i];
        if (!existe(uniao, tamanhoUniao, vetor2[i])) {
            uniao[tamanhoUniao++] = vetor2[i];
        }
    }
    cout << "Uniao dos dois vetores sem numeros repetidos: ";
    for (int i = 0; i < tamanhoUniao; ++i) {
        cout << uniao[i] << " ";
    }
    cout << endl;
    return 0;
}
