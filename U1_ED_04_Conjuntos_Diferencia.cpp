#include <iostream>
using namespace std;

int main() {
    int nro_eA, nro_eB;

    cout << "Ingrese el numero de elementos en el conjunto A: ";
    cin >> nro_eA;
    int A[nro_eA];
    cout << "Ingrese los elementos del conjunto A: ";
    for (int i = 0; i < nro_eA; i++) {
        cin >> A[i];
    }

    cout << "Ingrese el numero de elementos en el conjunto B: ";
    cin >> nro_eB;
    int B[nro_eB];
    cout << "Ingrese los elementos del conjunto B: ";
    for (int i = 0; i < nro_eB; i++) {
        cin >> B[i];
    }

    int tamanio = nro_eA;
    int AB[tamanio];

    int tamanio_diferencia = 0;

    for (int i = 0; i < nro_eA; i++) {
        bool esta_en_B = false;
        for (int j = 0; j < nro_eB; j++) {
            if (A[i] == B[j]) {
                esta_en_B = true;
                break;
            }
        }
        if (!esta_en_B) {
            bool esta_en_diferencia = false;
            for (int k = 0; k < tamanio_diferencia; k++) {
                if (A[i] == AB[k]) {
                    esta_en_diferencia = true;
                    break;
                }
            }
            if (!esta_en_diferencia) {
                AB[tamanio_diferencia++] = A[i];
            }
        }
    }

    cout << "La diferencia de los conjuntos A y B es: ";
    for (int i = 0; i < tamanio_diferencia; i++) {
        cout << AB[i] << " ";
    }
    cout << endl;

    return 0;
}
