#include <iostream>
using namespace std;
main(){
    int valor,promedio=0,contador=0;
    char op='s'; 
    while(op=='s' || op=='S'){
    cout<<"quieres ingresar mas datos (s/n): ";cin>>op;
    op=getchar();
    if(op=='s' || op=='S'){
        cout<<"Ingesa el valor: ";cin>>valor;
        promedio+=valor;
        contador++;  
    }
    cin.ignore():
    }
    cout<<"la sumna es: "<<((float)promedio/contador);
}