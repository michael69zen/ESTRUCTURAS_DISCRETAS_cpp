#include <iostream>
#include <math.h>
using namespace std;

int binario_decimal(char* binario) {
    int decimal = 0;
    int longitud = 0;

    while (binario[longitud] != '\0') {
        longitud++;
    }

    for (int i = 0; i < longitud; ++i) {
        if (binario[longitud - i - 1] == '1') {
            decimal += pow(2, i);
        }
    }

    return decimal;
}

int main() {
    char numero_binario[69];

    cout << "Ingrese un numero en base 2: ";
    cin >> numero_binario;

    int Decimal = binario_decimal(numero_binario);

    cout << "El numero en base 10 es: " << Decimal << endl;

    return 0;
}
