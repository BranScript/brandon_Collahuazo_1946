//https://github.com/BranScript/brandon_Collahuazo_1946
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
int ordenarBurbuja(int v[], int n)
{
    int aux, contador = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - 1; j++)
        {
            contador++;
            if (v[j] > v[j + 1])
            {
                aux = v[j];
                v[j] = v[j + 1];
                v[j + 1] = aux;
            }
        }
    }
    return contador;
}

int ordenarBurbujaV2(int v[], int n)
{
    int mejora = 1;
    int aux, contador = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - mejora; j++)
        {
            contador++;
            if (v[j] > v[j + 1])
            {
                aux = v[j];
                v[j] = v[j + 1];
                v[j + 1] = aux;
            }
        }
        mejora++;
    }
    return contador;
}

int ordenarBurbujaV3(int v[], int n)
{
    int mejora = 1;
    bool change = true;
    int aux, contador = 0;
    for (int i = 0; i < n && change; i++)
    {
        change = false;
        for (int j = 0; j < n - mejora; j++)
        {
            contador++;
            if (v[j] > v[j + 1])
            {
                aux = v[j];
                v[j] = v[j + 1];
                v[j + 1] = aux;
                change = true;
            }
        }
        mejora++;
    }
    return contador;
}

void mostrarVector(int v[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }
}

void comparaciones( int p1, int p2 , int p3){
    if (p1>p2 and p2>p3)
    {
        cout<<"La vercion 1 es la mas optima";
    }else if(p2>p1 and p2>p3){
        cout<<"La vercion 2 es la mas optima";
    }else if(p3>p1 and p1>p2){
        cout<<"La vercion 3 es la mas optima";
    }
    
}

// int main()
// {
//     int ne;
//     int p1;
//     int p2;
//     int p3;
//     cout << "Ingrese el numero de elementos: ";
//     cin >> ne;
//     int vec[ne];
//     llenarTabla(vec, ne);
//     cout << "Vector original: ";
//     mostrarVector(vec, ne);
//     cout << endl;
//     cout << "El numero de comparaciones burbuja v1 es: " << ordenarBurbuja(vec, ne) << endl;
//     cout << "El numero de comparaciones burbuja v2 es: " << ordenarBurbujaV2(vec, ne) << endl;
//     cout << "El numero de comparaciones burbuja v3 es: " << ordenarBurbujaV3(vec, ne) << endl;
//     cout << "Vector ordenado" << endl;
//     mostrarVector(vec, ne);
//     p1=ordenarBurbuja(vec, ne);
//     p2= ordenarBurbujaV2(vec, ne);
//     p3=ordenarBurbujaV3(vec, ne);
//     cout<<"\nEl mas optimo es: "<<endl;
//     comparaciones(p1,p2,p3);

 
//     return 0;
// }