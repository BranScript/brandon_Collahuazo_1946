#include<iostream>
using namespace std;

int suma( int a, int b){
    if(b==0)
    return a;
    else
    return suma (a+1,b-1);
}
main(){
    int a,b;
    cout<<"Introduce el primer número: "; cin>> a;
    cout<<"Introduce el primer número: "; cin>> b;
    cout<<"Suma de "<<a<<" + "<<b<<" = "<<suma(a,b);

}
