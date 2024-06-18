#include <iostream>
#include <cstdlib>
#include <ctime>
#include <set>
using namespace std;
const int tamlinha = 5;
const int NUMERO_MAX = 99;
int main() {
    int cartela[tamlinha][tamlinha] = {0};
    set<int> numeros_utilizados;
    srand(time(0));
    for (int linha = 0; linha < tamlinha; ++linha) {
        for (int coluna = 0; coluna < tamlinha; ++coluna) {
            int numero;
            do {
    numero = rand() % NUMERO_MAX + 1;
            } while 
    (numeros_utilizados.count(numero) > 0);        cartela[linha][coluna] = numero;            numeros_utilizados.insert(numero);

  cout << cartela[linha][coluna] << "\t";
        }
        cout << endl;
    }
    return 0;
}
