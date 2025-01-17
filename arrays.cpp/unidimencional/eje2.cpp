#include<iostream>
#include<stdlib.h> //uso rand
#include<time.h>//uso time
using namespace std;

void llenDatos(int v[], int ne){
    srand(time(NULL));
    //aleatorios
    for(int i=0;i<ne;i++){
        v[i]=rand()%20+1;
    }
}
void verDatos(int v[],int ne){
    for(int i=0;i<ne;i++){
        cout<<v[i]<<" ";
    }
}
int sumaPromedioCifras (int v[],int ne){
    int suma =0;
    for(int i=0;i<ne;i++){
        suma+=v[i];
    }
    return (float)suma/ne;
    
}
int contarDebajoPromedio(int v[],int ne, float promedio){
    int contar=0;
    for(int i=0;i<ne;i++){
        if(v[i]<promedio){
            contar++;
        }
    }
    return contar;

}
void guardaElementosMenores(int v[],int ne, float promedio, int lista[]){
    int j=0;
       for(int i=0;i<ne;i++){
        if(v[i]<promedio){
            lista[j]=v[i];
            j++;
        }
    }
}

 main(){
    int ne, menores;
    float promedioNumeros;
    cout<<"Cuantos elementos tiene el vector: ";
    cin>>ne;
    int vector[ne];
    llenDatos(vector,ne);
    verDatos(vector,ne);
    promedioNumeros=sumaPromedioCifras(vector,ne);
    cout<<"El promedio de las datos generados es "<<promedioNumeros<<endl;
    menores=contarDebajoPromedio(vector,ne,promedioNumeros);
    cout<<"La cantidad de elementos debajo del promedio: "<<menores;
    cout<<"Los elementos son: "<<endl;
    int listaMenores[menores];
    guardaElementosMenores(vector,ne,promedioNumeros,listaMenores);
    verDatos(listaMenores,menores);

}