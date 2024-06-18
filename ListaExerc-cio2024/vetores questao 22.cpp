#include <iostream>
using namespace std;
int main() {
    int vet1[10];
    int vet2[10];
    int vet_resultante[10];
    cout << "digite 10 numeros:" << endl;
    for (int i = 0; i < 10; ++i) {
        cout <<   i << " ";
        cin >> vet1[i];
    }
    cout << "digite 10 numeros:" << endl;
    for (int i = 0; i < 10; ++i) {
       cout <<  i << ": ";
        cin >> vet2[i];
    }
    for (int i = 0; i < 10; ++i) {
       if (i % 2 == 0) {
         vet_resultante[i] = vet1[i];
      } else {
           vet_resultante[i] = vet2[i];
     }
    }
    cout << "Vetor resultante:" << endl;
    for (int i = 0; i < 10; ++i) {
      cout << vet_resultante[i] << " ";
    }
    cout << endl;
    return 0;
}