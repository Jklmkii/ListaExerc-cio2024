#include <iostream>
using namespace std;
const int num_alunos = 10;
const int num_provas = 3;
int main() {
    float notas[num_alunos][num_provas];
    int piores_notas_prova[num_provas] = {0};
    cout << "Digite as notas dos alunos (separadas por espaços):\n";
    for (int i = 0; i < num_alunos; ++i) {
        cout << "Aluno " << i + 1 << ": ";
        for (int j = 0; j < num_provas; ++j) {
            cin >> notas[i][j];
        }
    }
    for (int i = 0; i < num_alunos; ++i) {
        float pior_nota = notas[i][0];
        int indice_prova_pior_nota = 0;
        for (int j = 1; j < num_provas; ++j){
            if (notas[i][j] < pior_nota) {
                pior_nota = notas[i][j];
                indice_prova_pior_nota = j;
            }
        }   piores_notas_prova[indice_prova_pior_nota]++;
    }
    cout << "\nNúmero de alunos cuja pior nota foi na prova:\n";
    for (int i = 0; i < num_provas; ++i) {
        cout << "Prova " << i + 1 << ": " << piores_notas_prova[i] << " aluno(s)\n";
    }
    return 0;
}
