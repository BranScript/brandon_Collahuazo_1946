#include <iostream>
using namespace std;

int ContarPalabras(char cad[], int &tamano) {
    int palabras = 0;
    tamano = 0;
    int longitud = 0; 

    for (int i = 0; cad[i] != '\0'; i++) {
        tamano++;  
        if ((cad[i] >= 'A' && cad[i] <= 'Z') || (cad[i] >= 'a' && cad[i] <= 'z')) {
            longitud++;  
        } else {
            if (longitud > 1) {  
                palabras++;
            }
            longitud = 0;  
        }
    }
     
    if (longitud > 1) {
        palabras++;
    }

    return palabras;
}
int main() {
    char cadena[100];
    cout << "Ingrese cadena: ";
    cin.getline(cadena, 100);
    int tamano = 0;
    int palabras = ContarPalabras(cadena, tamano);
    cout << "Tamaño del array: " << tamano << endl;
    cout << "Cantidad de palabras: " << palabras << endl;

    return 0;
}

