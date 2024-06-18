#include <iostream>
using namespace std;

int main() {
 int vet[15];
  float soma= 0;
  float media;
  cout << "digite 15 numeros  ";
  for (int i = 0; i < 15; i++) {
    cin >> vet[i];
    soma += vet[i];
  }
  media = soma / 15;
  cout << " a media geral é " << media;  
}
