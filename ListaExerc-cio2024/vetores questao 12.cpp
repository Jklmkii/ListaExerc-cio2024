#include <iostream>
using namespace std;

int main() {
    int vet[5];
    int menor;
    int maior;
    int media = 0;

    cout << "Digite 5 números: ";

    for(int i = 0; i < 5; i++) {
        cin >> vet[i];
    }

    menor = maior = vet[0];
    for (int i = 1; i < 5; i++) {
        if (vet[i] < menor) {
            menor = vet[i];
        }
        if (vet[i] > maior) {
            maior = vet[i];
        }
    }

    for (int i = 0; i < 5; i++) {
        media += vet[i];
    }
    media /= 5;

    cout << "O menor número é: " << menor << endl;
    cout << "O maior número é: " << maior << endl;
    cout << "A média é: " << media << endl;

    return 0;
}
