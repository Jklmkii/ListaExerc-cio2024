#include <iostream>
using namespace std;
void bubbleSort(double vetor[], int tamanho) {
    for (int i = 0; i < tamanho - 1; ++i) {
        for (int j = 0; j < tamanho - i - 1; ++j) {
            if (vetor[j] > vetor[j + 1]) {
                double temp = vetor[j];
                vetor[j] = vetor[j + 1];
                vetor[j + 1] = temp;
            }
        }
    }
}
int main() {
    const int tamanho = 10;
    double vetor[tamanho];
       cout << "Digite 10 numeros reais:" << endl;
    for (int i = 0; i < tamanho; ++i) {
        cin >> vetor[i];
    }
    bubbleSort(vetor, tamanho);
    
    cout << "Vetor ordenado:" << endl;
    for (int i = 0; i < tamanho; ++i) {
        cout << vetor[i] << " ";
    }
    cout << endl;
    return 0;
}
