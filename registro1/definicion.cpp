#include<iostream>
using namespace std;

struct persona {
    string nombe = "pepe"; 
    int edad = 18;         
    float estatura = 1.65; 
} p1, p2;
struct 
{
    string nombre;
    float nota;
}e1, e2;
void registro() {
    persona p5, p6;  
}
int main() {
    persona p3, p4;
    
    p3.nombe = "Brandon"; 
    p3.edad = 20;
    p3.estatura = 1.70;
    
    cout << "Datos de p1: " << endl;
    cout << "Nombre: " << p1.nombe << endl;
    cout << "Edad: " << p1.edad << endl;
    cout << "Estatura: " << p1.estatura << endl;
    

    cout << "Datos persona2: " << endl;
    cout << "Nombre: ";
    getline(cin, p4.nombe);  
    cout << "Edad: ";
    cin >> p4.edad;
    cout << "Estatura: ";
    cin >> p4.estatura;

  
    cout << "Datos ingresados: " << endl;
    cout << "Nombre: " << p3.nombe << "\t";
    cout << "Edad: " << p3.edad << "\t";
    cout << "Estatura: " << p3.estatura << endl;

    cout << "Nombre: " << p4.nombe << "\t";
    cout << "Edad: " << p4.edad << "\t";
    cout << "Estatura: " << p4.estatura << endl;
    cout<<"Datos del estudiante No1"<<endl;
    cout<<"Nombre: ";
    cin.ignore();
    getline(cin,e1.nombre);
    cout<<"Nota: ";
    cin>>e1.nota;
    return 0;
}
