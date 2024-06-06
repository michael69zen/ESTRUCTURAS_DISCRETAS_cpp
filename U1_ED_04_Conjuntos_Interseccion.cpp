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

    int tamanio = (nro_eA < nro_eB) ? nro_eA : nro_eB;
    int AB[tamanio];
    int tamanio_interseccion = 0;

    for (int i = 0; i < nro_eA; i++) {
        for (int j = 0; j < nro_eB; j++) {
            if (A[i] == B[j]) {
                bool esta_AB = false;
                for (int k = 0; k < tamanio_interseccion; k++) {
                    if (A[i] == AB[k]) {
                        esta_AB = true;
                        break;
                    }
                }
                if (!esta_AB) {
                    AB[tamanio_interseccion++] = A[i];
                }
                break;
            }
        }
    }

    cout << "La interseccion de los conjuntos A y B es: ";
    for (int i = 0; i < tamanio_interseccion; i++) {
        cout << AB[i] << " ";
    }
    cout << endl;

    return 0;
}
