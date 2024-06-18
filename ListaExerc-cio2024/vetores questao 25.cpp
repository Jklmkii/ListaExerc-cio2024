#include <iostream>
using namespace std;
bool 
sete(int numero) {
    return (numero % 7 != 0) || (numero % 10 == 7);
}
int main() {
    const int TAMANHO = 100;
    int numeros[TAMANHO];
    int contador = 0;
    int numero = 1;
    while (contador < TAMANHO) {
        if (sete(numero)) {
    numeros[contador] = numero; contador++;
        }
       numero++;
    }
    cout << "Os " << TAMANHO << " primeiros naturais que não são múltiplos de 7 ou terminam com 7:" << endl;
    for (int i = 0; i < TAMANHO; ++i) {
        cout << numeros[i] << " ";
        if ((i + 1) % 10 == 0) {
            cout << endl;  
        }
    }
    cout << endl;
    return 0;
}
