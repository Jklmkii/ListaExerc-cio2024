#include <iostream>
using namespace std;

int main() {
 int vet[8];
  int X;
  int Y;
  cout << "insira 8 numeros: ";
  for (int i = 0; i < 8; i++)
    cin >> vet[i];
  cout << "insira  um numero entre 0 e 7: ";
  cin >> X;
  cout << "insira outro numero entre 0 e 7: ";
  cin >> Y;
  cout << "a soma dos numeros é: " << vet[X] + vet [Y];
}
