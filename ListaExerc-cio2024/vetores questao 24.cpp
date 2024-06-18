#include <iostream>
using namespace std;

int main() {
    
    int numero_alunos[10];
    float altura_alunos[10];
    int indice_mais_alto = 0, indice_mais_baixo = 0;
    cout << "insira  numero de alunos em forma crescente e depois insira a altura de cada respectivamente: ";
    for (int i = 0; i < 10; i++) {
        cin >> numero_alunos[i] >> altura_alunos[i];

        if (altura_alunos[i] > altura_alunos[indice_mais_alto]) {
            indice_mais_alto = i;
        }
        if (altura_alunos[i] < altura_alunos[indice_mais_baixo]) {
            indice_mais_baixo = i;
        }
    }

    cout << numero_alunos[indice_mais_alto] << " " << altura_alunos[indice_mais_alto] << endl;
    cout << numero_alunos[indice_mais_baixo] << " " << altura_alunos[indice_mais_baixo] << endl;

    return 0;
}
