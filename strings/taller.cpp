#include<iostream>
using namespace std; 
int main()
{
    string cadena="informatica";
    //borramos los datos de la cadena
    cadena.clear();
    cout<<cadena; //No muestra nada
    //Volvemos a Inicializar con un valor
    cadena="Informatica";

    //longitud de la cadena
    cout<<"La cadena "<<cadena<<" tiene "<<cadena.length()<<" caracteres"<<endl;

    //primer y ultimo caracter
    cout<<"Primer caracter: "<<cadena.front()<<endl; //Iguala la mcadena[0]
    cout<<"Ultimo caracter: "<<cadena.back()<<endl; //Iguala la mcadena[0]
    
    //Añadir cadena
    cadena.append("moderna"); //Es lo mismo que cadena +="moderna"
    cout<< cadena <<endl;

    //Añadimos un caracter
    char car='0';
    cadena.append(1,car);
    cout<< cadena<<endl;

    //Volvemos a inicializar con un valor
    cadena="informatica";

    //Buscar caracteres
    if (cadena.find("i")!=-1)
        cout<<"Posicion del primer caracter i: "<< cadena.find("i")<<endl;
    cout<<"Posicion del segundo caracter i: "<<cadena.find("i",1)<<endl;

    //Extraer sub cadenas
    string subcad;
    subcad=cadena.substr(2,3);
    cout<<subcad<<endl;
    subcad=cadena.substr(5);
    cout<<subcad<<endl;

    //Remplaze parte de la cadena
    cadena.replace(6,5,"accion");
    cout<<cadena<<endl;
    
    
    return 0;
}
