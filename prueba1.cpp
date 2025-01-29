/*
Para resolver la categoría a la que pertenece un valor numérico comprendido entre 1 y 20, 
se pide al programador crear una instrucción que resuelva lo solicitado, el lenguaje de p
rogramación donde se desea implementar no dispone de la estructura selectiva; las categorías son las siguientes:

1 -5 deficiente

6- 10 regular

11-15 bueno

16-18 Muy bueno

> 18 Excelente.
*/
#include<iostream>
using namespace std;
int main()
{
    int numero;
    int deficiente[]={1,2,3,4,5};
    int regular[]={6,7,8,9,10};
    int bueno[]={11,12,13,14,15};
    int muybuno[]={16,17,18,19,20};

    int numeros[4][5]={{1,2,3,4,5},{6,7,8,9,10},{11,12,13,14,15},{16,17,18,19,20}};
    
    do
    {    
        cout<<"Ingrese un numero:";
        cin>>numero;
    } while (numero<1 || numero>20);
    
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cout<<numeros[i][j]<<"\t";
        }
        cout<<endl;
    }
    

    return 0;
}
