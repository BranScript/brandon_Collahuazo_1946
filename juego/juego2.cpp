#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void obtenRango(int &bajo, int &arriba) {
    cout << "Introduce el rango de los numeros:" << endl;
    cout << "Limite inferior: ";
    cin >> bajo;
    cout << "Limite superior: ";
    cin >> arriba;
}

int obtenerNumeroMaquina(int bajo, int arriba) {
    return bajo + rand() % (arriba - bajo + 1);
}

bool pistas(int intenton, int number) {
    if (intenton < number) {
        cout << "Tu numero es mayor al de la maquina." << endl;
        return false;
    } else if (intenton > number) {
        cout << "Tu numero es menor al de la maquina." << endl;
        return false;
    } else {
        cout << "Adivinaste el numero!" << endl;
        return true;
    }
}

void playGame(int bajo, int arriba) {
    int vidas = 3;
    int number = obtenerNumeroMaquina(bajo, arriba);
    int intenton;
    bool coreguirNumero = false;

    cout << "Tienes " << vidas << " vidas. Intenta adivinar el numero entre " << bajo << " y " << arriba << "." << endl;

    while (vidas > 0 && !coreguirNumero) {
        cout << "Introduce tu intento: ";
        cin >> intenton;

        coreguirNumero = pistas(intenton, number);

        if (!coreguirNumero) {
            vidas--;
            cout << "Te quedan " << vidas << " vidas." << endl;
        }
    }

    if (!coreguirNumero) {
        cout << "¡Perdiste! El numero correcto era " << number << "." << endl;
    }
}

int main() {
    srand(time(NULL));
    int bajo, arriba;
    obtenRango(bajo, arriba);
    playGame(bajo, arriba);

    return 0;
}
