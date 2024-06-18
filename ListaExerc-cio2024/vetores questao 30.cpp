#include <iostream>
#include <unordered_set>
using namespace std;
int main() {
    const int tamanho = 10;
    int vetor1[tamanho], vetor2[tamanho];
    unordered_set<int> set1, intersecao;
    cout << "Digite 10 numeros :" << endl;
    for (int i = 0; i < tamanho; ++i) {
        cin >> vetor1[i];
        set1.insert(vetor1[i]);
    }
    cout << "Digite 10 numeros :" << endl;
    for (int i = 0; i < tamanho; ++i) {
        cin >> vetor2[i];
    }
    for (int i = 0; i < tamanho; ++i) {
        if (set1.find(vetor2[i]) != set1.end()) {
            intersecao.insert(vetor2[i]);
        }
    }
    cout << "Interseccao dos dois vetores sem numeros repetidos: ";
    for (int num : intersecao) {
        cout << num << " ";
    }
    cout << endl;
    return 0;
}
