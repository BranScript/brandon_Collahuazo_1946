#include <iostream>
using namespace std;

int main() {
    bool entrar = true;
    int op,canNumeros, contador,contVerificador=0,suma=0,numVerificador;
    while (entrar) {
        cout << "\n----- MENU -----\n";
        cout << "1. Numeros abundantes\n";
        cout << "2. Numeros deficientes\n";
        cout << "3. Numeros amigos\n";
        cout << "4. Salir\n";
        cout << "Ingresa una opcion: ";
        cin >> op;
        if(op>0 and op<4){
            cout<<"Ingrese la cantidad de numeros";
            cin>>canNumeros;
            contador=0;
            numVerificador=2; 
        }
        switch (op) {
            case 1:
                while(contador < canNumeros){
                    contVerificador=1;
                    suma=0;
                    while(contVerificador < numVerificador){
                        if(numVerificador % contVerificador==0){
                            suma+=contVerificador;
                        }
                        contVerificador++;
                    }
                    if(suma> numVerificador){
                        cout<<"abundante" <<numVerificador<<endl;
                        contador++;
                    }
                    numVerificador++;

                }
                break;
            case 2:
                cout << "Deficientes" << endl;
                break;
            case 3:
                cout << "Amigo" << endl;
                break;
            case 4:
                entrar = false;
                cout << "Saliendo del programa..." << endl;
                break;
            default:
                cout << "Opcion incorrecta. Por favor, intenta de nuevo." << endl;
                break;
        }
        system("pause");
     system("cls");
    }

    return 0;
}
