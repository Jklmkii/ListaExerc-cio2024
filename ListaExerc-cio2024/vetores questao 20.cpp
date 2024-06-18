#include <iostream>
using namespace std;
int main() {
    int vet1[10];
    int vet2[10];
    int tamanhoVet2 = 0;
    cout << "Digite 10 números inteiros no intervalo [0,50]:\n";
    for (int i = 0; i < 10; i++) {
        int num;
        cin >> num;
        while (num < 0 || num > 50) {
            cout << "Número fora do intervalo\n";
           cin >> num;
        }
        vet1[i] = num;
        if (num % 2 != 0) {
            vet2[tamanhoVet2++] = num;
        }
    }
    cout << "Vet 1:\n";
    for (int i = 0; i < 10; i++) {
        cout << vet1[i] << " ";
        if ((i + 1) % 2 == 0) {
            cout << endl;
        }
    }
    if (10 % 2 != 0) {
        cout << endl;
    }
    cout << "Vet 2 (só impares):\n";
    for (int i = 0; i < tamanhoVet2; i++) {
        cout << vet2[i] << " ";
        if ((i + 1) % 2 == 0) {

            cout << endl; }
    }
    if (tamanhoVet2 % 2 != 0) {
      cout << endl;
    }
    return 0;
}
