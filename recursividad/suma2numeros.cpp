#include<iostream>
using namespace std;

// Función recursiva para sumar dos números
int suma(int a, int b) {
    if (b == 0)
        return a;
    else
        return suma(a + 1, b - 1);  // Llamada recursiva con la suma de 1 al primer número y resta de 1 al segundo
}

int main() {
    int a, b;
    cout << "Introduce el primer número: "; 
    cin >> a;
    cout << "Introduce el segundo número: ";  // Corregido el texto
    cin >> b;

    cout << "La suma de " << a << " + " << b << " es: " << suma(a, b) << endl;  // Mensaje más claro

    return 0;  // Devolver 0 para indicar que el programa terminó correctamente
}
