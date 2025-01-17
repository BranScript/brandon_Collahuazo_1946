#include<iostream>
using namespace std;

// Función recursiva que muestra el valor de n antes y después de la recursión
void counter(int n) {
    if (n == 0) {
        return;  // Caso base: si n es 0, la función termina
    } else {
        cout << "Valor de n antes de la recursión: " << n << endl;
        counter(n - 1);  // Llamada recursiva con n-1
        cout << "Valor de n después de la recursión: " << n << endl;
    }
}
n    
int main() {
    int contador = 3;  // Iniciamos el contador con valor 3
    counter(contador);  // Llamamos a la función counter con el valor de contador

    return 0;  // Devuelve 0 para indicar que el programa terminó correctamente
}
