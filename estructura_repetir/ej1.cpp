#include<iostream>
using namespace std;
main(){
    int n,dato,contador=0 , s=0;
    cout<<"Ingresa cuantos datos quieres: "; cin>>n;
    while(contador<n){
        cout<<"Ingrese el valor: "; cin>>dato;
        s+=dato;
        contador++;

    }
    cout<<"La suma de " <<n <<" valores"<<" = "<<s<<endl;
}