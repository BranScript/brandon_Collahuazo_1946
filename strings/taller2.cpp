#include<iostream>
using namespace std; 

int main()
{
    string cadena={"informatica"};
    string cadena2(cadena);
    string cadena4;
    const char *aux;

    string cadena3(10,'#');

    cadena.push_back('X');
    cout<<cadena<<endl;
    cadena.at(0)='I'; //accede a un indice de la cadena
    cout<<cadena<<endl;
    //usando el metodo front y back para cambiar los caracteres inicio y final
    cadena.front()='I';
    cadena.back()='A';
    cout<<cadena<<endl;
    aux=cadena.c_str();// convierte un array de tipo string a un array char
    cout<<"auxiliar array char; "<<aux<<endl;
    (cadena4.empty())?cout<<"Cadena vacia\n": cout<<"Cadena no vacia"<<endl;
    //tamaño maximo de caracters que puede almacenar la cadena
    cout<<"Tamaño maximo: "<<cadena.max_size()<<endl;
    //tamaño de bytes del objeto string que ocupa actual mente
    cout<<"Capaciada: "<<cadena.capacity()<<endl;
    
    

    return 0;
}
