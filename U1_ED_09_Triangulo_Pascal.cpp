#include <iostream>
using namespace std;

int coeficienteBinomial(int n, int k) {
    if (k == 0 || k == n) {
        return 1;
    } else {
        return coeficienteBinomial(n - 1, k - 1) + coeficienteBinomial(n - 1, k);
    }
}

void trianguloPascal(int nroFilas) {
    for (int i = 0; i < nroFilas; i++) {
        for (int j = 0; j <= i; j++) {
            cout << coeficienteBinomial(i, j) << " ";
        }
        cout << endl;
    }
}

int main() {
    int n;
    cout << "Ingrese el nro de Filas: ";
    cin >> n;

    trianguloPascal(n);

    return 0;
}
