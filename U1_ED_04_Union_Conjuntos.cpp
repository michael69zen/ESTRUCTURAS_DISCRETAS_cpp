#include <iostream>
using namespace std;

int main(){
    int nro_eA, nro_eB;


    cout << "Ingrese el numero de elementos en el conjunto A: ";
    cin >> nro_eA;
    int A[nro_eA];
    cout << "Ingrese los elementos del conjunto A: ";
    for(int i = 0; i < nro_eA; i++){
        cin >> A[i];
    }


    cout << "Ingrese el numero de elementos en el conjunto B: ";
    cin >> nro_eB;
    int B[nro_eB];
    cout << "Ingrese los elementos del conjunto B: ";
    for(int i = 0; i < nro_eB; i++){
        cin >> B[i];
    }

    int tamanio = nro_eA + nro_eB;
    int AB[tamanio];
    int tamanio_union = 0;

    for(int i = 0; i < nro_eA; i++){
        bool esta_AB = false;
        for(int j = 0; j < tamanio_union; j++){
            if(A[i] == AB[j]){
                esta_AB = true;
                break;
            }
        }
        if (!esta_AB){
            AB[tamanio_union++] = A[i];
        }
    }

    for(int i = 0; i < nro_eB; i++){
        bool esta_AB = false;
        for(int j = 0; j < tamanio_union; j++){
            if(B[i] == AB[j]){
                esta_AB = true;
                break;
            }
        }
        if (!esta_AB){
            AB[tamanio_union++] = B[i];
        }
    }

    cout << "La union de los conjuntos A y B es: ";
    for (int i = 0; i < tamanio_union; i++){
        cout << AB[i] << " ";
    }
    cout << endl;

    return 0;
}
