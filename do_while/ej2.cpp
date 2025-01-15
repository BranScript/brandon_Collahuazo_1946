#include <iostream>
using namespace std;
main(){
    int op;
    bool n=true;
    while(n){
    do{
    cout << "\n----- MENU -----\n";
        cout << "1. Numeros abundantes\n";
        cout << "2. Numeros deficientes\n";
        cout << "3. Numeros amigos\n";
        cout << "4. Salir\n";
        cout << "Ingresa una opcion: ";
        cin >> op;
        //(op<1 || op>4)?cout<<"Opcion no valida\n":cout<<"Opcion correcta\n";
        if(op<1 || op>4){
            cout<<"Opcion no valida\n";
            system("pause");
            system("cls");
        }
    }while(op<1 || op>4);
     

    switch(op){
        case 1:
        cout<<"Abundantes\n";
        break;
        case 2:
        cout<<"Deficientes\n";
        break;
        case 3:
        cout<<"Amigos\n";
        break;
        case 4:
        cout<<"Salio\n";
        n=false; 
        break;
    }
     system("pause");
     system("cls");
    }
    int n;
    
}