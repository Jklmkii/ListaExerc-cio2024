#include <iostream>
using namespace std;
void triang(int n) {
    int triangulo[n][n];
    for (int linha = 0; linha < n; linha++) {
        for (int coluna = 0; coluna <= linha; coluna++) {
            if (coluna == 0 || coluna == linha)
                triangulo[linha][coluna] = 1;
            else
                triangulo[linha][coluna] = triangulo[linha-1][coluna-1] + triangulo[linha-1][coluna];
            cout << triangulo[linha][coluna] << " ";
        }
        cout << endl;
    }
}
int main() {
    int n;
    cin >> n;
    triang(n);
    return 0;
}
