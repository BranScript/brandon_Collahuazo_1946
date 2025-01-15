#include <iostream>
using namespace std;
main(){
int limiteInferior, limiteSuperior;
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
cout << "Introduce un numero (0 para terminar): ";
while (cin >> numero && numero != 0) {
totalNumeros++;

if (numero > limiteInferior && numero <limiteSuperior) {
sumaDentro += numero;
} else {
sumaFuera += numero;
}

cout << "Introduce un numero (0 para terminar): ";
}
}