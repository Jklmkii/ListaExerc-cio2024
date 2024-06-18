#include <iostream>
using namespace std;
void insertionSort(int vet[], int tamanho) {
    for (int i = 1; i < tamanho; ++i) {
        int chave = vet[i];
        int j = i - 1;
        while (j >= 0 && vet[j] > chave) {
            vet[j + 1] = vet[j];
            j--;
        }
        vet[j + 1] = chave;
    }
}
int main() {
    const int tamanho = 10;
    int vet[tamanho];
    for (int i = 0; i < tamanho; ++i) {
        cin >> vet[i];
        insertionSort(vet, i + 1);
    }
    for (int i = 0; i < tamanho; ++i) {
        cout << vet[i] << " ";
    }
    cout << endl;
    return 0;
}
