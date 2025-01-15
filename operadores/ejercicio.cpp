#include<iostream>
using namespace std;
#include<map>
main(){
    int a=5,b=10;
    //float c;
    //c=4,55;
    bool c=true, d=false;
    /*
    cout<<"a > b: "<<(a > b)<<endl;
    cout<<"a < b: "<<(a < b)<<endl;
    cout<<"a >= b: "<<(a >= b)<<endl;
    cout<<"a >= b: "<<(a <= b)<<endl;
    cout<<"a == b: "<<(a == b)<<endl;
    cout<<"a != b: "<<(a != b)<<endl;
    */

    //operadores logicos
    cout<<"c && d: "<<boolalpha<<(c && d)<<endl;
    cout<<"c || d: "<<(c || d)<<endl;
    cout<<" !c: "<<!c<<endl;
    cout<<" !d: "<<!d<<endl;
    cout<<"c && !d: "<<(c && !d)<<endl;
    cout<<"c || !d: "<<(c || !d)<<endl;
    cout<<"!c && d: "<<(!c && d)<<endl;
    cout<<"!c || d: "<<(!c || b)<<endl;

           
    
return 0;
}