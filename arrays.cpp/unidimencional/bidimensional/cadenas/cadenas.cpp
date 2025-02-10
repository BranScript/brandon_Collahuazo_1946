#include<iostream>
using namespace std;

void llenarcadena(char cad[], int n=50){
    cout<<"Ingresa una cadena de caracteres: ";
    cin.getline(cad,n);
    cin.clear();
}
int longitudCadena(char cad[]){
    int contador;
    for (int i = 0; cad[i]!='\0'; i++)
    
        contador++;
    
    return contador;
    
}
int  contarPalabras(char cad[]){
    int palabras=0;
    bool palabra=false;
    for (int i = 0; cad[i]!='\0'; i++)
    {
        if (cad[i]==' '&& (cad[i+1]!=' '&&(cad[i+1])!='\0'))
        {
            palabras++;
            palabra=true;
        }
        
    }
    (palabra)?palabras++:palabras;
  int ter=palabra-1;
    if (ter==-1)
    {
        /* code */
    }
    
    return palabras-1;
     
}
int main(int argc, char const *argv[])
{
    char palabras[50];
    int ter;
    llenarcadena(palabras);
    cout<<"La palabra ingresada es: "<<palabras<<endl;
    cout<<"La longitud de la cadena es: "<<longitudCadena(palabras)<<endl;
    cout<<"La cantidad de palabras es: "<<contarPalabras(palabras)<<endl;
    return 0;
}
