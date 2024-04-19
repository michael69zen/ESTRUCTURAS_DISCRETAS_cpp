#include <iostream>
using namespace std;

// creamos la función que verifica si un número es primo
bool myFuncionPrimo(int nro) {
    if (nro <= 1) return false;
    for (int i = 2; i <= nro/2; i++) {
    if (nro % i == 0) return false;
    }
    return true;
}

int main() {
    int n;
    cout << "Ingrese la cantidad de numeros primos a imprimir: ";
    cin >> n;

    int contador = 0;

    // Bucle for para imprimir 'n' números primos
    for (int nro=2; contador<n; nro++){
        if(myFuncionPrimo(nro)){
            cout<<nro<<" ";
            contador++;
        }
    }

  return 0;
}
