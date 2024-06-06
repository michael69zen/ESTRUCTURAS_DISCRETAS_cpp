#include <iostream>
using namespace std;

int potencia(int a, int n) {
    int resultado = 1;
    int x = a;

    while (n > 0) {
        if (n % 2 == 1) {
            resultado *= x;
        }
        x *= x;
        n /= 2;
    }

    return resultado;
}

int main() {
    int a, n;
    cout << "Ingrese el valor de a: ";
    cin >> a;
    cout << "Ingrese el valor de n: ";
    cin >> n;

    int resultado = potencia(a, n);

    cout << "El resultado es: " << resultado << endl;

    return 0;
}
