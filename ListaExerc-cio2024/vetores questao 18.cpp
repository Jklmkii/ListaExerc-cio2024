#include <iostream>
using namespace std;
int main() {
    int vetor[10];
    int x;
    cout << "Digite 10 números inteiros:\n";
    for (int i = 0; i < 10; i++) {
        cin >> vetor[i];
    }
    cout << "Digite um número inteiro :\n";
    cin >> x;
    cout << "Múltiplos de " << x << " no vetor:\n";
    int contador = 0;
    for (int i = 0; i < 10; i++) {
        if (vetor[i] % x == 0) {
            cout << vetor[i] << " ";
            contador++;    }
}
    cout << "Número de múltiplos de " << x << ": " << contador << endl;
    return 0;
}
