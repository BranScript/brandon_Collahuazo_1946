#include <iostream>
using namespace std;

int main() {
int limiteInferior, limiteSuperior, numero, sumaDentro = 0, sumaFuera = 0, totalNumeros = 0;
bool igualInferior = false, igualSuperior = false;

cout << "Introduce limite inferior del intervalo: ";
cin >> limiteInferior;
cout << "Introduce limite superior del intervalo: ";
cin >> limiteSuperior;

while (limiteInferior >= limiteSuperior) {
cout << "El limite inferior no puede ser mayor o igual que el superior. Vuelve a intentarlo." << endl;
cout << "Introduce limite inferior del intervalo: ";
cin >> limiteInferior;
cout << "Introduce limite superior del intervalo: ";
cin >> limiteSuperior;
}

// Solicitar números
cout << "Introduce un numero (0 para terminar): ";
while (cin >> numero && numero != 0) {
totalNumeros++;

if (numero == limiteInferior) igualInferior = true;
if (numero == limiteSuperior) igualSuperior = true;

if (numero >= limiteInferior && numero <= limiteSuperior) {
sumaDentro += numero;
} else {
sumaFuera += numero;
}

cout << "Introduce un numero (0 para terminar): ";
}

// Resultados
cout << "Se introdujeron " << totalNumeros << " numeros." << endl;
cout << "Suma de los numeros dentro del intervalo: " << sumaDentro << endl;
cout << "Suma de los numeros fuera del intervalo: " << sumaFuera << endl;

if (igualInferior || igualSuperior) {
if (igualInferior && igualSuperior) {
cout << "Se introdujo un numero igual a ambos limites." << endl;
} else if (igualInferior) {
cout << "Se introdujo un numero igual al limite inferior." << endl;
} else {
cout << "Se introdujo un numero igual al limite superior." << endl;
}
} else {
cout << "No se introdujo ningun numero igual a los limites." << endl;
}

return 0;
}