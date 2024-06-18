#include <iostream>
using namespace std;
const int linhas = 2;
const int colunas = 2;
void somarMatrizes(float matriz1[linhas][colunas], float matriz2[linhas][colunas], float resultado[3][3]) {
    for (int i = 0; i < linhas; ++i) {
        for (int j = 0; j < colunas; ++j) {
            resultado[i][j] = matriz1[i][j] + matriz2[i][j];
        }
    }
}
void subtrairMatrizes(float matriz1[linhas][colunas], float matriz2[linhas][colunas], float resultado[3][3]) {
    for (int i = 0; i < linhas; ++i) {
        for (int j = 0; j < colunas; ++j) {
            resultado[i][j] = matriz1[i][j] - matriz2[i][j];
        }
    }
}
void adicionarConstante(float matriz[linhas][colunas], float constante) {
    for (int i = 0; i < linhas; ++i) {
        for (int j = 0; j < colunas; ++j) {
            matriz[i][j] += constante;
        }
    }
}
void imprimirMatriz(float matriz[linhas][colunas]) {
    for (int i = 0; i < linhas; ++i) {
        for (int j = 0; j < colunas; ++j) {
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }
}
void imprimirMatriz3x3(float matriz[3][3]) {
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }
}
int main() {
    float matriz1[linhas][colunas], matriz2[linhas][colunas], matrizResultado[3][3];
    float constante;
    char opcao;
    cout << "Digite os elementos da primeira matriz " << linhas << "x" << colunas << ":\n";
    for (int i = 0; i < linhas; ++i) {
        for (int j = 0; j < colunas; ++j) {
            cin >> matriz1[i][j];
        }
    }
    cout << "Digite os elementos da segunda matriz " << linhas << "x" << colunas << ":\n";
    for (int i = 0; i < linhas; ++i) {
        for (int j = 0; j < colunas; ++j) {
            cin >> matriz2[i][j];
        }
    }
    cout << "\nMenu de opções:\n";
    cout << "(a) Somar as duas matrizes\n";
    cout << "(b) Subtrair a primeira matriz da segunda\n";
    cout << "(c) Adicionar uma constante às duas matrizes\n";
    cout << "(d) Imprimir as matrizes\n";
    cout << "Escolha uma opção: ";
    cin >> opcao;
    switch (opcao) {
        case 'a':
            somarMatrizes(matriz1, matriz2, matrizResultado);
            cout << "\nResultado da soma das matrizes:\n";
            imprimirMatriz3x3(matrizResultado);
            break;
        case 'b':
            subtrairMatrizes(matriz1, matriz2, matrizResultado);
            cout << "\nResultado da subtração da primeira matriz pela segunda:\n";            imprimirMatriz3x3(matrizResultado);
            break;
        case 'c':
            cout << "Digite a constante a ser adicionada: ";
            cin >> constante;
            adicionarConstante(matriz1, constante);
            adicionarConstante(matriz2, constante);
            cout << "\nMatriz 1 após adição da constante:\n";
            imprimirMatriz(matriz1);
            cout << "\nMatriz 2 após adição da constante:\n";
            imprimirMatriz(matriz2);
            break;
        case 'd':
            cout << "\nMatriz 1:\n";
            imprimirMatriz(matriz1);
            cout << "\nMatriz 2:\n";
            imprimirMatriz(matriz2);
            break;
        default:
            cout << "Opção inválida!\n";
            break;
    }
    return 0;
}
