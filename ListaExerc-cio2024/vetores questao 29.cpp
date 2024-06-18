#include <iostream>
using namespace std;
int main() {
    const int tamanho = 6;
    int numeros[tamanho];
    int par[tamanho];
    int impa[tamanho];
    int sopar = 0;
    int qupar = 0;
    int quimpa = 0;
    cout << "Digite 6 numeros inteiros:" << endl;
    for (int i = 0; i < tamanho; ++i) {
        cin >> numeros[i];
    }
    for (int i = 0; i < tamanho; ++i) {
        if (numeros[i] % 2 == 0) {
            par[qupar++] = numeros[i];
            sopar += numeros[i];
        } else {
            impa[quimpa++] = numeros[i];
        }
    }
    cout << "Numeros par digitados: ";
    for (int i = 0; i < qupar; ++i) {
        cout << par[i] << " ";
    }
    cout << endl;
    cout << "Soma dos numeros par digitados: " << sopar << endl;
    cout << "Numeros impa digitados: ";
    for (int i = 0; i < quimpa; ++i) {
        cout << impa[i] << " ";
    }
    cout << endl;
    cout << "Quantidade de numeros impa digitados: " << quimpa << endl;
    return 0;
}
