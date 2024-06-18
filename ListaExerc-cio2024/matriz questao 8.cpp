#include <iostream>
using namespace std;
int main() {
  const int tamanho = 3;
  int matriz[tamanho][tamanho];
  cout << "Digite os elementos da matriz " << tamanho << "x" << tamanho << ":"
       << endl;
  for (int i = 0; i < tamanho; ++i) {
    for (int j = 0; j < tamanho; ++j) {
      cin >> matriz[i][j];
    }
  }
  int somaAcimaDiagonal = 0;
  for (int i = 0; i < tamanho; ++i) {
    for (int j = i + 1; j < tamanho; ++j) {
      somaAcimaDiagonal += matriz[i][j];
    }
  }
  cout << "Matriz:" << endl;
  for (int i = 0; i < tamanho; ++i) {
    for (int j = 0; j < tamanho; ++j) {
      cout << matriz[i][j] << " ";
    }
    cout << endl;
  }
  cout << "Soma dos elementos acima da diagonal principal: "
       << somaAcimaDiagonal << endl;
  return 0;
}
