#include <iostream>
using namespace std;

int main() {
 int vet[10];
  int Xpares=0;
  cout << "insira 10 numeros: ";
  for (int i = 0; i < 10; i++)
    cin >> vet[i];
  for (int i = 0; i < 10; i++) { 
    if (vet[i] % 2 == 0)
      Xpares++;
  }
  cout << "Quantidade de numeros pares: " << Xpares;
}
