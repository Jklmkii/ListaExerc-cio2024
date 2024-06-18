#include <iostream>
using namespace std;
int main() {
  int vet[10];
  int i;
  int negativo = 0;
  float soma = 0;
  cout << "insira 10 numeros reais" << endl;
  for(i = 0; i < 10; i++){
    cin >> vet[i];
  }
   for(i = 0; i < 10; i++){
     if (vet[i] < 0)
       negativo++;}
  cout << "o numero de negativos é: " << negativo << endl;     
  for(i = 0; i < 10; i++){
    if (vet[i] > 0)
      soma += vet[i];}
    cout << "a soma dos positivos é: " << soma << endl;
    
       
}