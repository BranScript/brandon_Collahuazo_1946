#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

struct persona
{
    string nombre;
    int edad;
    float estatura;
};
void ingreseRegistro(persona &per1){
    cout<<"Ingese el nombre: ";
    getline(cin,per1.nombre);
    cout<<"Ingrese la edad: ";
    cin>>per1.edad;
    cout<<"Ingrese la estatura: ";
    cin>>per1.estatura;

}
void mostrarRegistro(persona per1){
    cout<<"Nombre: "<<per1.nombre<<endl;
    cout<<"Edad: "<<per1.edad<<endl;
    cout<<"Estatura: "<<per1.estatura<<endl;
}

int main()
{
    persona p1={"",0,0.0};   
    ingreseRegistro(p1);
    return 0;
}

