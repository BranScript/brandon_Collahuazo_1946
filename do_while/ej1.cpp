#include <iostream>
using namespace std;
main(){
    int n=1, valor;
    do{
        cout<<n<<endl;
        n++;
    }while(n<=10);
    //Validar para ingresar valores entre 1 y 10

    do{
        cout<<"Ingresa un valor: "; cin>>valor;
        (valor <10 or valor>20)?cout<<"Valor no valido ingrese entre 10 y 20": cout<<"Exito\n";
    }while(valor<10 or valor>20);
    cout<<"Ingresaste el volar de: "<<valor<<endl;

}