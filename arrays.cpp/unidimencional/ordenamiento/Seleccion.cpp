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
void verVector(int v[], int n){
    for (int i = 0; i < n; i++)
    {
        cout<<v[i]<<" ";
    }
    
}
int ordenSeleccion(int v[], int n){
    int contador=0;
    int aux;
    bool cambios=true;
    for (int i = 0; i < n-1 and cambios; i++)
    {
        cambios=false;
         for (int j = i+1; j < n; j++)
    {
        contador++;
        if (v[i]>v[j])
        {   
            aux=v[i];
            v[i]=v[j];
            v[j]=aux;
            cambios=true;
        }   
    }
   
    }
    return contador;
}
int main (){
    int ne, comparaciones;
    cout << "Ingrese el numero de elementos: ";
    cin >> ne;
    int vec[ne];
    llenarTabla(vec,ne);
    cout<<"Vector origuinal: \n";
    verVector(vec,ne);
    comparaciones=ordenSeleccion(vec,ne);
    cout<<"\nVector ordenado: "<<endl;
    verVector(vec,ne);
    cout<<"\nEl numero de comparaciones= "<<comparaciones;
}