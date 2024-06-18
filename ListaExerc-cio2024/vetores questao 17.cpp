#include <iostream>
using namespace std;
int main() {
    int vetor[10];
    cout << "Digite 10 números :\n";
    for (int i = 0; i < 10; i++) {
        cin >> vetor[i];
    }
    for (int i = 0; i < 10; i++) {
        if (vetor[i] < 0) {
            vetor[i] = 0;}
    }
    cout << "Vetor dos com zero no lugar dos negativos:\n";
    for (int i = 0; i < 10; i++) {
        cout << vetor[i] << " ";
    }
    cout << endl;
    return 0;
}
