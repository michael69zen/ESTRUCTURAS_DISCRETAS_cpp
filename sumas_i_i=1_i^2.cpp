#include <iostream>
using namespace std;

int main()
{
    int n;
    cout<<"DIGITE n: ";
    cin>>n;

    float suma_1=0 , suma_i=0 , suma_i2=0 ;
    suma_1=n*1;
    suma_i=(n*(n+1))/(2);
    suma_i2=(n*(n+1)*((2*n)+1)/(6));

    cout<<"SUMA DE LOS n NUMEROS UNOS: "<<suma_1<<endl;
    cout<<"SUMA DE LOS n NUMEROS NATURALES: "<<suma_i<<endl;
    cout<<"SUMA DE LOS n PRIMEROS NUMEROS CUADRADOS: "<<suma_i2<<endl;

    return 0;
}
