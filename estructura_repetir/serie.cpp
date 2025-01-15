#include <iostream>
using namespace std;
int main() {
    int numero;
    bool s;
    cout << "Ingresa un numero: ";
    cin >> numero;
    s = (numero != 0);
    if (s) {
        cout <<boolalpha <<s << endl; 
    } else {
        cout <<boolalpha <<s << endl; 
    }
    return 0;
}