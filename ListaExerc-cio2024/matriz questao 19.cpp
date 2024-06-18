#include <iostream>
using namespace std;
const int num_alunos = 5;
const int num_colunas = 4;
int main() {
    int matriz_alunos[num_alunos][num_colunas];
    int maior_nota_final = -1;
    int matricula_maior_nota_final = 0;
    float soma_notas_finais = 0;
    cout << "Digite as informações dos alunos:\n";
    for (int i = 0; i < num_alunos; ++i) {
        cout << "Aluno " << i + 1 << ":\n";
        cout << "Matrícula: ";
        cin >> matriz_alunos[i][0];
        cout << "Média das provas: ";
        cin >> matriz_alunos[i][1];
        cout << "Média dos trabalhos: ";
        cin >> matriz_alunos[i][2];
        matriz_alunos[i][3] = matriz_alunos[i][1] + matriz_alunos[i][2];
        if (matriz_alunos[i][3] > maior_nota_final) {
            maior_nota_final = matriz_alunos[i][3];
            matricula_maior_nota_final = matriz_alunos[i][0];
        }
        soma_notas_finais += matriz_alunos[i][3];
    }
    float media_notas_finais = soma_notas_finais / num_alunos;
    cout << "\nMatrícula do aluno com maior nota final: " << matricula_maior_nota_final << endl;
    cout << "Média aritmética das notas finais: " << media_notas_finais << endl;
    return 0;
}
