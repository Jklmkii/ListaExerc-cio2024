#include <iostream>
using namespace std;

int A[6] = {1, 0, 5, -2, -5, 7};
int s = A[0] + A[1] + A[5];

int main() {
    cout << "A soma dos numeros das posicoes 0, 1 e 5 é: " << s << endl;
    A[4] = 100;

    int i;
    int size = sizeof(A) / sizeof(A[0]);

    for (i = 0; i < size; i++) {
        cout << A[i] << endl;
    }

    return 0;
}
