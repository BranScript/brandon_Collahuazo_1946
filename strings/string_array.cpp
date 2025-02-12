#include <iostream>
using namespace std;

void  cambiarString(string &nombre){
    nombre="Sin nombre";

}
void cambiarArray( char apellido[]){
    // apellido[0]='C';
    // apellido[1]='O';
    // apellido[2]='L';
    // apellido[3]='L';
    // apellido[4]='A';
    // apellido[5]='\0';
    cout<<"Ingresa el nuevo apellido: "<<endl;
    cin.getline(apellido,20);
}

main(){
    string nombre;
    string curso[]={"pepe","juan","letici"};
    char apellido[20];
    cout<<"Escriba su nombre: ";
    getline(cin,nombre);
    cout<<"1:"<<nombre<<endl;
    cambiarString(nombre);
     cout<<"2:"<<nombre<<endl;
    cout<<"Escriba su apellido: ";
    cin.getline(apellido,20);
    cout<<"1:"<<apellido<<endl;
    cambiarArray(apellido);
    cout<<"2:"<<apellido<<endl;
    // cout<<"Escriba su apellido: ";
    // cin.getline(apellido,20);
    // cout<<"\n";
    // cout<<nombre<<endl;
    // cout<<apellido<<endl;

}