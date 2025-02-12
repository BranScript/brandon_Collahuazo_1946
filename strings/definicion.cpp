#include<iostream>
using namespace std;
int main()
{
    string nombre= "brandon";
    string apellido("Brandon");
    string inicial(1,'b');
    string cadena="Brandon el mas guapo";
    string nombre2(cadena,8,7);
    cout<<"La longitud del nombre es: "<<nombre2.length()<<endl;
    inicial+="randon";
    cout<<inicial[0]<<endl;
    cout<<inicial<<endl;
    inicial= "cad";
    cout<<inicial<<endl;
    cout<<nombre2<<endl;
        return 0;
}
