#include <vector>
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void obtenerListaPalabras(vector<string>& palabras) {
    palabras = {"gato", "perro", "elefante", "tigre", "leon"};
}

void obtenerPalabra(string& palabra) {
    vector<string> palabras;
    obtenerListaPalabras(palabras);
    int totalPalabras = palabras.size();
    palabra = palabras[rand() % totalPalabras];
}
