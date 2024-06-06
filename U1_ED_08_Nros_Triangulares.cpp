#include <iostream>
using namespace std;

int nro_triangular(int n){
    if(n==1){
    return 1;
    } else{
    return n+nro_triangular(n-1);
    }
}

int main(){
    int nro;
    cout<<"DIGITE n: ";
    cin>>nro;
    for (int i=0 ; i<nro ; i++){
    cout<<nro_triangular(i)<<" ";
    }
    return 0;
}
