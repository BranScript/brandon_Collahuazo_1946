#include<iostream>
using namespace std;

int main() {
    int anios[5];  // Declaración de un vector de 5 elementos
    int edad[5] = {20, 25, 30, 35, 40};  // Declaración e inicialización de un vector de 5 elementos
    double estatura[] = {1.25, 1.66, 1.78, 1.70, 1.90};  // Declaración e inicialización de un vector de 5 elementos
    char sexo[5] = {'M', 'F', 'M', 'F', 'M'};

    cout << "edad: " << edad[0] << endl;
    cout << "estatura: " << estatura[4] << endl;
    cout << "sexo: " << sexo[2] << endl;  // Accediendo al índice 2 de 'sexo'

    for (int i = 0; i < 5; i++) {
        cout << "Elemento: " << i << " del vector sexo es: " << sexo[i] << endl;  // Corregido operador de salida
    }

    return 0;
}
