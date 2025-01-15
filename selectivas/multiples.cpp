#include<iostream>
using namespace std;
main(){
    int dia;
    char n1='1';
    cout<<"Ingese dia: "; cin>>dia;
    switch(dia){
        case 1:
            cout<<"Lunes";
            break;
        case 2:
            cout<<"Martes";
            break;
        case 3:
            cout<<"Miercoles";
            break;
        case 4:
            cout<<"Jueves";
        break;
        case 5:
            cout<<"Viernes";
            break;
        case 6:
        case 7:
            cout<<"Fin de semana";
            break;
        default:
            cout<<"numero incorrecto";
            break;
    }

    return 0;

}