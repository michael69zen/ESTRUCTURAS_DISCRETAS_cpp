#include <iostream>
using namespace std;

bool es_primo(int numero){
    for(int i = 2; i < numero; i++){
        if(numero % i == 0){
            return false;
        }
    }
    return true;
}

int main(){
    int numero, *dir_numero;
    dir_numero = &numero;

    cout << "Digite un numero: ";
    cin >> numero;

    if(es_primo(*dir_numero) == true){
        cout << "ES PRIMO :)" << endl;
        cout << "Direccion de Memoria: " << dir_numero << endl;
    } else{
        cout << "NO ES PRIMO :(" << endl;
        cout << "Direccion de Memoria: " << dir_numero << endl;
    }

    return 0;
}
