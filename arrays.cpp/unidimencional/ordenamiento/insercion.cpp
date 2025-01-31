#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;
void llenarTabla(int v[], int n)
{
    srand(time(NULL));
    for (int i = 0; i < n; i++)
    {
        v[i] = rand() % 20 + 1;
    }
}
void verVector(int v[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }
}
int ordenSeleccion(int v[], int n)
{
    int contador = 0;
    int aux;
    bool cambios = true;
    for (int i = 1; i < n; i++)
    {
        aux = v[i];
        int j = i - 1;
        while (j >= 0)
        {
            contador++;
            if (aux < v[j])
            {
                v[j + 1] = v[j];
                v[j] = aux;
            }
            j--;
        }
    }
    return contador;
}
int main()
{
    int ne, comparaciones;
    cout << "Ingrese el numero de elementos: ";
    cin >> ne;
    int vec[ne];
    llenarTabla(vec, ne);
    cout << "Vector origuinal: \n";
    verVector(vec, ne);
    comparaciones = ordenSeleccion(vec, ne);
    cout << "\nVector ordenado: " << endl;
    verVector(vec, ne);
    cout << "\nEl numero de comparaciones= " << comparaciones;
}