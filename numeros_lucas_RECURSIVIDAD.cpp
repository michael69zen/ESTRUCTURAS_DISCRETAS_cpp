#include <iostream>
using namespace std;

int lucas(int n){
    if(n==0){
        return 2;
    } else if(n==1){
        return 1;
    } else{
        return lucas(n-1) + lucas(n-2);
    }

}

int main()
{
    int numero;
    cout<<"DIGITE UN NUMERO: ";
    cin>>numero;

    for(int i=0; i<numero ; i++){
        cout<<lucas(i)<<" ";
    }
    return 0;
}
