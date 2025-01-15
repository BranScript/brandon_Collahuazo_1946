#include<iostream>
#include<stdio.h>
using namespace std;
main(){
    int x1,x2, rest;
    bool ope;
    cout << "Ingrese un numero: ";cin >> x1;
    cout << "Ingrese un numero: ";cin >> x2;
    cout<<"Primera forma:";
    (x1>x2)?cout<<x1<<" Es mayor que "<<x2:cout<<x2<<" Es mayor que "<<x1;
        //rest=(x1>x2)? 1:2;
    
    cout<<"Segunda forma:\n";
    rest=(x1>x2)?x1/x2:x1%x2;
    cout<<"El resultado es "<<rest<<endl;
    ope=(x1>x2)?true:false;
    if(ope)
{
    cout<<"El resultado guarda la division de "<<x1<<" entre "<<x2<<xl;

}else{
    cout<<"El resultado guarda el modulo de "<<x1<<" entre "<<x2<<xl;
}
  
}