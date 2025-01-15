#include<iostream>
//usi de operadores de incremento y decremento
using namespace std;
int main(){
    int n1=10,n2=20,resultado;
n1++; 
n2++;
cout<<n1<<endl;
cout<<n2<<endl;
 
    //operaciones de preincremento
    resultado=++n1;
    cout<<"resultado: "<<resultado<<endl;
   return 0;
}