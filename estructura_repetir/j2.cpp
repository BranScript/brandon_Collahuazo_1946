#include <iostream>
using namespace std;

int main() {
    int n1, n2, contadorDentro = 0, contadorFuera = 0, suma = 0;

  
    cout << "Ingrese el límite superior: ";
    cin >> n1;
    cout << "Ingrese el límite inferior: ";
    cin >> n2;

    while (n2 >= n1) {
        cout << "El límite inferior no puede ser mayor o igual al límite superior. Vuelve a ingresar los límites.\n";
        cout << "Ingrese el límite superior: ";
        cin >> n1;
        cout << "Ingrese el límite inferior: ";
        cin >> n2;
    }

    
    for (int i = n2; i <= n1; i++) {
        if (i > n2 && i < n1) {  
            suma += i;
            contadorDentro++;
        } else {  
            contadorFuera++;
        }
    }

 
    cout << "La suma de los números que están dentro del intervalo es: " << suma << endl;
    cout << "La cantidad de números fuera del intervalo es: " << contadorFuera << endl;

    if (contadorFuera > 0) {
        cout << "Se ha introducido al menos un número igual a los límites del intervalo." << endl;
    } else {
        cout << "No se ha introducido ningún número igual a los límites del intervalo." << endl;
    }

    return 0;
}
