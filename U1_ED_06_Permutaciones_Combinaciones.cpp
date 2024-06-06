#include <iostream>
#include <math.h>
using namespace std;

int factorial(int numero){
    if(numero<=0){
        return 1;
    } else{
        return numero*factorial(numero-1);
    }
}

int combinacion(int n,int r){
    return factorial(n)/(factorial(r)*factorial(n-r));
}

int permutacion(int n,int r){
    if (n==r){
        return factorial(n);
    } else{
        return factorial(n)/factorial(n-r);
    }
}

int permutacionRep(int n,int r){
    return pow(n,r);
}

int main(){
    int n,r;
    cout<<"Ingrese n: "; cin>>n;
    cout<<"Ingrese r: "; cin>>r; cout<<endl;
    cout<<"Combinacion: "<<combinacion(n,r)<<endl;
    cout<<"Permutacion: "<<permutacion(n,r)<<endl;
    cout<<"Permutacion rep: "<<permutacionRep(n,r)<<endl;

    return 0;
}
