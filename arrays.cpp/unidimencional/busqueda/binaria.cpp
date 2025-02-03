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
 
}
bool isEntontrado( int v[], int n, int elemento){
    int i;
    int arriba=v[n-1];
    int abajo=v[0];
    int centro;
    bool encontrado=false;
    
    for ( i = 0; i < n; i++)
    {
       if (v[i]==elemento)
       {
         encontrado=true;
       }
       
    }
    return encontrado;
    /*
    int i;
    int centro;

    centro=(v[0]+v[n-1])/2;
if v[centro]== elemento;
    return centro;
if  vec[centro]¡<= elemento>;
    if vec[centro]< elemento;
    for centro centro --
    if vec[centro]> elemento;
    for centro centro ++


    
    
    */
}
int main()
{
    int ne, dato;
    cout << "Ingrese el numero de elementos: "<< endl;
    cin >> ne;
    int vec[ne];
    llenarTabla(vec, ne);
    cout << "Vector origuinal: \n";
    verVector(vec, ne);
    cout << "\nVector ordenado: " << endl;
    ordenSeleccion(vec,ne);
    verVector(vec, ne);
    cout<<"\nIngreresa el dato a buscar"<< endl;
    cin>> dato;
    (isEntontrado(vec,5,dato) )?cout<<"El elemento esta en el array ":cout<<"El elemento no existe ";
   

    
}




// int main()
// {
//     int vector[5], dato;
//     llenarDatos(vector,5);
//     cout<<"Array origuinal "<<endl;
//     verElementos(vector,5);
//     cout<<"Array orfenado "<<endl;
//     verElementos2(vector,5);

//     // 
//     // 
//     // 
//     return 0;
// }
