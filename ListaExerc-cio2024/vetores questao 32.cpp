#include <iostream>
using namespace std;
bool existe(int vetor[], int tamanho, int valor) {
    for (int i = 0; i < tamanho; ++i) {
        if (vetor[i] == valor) {
            return true;
        }
    }
    return false;
}
int main() {
    const int tamanho = 5;
    int x[tamanho], y[tamanho];
    int soma[tamanho], produto[tamanho];
    int diferenca[tamanho], intersecao[tamanho], uniao[2 * tamanho];
    int tamanhoDiferenca = 0, tamanhoIntersecao = 0, tamanhoUniao = 0;
    cout << "Digite 5 numeros :" << endl;
    for (int i = 0; i < tamanho; ++i) {
        cin >> x[i];
    }
    cout << "Digite 5 numeros :" << endl;
    for (int i = 0; i < tamanho; ++i) {
        cin >> y[i];
    }
    for (int i = 0; i < tamanho; ++i) {
        soma[i] = x[i] + y[i];
        produto[i] = x[i] * y[i];
        if (!existe(y, tamanho, x[i])) {
            diferenca[tamanhoDiferenca++] = x[i];
        }
        if (existe(y, tamanho, x[i])) {
            intersecao[tamanhoIntersecao++] = x[i];
        }
        if (!existe(uniao, tamanhoUniao, x[i])) {
            uniao[tamanhoUniao++] = x[i];
        }
    }
    for (int i = 0; i < tamanho; ++i) {
        if (!existe(uniao, tamanhoUniao, y[i])) {
            uniao[tamanhoUniao++] = y[i];
        }
    }
    cout << "Soma entre x e y: ";
    for (int i = 0; i < tamanho; ++i) {
        cout << soma[i] << " ";
    }
    cout << endl;
    cout << "Produto entre x e y: ";
    for (int i = 0; i < tamanho; ++i) {
        cout << produto[i] << " ";
    }
    cout << endl;
    cout << "Diferenca entre x e y: ";
    for (int i = 0; i < tamanhoDiferenca; ++i) {
        cout << diferenca[i] << " ";
    }
    cout << endl;
    cout << "Intersecao entre x e y: ";
    for (int i = 0; i < tamanhoIntersecao; ++i) {
        cout << intersecao[i] << " ";
    }
    cout << endl;
    cout << "Uniao entre x e y: ";
    for (int i = 0; i < tamanhoUniao; ++i) {
        cout << uniao[i] << " ";
    }
    cout << endl;
    return 0;
}
