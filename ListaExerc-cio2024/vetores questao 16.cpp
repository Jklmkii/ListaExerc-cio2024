#include <iostream>
using namespace std;

int main() {
    float vetor[5];
    cout << "Digite 5 números reais:\n";
    for (int i = 0; i < 5; i++) {
        cin >> vetor[i];}
    while (true) {
        cout << "Digite 0 para sair, 1 para ordem direta, 2 para ordem inversa:\n";
        int codigo;
        cin >> codigo;
        if (codigo == 0) {
            break;
        } else if (codigo == 1) {
            cout << "Vetor na ordem direta:\n";
            for (int i = 0; i < 5; i++) {
            cout << vetor[i] << " ";
            }
            cout << endl;
        } else if (codigo == 2) {
            cout << "Vetor na ordem inversa:\n";
            for (int i = 4; i >= 0; i--) {
           cout << vetor[i] << " ";
            }
            cout << endl;
        } else {
            cout << "Código inválido\n";
        }
    }
    return 0;
}
