#include <iostream>
using namespace std;
main(){
int n1;
cout<<"Ingresa un numero: "; cin>>n1;
if(n1<0 || n1>0){
    if(n1!=0){
        cout<<"verdadero";
    }else{
        cout<<"falso";
    }
}else{
    cout<<"No se a insertado un numero";
}

}

