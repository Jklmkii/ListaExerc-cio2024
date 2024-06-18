#include <iostream>
using namespace std;
int main() {
    int vetA[10], vetB[10], vetC[10];
    cout << "Digite 10 numeros para o vetor A:\n";
    for (int i = 0; i < 10; i++) {
        cin >> vetA[i];
    }
    cout << "Digite 10 numeros para o vetor B:\n";
    for (int i = 0; i < 10; i++) {
        cin >> vetB[i];
    }
    for (int i = 0; i < 10; i++) {
        vetC[i] = vetA[i] - vetB[i];
    }
    cout << "Vetor C (C = A - B):\n";
    for (int i = 0; i < 10; i++) {
        cout << vetC[i] << " ";
    }
    cout << endl;
    return 0;
}
