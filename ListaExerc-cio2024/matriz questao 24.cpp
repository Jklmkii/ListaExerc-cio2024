#include <iostream>
using namespace std;
const int tamanho = 3;
void proximaJogada(int tabuleiro[tamanho][tamanho]) {
    bool encontrouVazio = false;
    for (int i = 0; i < tamanho; ++i) {
        for (int j = 0; j < tamanho; ++j) {
            if (tabuleiro[i][j] == 0) {
                tabuleiro[i][j] = -1;
                encontrouVazio = true;
                break;
            }
        }
        if (encontrouVazio) {
            break;
        }
    }
    if (!encontrouVazio) {
        cout << "Não há mais jogadas disponíveis. Tabuleiro completo.\n";
    }
}
void imprimirTabuleiro(int tabuleiro[tamanho][tamanho]) {
    for (int i = 0; i < tamanho; ++i) {
        for (int j = 0; j < tamanho; ++j) {
            cout << tabuleiro[i][j] << " ";
        }
        cout << endl;
    }
}
int main() {
    int tabuleiro[tamanho][tamanho] = {
        {-1, 1, 1},
        {-1, -1, 0},
        {0, 1, 0}
    };
    cout << "Tabuleiro inicial:\n";
    imprimirTabuleiro(tabuleiro);
    cout << "\nDeterminando a próxima jogada...\n";
    proximaJogada(tabuleiro);
    cout << "\nTabuleiro após a próxima jogada:\n";
    imprimirTabuleiro(tabuleiro);
    return 0;
}