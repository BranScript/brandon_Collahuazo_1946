#include<iostream>
using namespace std;

bool isEntontrado( int v[], int n, int elemento){
    int i;
    bool encontrado=false;
    for ( i = 0; i < n; i++)
    {
       if (v[i]==elemento)
       {
         encontrado=true;
       }
       
    }
    return encontrado;
    
}
void llenarDatos(int v[], int n){
    for (int i = 0; i < n; i++)
    {
        v[i]=(i+1)*3;
    }
    

}

void verElementos(int v[], int n){
    for (int i = 0; i < n; i++)
    {
        cout<<v[i]<<"\t";
    }
    
}



int main()
{
    int vector[5], dato;
    llenarDatos(vector,5);
    cout<<"Ingreresa el dato a buscar";
    cin>> dato;
    (isEntontrado(vector,5,dato) )?cout<<"El elemento esta en el array: ":cout<<"El elemento no existe: ";
    return 0;
}
