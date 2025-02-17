#include <iostream>
#include <string>
using namespace std;

void datosCdena(string &cadena, string &pcambiar, string &premplazo){
    cout << "Ingrese cadena:" << endl;
    getline(cin, cadena);

    cout << "\nQue palabra desea cambiar: ";
    cin >> pcambiar;
    cin.ignore();

    cout << "Por que palabra desea cambiarla: ";
    getline(cin, premplazo);
}

void repeticionPalabras(string &cadena, string &pcambiar, int posiciones[], int &count){
    int pos = 0;
    count = 0;
    
    while ((pos = cadena.find(pcambiar, pos)) != string::npos) {
        posiciones[count] = pos;
        count++;
        pos += pcambiar.length();
    }

    if (count == 0) {
        cout << "\nLa palabra no se encontro en la cadena." << endl;
        return;
    }
}

void unaPalabra(string &cadena, string &pcambiar, string &premplazo, int posiciones[], int count){
    if (count == 1) {
        cadena.replace(posiciones[0], pcambiar.length(), 
        premplazo);
        cout << "\nEl texto cambiado es:\n" << cadena << endl;
        return;
    }
}

void palabraRepetida(int posiciones[], int count, string &pcambiar){
    cout << "\nSe encontraron " << count << " repetidas de: " << pcambiar << endl;
    cout << "En las posiciones:" << endl;
    for (int i = 0; i < count; i++) {
        cout << "Posicion " << (i + 1) <<endl;
    }
}

void opcionRepetida(int &opcion, int &elegir, int count){
    do {
        cout << "Que desea hacer: " << endl;
        cout << "(1) Cambiar todas las palabras repetidas";
        cout << "\n(2) Cambiar solo una palabra:" << endl;
        cout << "Escoja una opcion: ";
        cin >> opcion;
        if (opcion < 1 || opcion > 2) {
            cout << "Valor incorrecto, intentelo de nuevo." << endl;
        }
    } while (opcion < 1 || opcion > 2);

    if (opcion == 2) {
        do {
            cout << "Ingrese el numero de la posicion de la palabra que desea cambiar: ";
            cin >> elegir;
            if (elegir < 1 || elegir > count) {
                cout << "\nNumero no válido. Intentelo de nuevo." << endl;
            }
        } while (elegir < 1 || elegir > count);
    }
}

void remplasoPalabras(string &cadena, string &pcambiar, string &premplazo, int posiciones[], int count, int opcion, int elegir){
    for (int i = 0; i < count; i++) {
        if (opcion == 1 || (i + 1) == elegir) {
            cadena.replace(posiciones[i], pcambiar.length(), premplazo);
            if (opcion == 2) break; // Si solo quiere cambiar una palabra
        }
    }

    cout << "\nEl texto cambiado es:\n" << cadena << endl;
}

void palabraCambio() {
    string cadena, pcambiar, premplazo;
    int posiciones[100];
    int count = 0, opcion = 0, elegir = 0;

    datosCdena(cadena, pcambiar, premplazo);
    repeticionPalabras(cadena, pcambiar, posiciones, count);

    if (count > 0) {
        palabraRepetida(posiciones, count, pcambiar);
        opcionRepetida(opcion, elegir, count);
        remplasoPalabras(cadena, pcambiar, premplazo, posiciones, count, opcion, elegir);
    }
}

int main() {
    palabraCambio();
    return 0;
}
