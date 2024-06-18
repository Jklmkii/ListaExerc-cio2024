#include <iostream>
#include <cmath>
using namespace std;
bool primo(int numero) {
    if (numero <= 1) {
        return false;
    }
   for (int i = 2; i <= sqrt(numero); ++i) {
        if (numero % i == 0) {
            return false;
        }
    }
    return true;
}
int main() {
    const int tamanho = 10;
    int vetor[tamanho];
    cout << "Digite 10 numeros :" << endl;
    for (int i = 0; i < tamanho; ++i) {
        cin >> vetor[i];
    }
    cout << "numeros primos e suas respectivas posicoes:" << endl;
    for (int i = 0; i < tamanho; ++i) {
        if (primo(vetor[i])) {
           cout << "numero primo " << vetor[i] << " na posicao " << i << endl;
        }
    }
    return 0;
}
