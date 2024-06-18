#include <iostream>
using namespace std;
void reverseArray(int array[], int start, int end) {
    while (start < end) {
        int temp = array[start];
        array[start] = array[end];
        array[end] = temp;
        start++;
        end--;
    }
}
void sortArray(int array[], int size) {
    int mid = 6;
    reverseArray(array, mid + 1, size - 1);
}
int main() {
    const int tamanho = 11;
    int vetor[tamanho];
    vetor[0] = 1;
    vetor[1] = 2;
    vetor[2] = 3;
    vetor[3] = 4;
    vetor[4] = 5;
    vetor[5] = 6;
    vetor[6] = 20;
    vetor[7] = 19;
    vetor[8] = 18;
    vetor[9] = 17;
    vetor[10] = 16;
    sortArray(vetor, tamanho);
    cout << "Vetor ordenado:" << endl;
    for (int i = 0; i < tamanho; ++i) {
        cout << vetor[i] << " ";
    }
    cout << endl;
    return 0;
}
