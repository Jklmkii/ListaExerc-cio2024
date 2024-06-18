#include <iostream>
using namespace std;

int main() {
    int vet[5];
    int menor;
    int maior;
    int posicaoMenor;
    int posicaoMaior;

    cout << "Digite 5 números: ";
    for(int i = 0; i < 5; i++) {
        cin >> vet[i];
    }

    menor = maior = vet[0];
    posicaoMenor = posicaoMaior = 0;

    for (int i = 1; i < 5; i++) {
        if (vet[i] < menor) {
            menor = vet[i];
            posicaoMenor = i;
        }
        if (vet[i] > maior) {
            maior = vet[i];
            posicaoMaior = i;
        }
    }

    cout << "A posição do menor número é: " << posicaoMenor << endl;
    cout << "A posição do maior número é: " << posicaoMaior << endl;

    return 0;
}
