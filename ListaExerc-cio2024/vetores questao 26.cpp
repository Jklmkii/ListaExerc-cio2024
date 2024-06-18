#include <iostream>
#include <cmath> // Para usar a função sqrt
using namespace std;
double medi(int vetor[], int tamanho) {
    double soma = 0.0;
    for (int i = 0; i < tamanho; ++i) {
        soma += vetor[i];
    }
    return soma / tamanho;
}
double desviopadrao(int vetor[], int tamanho) {
    double media = medi(vetor, tamanho);
    double soma_quadrados_diff = 0.0;
    for (int i = 0; i < tamanho; ++i) {
        soma_quadrados_diff += pow(vetor[i] - media, 2);
    }
    double variancia = soma_quadrados_diff / (tamanho - 1);
    return sqrt(variancia);
}
int main() {
    const int tamanho = 10;
    int vetor[tamanho] = {10, 8, 6, 7, 9, 11, 12, 8, 9, 10};
    double desvio_padrao = desviopadrao(vetor, tamanho);
    cout << "Vetor: ";
    for (int i = 0; i < tamanho; ++i) {
        cout << vetor[i] << " ";
    }
    cout << endl;
    cout << "Desvio padrao: " << desvio_padrao << endl;
    return 0;
}
