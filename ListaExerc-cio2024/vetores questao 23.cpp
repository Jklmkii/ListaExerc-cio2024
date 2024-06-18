#include <iostream>
using namespace std;
int main() {
    double vet1[5];
    double vet2[5];
    double produto_escalar = 0.0;
    cout << "Digite 5 numeros" << endl;
    for (int i = 0; i < 5; ++i) {
        cout << "Digite o valor para a posição " << i << ": ";
        cin >> vet1[i];
    }
    cout << "Digite 5 numeros:" << endl;
    for (int i = 0; i < 5; ++i) {
        cout << "Digite o valor para a posição " << i << ": ";
        cin >> vet2[i];
    }
    for (int i = 0; i < 5; ++i) {
        produto_escalar += vet1[i] * vet2[i];
    }
    cout << "Primeiro vetor:" << endl;
    for (int i = 0; i < 5; ++i) {
        cout << vet1[i] << " ";
    }
    cout << endl;
    
    cout << "Segundo vetor:" << endl;
    for (int i = 0; i < 5; ++i) {
    cout << vet2[i] << " ";
    }
    cout << endl;
    cout << "Produto escalar: " << produto_escalar << endl;
    return 0;
}