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

void decimal_hexadecimal(int decimal, char* hexadecimal) {
    const char* digitos = "0123456789ABCDEF";
    int indice = 0;
    char temp[69];

    if (decimal == 0) {
        hexadecimal[indice++] = '0';
        hexadecimal[indice] = '\0';
        return;
    }

    while (decimal > 0) {
        temp[indice++] = digitos[decimal % 16];
        decimal /= 16;
    }


    for (int i = 0; i < indice; ++i) {
        hexadecimal[i] = temp[indice - i - 1];
    }
    hexadecimal[indice] = '\0';
}

int main() {
    char numeroBinario[69];
    char numeroHexadecimal[69];

    cout << "Ingrese un numero en base 2: ";
    cin >> numeroBinario;

    int resultadoDecimal = binario_decimal(numeroBinario);
    decimal_hexadecimal(resultadoDecimal, numeroHexadecimal);

    cout << "El numero en base 16 es: " << numeroHexadecimal << endl;

    return 0;
}
