#include <iostream>
using namespace std;
int fibonacci(int n){
    if(n<=1){
    return n;
    } else{
    return fibonacci(n-1) + fibonacci(n-2);
    }
}

int main(){
    int numero;
    cout<<"DIGITE UN NUMERO: ";
    cin>>numero;
    for(int i=0; i<numero ; i++){
    cout<<fibonacci(i)<<" ";
    }
    return 0;
}
