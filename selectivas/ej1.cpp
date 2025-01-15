#include<iostream>
using namespace std;

int main() {
    float n1, n2, n3;
    char operacion;

    cout << "Escoja la operacion que desea realizar (+, -, *, /): "; 
    cin >> operacion;

    cout << "Ingrese el primer numero: ";
    cin >> n1;

    cout << "Ingrese el segundo numero: ";
    cin >> n2;


    switch(operacion) {
        case '+':
            n3 = n1 + n2;
            cout << "La suma de " <<n1<<" + "<<n2 <<" = "<<n3;
            break;
        case '-':
            n3 = n1 - n2;
            cout << "La suma de " <<n1<<" - "<<n2 <<" = "<<n3;
            break;
        case '*':
            n3 = n1 * n2;
            cout << "La suma de " <<n1<<" * "<<n2 <<" = "<<n3;
            break;
        case '/':
            if (n2 != 0) {
                n3 = n1 / n2;
                cout << "La suma de " <<n1<<" / "<<n2 <<" = "<<n3;
            } else {
                cout << "SINTAXIS ERROR";
            }
            break;
        default:
            cout << "No existe la operacion";
            break;
    }

    return 0;
}
