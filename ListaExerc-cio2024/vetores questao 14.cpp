#include <iostream>
using namespace std;
int main() {
    int vetor[10];
    cout << "Digite 10 valores:\n";
    for (int i = 0; i < 10; i++) {
        cin >> vetor[i];
    }
    bool encontrouIgual = false;
    cout << "Valores iguais encontrados:\n";
    for (int i = 0; i < 10; i++) {
        for (int j = i + 1; j < 10; j++) {
            if (vetor[i] == vetor[j]) {
                cout << vetor[i] << endl;
                encontrouIgual = true;
                break;
            }
        }
    }
    if (!encontrouIgual) {
        cout << "Nenhum numero igual\n";
    }
    return 0;
}