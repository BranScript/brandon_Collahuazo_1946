#include <iostream>
#include <time.h>
using namespace std;

void llenarVector(int v[],int n){
    srand(time(NULL));
    for(int i=0; i<n; i++){
        v[i]=1+rand()%20;

    }

}
void ordenarBurbuja (int v[],int n){
    int aux;
      for(int i=0; i<n; i++){
       for(int j=0; j<n-1; j++){
        if(v[j]>v[j+1]){
            aux=v[j];
            v[j]=v[j+1];
            v[j+1]=aux;
        }
    }

    }
    
}
void mostarVector (int v[],int n){
    int aux;
      for(int i=0; i<n; i++){
      cout<<v[i]<<" ";
    }
    
}

main(){
    int ne;
    cout<<"Numero de elementos: "<<endl;
    cin>>ne;
    int vec[ne];
    llenarVector(vec,ne);
    cout<<"vertor origuinal:"<<endl;
    mostarVector(vec,ne);
    cout<<endl;
    ordenarBurbuja(vec,ne);
    cout<<"Vector ordenado: "<<endl;
    mostarVector(vec,ne);
}