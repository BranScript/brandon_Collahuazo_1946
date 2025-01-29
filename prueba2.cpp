/*
Para resolver la categoría a la que pertenece un valor numérico 
comprendido entre 1 y 20, se pide al programador crear una instrucción 
que resuelva lo solicitado, el lenguaje de programación donde se desea implementar 
no dispone de la estructura selectiva; las categorías son las siguientes:
1 -5 deficiente
6- 10 regular
11-15 bueno
16-18 Muy bueno
> 18 Excelente.
*/




#include<iostream>
using namespace std;
main()
{
    string d[]={"deficiente","regular","bueno","Muy bueno","Exelente"};
    int numero;
    do
    {
    cout<<"Escriba un numero: ";
    cin>>numero;
    } while (numero<1 ||numero>20);

    while (numero>0 && numero<6)
    {
        cout<<d[0]<<endl;
        numero=0;
    }
    
    while (numero>5 && numero<11)
    {
        cout<<d[1]<<endl;
        numero=0;
    }
    
    while (numero>11 && numero<16)
    {
        cout<<d[2]<<endl;
        numero=0;
    }
    
    while (numero>15 && numero<18)
    {
        cout<<d[3]<<endl;
        numero=0;
    }
    
    while (numero>18 && numero<21)
    {
        cout<<d[4]<<endl;
        numero=0;
    }
    
    
    
    
    
    
    
}




 