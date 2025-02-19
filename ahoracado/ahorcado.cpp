#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

string palabras[] = {"gato", "perro", "elefante", "tigre", "leon"}; 

void mostrarPalabra(const string &palabra, const bool adivinadas[]) {
    for (size_t i = 0; i < palabra.size(); i++) {
        if (adivinadas[i]) {
            cout << palabra[i] << " ";
        } else {
            cout << "_ ";
        }
    }
    cout << endl;
}

void mostrarAhorcado(int intentos) {
    const string ahorcado[] = {
        "  +---+\n  |   |\n      |\n      |\n      |\n      |\n=========",
        "  +---+\n  |   |\n  O   |\n      |\n      |\n      |\n=========",
        "  +---+\n  |   |\n  O   |\n  |   |\n      |\n      |\n=========",
        "  +---+\n  |   |\n  O   |\n /|   |\n      |\n      |\n=========",
        "  +---+\n  |   |\n  O   |\n /|\\  |\n      |\n      |\n=========",
        "  +---+\n  |   |\n  O   |\n /|\\  |\n /    |\n      |\n=========",
        "  +---+\n  |   |\n  O   |\n /|\\  |\n / \\  |\n      |\n========="
    };
    cout << ahorcado[intentos] << endl;
}

int main() {
    srand(time(0));
    char jugarDeNuevo;
    
    do {
        string palabra = palabras[rand() % (sizeof(palabras) / sizeof(palabras[0]))]; 
        bool adivinadas[palabra.size()]; 
        
        for (size_t i = 0; i < palabra.size(); i++) {
            adivinadas[i] = false; 
        }

        int intentos = 0;
        bool ganado = false;
        char letra;
        
        cout << "Adivine la palabra: " << endl;
        
        while (intentos < 7 && !ganado) {
            mostrarPalabra(palabra, adivinadas);
            cout << "Ingrese una letra: ";
            cin >> letra;
            
            bool acierto = false;
            for (size_t i = 0; i < palabra.size(); i++) {
                if (palabra[i] == letra) {
                    adivinadas[i] = true;
                    acierto = true;
                }
            }
            
            if (!acierto) {
                intentos++;
            }
            
            mostrarAhorcado(intentos);
            
            ganado = true;
            for (size_t i = 0; i < palabra.size(); i++) {
                if (!adivinadas[i]) {
                    ganado = false;
                    break;
                }
            }
        }
        
        if (ganado) {
            cout << "¡Felicidades! Adivinaste la palabra." << endl;
        } else {
            cout << "¡Perdiste! La palabra era: " << palabra << endl;
        }
        
        cout << "¿Desea jugar otra vez? (s/n): ";
        cin >> jugarDeNuevo;
        
    } while (jugarDeNuevo == 's' || jugarDeNuevo == 'S');
    
    return 0;
}