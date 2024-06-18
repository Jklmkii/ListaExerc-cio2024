#include <iostream>
using namespace std;
const int num_alunos = 5;
const int num_questoes = 10;
int main() {
    char respostas_alunos[num_alunos][num_questoes];
    char gabarito[num_questoes];
    int resultado[num_alunos] = {0};
    cout << "Digite as respostas dos alunos (a, b, c ou d):\n";
    for (int i = 0; i < num_alunos; ++i) {
        for (int j = 0; j < num_questoes; ++j) {
       cin >> respostas_alunos[i][j];
        }
    }
    cout << "\nDigite o gabarito das respostas (a, b, c ou d):\n";
    for (int j = 0; j < num_questoes; ++j) {
       cin >> gabarito[j];
    }
    for (int i = 0; i < num_alunos; ++i) {
        for (int j = 0; j < num_questoes; ++j) {
            if (respostas_alunos[i][j] == gabarito[j]) {
                resultado[i]++;
            }
        }
    }
    cout << "\nPontuação dos alunos:\n";
    for (int i = 0; i < num_alunos; ++i) {
        cout << "Aluno " << i + 1 << ": " << resultado[i] << " pontos\n";
    }
    return 0;
}
