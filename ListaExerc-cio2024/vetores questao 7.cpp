#include <iostream>
using namespace std;

int main() {
 int vet[10];
  int psç;
  int nma;
  cout << "digite 10 numeros ";
  for (int i = 0; i < 10; i++) {
    cin >> vet[i];
  }
  psç = 0;
  nma = vet[0];
   for (int i = 1; i < 10; i++)
  if (vet[i] > nma) {
    nma = vet[i];
    psç = i;
  }
  
  cout << "o maior numero é " << nma << endl;
  cout << "e sua pocição é " << psç << endl;
}
