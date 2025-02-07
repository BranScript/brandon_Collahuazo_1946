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
int ordenSeleccion(int v[], int n) {
    int comparaciones = 0;
    for (int i = 0; i < n - 1; i++) {
        int min_idx = i;
        for (int j = i + 1; j < n; j++) {
            comparaciones++;
            if (v[j] < v[min_idx]) {
                min_idx = j;
            }
        }
        int temp = v[i];
        v[i] = v[min_idx];
        v[min_idx] = temp;
    }
    return comparaciones;
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
