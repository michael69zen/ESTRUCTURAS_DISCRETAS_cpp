#include <iostream>
using namespace std;

void binomioCuadrado(int a, int b) {
    int term1 = a * a;
    int term2 = 2 * a * b;
    int term3 = b * b;

    cout << "El binomio al cuadrado (" << a << " + " << b << ")^2 es: " << term1 << " + " << term2 << " + " << term3 << endl;
}

int main() {
    int a, b;
    cout << "Ingrese el valor de a: ";
    cin >> a;
    cout << "Ingrese el valor de b: ";
    cin >> b;

    binomioCuadrado(a, b);

    return 0;
}
