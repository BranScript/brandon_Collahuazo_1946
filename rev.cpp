#include<iostream>
#include "cambio.cpp";
using namespace std;

int main(int argc, char const *argv[])
{
    string palabras;
    cout<<("Ingrese una palabra: ");
    getline(cin,palabras);
    reemplazar(palabras);

    return 0;
}
