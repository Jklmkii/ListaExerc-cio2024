#include <iostream>
using namespace std;
int main() {
    int a, b;
    cin >> a >> b;
    int digitosA[5] = {0};
    int digitosB[5] = {0};
    int soma[6] = {0};
    int tamA = 0;
    while (a > 0) {
        digitosA[tamA++] = a % 10;
        a /= 10;
    }
    int tamB = 0;
    while (b > 0) {
        digitosB[tamB++] = b % 10;
        b /= 10;
    }
    int carry = 0;
    int maxTam = max(tamA, tamB);
    for (int i = 0; i < maxTam; ++i) {
        int digitoA = (i < tamA) ? digitosA[i] : 0;
        int digitoB = (i < tamB) ? digitosB[i] : 0;
        int somaDigitos = digitoA + digitoB + carry;
        soma[i] = somaDigitos % 10;
        carry = somaDigitos / 10;
    }
    if (carry > 0) {
        soma[maxTam] = carry;
    }
    for (int i = 5; i >= 0; --i) {
        if (soma[i] != 0 || i == 0) {
            cout << soma[i];
        }
    }
    cout << endl;
    return 0;
}
