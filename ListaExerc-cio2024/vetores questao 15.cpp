#include <iostream>
using namespace std;

int main() {
    int vet[20]; 
    int uni[20];
    int tu = 0;
    cout << "Digite 20 numeros:\n";
    for (int i = 0; i < 20; i++) {
        cin >> vet[i];
    }
    cout << "lista sem repetição:\n";
    for (int i = 0; i < 20; i++) {
        bool repetido = false;
        for (int j = 0; j < tu; j++) {
    if (vet[i] == uni[j]) {
        repetido = true;          
        break; }
        }
        if (!repetido) {
            uni[tu++] = vet[i];
        }
    }
    for (int i = 0; i < tu; i++) {
        cout << uni[i] << " ";
    }
    return 0;
}
