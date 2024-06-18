#include <iostream>
using namespace std;

int main() {
    float A[10];
    float B[10];
    cout << "Digite 10 Numeros reais:" << endl;
    for (int i = 0; i < 10; i++) {
        cout << "Numero inserido é: ";
        cin >> A[i];
    }
    cout << "Os valores lidos foram:" << endl;
    for (int i = 0; i < 10; i++) {
        B[i] = A[i] * A[i];
     
    }

  for (int i = 0; i < 10; i++) {
    cout << A[i] << " ";
  

  }
  cout << "esses foram os numeros inseridos" << endl;
cout << "o quadrado desses numeros é: ";
  for (int i = 0; i < 10; i++) {
    cout << B[i] << " ";
  }
    return 0;
}
