#include <iostream>
using namespace std;

int main() {
 int vet[10];
  int nme;
  int nma;
  cout << "digite 10 numeros ";
  for (int i = 0; i < 10; i++) {
    cin >> vet[i];
  }
  nme = vet[0];
  nma = vet[0];
  for (int i = 0; i < 10; i++)
    if (vet[i] < nme) {
      nme = vet[i];
    }
   for (int i = 1; i < 10; i++)
  if (vet[i] > nma) {
    nma = vet[i];
  }
  cout << "o menor numero é " << nme << endl;
  cout << "o maior numero é " << nma << endl;
}
