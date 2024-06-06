#include <iostream>
using namespace std;

double nro_armonico(int n){
    if (n==1){
    return 1.0;
    } else {
    return (1.0/n) + nro_armonico(n-1);
    }
}

int main(){
    int nro;
    cout<<"DIGITE n: ";
    cin>>nro;
    for(int i=1 ; i<=nro ; i++){
    cout<<nro_armonico(i)<<" ";
    }
    return 0;
}
