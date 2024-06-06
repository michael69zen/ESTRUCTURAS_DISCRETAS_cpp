#include <iostream>
using namespace std;

void complemento_a_uno(char binario[], int longitud) {
    for (int i = 0; i < longitud; i++) {
        if (binario[i] == '0') {
            binario[i] = '1';
        } else {
            binario[i] = '0';
        }
    }
}
void sumar_uno(char binario[], int longitud) {
    for (int i = longitud - 1; i >= 0; i--) {
        if (binario[i] == '0') {
            binario[i] = '1';
            break;
        } else {
            binario[i] = '0';
        }
    }
}
void complemento_a_dos(char binario[], int longitud) {
    complemento_a_uno(binario, longitud);
    sumar_uno(binario, longitud);
}

int main() {
    char nroBinario[128];
    cout << "Ingrese un nro binario: ";
    cin >> nroBinario;

    int longitud;
    for (longitud = 0; nroBinario[longitud] != '\0'; longitud++);
   
    complemento_a_dos(nroBinario, longitud);

    cout << "El complemento a dos es: " << nroBinario << endl;
    return 0;
}
