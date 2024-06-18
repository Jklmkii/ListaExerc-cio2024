#include <iostream>
#include <iomanip>
using namespace std;
const int num_alunos = 3;
const int num_questoes = 10;
const float media_minima = 7.0;
int main() {
    char gabarito[num_questoes];
    int matriculas[num_alunos];
    char respostas_alunos[num_alunos][num_questoes];
    float notas[num_alunos] = {0};
    float soma_notas = 0;
    float percentual_aprovacao;
    cout << "Digite o gabarito das respostas (a, b, c, d ou e):\n";
    for (int i = 0; i < num_questoes; ++i) {
        cin >> gabarito[i];
    }
    for (int i = 0; i < num_alunos; ++i) {
        cin.ignore();
        cout << "\nDigite a matrícula do aluno " << i + 1 << ": ";
        cin >> matriculas[i];
        cout << "Digite as respostas do aluno (a, b, c, d ou e):\n";
        for (int j = 0; j < num_questoes; ++j) {
            cin >> respostas_alunos[i][j];
        }
        for (int j = 0; j < num_questoes; ++j) {
            if (respostas_alunos[i][j] == gabarito[j]) {
                notas[i]++;
            }
        }
    }
    cout << "\nResultados dos alunos:\n";
    for (int i = 0; i < num_alunos; ++i) {
        cout << "\nAluno " << i + 1 << " - Matrícula: " << matriculas[i] << "\n";
        cout << "Respostas:\n";
        for (int j = 0; j < num_questoes; ++j) {
            cout << respostas_alunos[i][j] << " ";
        }
        cout << "\nNota: " << notas[i] << "\n";
        soma_notas += notas[i];
    }
    percentual_aprovacao = (soma_notas / (num_alunos * num_questoes)) * 100;
    cout << fixed << setprecision(2);
    cout << "\nPercentual de aprovação: " << percentual_aprovacao << "%\n";
    return 0;
}
