#include <iostream>
using namespace std;

int main() {
    int A[6];
    cout << "Digite 6 Numeros inteiros:" << endl;
    for (int i = 0; i < 6; i++) {
        cout << "Numero inserido é: ";
        cin >> A[i];
    }
    cout << "Os valores lidos foram:" << endl;
    for (int i = 0; i < 6; i++) {
        cout << A[i] << " " ;
    }
    return 0;
}
