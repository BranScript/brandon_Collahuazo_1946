#include<iostream>
using namespace std;
int fac(int n){
    int res=1;
    for (int i=1; i<=n; i++){
        res*=i;
    return res;
    }
}
int fac2(int n){
    if(n==0)
    return 1;
    else
    return n*fac2(n-1);
}
main(){
    int numero;
    cout<<"Introduce un número entero:";
    cin>> "numero";
    cout<<"factorial itertivo de "<<numero<<" es "<<fac(numero)<<endl;
    cout<<"factorial recursivo de "<<numero<<" es "<<fac2(numero)<<endl;

}